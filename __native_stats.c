#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
stats___StatisticsVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef stats___StatisticsVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___stats___StatisticsVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___stats___StatisticsVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *stats___StatisticsVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_stats___StatisticsVisitor(char cpy_r_inferred, PyObject *cpy_r_filename, PyObject *cpy_r_modules, PyObject *cpy_r_typemap, char cpy_r_all_nodes, char cpy_r_visit_untyped_defs);

static PyObject *
stats___StatisticsVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats___StatisticsVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = stats___StatisticsVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_stats___StatisticsVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
stats___StatisticsVisitor_traverse(mypy___stats___StatisticsVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_filename);
    Py_VISIT(self->_modules);
    Py_VISIT(self->_typemap);
    if (CPyTagged_CheckLong(self->_num_precise_exprs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_precise_exprs));
    }
    if (CPyTagged_CheckLong(self->_num_imprecise_exprs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_imprecise_exprs));
    }
    if (CPyTagged_CheckLong(self->_num_any_exprs)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_any_exprs));
    }
    if (CPyTagged_CheckLong(self->_num_simple_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_simple_types));
    }
    if (CPyTagged_CheckLong(self->_num_generic_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_generic_types));
    }
    if (CPyTagged_CheckLong(self->_num_tuple_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_tuple_types));
    }
    if (CPyTagged_CheckLong(self->_num_function_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_function_types));
    }
    if (CPyTagged_CheckLong(self->_num_typevar_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_typevar_types));
    }
    if (CPyTagged_CheckLong(self->_num_complex_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_complex_types));
    }
    if (CPyTagged_CheckLong(self->_num_any_types)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_any_types));
    }
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_line_map);
    Py_VISIT(self->_type_of_any_counter);
    Py_VISIT(self->_any_line_map);
    Py_VISIT(self->_checked_scopes);
    Py_VISIT(self->_output);
    Py_VISIT(self->_cur_mod_node);
    Py_VISIT(self->_cur_mod_id);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___stats___StatisticsVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats___StatisticsVisitorObject))));
    return 0;
}

static int
stats___StatisticsVisitor_clear(mypy___stats___StatisticsVisitorObject *self)
{
    Py_CLEAR(self->_filename);
    Py_CLEAR(self->_modules);
    Py_CLEAR(self->_typemap);
    if (CPyTagged_CheckLong(self->_num_precise_exprs)) {
        CPyTagged __tmp = self->_num_precise_exprs;
        self->_num_precise_exprs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_imprecise_exprs)) {
        CPyTagged __tmp = self->_num_imprecise_exprs;
        self->_num_imprecise_exprs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_any_exprs)) {
        CPyTagged __tmp = self->_num_any_exprs;
        self->_num_any_exprs = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_simple_types)) {
        CPyTagged __tmp = self->_num_simple_types;
        self->_num_simple_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_generic_types)) {
        CPyTagged __tmp = self->_num_generic_types;
        self->_num_generic_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_tuple_types)) {
        CPyTagged __tmp = self->_num_tuple_types;
        self->_num_tuple_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_function_types)) {
        CPyTagged __tmp = self->_num_function_types;
        self->_num_function_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_typevar_types)) {
        CPyTagged __tmp = self->_num_typevar_types;
        self->_num_typevar_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_complex_types)) {
        CPyTagged __tmp = self->_num_complex_types;
        self->_num_complex_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_any_types)) {
        CPyTagged __tmp = self->_num_any_types;
        self->_num_any_types = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_line_map);
    Py_CLEAR(self->_type_of_any_counter);
    Py_CLEAR(self->_any_line_map);
    Py_CLEAR(self->_checked_scopes);
    Py_CLEAR(self->_output);
    Py_CLEAR(self->_cur_mod_node);
    Py_CLEAR(self->_cur_mod_id);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___stats___StatisticsVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats___StatisticsVisitorObject))));
    return 0;
}

static void
stats___StatisticsVisitor_dealloc(mypy___stats___StatisticsVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats___StatisticsVisitor_dealloc)
    stats___StatisticsVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats___StatisticsVisitor_vtable[134];
static CPyVTableItem stats___StatisticsVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t stats___StatisticsVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem stats___StatisticsVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t stats___StatisticsVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem stats___StatisticsVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t stats___StatisticsVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_stats___StatisticsVisitor_trait_vtable_setup(void)
{
    CPyVTableItem stats___StatisticsVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_type_application__NodeVisitor_glue,
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
    memcpy(stats___StatisticsVisitor_mypy___visitor___NodeVisitor_trait_vtable, stats___StatisticsVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t stats___StatisticsVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___StatisticsVisitor_mypy___visitor___NodeVisitor_offset_table, stats___StatisticsVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_type_application__ExpressionVisitor_glue,
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
    memcpy(stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_offset_table, stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem stats___StatisticsVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(stats___StatisticsVisitor_mypy___visitor___StatementVisitor_trait_vtable, stats___StatisticsVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t stats___StatisticsVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___StatisticsVisitor_mypy___visitor___StatementVisitor_offset_table, stats___StatisticsVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem stats___StatisticsVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(stats___StatisticsVisitor_mypy___visitor___PatternVisitor_trait_vtable, stats___StatisticsVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t stats___StatisticsVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___StatisticsVisitor_mypy___visitor___PatternVisitor_offset_table, stats___StatisticsVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(stats___StatisticsVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem stats___StatisticsVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)stats___StatisticsVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor_____init__,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_stmt,
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
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_type_application,
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
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor_____init__,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___process_import,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_import,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___enter_scope,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___is_checked_scope,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___record_call_target_precision,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___record_callable_target_precision,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___process_node,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___type,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___log,
        (CPyVTableItem)CPyDef_stats___StatisticsVisitor___record_line,
    };
    memcpy(stats___StatisticsVisitor_vtable, stats___StatisticsVisitor_vtable_scratch, sizeof(stats___StatisticsVisitor_vtable));
    return 1;
}

static PyObject *
stats___StatisticsVisitor_get_inferred(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_inferred(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_filename(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_filename(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_modules(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_modules(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_typemap(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_typemap(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_all_nodes(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_all_nodes(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_visit_untyped_defs(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_visit_untyped_defs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_precise_exprs(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_precise_exprs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_imprecise_exprs(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_imprecise_exprs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_any_exprs(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_any_exprs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_simple_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_simple_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_generic_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_generic_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_tuple_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_tuple_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_function_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_function_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_typevar_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_typevar_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_complex_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_complex_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_num_any_types(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_num_any_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_line(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_line(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_line_map(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_line_map(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_type_of_any_counter(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_type_of_any_counter(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_any_line_map(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_any_line_map(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_checked_scopes(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_checked_scopes(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_output(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_output(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_cur_mod_node(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_cur_mod_node(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);
static PyObject *
stats___StatisticsVisitor_get_cur_mod_id(mypy___stats___StatisticsVisitorObject *self, void *closure);
static int
stats___StatisticsVisitor_set_cur_mod_id(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef stats___StatisticsVisitor_getseters[] = {
    {"inferred",
     (getter)stats___StatisticsVisitor_get_inferred, (setter)stats___StatisticsVisitor_set_inferred,
     NULL, NULL},
    {"filename",
     (getter)stats___StatisticsVisitor_get_filename, (setter)stats___StatisticsVisitor_set_filename,
     NULL, NULL},
    {"modules",
     (getter)stats___StatisticsVisitor_get_modules, (setter)stats___StatisticsVisitor_set_modules,
     NULL, NULL},
    {"typemap",
     (getter)stats___StatisticsVisitor_get_typemap, (setter)stats___StatisticsVisitor_set_typemap,
     NULL, NULL},
    {"all_nodes",
     (getter)stats___StatisticsVisitor_get_all_nodes, (setter)stats___StatisticsVisitor_set_all_nodes,
     NULL, NULL},
    {"visit_untyped_defs",
     (getter)stats___StatisticsVisitor_get_visit_untyped_defs, (setter)stats___StatisticsVisitor_set_visit_untyped_defs,
     NULL, NULL},
    {"num_precise_exprs",
     (getter)stats___StatisticsVisitor_get_num_precise_exprs, (setter)stats___StatisticsVisitor_set_num_precise_exprs,
     NULL, NULL},
    {"num_imprecise_exprs",
     (getter)stats___StatisticsVisitor_get_num_imprecise_exprs, (setter)stats___StatisticsVisitor_set_num_imprecise_exprs,
     NULL, NULL},
    {"num_any_exprs",
     (getter)stats___StatisticsVisitor_get_num_any_exprs, (setter)stats___StatisticsVisitor_set_num_any_exprs,
     NULL, NULL},
    {"num_simple_types",
     (getter)stats___StatisticsVisitor_get_num_simple_types, (setter)stats___StatisticsVisitor_set_num_simple_types,
     NULL, NULL},
    {"num_generic_types",
     (getter)stats___StatisticsVisitor_get_num_generic_types, (setter)stats___StatisticsVisitor_set_num_generic_types,
     NULL, NULL},
    {"num_tuple_types",
     (getter)stats___StatisticsVisitor_get_num_tuple_types, (setter)stats___StatisticsVisitor_set_num_tuple_types,
     NULL, NULL},
    {"num_function_types",
     (getter)stats___StatisticsVisitor_get_num_function_types, (setter)stats___StatisticsVisitor_set_num_function_types,
     NULL, NULL},
    {"num_typevar_types",
     (getter)stats___StatisticsVisitor_get_num_typevar_types, (setter)stats___StatisticsVisitor_set_num_typevar_types,
     NULL, NULL},
    {"num_complex_types",
     (getter)stats___StatisticsVisitor_get_num_complex_types, (setter)stats___StatisticsVisitor_set_num_complex_types,
     NULL, NULL},
    {"num_any_types",
     (getter)stats___StatisticsVisitor_get_num_any_types, (setter)stats___StatisticsVisitor_set_num_any_types,
     NULL, NULL},
    {"line",
     (getter)stats___StatisticsVisitor_get_line, (setter)stats___StatisticsVisitor_set_line,
     NULL, NULL},
    {"line_map",
     (getter)stats___StatisticsVisitor_get_line_map, (setter)stats___StatisticsVisitor_set_line_map,
     NULL, NULL},
    {"type_of_any_counter",
     (getter)stats___StatisticsVisitor_get_type_of_any_counter, (setter)stats___StatisticsVisitor_set_type_of_any_counter,
     NULL, NULL},
    {"any_line_map",
     (getter)stats___StatisticsVisitor_get_any_line_map, (setter)stats___StatisticsVisitor_set_any_line_map,
     NULL, NULL},
    {"checked_scopes",
     (getter)stats___StatisticsVisitor_get_checked_scopes, (setter)stats___StatisticsVisitor_set_checked_scopes,
     NULL, NULL},
    {"output",
     (getter)stats___StatisticsVisitor_get_output, (setter)stats___StatisticsVisitor_set_output,
     NULL, NULL},
    {"cur_mod_node",
     (getter)stats___StatisticsVisitor_get_cur_mod_node, (setter)stats___StatisticsVisitor_set_cur_mod_node,
     NULL, NULL},
    {"cur_mod_id",
     (getter)stats___StatisticsVisitor_get_cur_mod_id, (setter)stats___StatisticsVisitor_set_cur_mod_id,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef stats___StatisticsVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_stats___StatisticsVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_import",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___process_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_scope",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___enter_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_checked_scope",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___is_checked_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_expression_stmt",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_expression_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_pass_stmt",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_pass_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_break_stmt",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_break_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_continue_stmt",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_continue_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_call_target_precision",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___record_call_target_precision,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_callable_target_precision",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___record_callable_target_precision,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_node",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___process_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_precise_if_checked_scope",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___record_precise_if_checked_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"type",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"log",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___log,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_line",
     (PyCFunction)CPyPy_stats___StatisticsVisitor___record_line,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats___StatisticsVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StatisticsVisitor",
    .tp_new = stats___StatisticsVisitor_new,
    .tp_dealloc = (destructor)stats___StatisticsVisitor_dealloc,
    .tp_traverse = (traverseproc)stats___StatisticsVisitor_traverse,
    .tp_clear = (inquiry)stats___StatisticsVisitor_clear,
    .tp_getset = stats___StatisticsVisitor_getseters,
    .tp_methods = stats___StatisticsVisitor_methods,
    .tp_init = stats___StatisticsVisitor_init,
    .tp_members = stats___StatisticsVisitor_members,
    .tp_basicsize = sizeof(mypy___stats___StatisticsVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___stats___StatisticsVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___stats___StatisticsVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_stats___StatisticsVisitor_template = &CPyType_stats___StatisticsVisitor_template_;

static PyObject *
stats___StatisticsVisitor_setup(PyTypeObject *type)
{
    mypy___stats___StatisticsVisitorObject *self;
    self = (mypy___stats___StatisticsVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats___StatisticsVisitor_vtable + 12;
    self->_inferred = 2;
    self->_all_nodes = 2;
    self->_visit_untyped_defs = 2;
    self->_num_precise_exprs = CPY_INT_TAG;
    self->_num_imprecise_exprs = CPY_INT_TAG;
    self->_num_any_exprs = CPY_INT_TAG;
    self->_num_simple_types = CPY_INT_TAG;
    self->_num_generic_types = CPY_INT_TAG;
    self->_num_tuple_types = CPY_INT_TAG;
    self->_num_function_types = CPY_INT_TAG;
    self->_num_typevar_types = CPY_INT_TAG;
    self->_num_complex_types = CPY_INT_TAG;
    self->_num_any_types = CPY_INT_TAG;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_stats___StatisticsVisitor(char cpy_r_inferred, PyObject *cpy_r_filename, PyObject *cpy_r_modules, PyObject *cpy_r_typemap, char cpy_r_all_nodes, char cpy_r_visit_untyped_defs)
{
    PyObject *self = stats___StatisticsVisitor_setup(CPyType_stats___StatisticsVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_stats___StatisticsVisitor_____init__(self, cpy_r_inferred, cpy_r_filename, cpy_r_modules, cpy_r_typemap, cpy_r_all_nodes, cpy_r_visit_untyped_defs);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
stats___StatisticsVisitor_get_inferred(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_inferred == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'inferred' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_inferred ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
stats___StatisticsVisitor_set_inferred(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'inferred' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_inferred = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_filename(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_filename == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'filename' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_filename);
    PyObject *retval = self->_filename;
    return retval;
}

static int
stats___StatisticsVisitor_set_filename(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'filename' cannot be deleted");
        return -1;
    }
    if (self->_filename != NULL) {
        CPy_DECREF(self->_filename);
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
    self->_filename = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_modules(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'modules' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_modules);
    PyObject *retval = self->_modules;
    return retval;
}

static int
stats___StatisticsVisitor_set_modules(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'modules' cannot be deleted");
        return -1;
    }
    if (self->_modules != NULL) {
        CPy_DECREF(self->_modules);
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
    self->_modules = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_typemap(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_typemap == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'typemap' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_typemap);
    PyObject *retval = self->_typemap;
    return retval;
}

static int
stats___StatisticsVisitor_set_typemap(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'typemap' cannot be deleted");
        return -1;
    }
    if (self->_typemap != NULL) {
        CPy_DECREF(self->_typemap);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6851;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6851;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL6851: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_typemap = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_all_nodes(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_all_nodes == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'all_nodes' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_all_nodes ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
stats___StatisticsVisitor_set_all_nodes(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'all_nodes' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_all_nodes = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_visit_untyped_defs(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_visit_untyped_defs == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'visit_untyped_defs' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_visit_untyped_defs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
stats___StatisticsVisitor_set_visit_untyped_defs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'visit_untyped_defs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_visit_untyped_defs = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_precise_exprs(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_precise_exprs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_precise_exprs' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_precise_exprs);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_precise_exprs);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_precise_exprs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_precise_exprs' cannot be deleted");
        return -1;
    }
    if (self->_num_precise_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_precise_exprs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_precise_exprs = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_imprecise_exprs(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_imprecise_exprs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_imprecise_exprs' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_imprecise_exprs);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_imprecise_exprs);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_imprecise_exprs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_imprecise_exprs' cannot be deleted");
        return -1;
    }
    if (self->_num_imprecise_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_imprecise_exprs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_imprecise_exprs = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_any_exprs(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_any_exprs == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_any_exprs' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_any_exprs);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_any_exprs);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_any_exprs(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_any_exprs' cannot be deleted");
        return -1;
    }
    if (self->_num_any_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_any_exprs);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_any_exprs = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_simple_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_simple_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_simple_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_simple_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_simple_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_simple_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_simple_types' cannot be deleted");
        return -1;
    }
    if (self->_num_simple_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_simple_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_simple_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_generic_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_generic_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_generic_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_generic_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_generic_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_generic_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_generic_types' cannot be deleted");
        return -1;
    }
    if (self->_num_generic_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_generic_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_generic_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_tuple_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_tuple_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_tuple_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_tuple_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_tuple_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_tuple_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_tuple_types' cannot be deleted");
        return -1;
    }
    if (self->_num_tuple_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_tuple_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_tuple_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_function_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_function_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_function_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_function_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_function_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_function_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_function_types' cannot be deleted");
        return -1;
    }
    if (self->_num_function_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_function_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_function_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_typevar_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_typevar_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_typevar_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_typevar_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_typevar_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_typevar_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_typevar_types' cannot be deleted");
        return -1;
    }
    if (self->_num_typevar_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_typevar_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_typevar_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_complex_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_complex_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_complex_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_complex_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_complex_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_complex_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_complex_types' cannot be deleted");
        return -1;
    }
    if (self->_num_complex_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_complex_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_complex_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_num_any_types(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_any_types == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_any_types' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_any_types);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_any_types);
    return retval;
}

static int
stats___StatisticsVisitor_set_num_any_types(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'num_any_types' cannot be deleted");
        return -1;
    }
    if (self->_num_any_types != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_any_types);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_any_types = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_line(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_line);
    return retval;
}

static int
stats___StatisticsVisitor_set_line(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'line' cannot be deleted");
        return -1;
    }
    if (self->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_line);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_line = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_line_map(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_line_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line_map' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_line_map);
    PyObject *retval = self->_line_map;
    return retval;
}

static int
stats___StatisticsVisitor_set_line_map(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'line_map' cannot be deleted");
        return -1;
    }
    if (self->_line_map != NULL) {
        CPy_DECREF(self->_line_map);
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
    self->_line_map = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_type_of_any_counter(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_type_of_any_counter == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_of_any_counter' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_of_any_counter);
    PyObject *retval = self->_type_of_any_counter;
    return retval;
}

static int
stats___StatisticsVisitor_set_type_of_any_counter(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'type_of_any_counter' cannot be deleted");
        return -1;
    }
    if (self->_type_of_any_counter != NULL) {
        CPy_DECREF(self->_type_of_any_counter);
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
    self->_type_of_any_counter = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_any_line_map(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_any_line_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'any_line_map' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_any_line_map);
    PyObject *retval = self->_any_line_map;
    return retval;
}

static int
stats___StatisticsVisitor_set_any_line_map(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'any_line_map' cannot be deleted");
        return -1;
    }
    if (self->_any_line_map != NULL) {
        CPy_DECREF(self->_any_line_map);
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
    self->_any_line_map = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_checked_scopes(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_checked_scopes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'checked_scopes' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_checked_scopes);
    PyObject *retval = self->_checked_scopes;
    return retval;
}

static int
stats___StatisticsVisitor_set_checked_scopes(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'checked_scopes' cannot be deleted");
        return -1;
    }
    if (self->_checked_scopes != NULL) {
        CPy_DECREF(self->_checked_scopes);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_checked_scopes = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_output(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_output == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'output' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_output);
    PyObject *retval = self->_output;
    return retval;
}

static int
stats___StatisticsVisitor_set_output(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'output' cannot be deleted");
        return -1;
    }
    if (self->_output != NULL) {
        CPy_DECREF(self->_output);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_output = tmp;
    return 0;
}

static PyObject *
stats___StatisticsVisitor_get_cur_mod_node(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_cur_mod_node == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cur_mod_node' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cur_mod_node);
    PyObject *retval = self->_cur_mod_node;
    return retval;
}

static int
stats___StatisticsVisitor_set_cur_mod_node(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'cur_mod_node' cannot be deleted");
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
stats___StatisticsVisitor_get_cur_mod_id(mypy___stats___StatisticsVisitorObject *self, void *closure)
{
    if (unlikely(self->_cur_mod_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cur_mod_id' of 'StatisticsVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cur_mod_id);
    PyObject *retval = self->_cur_mod_id;
    return retval;
}

static int
stats___StatisticsVisitor_set_cur_mod_id(mypy___stats___StatisticsVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StatisticsVisitor' object attribute 'cur_mod_id' cannot be deleted");
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

static int
stats___HasAnyQuery_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef stats___HasAnyQuery_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___stats___HasAnyQueryObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___stats___HasAnyQueryObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *stats___HasAnyQuery_setup(PyTypeObject *type);
PyObject *CPyDef_stats___HasAnyQuery(void);

static PyObject *
stats___HasAnyQuery_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats___HasAnyQuery) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = stats___HasAnyQuery_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_stats___HasAnyQuery_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
stats___HasAnyQuery_traverse(mypy___stats___HasAnyQueryObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_strategy);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___stats___HasAnyQueryObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats___HasAnyQueryObject))));
    return 0;
}

static int
stats___HasAnyQuery_clear(mypy___stats___HasAnyQueryObject *self)
{
    Py_CLEAR(self->_strategy);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___stats___HasAnyQueryObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats___HasAnyQueryObject))));
    return 0;
}

static void
stats___HasAnyQuery_dealloc(mypy___stats___HasAnyQueryObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats___HasAnyQuery_dealloc)
    stats___HasAnyQuery_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats___HasAnyQuery_vtable[36];
static CPyVTableItem stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem stats___HasAnyQuery_type_visitor___TypeVisitor_trait_vtable[21];
static size_t stats___HasAnyQuery_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_stats___HasAnyQuery_trait_vtable_setup(void)
{
    CPyVTableItem stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_trait_vtable, stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_offset_table, stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem stats___HasAnyQuery_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(stats___HasAnyQuery_type_visitor___TypeVisitor_trait_vtable, stats___HasAnyQuery_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(stats___HasAnyQuery_type_visitor___TypeVisitor_trait_vtable));
    size_t stats___HasAnyQuery_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___HasAnyQuery_type_visitor___TypeVisitor_offset_table, stats___HasAnyQuery_type_visitor___TypeVisitor_offset_table_scratch, sizeof(stats___HasAnyQuery_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem stats___HasAnyQuery_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)stats___HasAnyQuery_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)stats___HasAnyQuery_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)stats___HasAnyQuery_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_stats___HasAnyQuery_____init__,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___query_types,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery_____init__,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any,
    };
    memcpy(stats___HasAnyQuery_vtable, stats___HasAnyQuery_vtable_scratch, sizeof(stats___HasAnyQuery_vtable));
    return 1;
}


static PyGetSetDef stats___HasAnyQuery_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef stats___HasAnyQuery_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_stats___HasAnyQuery_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_stats___HasAnyQuery___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats___HasAnyQuery_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "HasAnyQuery",
    .tp_new = stats___HasAnyQuery_new,
    .tp_dealloc = (destructor)stats___HasAnyQuery_dealloc,
    .tp_traverse = (traverseproc)stats___HasAnyQuery_traverse,
    .tp_clear = (inquiry)stats___HasAnyQuery_clear,
    .tp_getset = stats___HasAnyQuery_getseters,
    .tp_methods = stats___HasAnyQuery_methods,
    .tp_init = stats___HasAnyQuery_init,
    .tp_members = stats___HasAnyQuery_members,
    .tp_basicsize = sizeof(mypy___stats___HasAnyQueryObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___stats___HasAnyQueryObject),
    .tp_weaklistoffset = sizeof(mypy___stats___HasAnyQueryObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_stats___HasAnyQuery_template = &CPyType_stats___HasAnyQuery_template_;

static PyObject *
stats___HasAnyQuery_setup(PyTypeObject *type)
{
    mypy___stats___HasAnyQueryObject *self;
    self = (mypy___stats___HasAnyQueryObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats___HasAnyQuery_vtable + 6;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_stats___HasAnyQuery(void)
{
    PyObject *self = stats___HasAnyQuery_setup(CPyType_stats___HasAnyQuery);
    if (self == NULL)
        return NULL;
    char res = CPyDef_stats___HasAnyQuery_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


PyMemberDef stats___HasAnyQuery2_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___stats___HasAnyQuery2Object), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___stats___HasAnyQuery2Object) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *stats___HasAnyQuery2_setup(PyTypeObject *type);
PyObject *CPyDef_stats___HasAnyQuery2(void);

static PyObject *
stats___HasAnyQuery2_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats___HasAnyQuery2) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = stats___HasAnyQuery2_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_stats___HasAnyQuery_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
stats___HasAnyQuery2_traverse(mypy___stats___HasAnyQuery2Object *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_strategy);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___stats___HasAnyQuery2Object))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats___HasAnyQuery2Object))));
    return 0;
}

static int
stats___HasAnyQuery2_clear(mypy___stats___HasAnyQuery2Object *self)
{
    Py_CLEAR(self->_strategy);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___stats___HasAnyQuery2Object))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats___HasAnyQuery2Object))));
    return 0;
}

static void
stats___HasAnyQuery2_dealloc(mypy___stats___HasAnyQuery2Object *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats___HasAnyQuery2_dealloc)
    stats___HasAnyQuery2_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats___HasAnyQuery2_vtable[37];
static CPyVTableItem stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem stats___HasAnyQuery2_type_visitor___TypeVisitor_trait_vtable[21];
static size_t stats___HasAnyQuery2_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_stats___HasAnyQuery2_trait_vtable_setup(void)
{
    CPyVTableItem stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_trait_vtable, stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_offset_table, stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem stats___HasAnyQuery2_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(stats___HasAnyQuery2_type_visitor___TypeVisitor_trait_vtable, stats___HasAnyQuery2_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(stats___HasAnyQuery2_type_visitor___TypeVisitor_trait_vtable));
    size_t stats___HasAnyQuery2_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(stats___HasAnyQuery2_type_visitor___TypeVisitor_offset_table, stats___HasAnyQuery2_type_visitor___TypeVisitor_offset_table_scratch, sizeof(stats___HasAnyQuery2_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem stats___HasAnyQuery2_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)stats___HasAnyQuery2_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)stats___HasAnyQuery2_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)stats___HasAnyQuery2_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_stats___HasAnyQuery_____init__,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___query_types,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery_____init__,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery___visit_any,
        (CPyVTableItem)CPyDef_stats___HasAnyQuery2___visit_callable_type,
    };
    memcpy(stats___HasAnyQuery2_vtable, stats___HasAnyQuery2_vtable_scratch, sizeof(stats___HasAnyQuery2_vtable));
    return 1;
}


static PyGetSetDef stats___HasAnyQuery2_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef stats___HasAnyQuery2_methods[] = {
    {"visit_callable_type",
     (PyCFunction)CPyPy_stats___HasAnyQuery2___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats___HasAnyQuery2_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "HasAnyQuery2",
    .tp_new = stats___HasAnyQuery2_new,
    .tp_dealloc = (destructor)stats___HasAnyQuery2_dealloc,
    .tp_traverse = (traverseproc)stats___HasAnyQuery2_traverse,
    .tp_clear = (inquiry)stats___HasAnyQuery2_clear,
    .tp_getset = stats___HasAnyQuery2_getseters,
    .tp_methods = stats___HasAnyQuery2_methods,
    .tp_members = stats___HasAnyQuery2_members,
    .tp_basicsize = sizeof(mypy___stats___HasAnyQuery2Object) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___stats___HasAnyQuery2Object),
    .tp_weaklistoffset = sizeof(mypy___stats___HasAnyQuery2Object) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_stats___HasAnyQuery2_template = &CPyType_stats___HasAnyQuery2_template_;

static PyObject *
stats___HasAnyQuery2_setup(PyTypeObject *type)
{
    mypy___stats___HasAnyQuery2Object *self;
    self = (mypy___stats___HasAnyQuery2Object *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats___HasAnyQuery2_vtable + 6;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_stats___HasAnyQuery2(void)
{
    PyObject *self = stats___HasAnyQuery2_setup(CPyType_stats___HasAnyQuery2);
    if (self == NULL)
        return NULL;
    char res = CPyDef_stats___HasAnyQuery_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *stats___enter_scope_StatisticsVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_env(void);

static PyObject *
stats___enter_scope_StatisticsVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats___enter_scope_StatisticsVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return stats___enter_scope_StatisticsVisitor_env_setup(type);
}

static int
stats___enter_scope_StatisticsVisitor_env_traverse(mypy___stats___enter_scope_StatisticsVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_o);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
stats___enter_scope_StatisticsVisitor_env_clear(mypy___stats___enter_scope_StatisticsVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
stats___enter_scope_StatisticsVisitor_env_dealloc(mypy___stats___enter_scope_StatisticsVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats___enter_scope_StatisticsVisitor_env_dealloc)
    stats___enter_scope_StatisticsVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats___enter_scope_StatisticsVisitor_env_vtable[1];
static bool
CPyDef_stats___enter_scope_StatisticsVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem stats___enter_scope_StatisticsVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(stats___enter_scope_StatisticsVisitor_env_vtable, stats___enter_scope_StatisticsVisitor_env_vtable_scratch, sizeof(stats___enter_scope_StatisticsVisitor_env_vtable));
    return 1;
}

static PyMethodDef stats___enter_scope_StatisticsVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats___enter_scope_StatisticsVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_scope_StatisticsVisitor_env",
    .tp_new = stats___enter_scope_StatisticsVisitor_env_new,
    .tp_dealloc = (destructor)stats___enter_scope_StatisticsVisitor_env_dealloc,
    .tp_traverse = (traverseproc)stats___enter_scope_StatisticsVisitor_env_traverse,
    .tp_clear = (inquiry)stats___enter_scope_StatisticsVisitor_env_clear,
    .tp_methods = stats___enter_scope_StatisticsVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___stats___enter_scope_StatisticsVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_stats___enter_scope_StatisticsVisitor_env_template = &CPyType_stats___enter_scope_StatisticsVisitor_env_template_;

static PyObject *
stats___enter_scope_StatisticsVisitor_env_setup(PyTypeObject *type)
{
    mypy___stats___enter_scope_StatisticsVisitor_envObject *self;
    self = (mypy___stats___enter_scope_StatisticsVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats___enter_scope_StatisticsVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_env(void)
{
    PyObject *self = stats___enter_scope_StatisticsVisitor_env_setup(CPyType_stats___enter_scope_StatisticsVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *stats___enter_scope_StatisticsVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen(void);

static PyObject *
stats___enter_scope_StatisticsVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats___enter_scope_StatisticsVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return stats___enter_scope_StatisticsVisitor_gen_setup(type);
}

static int
stats___enter_scope_StatisticsVisitor_gen_traverse(mypy___stats___enter_scope_StatisticsVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
stats___enter_scope_StatisticsVisitor_gen_clear(mypy___stats___enter_scope_StatisticsVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
stats___enter_scope_StatisticsVisitor_gen_dealloc(mypy___stats___enter_scope_StatisticsVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats___enter_scope_StatisticsVisitor_gen_dealloc)
    stats___enter_scope_StatisticsVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats___enter_scope_StatisticsVisitor_gen_vtable[6];
static bool
CPyDef_stats___enter_scope_StatisticsVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem stats___enter_scope_StatisticsVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_stats___enter_scope_StatisticsVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_stats___enter_scope_StatisticsVisitor_gen___send,
        (CPyVTableItem)CPyDef_stats___enter_scope_StatisticsVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_stats___enter_scope_StatisticsVisitor_gen___throw,
        (CPyVTableItem)CPyDef_stats___enter_scope_StatisticsVisitor_gen___close,
    };
    memcpy(stats___enter_scope_StatisticsVisitor_gen_vtable, stats___enter_scope_StatisticsVisitor_gen_vtable_scratch, sizeof(stats___enter_scope_StatisticsVisitor_gen_vtable));
    return 1;
}

static PyMethodDef stats___enter_scope_StatisticsVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_stats___enter_scope_StatisticsVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_stats___enter_scope_StatisticsVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_stats___enter_scope_StatisticsVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_stats___enter_scope_StatisticsVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_stats___enter_scope_StatisticsVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats___enter_scope_StatisticsVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_scope_StatisticsVisitor_gen",
    .tp_new = stats___enter_scope_StatisticsVisitor_gen_new,
    .tp_dealloc = (destructor)stats___enter_scope_StatisticsVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)stats___enter_scope_StatisticsVisitor_gen_traverse,
    .tp_clear = (inquiry)stats___enter_scope_StatisticsVisitor_gen_clear,
    .tp_methods = stats___enter_scope_StatisticsVisitor_gen_methods,
    .tp_iter = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____iter__,
    .tp_iternext = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___stats___enter_scope_StatisticsVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_stats___enter_scope_StatisticsVisitor_gen_template = &CPyType_stats___enter_scope_StatisticsVisitor_gen_template_;

static PyObject *
stats___enter_scope_StatisticsVisitor_gen_setup(PyTypeObject *type)
{
    mypy___stats___enter_scope_StatisticsVisitor_genObject *self;
    self = (mypy___stats___enter_scope_StatisticsVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats___enter_scope_StatisticsVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen(void)
{
    PyObject *self = stats___enter_scope_StatisticsVisitor_gen_setup(CPyType_stats___enter_scope_StatisticsVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *stats___record_callable_target_precision_StatisticsVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_stats___record_callable_target_precision_StatisticsVisitor_env(void);

static PyObject *
stats___record_callable_target_precision_StatisticsVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats___record_callable_target_precision_StatisticsVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return stats___record_callable_target_precision_StatisticsVisitor_env_setup(type);
}

static int
stats___record_callable_target_precision_StatisticsVisitor_env_traverse(mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_o);
    Py_VISIT(self->_typemap);
    Py_VISIT(self->_self);
    Py_VISIT(self->_callee);
    return 0;
}

static int
stats___record_callable_target_precision_StatisticsVisitor_env_clear(mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_typemap);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_callee);
    return 0;
}

static void
stats___record_callable_target_precision_StatisticsVisitor_env_dealloc(mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats___record_callable_target_precision_StatisticsVisitor_env_dealloc)
    stats___record_callable_target_precision_StatisticsVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats___record_callable_target_precision_StatisticsVisitor_env_vtable[1];
static bool
CPyDef_stats___record_callable_target_precision_StatisticsVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem stats___record_callable_target_precision_StatisticsVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(stats___record_callable_target_precision_StatisticsVisitor_env_vtable, stats___record_callable_target_precision_StatisticsVisitor_env_vtable_scratch, sizeof(stats___record_callable_target_precision_StatisticsVisitor_env_vtable));
    return 1;
}

static PyMethodDef stats___record_callable_target_precision_StatisticsVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats___record_callable_target_precision_StatisticsVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "record_callable_target_precision_StatisticsVisitor_env",
    .tp_new = stats___record_callable_target_precision_StatisticsVisitor_env_new,
    .tp_dealloc = (destructor)stats___record_callable_target_precision_StatisticsVisitor_env_dealloc,
    .tp_traverse = (traverseproc)stats___record_callable_target_precision_StatisticsVisitor_env_traverse,
    .tp_clear = (inquiry)stats___record_callable_target_precision_StatisticsVisitor_env_clear,
    .tp_methods = stats___record_callable_target_precision_StatisticsVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_stats___record_callable_target_precision_StatisticsVisitor_env_template = &CPyType_stats___record_callable_target_precision_StatisticsVisitor_env_template_;

static PyObject *
stats___record_callable_target_precision_StatisticsVisitor_env_setup(PyTypeObject *type)
{
    mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *self;
    self = (mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats___record_callable_target_precision_StatisticsVisitor_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_stats___record_callable_target_precision_StatisticsVisitor_env(void)
{
    PyObject *self = stats___record_callable_target_precision_StatisticsVisitor_env_setup(CPyType_stats___record_callable_target_precision_StatisticsVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____get__(self, instance, owner);
}
PyMemberDef stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_setup(PyTypeObject *type);
PyObject *CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj(void);

static PyObject *
stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_setup(type);
}

static int
stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_traverse(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject))));
    return 0;
}

static int
stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_clear(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject))));
    return 0;
}

static void
stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_dealloc(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_dealloc)
    stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_vtable[2];
static bool
CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_trait_vtable_setup(void)
{
    CPyVTableItem stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____call__,
        (CPyVTableItem)CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____get__,
    };
    memcpy(stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_vtable, stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_vtable_scratch, sizeof(stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_vtable));
    return 1;
}

static PyMethodDef stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj",
    .tp_new = stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_new,
    .tp_dealloc = (destructor)stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_dealloc,
    .tp_traverse = (traverseproc)stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_traverse,
    .tp_clear = (inquiry)stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_clear,
    .tp_methods = stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj,
    .tp_members = stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_members,
    .tp_basicsize = sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject),
    .tp_weaklistoffset = sizeof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_template = &CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_template_;

static PyObject *
stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_setup(PyTypeObject *type)
{
    mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *self;
    self = (mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_vtable;
    self->vectorcall = CPyPy_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj(void)
{
    PyObject *self = stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_setup(CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef statsmodule_methods[] = {
    {"dump_type_stats", (PyCFunction)CPyPy_stats___dump_type_stats, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_special_module", (PyCFunction)CPyPy_stats___is_special_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_imprecise", (PyCFunction)CPyPy_stats___is_imprecise, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_imprecise2", (PyCFunction)CPyPy_stats___is_imprecise2, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_generic", (PyCFunction)CPyPy_stats___is_generic, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_complex", (PyCFunction)CPyPy_stats___is_complex, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"ensure_dir_exists", (PyCFunction)CPyPy_stats___ensure_dir_exists, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_special_form_any", (PyCFunction)CPyPy_stats___is_special_form_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_original_any", (PyCFunction)CPyPy_stats___get_original_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef statsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.stats",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    statsmodule_methods
};

PyObject *CPyInit_mypy___stats(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___stats_internal) {
        Py_INCREF(CPyModule_mypy___stats_internal);
        return CPyModule_mypy___stats_internal;
    }
    CPyModule_mypy___stats_internal = PyModule_Create(&statsmodule);
    if (unlikely(CPyModule_mypy___stats_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___stats_internal, "__name__");
    CPyStatic_stats___globals = PyModule_GetDict(CPyModule_mypy___stats_internal);
    if (unlikely(CPyStatic_stats___globals == NULL))
        goto fail;
    CPyType_stats___enter_scope_StatisticsVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_stats___enter_scope_StatisticsVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_stats___enter_scope_StatisticsVisitor_env))
        goto fail;
    CPyType_stats___enter_scope_StatisticsVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_stats___enter_scope_StatisticsVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_stats___enter_scope_StatisticsVisitor_gen))
        goto fail;
    CPyType_stats___record_callable_target_precision_StatisticsVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_stats___record_callable_target_precision_StatisticsVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_stats___record_callable_target_precision_StatisticsVisitor_env))
        goto fail;
    CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_template, NULL, modname);
    if (unlikely(!CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_stats_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___stats_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___stats_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_stats___precision_names);
    CPyStatic_stats___precision_names = NULL;
    Py_CLEAR(CPyType_stats___StatisticsVisitor);
    Py_CLEAR(CPyType_stats___HasAnyQuery);
    Py_CLEAR(CPyType_stats___HasAnyQuery2);
    Py_CLEAR(CPyType_stats___enter_scope_StatisticsVisitor_env);
    Py_CLEAR(CPyType_stats___enter_scope_StatisticsVisitor_gen);
    Py_CLEAR(CPyType_stats___record_callable_target_precision_StatisticsVisitor_env);
    Py_CLEAR(CPyType_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor_____init__(PyObject *cpy_r_self, char cpy_r_inferred, PyObject *cpy_r_filename, PyObject *cpy_r_modules, PyObject *cpy_r_typemap, char cpy_r_all_nodes, char cpy_r_visit_untyped_defs) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    if (cpy_r_typemap != NULL) goto CPyL38;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typemap = cpy_r_r0;
CPyL2: ;
    if (cpy_r_all_nodes != 2) goto CPyL4;
    cpy_r_all_nodes = 0;
CPyL4: ;
    if (cpy_r_visit_untyped_defs != 2) goto CPyL6;
    cpy_r_visit_untyped_defs = 1;
CPyL6: ;
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_inferred = cpy_r_inferred;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 80, CPyStatic_stats___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_filename);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_filename != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_filename);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_filename = cpy_r_filename;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 81, CPyStatic_stats___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_modules);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_modules != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_modules);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_modules = cpy_r_modules;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 82, CPyStatic_stats___globals);
        goto CPyL39;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap = cpy_r_typemap;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 83, CPyStatic_stats___globals);
        goto CPyL37;
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_all_nodes = cpy_r_all_nodes;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 84, CPyStatic_stats___globals);
        goto CPyL37;
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_visit_untyped_defs = cpy_r_visit_untyped_defs;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 85, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs = 0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 87, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs = 0;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 88, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs = 0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 89, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types = 0;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 91, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types = 0;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 92, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types = 0;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 93, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types = 0;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 94, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types = 0;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 95, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types = 0;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 96, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types = 0;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 97, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line = -2;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 99, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r18 = PyDict_New();
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 101, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line_map != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line_map);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line_map = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 101, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r20 = CPyStatic_stats___globals;
    cpy_r_r21 = CPyStatics[4694]; /* 'Counter' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 103, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r22, 0, 0, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 103, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (likely(PyDict_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "__init__", 103, CPyStatic_stats___globals, "dict", cpy_r_r23);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_type_of_any_counter != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_type_of_any_counter);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_type_of_any_counter = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 103, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r26 = PyDict_New();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 104, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_any_line_map != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_any_line_map);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_any_line_map = cpy_r_r26;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 104, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r28 = PyList_New(1);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 110, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r29 = 1 ? Py_True : Py_False;
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    CPy_INCREF(cpy_r_r29);
    *(PyObject * *)cpy_r_r31 = cpy_r_r29;
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_checked_scopes != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_checked_scopes);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_checked_scopes = cpy_r_r28;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 110, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 112, CPyStatic_stats___globals);
        goto CPyL37;
    }
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_output != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_output);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_output = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 112, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r35 = CPyDef_traverser___TraverserVisitor_____init__(cpy_r_self);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 114, CPyStatic_stats___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL38: ;
    CPy_INCREF(cpy_r_typemap);
    goto CPyL2;
CPyL39: ;
    CPy_DecRef(cpy_r_typemap);
    goto CPyL37;
}

PyObject *CPyPy_stats___StatisticsVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"inferred", "filename", "modules", "typemap", "all_nodes", "visit_untyped_defs", 0};
    PyObject *obj_inferred;
    PyObject *obj_filename;
    PyObject *obj_modules;
    PyObject *obj_typemap = NULL;
    PyObject *obj_all_nodes = NULL;
    PyObject *obj_visit_untyped_defs = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO|OOO", "__init__", kwlist, &obj_inferred, &obj_filename, &obj_modules, &obj_typemap, &obj_all_nodes, &obj_visit_untyped_defs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    char arg_inferred;
    if (unlikely(!PyBool_Check(obj_inferred))) {
        CPy_TypeError("bool", obj_inferred); goto fail;
    } else
        arg_inferred = obj_inferred == Py_True;
    PyObject *arg_filename;
    if (likely(PyUnicode_Check(obj_filename)))
        arg_filename = obj_filename;
    else {
        CPy_TypeError("str", obj_filename); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_typemap;
    if (obj_typemap == NULL) {
        arg_typemap = NULL;
        goto __LL6852;
    }
    if (PyDict_Check(obj_typemap))
        arg_typemap = obj_typemap;
    else {
        arg_typemap = NULL;
    }
    if (arg_typemap != NULL) goto __LL6852;
    if (obj_typemap == Py_None)
        arg_typemap = obj_typemap;
    else {
        arg_typemap = NULL;
    }
    if (arg_typemap != NULL) goto __LL6852;
    CPy_TypeError("dict or None", obj_typemap); 
    goto fail;
__LL6852: ;
    char arg_all_nodes;
    if (obj_all_nodes == NULL) {
        arg_all_nodes = 2;
    } else if (unlikely(!PyBool_Check(obj_all_nodes))) {
        CPy_TypeError("bool", obj_all_nodes); goto fail;
    } else
        arg_all_nodes = obj_all_nodes == Py_True;
    char arg_visit_untyped_defs;
    if (obj_visit_untyped_defs == NULL) {
        arg_visit_untyped_defs = 2;
    } else if (unlikely(!PyBool_Check(obj_visit_untyped_defs))) {
        CPy_TypeError("bool", obj_visit_untyped_defs); goto fail;
    } else
        arg_visit_untyped_defs = obj_visit_untyped_defs == Py_True;
    char retval = CPyDef_stats___StatisticsVisitor_____init__(arg_self, arg_inferred, arg_filename, arg_modules, arg_typemap, arg_all_nodes, arg_visit_untyped_defs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "__init__", 71, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPy_INCREF(cpy_r_o);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_node != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_node);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_node = cpy_r_o;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/stats.py", "visit_mypy_file", 117, CPyStatic_stats___globals);
        goto CPyL5;
    }
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_mypy_file", 118, CPyStatic_stats___globals);
        goto CPyL5;
    }
CPyL2: ;
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_id != NULL) {
        CPy_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_id);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_id = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_mypy_file", 118, CPyStatic_stats___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDef_traverser___TraverserVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_mypy_file", 119, CPyStatic_stats___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_mypy_file(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_mypy_file", 116, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_import(cpy_r_self, cpy_r_imp);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_import_from", 122, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___ImportFrom))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_import_from(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_from", 121, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_import(cpy_r_self, cpy_r_imp);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_import_all", 125, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___ImportAll))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_import_all(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_all", 124, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___process_import(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    tuple_T2OC cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_import_id;
    char cpy_r_r23;
    char cpy_r_ok;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_kind;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_id;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "process_import", "StatisticsVisitor", "cur_mod_id", 129, CPyStatic_stats___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_nodes___ImportFrom;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_imp)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL4;
    CPy_INCREF(cpy_r_imp);
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportFrom))
        cpy_r_r5 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_import", 129, CPyStatic_stats___globals, "mypy.nodes.ImportFrom", cpy_r_imp);
        goto CPyL28;
    }
    cpy_r_r6 = ((mypy___nodes___ImportFromObject *)cpy_r_r5)->_relative;
    CPyTagged_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6;
    goto CPyL6;
CPyL4: ;
    CPy_INCREF(cpy_r_imp);
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportAll))
        cpy_r_r8 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_import", 129, CPyStatic_stats___globals, "mypy.nodes.ImportAll", cpy_r_imp);
        goto CPyL28;
    }
    cpy_r_r9 = ((mypy___nodes___ImportAllObject *)cpy_r_r8)->_relative;
    CPyTagged_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___ImportFrom;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_imp)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL9;
    CPy_INCREF(cpy_r_imp);
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportFrom))
        cpy_r_r14 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_import", 129, CPyStatic_stats___globals, "mypy.nodes.ImportFrom", cpy_r_imp);
        goto CPyL29;
    }
    cpy_r_r15 = ((mypy___nodes___ImportFromObject *)cpy_r_r14)->_id;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15;
    goto CPyL11;
CPyL9: ;
    CPy_INCREF(cpy_r_imp);
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportAll))
        cpy_r_r17 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_import", 129, CPyStatic_stats___globals, "mypy.nodes.ImportAll", cpy_r_imp);
        goto CPyL29;
    }
    cpy_r_r18 = ((mypy___nodes___ImportAllObject *)cpy_r_r17)->_id;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r16 = cpy_r_r18;
CPyL11: ;
    cpy_r_r19 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_cur_mod_node;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "process_import", "StatisticsVisitor", "cur_mod_node", 129, CPyStatic_stats___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r19);
CPyL12: ;
    cpy_r_r20 = CPyDef_nodes___MypyFile___is_package_init_file(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "process_import", 129, CPyStatic_stats___globals);
        goto CPyL30;
    }
    cpy_r_r21 = CPyDef_mypy___util___correct_relative_import(cpy_r_r0, cpy_r_r7, cpy_r_r16, cpy_r_r20);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r21.f0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "process_import", 128, CPyStatic_stats___globals);
        goto CPyL27;
    }
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    cpy_r_import_id = cpy_r_r22;
    cpy_r_r23 = cpy_r_r21.f1;
    CPy_DECREF(cpy_r_r21.f0);
    cpy_r_ok = cpy_r_r23;
    if (!cpy_r_ok) goto CPyL31;
    cpy_r_r24 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "process_import", "StatisticsVisitor", "modules", 131, CPyStatic_stats___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r24);
CPyL16: ;
    cpy_r_r25 = PyDict_Contains(cpy_r_r24, cpy_r_import_id);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_import_id);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/stats.py", "process_import", 131, CPyStatic_stats___globals);
        goto CPyL27;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL19;
    cpy_r_kind = 4;
    goto CPyL20;
CPyL19: ;
    cpy_r_kind = 8;
CPyL20: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___ImportFrom;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_imp)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL23;
    CPy_INCREF(cpy_r_imp);
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportFrom))
        cpy_r_r32 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_import", 135, CPyStatic_stats___globals, "mypy.nodes.ImportFrom", cpy_r_imp);
        goto CPyL33;
    }
    cpy_r_r33 = ((mypy___nodes___ImportFromObject *)cpy_r_r32)->_line;
    CPyTagged_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33;
    goto CPyL25;
CPyL23: ;
    CPy_INCREF(cpy_r_imp);
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportAll))
        cpy_r_r35 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_import", 135, CPyStatic_stats___globals, "mypy.nodes.ImportAll", cpy_r_imp);
        goto CPyL33;
    }
    cpy_r_r36 = ((mypy___nodes___ImportAllObject *)cpy_r_r35)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r34 = cpy_r_r36;
CPyL25: ;
    cpy_r_r37 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r34, cpy_r_kind);
    CPyTagged_DECREF(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "process_import", 135, CPyStatic_stats___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r7);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_import_id);
    goto CPyL19;
CPyL32: ;
    CPy_DecRef(cpy_r_import_id);
    goto CPyL27;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_kind);
    goto CPyL27;
}

PyObject *CPyPy_stats___StatisticsVisitor___process_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:process_import", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (Py_TYPE(obj_imp) == CPyType_nodes___ImportFrom)
        arg_imp = obj_imp;
    else {
        arg_imp = NULL;
    }
    if (arg_imp != NULL) goto __LL6853;
    if (Py_TYPE(obj_imp) == CPyType_nodes___ImportAll)
        arg_imp = obj_imp;
    else {
        arg_imp = NULL;
    }
    if (arg_imp != NULL) goto __LL6853;
    CPy_TypeError("union[mypy.nodes.ImportFrom, mypy.nodes.ImportAll]", obj_imp); 
    goto fail;
__LL6853: ;
    char retval = CPyDef_stats___StatisticsVisitor___process_import(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "process_import", 127, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
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
    PyObject *cpy_r_id;
    PyObject *cpy_r_r10;
    PyObject *cpy_r__;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_kind;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = 1;
    cpy_r_r1 = ((mypy___nodes___ImportObject *)cpy_r_imp)->_ids;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL14;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    PyObject *__tmp6854;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp6854 = NULL;
        goto __LL6855;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp6854 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp6854 = NULL;
    }
    if (__tmp6854 == NULL) goto __LL6855;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1)))
        __tmp6854 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6854 = NULL;
    }
    if (__tmp6854 != NULL) goto __LL6856;
    if (PyTuple_GET_ITEM(cpy_r_r7, 1) == Py_None)
        __tmp6854 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6854 = NULL;
    }
    if (__tmp6854 != NULL) goto __LL6856;
    __tmp6854 = NULL;
__LL6856: ;
    if (__tmp6854 == NULL) goto __LL6855;
    __tmp6854 = cpy_r_r7;
__LL6855: ;
    if (unlikely(__tmp6854 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6857 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp6857);
        PyObject *__tmp6858;
        if (likely(PyUnicode_Check(__tmp6857)))
            __tmp6858 = __tmp6857;
        else {
            CPy_TypeError("str", __tmp6857); 
            __tmp6858 = NULL;
        }
        cpy_r_r8.f0 = __tmp6858;
        PyObject *__tmp6859 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp6859);
        PyObject *__tmp6860;
        if (PyUnicode_Check(__tmp6859))
            __tmp6860 = __tmp6859;
        else {
            __tmp6860 = NULL;
        }
        if (__tmp6860 != NULL) goto __LL6861;
        if (__tmp6859 == Py_None)
            __tmp6860 = __tmp6859;
        else {
            __tmp6860 = NULL;
        }
        if (__tmp6860 != NULL) goto __LL6861;
        CPy_TypeError("str or None", __tmp6859); 
        __tmp6860 = NULL;
__LL6861: ;
        cpy_r_r8.f1 = __tmp6860;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_import", 138, CPyStatic_stats___globals);
        goto CPyL15;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_id = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r__ = cpy_r_r10;
    CPy_DECREF(cpy_r__);
    cpy_r_r11 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "visit_import", "StatisticsVisitor", "modules", 138, CPyStatic_stats___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r11);
CPyL4: ;
    cpy_r_r12 = PyDict_Contains(cpy_r_r11, cpy_r_id);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_id);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/stats.py", "visit_import", 138, CPyStatic_stats___globals);
        goto CPyL15;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (cpy_r_r15) {
        goto CPyL17;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r0 = 0;
    goto CPyL8;
CPyL7: ;
    cpy_r_r16 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r16;
    goto CPyL1;
CPyL8: ;
    if (!cpy_r_r0) goto CPyL10;
    cpy_r_kind = 4;
    goto CPyL11;
CPyL10: ;
    cpy_r_kind = 8;
CPyL11: ;
    cpy_r_r17 = ((mypy___nodes___ImportObject *)cpy_r_imp)->_line;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r17, cpy_r_kind);
    CPyTagged_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_import", 142, CPyStatic_stats___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_id);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___Import))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_import(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import", 137, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
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
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_defn;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyPtr cpy_r_r91;
    int64_t cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_arg;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    tuple_T3OOO cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    tuple_T3OOO cpy_r_r121;
    char cpy_r_r122;
    tuple_T3OOO cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    cpy_r_r0 = CPyStatics[4661]; /* 'enter_scope' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_o};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL84;
    }
    cpy_r_r4 = PyObject_Type(cpy_r_r3);
    cpy_r_r5 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL85;
    }
    cpy_r_r7 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r3};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL4: ;
    cpy_r_r12 = 1;
    cpy_r_r13 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 146, CPyStatic_stats___globals);
        goto CPyL60;
    }
    cpy_r_r15 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_expanded;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r18 > (Py_ssize_t)2;
    if (!cpy_r_r19) goto CPyL29;
    cpy_r_r20 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_expanded;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = PyList_New(1);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 147, CPyStatic_stats___globals);
        goto CPyL88;
    }
    cpy_r_r22 = (CPyPtr)&((PyListObject *)cpy_r_r21)->ob_item;
    cpy_r_r23 = *(CPyPtr *)cpy_r_r22;
    CPy_INCREF(cpy_r_o);
    *(PyObject * *)cpy_r_r23 = cpy_r_o;
    cpy_r_r24 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_expanded;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = CPySequence_Multiply(cpy_r_r21, cpy_r_r27);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 147, CPyStatic_stats___globals);
        goto CPyL88;
    }
    cpy_r_r29 = PyObject_RichCompare(cpy_r_r20, cpy_r_r28, 3);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 147, CPyStatic_stats___globals);
        goto CPyL60;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 147, CPyStatic_stats___globals);
        goto CPyL60;
    }
    if (!cpy_r_r30) goto CPyL29;
    cpy_r_r31 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_expanded;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PySequence_Contains(cpy_r_r31, cpy_r_o);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 148, CPyStatic_stats___globals);
        goto CPyL60;
    }
    cpy_r_r34 = cpy_r_r32;
    if (!cpy_r_r34) goto CPyL20;
    cpy_r_r35 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_filename;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "visit_func_def", "StatisticsVisitor", "filename", 151, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r35);
CPyL15: ;
    cpy_r_r36 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyTagged_Str(cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 150, CPyStatic_stats___globals);
        goto CPyL89;
    }
    cpy_r_r38 = CPyStatics[171]; /* ':' */
    cpy_r_r39 = CPyStatics[5453]; /* ': ERROR: cycle in function expansion; skipping' */
    cpy_r_r40 = CPyStr_Build(4, cpy_r_r35, cpy_r_r38, cpy_r_r37, cpy_r_r39);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 150, CPyStatic_stats___globals);
        goto CPyL60;
    }
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[190]; /* 'print' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 149, CPyStatic_stats___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r44[1] = {cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 149, CPyStatic_stats___globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL19: ;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r47 = 1;
    goto CPyL69;
CPyL20: ;
    cpy_r_r48 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_expanded;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = 0;
CPyL21: ;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r48)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = (Py_ssize_t)cpy_r_r49 < (Py_ssize_t)cpy_r_r52;
    if (!cpy_r_r53) goto CPyL92;
    cpy_r_r54 = CPyList_GetItemUnsafe(cpy_r_r48, cpy_r_r49);
    if (likely((Py_TYPE(cpy_r_r54) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r54) == CPyType_nodes___LambdaExpr)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_func_def", 155, CPyStatic_stats___globals, "mypy.nodes.FuncItem", cpy_r_r54);
        goto CPyL93;
    }
    cpy_r_defn = cpy_r_r55;
    cpy_r_r56 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (cpy_r_r59) {
        goto CPyL26;
    } else
        goto CPyL94;
CPyL24: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 156, CPyStatic_stats___globals);
        goto CPyL60;
    } else
        goto CPyL95;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    if (likely(Py_TYPE(cpy_r_defn) == CPyType_nodes___FuncDef))
        cpy_r_r61 = cpy_r_defn;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_func_def", 157, CPyStatic_stats___globals, "mypy.nodes.FuncDef", cpy_r_defn);
        goto CPyL93;
    }
    cpy_r_r62 = CPyDef_stats___StatisticsVisitor___visit_func_def(cpy_r_self, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 157, CPyStatic_stats___globals);
        goto CPyL93;
    }
    cpy_r_r63 = cpy_r_r49 + 2;
    cpy_r_r49 = cpy_r_r63;
    goto CPyL21;
CPyL29: ;
    cpy_r_r64 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_r64 != cpy_r_r65;
    CPy_DECREF(cpy_r_r64);
    if (!cpy_r_r66) goto CPyL51;
    cpy_r_r67 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    cpy_r_r68 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_r67)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (cpy_r_r71) goto CPyL33;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 160, CPyStatic_stats___globals);
        goto CPyL60;
    } else
        goto CPyL96;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r73 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r73);
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_types___CallableType))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_func_def", 161, CPyStatic_stats___globals, "mypy.types.CallableType", cpy_r_r73);
        goto CPyL60;
    }
    cpy_r_sig = cpy_r_r74;
    cpy_r_r75 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_arg_types;
    CPy_INCREF(cpy_r_r75);
    cpy_r_arg_types = cpy_r_r75;
    cpy_r_r76 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_arg_names;
    CPy_INCREF(cpy_r_r76);
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_r76)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    CPy_DECREF(cpy_r_r76);
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = cpy_r_r79 != 0;
    if (!cpy_r_r80) goto CPyL45;
    cpy_r_r81 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_arg_names;
    cpy_r_r82 = CPyList_GetItemShort(cpy_r_r81, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 163, CPyStatic_stats___globals);
        goto CPyL97;
    }
    if (PyUnicode_Check(cpy_r_r82))
        cpy_r_r83 = cpy_r_r82;
    else {
        cpy_r_r83 = NULL;
    }
    if (cpy_r_r83 != NULL) goto __LL6862;
    if (cpy_r_r82 == Py_None)
        cpy_r_r83 = cpy_r_r82;
    else {
        cpy_r_r83 = NULL;
    }
    if (cpy_r_r83 != NULL) goto __LL6862;
    CPy_TypeErrorTraceback("mypy/stats.py", "visit_func_def", 163, CPyStatic_stats___globals, "str or None", cpy_r_r82);
    goto CPyL97;
__LL6862: ;
    cpy_r_r84 = CPyStatics[730]; /* 'self' */
    cpy_r_r85 = PyObject_RichCompare(cpy_r_r83, cpy_r_r84, 2);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 163, CPyStatic_stats___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r85))) {
        CPy_TypeError("bool", cpy_r_r85); cpy_r_r86 = 2;
    } else
        cpy_r_r86 = cpy_r_r85 == Py_True;
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 163, CPyStatic_stats___globals);
        goto CPyL97;
    }
    if (!cpy_r_r86) goto CPyL45;
    cpy_r_r87 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_inferred;
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AttributeError("mypy/stats.py", "visit_func_def", "StatisticsVisitor", "inferred", 163, CPyStatic_stats___globals);
        goto CPyL97;
    }
CPyL41: ;
    if (cpy_r_r87) goto CPyL45;
CPyL42: ;
    cpy_r_r88 = CPyList_GetSlice(cpy_r_arg_types, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_arg_types);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 164, CPyStatic_stats___globals);
        goto CPyL98;
    }
    if (likely(PyList_Check(cpy_r_r88)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_func_def", 164, CPyStatic_stats___globals, "list", cpy_r_r88);
        goto CPyL98;
    }
    cpy_r_arg_types = cpy_r_r89;
CPyL45: ;
    cpy_r_r90 = 0;
CPyL46: ;
    cpy_r_r91 = (CPyPtr)&((PyVarObject *)cpy_r_arg_types)->ob_size;
    cpy_r_r92 = *(int64_t *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 << 1;
    cpy_r_r94 = (Py_ssize_t)cpy_r_r90 < (Py_ssize_t)cpy_r_r93;
    if (!cpy_r_r94) goto CPyL99;
    cpy_r_r95 = CPyList_GetItemUnsafe(cpy_r_arg_types, cpy_r_r90);
    if (likely(PyObject_TypeCheck(cpy_r_r95, CPyType_types___Type)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_func_def", 165, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r95);
        goto CPyL97;
    }
    cpy_r_arg = cpy_r_r96;
    cpy_r_r97 = CPyDef_stats___StatisticsVisitor___type(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 166, CPyStatic_stats___globals);
        goto CPyL97;
    }
    cpy_r_r98 = cpy_r_r90 + 2;
    cpy_r_r90 = cpy_r_r98;
    goto CPyL46;
CPyL50: ;
    cpy_r_r99 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_ret_type;
    CPy_INCREF(cpy_r_r99);
    CPy_DECREF(cpy_r_sig);
    cpy_r_r100 = CPyDef_stats___StatisticsVisitor___type(cpy_r_self, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 167, CPyStatic_stats___globals);
        goto CPyL60;
    } else
        goto CPyL55;
CPyL51: ;
    cpy_r_r101 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_all_nodes;
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AttributeError("mypy/stats.py", "visit_func_def", "StatisticsVisitor", "all_nodes", 168, CPyStatic_stats___globals);
        goto CPyL60;
    }
CPyL52: ;
    if (!cpy_r_r101) goto CPyL55;
CPyL53: ;
    cpy_r_r102 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r102 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "visit_func_def", "StatisticsVisitor", "line", 169, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r102);
CPyL54: ;
    cpy_r_r103 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r102, 8);
    CPyTagged_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 169, CPyStatic_stats___globals);
        goto CPyL60;
    }
CPyL55: ;
    cpy_r_r104 = CPyDef_nodes___FuncItem___is_dynamic(cpy_r_o);
    if (unlikely(cpy_r_r104 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 170, CPyStatic_stats___globals);
        goto CPyL60;
    }
    if (!cpy_r_r104) goto CPyL59;
    cpy_r_r105 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_visit_untyped_defs;
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AttributeError("mypy/stats.py", "visit_func_def", "StatisticsVisitor", "visit_untyped_defs", 170, CPyStatic_stats___globals);
        goto CPyL60;
    }
CPyL58: ;
    if (!cpy_r_r105) goto CPyL68;
CPyL59: ;
    cpy_r_r106 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 171, CPyStatic_stats___globals);
    } else
        goto CPyL68;
CPyL60: ;
    cpy_r_r107 = CPy_CatchError();
    cpy_r_r12 = 0;
    cpy_r_r108 = CPy_GetExcInfo();
    cpy_r_r109 = cpy_r_r108.f0;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = cpy_r_r108.f1;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = cpy_r_r108.f2;
    CPy_INCREF(cpy_r_r111);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    PyObject *cpy_r_r112[4] = {cpy_r_r3, cpy_r_r109, cpy_r_r110, cpy_r_r111};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r113, 4, 0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL100;
    }
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    cpy_r_r115 = PyObject_IsTrue(cpy_r_r114);
    CPy_DecRef(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL66;
    }
    cpy_r_r117 = cpy_r_r115;
    if (cpy_r_r117) goto CPyL65;
    CPy_Reraise();
    if (!0) {
        goto CPyL66;
    } else
        goto CPyL101;
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    CPy_RestoreExcInfo(cpy_r_r107);
    CPy_DecRef(cpy_r_r107.f0);
    CPy_DecRef(cpy_r_r107.f1);
    CPy_DecRef(cpy_r_r107.f2);
    goto CPyL68;
CPyL66: ;
    CPy_RestoreExcInfo(cpy_r_r107);
    CPy_DecRef(cpy_r_r107.f0);
    CPy_DecRef(cpy_r_r107.f1);
    CPy_DecRef(cpy_r_r107.f2);
    cpy_r_r118 = CPy_KeepPropagating();
    if (!cpy_r_r118) {
        goto CPyL70;
    } else
        goto CPyL102;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r119 = 2;
    cpy_r_r47 = cpy_r_r119;
CPyL69: ;
    tuple_T3OOO __tmp6863 = { NULL, NULL, NULL };
    cpy_r_r120 = __tmp6863;
    cpy_r_r121 = cpy_r_r120;
    goto CPyL71;
CPyL70: ;
    cpy_r_r122 = 2;
    cpy_r_r47 = cpy_r_r122;
    cpy_r_r123 = CPy_CatchError();
    cpy_r_r121 = cpy_r_r123;
CPyL71: ;
    if (!cpy_r_r12) goto CPyL103;
    cpy_r_r124 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r125[4] = {cpy_r_r3, cpy_r_r124, cpy_r_r124, cpy_r_r124};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r126, 4, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_func_def", 145, CPyStatic_stats___globals);
        goto CPyL104;
    } else
        goto CPyL105;
CPyL73: ;
    CPy_DECREF(cpy_r_r3);
CPyL74: ;
    if (cpy_r_r121.f0 == NULL) goto CPyL77;
    CPy_Reraise();
    if (!0) {
        goto CPyL79;
    } else
        goto CPyL106;
CPyL76: ;
    CPy_Unreachable();
CPyL77: ;
    if (cpy_r_r47 == 2) goto CPyL83;
    return cpy_r_r47;
CPyL79: ;
    if (cpy_r_r121.f0 == NULL) goto CPyL81;
    CPy_RestoreExcInfo(cpy_r_r121);
    CPy_XDECREF(cpy_r_r121.f0);
    CPy_XDECREF(cpy_r_r121.f1);
    CPy_XDECREF(cpy_r_r121.f2);
CPyL81: ;
    cpy_r_r128 = CPy_KeepPropagating();
    if (!cpy_r_r128) goto CPyL84;
    CPy_Unreachable();
CPyL83: ;
    return 1;
CPyL84: ;
    cpy_r_r129 = 2;
    return cpy_r_r129;
CPyL85: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL84;
CPyL86: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL84;
CPyL87: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL88: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL60;
CPyL89: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL60;
CPyL90: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL60;
CPyL91: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL19;
CPyL92: ;
    CPy_DECREF(cpy_r_r48);
    goto CPyL68;
CPyL93: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL60;
CPyL94: ;
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_defn);
    goto CPyL24;
CPyL95: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL25;
CPyL96: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL32;
CPyL97: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL60;
CPyL98: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL60;
CPyL99: ;
    CPy_DECREF(cpy_r_arg_types);
    goto CPyL50;
CPyL100: ;
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    goto CPyL66;
CPyL101: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r107.f0);
    CPy_DecRef(cpy_r_r107.f1);
    CPy_DecRef(cpy_r_r107.f2);
    goto CPyL64;
CPyL102: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL67;
CPyL103: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL74;
CPyL104: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL79;
CPyL105: ;
    CPy_DECREF(cpy_r_r127);
    goto CPyL73;
CPyL106: ;
    CPy_XDECREF(cpy_r_r121.f0);
    CPy_XDECREF(cpy_r_r121.f1);
    CPy_XDECREF(cpy_r_r121.f2);
    goto CPyL76;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_func_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_func_def", 144, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = ((mypy___stats___enter_scope_StatisticsVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "enter_scope_StatisticsVisitor_gen", "__mypyc_env__", 174, CPyStatic_stats___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "enter_scope_StatisticsVisitor_env", "__mypyc_next_label__", 174, CPyStatic_stats___globals);
        goto CPyL39;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL28;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL40;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "enter_scope_StatisticsVisitor_env", "self", 175, CPyStatic_stats___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_r4)->_checked_scopes;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'checked_scopes' of 'StatisticsVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 175, CPyStatic_stats___globals);
        goto CPyL39;
    }
CPyL7: ;
    cpy_r_r6 = ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "enter_scope_StatisticsVisitor_env", "o", 175, CPyStatic_stats___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r6);
CPyL8: ;
    cpy_r_r7 = ((mypy___nodes___FuncDefObject *)cpy_r_r6)->_type;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r6);
    if (cpy_r_r9) goto CPyL10;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL15;
CPyL10: ;
    cpy_r_r11 = ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "enter_scope_StatisticsVisitor_env", "self", 175, CPyStatic_stats___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_r11)->_checked_scopes;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "StatisticsVisitor", "checked_scopes", 175, CPyStatic_stats___globals);
        goto CPyL42;
    }
CPyL12: ;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 175, CPyStatic_stats___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 175, CPyStatic_stats___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r11);
    cpy_r_r10 = cpy_r_r14;
CPyL15: ;
    cpy_r_r15 = cpy_r_r10 ? Py_True : Py_False;
    cpy_r_r16 = PyList_Append(cpy_r_r5, cpy_r_r15);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 175, CPyStatic_stats___globals);
        goto CPyL39;
    }
    cpy_r_r18 = Py_None;
    if (((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r19 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 176, CPyStatic_stats___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r18);
    return cpy_r_r18;
CPyL18: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_type != cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL43;
    } else
        goto CPyL21;
CPyL19: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 176, CPyStatic_stats___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r22 = ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "enter_scope", "enter_scope_StatisticsVisitor_env", "self", 177, CPyStatic_stats___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r22);
CPyL22: ;
    cpy_r_r23 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_r22)->_checked_scopes;
    if (unlikely(cpy_r_r23 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'checked_scopes' of 'StatisticsVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r23);
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 177, CPyStatic_stats___globals);
        goto CPyL39;
    }
CPyL23: ;
    cpy_r_r24 = CPyList_PopLast(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 177, CPyStatic_stats___globals);
        goto CPyL39;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 177, CPyStatic_stats___globals);
        goto CPyL39;
    }
    cpy_r_r26 = Py_None;
    if (((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r27 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL38;
    }
    CPyGen_SetStopIterationValue(cpy_r_r26);
    if (!0) goto CPyL38;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r28 = cpy_r_r1 & 1;
    cpy_r_r29 = cpy_r_r28 == 0;
    if (!cpy_r_r29) goto CPyL30;
    cpy_r_r30 = cpy_r_r1 == 0;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL31;
CPyL30: ;
    cpy_r_r32 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r31 = cpy_r_r32;
CPyL31: ;
    if (cpy_r_r31) goto CPyL44;
    cpy_r_r33 = cpy_r_r1 & 1;
    cpy_r_r34 = cpy_r_r33 == 0;
    if (!cpy_r_r34) goto CPyL34;
    cpy_r_r35 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r36 = cpy_r_r35;
    goto CPyL35;
CPyL34: ;
    cpy_r_r37 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r36 = cpy_r_r37;
CPyL35: ;
    if (cpy_r_r36) {
        goto CPyL18;
    } else
        goto CPyL45;
CPyL36: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL38;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL44: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL45: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
}

PyObject *CPyPy_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___enter_scope_StatisticsVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_stats___enter_scope_StatisticsVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.stats.enter_scope_StatisticsVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "__next__", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___enter_scope_StatisticsVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_stats___enter_scope_StatisticsVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.stats.enter_scope_StatisticsVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_stats___enter_scope_StatisticsVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "send", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_stats___enter_scope_StatisticsVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_stats___enter_scope_StatisticsVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.stats.enter_scope_StatisticsVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "__iter__", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_stats___enter_scope_StatisticsVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_stats___enter_scope_StatisticsVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_stats___enter_scope_StatisticsVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.stats.enter_scope_StatisticsVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_stats___enter_scope_StatisticsVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "throw", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___enter_scope_StatisticsVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_stats___enter_scope_StatisticsVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp6864 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6864);
    PyObject *__tmp6865 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6865);
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

PyObject *CPyPy_stats___enter_scope_StatisticsVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_stats___enter_scope_StatisticsVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.stats.enter_scope_StatisticsVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___enter_scope_StatisticsVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "close", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___enter_scope(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_stats___enter_scope_StatisticsVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_o);
    if (((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_o != NULL) {
        CPy_DECREF(((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_o);
    }
    ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->_o = cpy_r_o;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_stats___enter_scope_StatisticsVisitor_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___stats___enter_scope_StatisticsVisitor_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___stats___enter_scope_StatisticsVisitor_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___stats___enter_scope_StatisticsVisitor_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
        goto CPyL9;
    }
    if (((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___stats___enter_scope_StatisticsVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
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

PyObject *CPyPy_stats___StatisticsVisitor___enter_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:enter_scope", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___enter_scope(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "enter_scope", 174, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___is_checked_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_checked_scopes;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "is_checked_scope", "StatisticsVisitor", "checked_scopes", 180, CPyStatic_stats___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_checked_scope", 180, CPyStatic_stats___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "is_checked_scope", 180, CPyStatic_stats___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_stats___StatisticsVisitor___is_checked_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_checked_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___is_checked_scope(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_checked_scope", 179, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r0, 4);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_class_def", 183, CPyStatic_stats___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_decorators;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_class_def", 188, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_d = cpy_r_r9;
    cpy_r_r10 = CPY_GET_METHOD_TRAIT(cpy_r_d, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_d, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_class_def", 189, CPyStatic_stats___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL5: ;
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    cpy_r_r12 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_defs;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_nodes___Block___accept(cpy_r_r12, cpy_r_self);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_class_def", 190, CPyStatic_stats___globals);
        goto CPyL8;
    } else
        goto CPyL12;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL9: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
CPyL12: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL7;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_class_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_class_def", 182, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_t;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___TypeApplicationObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/stats.py", "visit_type_application", 193, CPyStatic_stats___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypy___nodes___TypeApplicationObject *)cpy_r_o)->_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_type_application", 194, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_t = cpy_r_r9;
    cpy_r_r10 = CPyDef_stats___StatisticsVisitor___type(cpy_r_self, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_type_application", 195, CPyStatic_stats___globals);
        goto CPyL10;
    }
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    cpy_r_r12 = CPyDef_traverser___TraverserVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_type_application", 196, CPyStatic_stats___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL9: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_type_application(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_type_application", 192, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_type_application__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_type_application__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_type_application__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_type_application__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_item;
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
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 199, CPyStatic_stats___globals);
        goto CPyL44;
    }
    cpy_r_r2 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_rvalue;
    cpy_r_r3 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___CallExpr))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 201, CPyStatic_stats___globals, "mypy.nodes.CallExpr", cpy_r_r7);
        goto CPyL44;
    }
    cpy_r_r9 = ((mypy___nodes___CallExprObject *)cpy_r_r8)->_analyzed;
    cpy_r_r10 = (PyObject *)CPyType_nodes___TypeVarExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL5;
    return 1;
CPyL5: ;
    cpy_r_r14 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_r14 != cpy_r_r15;
    CPy_DECREF(cpy_r_r14);
    if (!cpy_r_r16) goto CPyL8;
    cpy_r_r17 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r17);
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 206, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL44;
    }
    cpy_r_r19 = CPyDef_stats___StatisticsVisitor___type(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 206, CPyStatic_stats___globals);
        goto CPyL44;
    } else
        goto CPyL42;
CPyL8: ;
    cpy_r_r20 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_inferred;
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AttributeError("mypy/stats.py", "visit_assignment_stmt", "StatisticsVisitor", "inferred", 207, CPyStatic_stats___globals);
        goto CPyL44;
    }
CPyL9: ;
    if (!cpy_r_r20) goto CPyL42;
CPyL10: ;
    cpy_r_r21 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_all_nodes;
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AttributeError("mypy/stats.py", "visit_assignment_stmt", "StatisticsVisitor", "all_nodes", 207, CPyStatic_stats___globals);
        goto CPyL44;
    }
CPyL11: ;
    if (cpy_r_r21) goto CPyL42;
CPyL12: ;
    cpy_r_r22 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 0;
CPyL13: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL45;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r22, cpy_r_r23);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___Expression)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 209, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_r28);
        goto CPyL46;
    }
    cpy_r_lvalue = cpy_r_r29;
    cpy_r_r30 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr))
        cpy_r_r34 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 211, CPyStatic_stats___globals, "mypy.nodes.TupleExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r35 = ((mypy___nodes___TupleExprObject *)cpy_r_r34)->_items;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_lvalue);
    cpy_r_items = cpy_r_r35;
    goto CPyL20;
CPyL18: ;
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 213, CPyStatic_stats___globals);
        goto CPyL47;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_lvalue;
    cpy_r_items = cpy_r_r36;
CPyL20: ;
    cpy_r_r39 = 0;
CPyL21: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL48;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r39);
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_nodes___Expression)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 214, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_r44);
        goto CPyL49;
    }
    cpy_r_item = cpy_r_r45;
    cpy_r_r46 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL25;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL26;
CPyL25: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    cpy_r_r50 = cpy_r_r54;
CPyL26: ;
    if (!cpy_r_r50) goto CPyL28;
    cpy_r_r55 = cpy_r_r50;
    goto CPyL29;
CPyL28: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL29: ;
    if (!cpy_r_r55) goto CPyL50;
    if (likely((Py_TYPE(cpy_r_item) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___RefExpr)))
        cpy_r_r60 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 215, CPyStatic_stats___globals, "mypy.nodes.RefExpr", cpy_r_item);
        goto CPyL51;
    }
    cpy_r_r61 = ((mypy___nodes___RefExprObject *)cpy_r_r60)->_is_inferred_def;
    if (!cpy_r_r61) goto CPyL50;
CPyL32: ;
    cpy_r_r62 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "visit_assignment_stmt", "StatisticsVisitor", "typemap", 216, CPyStatic_stats___globals);
        goto CPyL51;
    }
CPyL33: ;
    cpy_r_r63 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r64 = cpy_r_r62 != cpy_r_r63;
    if (!cpy_r_r64) goto CPyL50;
    cpy_r_r65 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "visit_assignment_stmt", "StatisticsVisitor", "typemap", 217, CPyStatic_stats___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r65);
CPyL35: ;
    if (likely(cpy_r_r65 != Py_None))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 217, CPyStatic_stats___globals, "dict", cpy_r_r65);
        goto CPyL51;
    }
    if (likely((Py_TYPE(cpy_r_item) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___RefExpr)))
        cpy_r_r67 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 217, CPyStatic_stats___globals, "mypy.nodes.RefExpr", cpy_r_item);
        goto CPyL52;
    }
    cpy_r_r68 = CPyDict_GetWithNone(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 217, CPyStatic_stats___globals);
        goto CPyL49;
    }
    if (PyObject_TypeCheck(cpy_r_r68, CPyType_types___Type))
        cpy_r_r69 = cpy_r_r68;
    else {
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 != NULL) goto __LL6866;
    if (cpy_r_r68 == Py_None)
        cpy_r_r69 = cpy_r_r68;
    else {
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 != NULL) goto __LL6866;
    CPy_TypeErrorTraceback("mypy/stats.py", "visit_assignment_stmt", 217, CPyStatic_stats___globals, "mypy.types.Type or None", cpy_r_r68);
    goto CPyL49;
__LL6866: ;
    cpy_r_r70 = CPyDef_stats___StatisticsVisitor___type(cpy_r_self, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 217, CPyStatic_stats___globals);
        goto CPyL49;
    }
CPyL40: ;
    cpy_r_r71 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r71;
    goto CPyL21;
CPyL41: ;
    cpy_r_r72 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r72;
    goto CPyL13;
CPyL42: ;
    cpy_r_r73 = CPyDef_traverser___TraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 218, CPyStatic_stats___globals);
        goto CPyL44;
    }
    return 1;
CPyL44: ;
    cpy_r_r74 = 2;
    return cpy_r_r74;
CPyL45: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL42;
CPyL46: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL44;
CPyL48: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL41;
CPyL49: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_items);
    goto CPyL44;
CPyL50: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL40;
CPyL51: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_item);
    goto CPyL44;
CPyL52: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r66);
    goto CPyL44;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_assignment_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt", 198, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_expression_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_o)->_expr;
    cpy_r_r1 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r10 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r10, 0);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_expression_stmt", 223, CPyStatic_stats___globals);
        goto CPyL7;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r12 = CPyDef_traverser___TraverserVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_expression_stmt", 225, CPyStatic_stats___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_expression_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_expression_stmt", 220, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_expression_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_expression_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_expression_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_expression_stmt__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_expression_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_expression_stmt__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_pass_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_pass_stmt", 228, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_pass_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_pass_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_pass_stmt", 227, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_pass_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_pass_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_pass_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_pass_stmt__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_pass_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_pass_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_pass_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_pass_stmt__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_break_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_break_stmt", 231, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_break_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_break_stmt", 230, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_break_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_break_stmt__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_break_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_break_stmt__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_continue_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_continue_stmt", 234, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_continue_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_continue_stmt", 233, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_continue_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_continue_stmt__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_continue_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_continue_stmt__StatementVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 237, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL1: ;
    cpy_r_r1 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", -1, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL11;
CPyL6: ;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 237, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL7: ;
    cpy_r_r10 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", -1, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL10: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    cpy_r_r8 = cpy_r_r16;
CPyL11: ;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r17 = cpy_r_r8;
    goto CPyL18;
CPyL13: ;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 237, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL14: ;
    cpy_r_r19 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL17;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL17;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", -1, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL17: ;
    cpy_r_r25 = cpy_r_r20 == 0;
    cpy_r_r17 = cpy_r_r25;
CPyL18: ;
    if (!cpy_r_r17) goto CPyL20;
    cpy_r_r26 = cpy_r_r17;
    goto CPyL25;
CPyL20: ;
    cpy_r_r27 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 237, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL21: ;
    cpy_r_r28 = CPyStatics[5454]; /* 'builtins.Ellipsis' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL24;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL24;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", -1, CPyStatic_stats___globals);
        goto CPyL30;
    }
CPyL24: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    cpy_r_r26 = cpy_r_r34;
CPyL25: ;
    if (!cpy_r_r26) goto CPyL27;
    cpy_r_r35 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 238, CPyStatic_stats___globals);
        goto CPyL30;
    } else
        goto CPyL29;
CPyL27: ;
    cpy_r_r36 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 240, CPyStatic_stats___globals);
        goto CPyL30;
    }
    cpy_r_r37 = CPyDef_mypy___visitor___NodeVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 241, CPyStatic_stats___globals);
        goto CPyL30;
    } else
        goto CPyL31;
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL31: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL29;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_name_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_name_expr", 236, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___YieldFromExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_yield_from_expr", 244, CPyStatic_stats___globals);
        goto CPyL4;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = ((mypy___nodes___YieldFromExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_METHOD_TRAIT(cpy_r_r4, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r4, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_yield_from_expr", 245, CPyStatic_stats___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL5: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_yield_from_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_yield_from_expr", 243, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_yield_from_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_yield_from_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_yield_from_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_yield_from_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_call_expr", 248, CPyStatic_stats___globals);
        goto CPyL12;
    }
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_call_expr", 250, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = CPY_GET_METHOD_TRAIT(cpy_r_r5, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r5, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_call_expr", 250, CPyStatic_stats___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL4: ;
    cpy_r_r7 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_callee;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPY_GET_METHOD_TRAIT(cpy_r_r7, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r7, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_call_expr", 252, CPyStatic_stats___globals);
        goto CPyL12;
    } else
        goto CPyL14;
CPyL5: ;
    cpy_r_r9 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL15;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Expression)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "visit_call_expr", 253, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_r15);
        goto CPyL16;
    }
    cpy_r_a = cpy_r_r16;
    cpy_r_r17 = CPY_GET_METHOD_TRAIT(cpy_r_a, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "visit_call_expr", 254, CPyStatic_stats___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL9: ;
    cpy_r_r18 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r18;
    goto CPyL6;
CPyL10: ;
    cpy_r_r19 = CPyDef_stats___StatisticsVisitor___record_call_target_precision(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_call_expr", 255, CPyStatic_stats___globals);
        goto CPyL12;
    }
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL13: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL5;
CPyL15: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL9;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_call_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_call_expr", 247, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___record_call_target_precision(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_callee_type;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_call_target_precision", "StatisticsVisitor", "typemap", 259, CPyStatic_stats___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL20;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_call_target_precision", 259, CPyStatic_stats___globals, "dict", cpy_r_r0);
        goto CPyL19;
    }
    cpy_r_r4 = PyDict_Size(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_callee;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_call_target_precision", "StatisticsVisitor", "typemap", 259, CPyStatic_stats___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_call_target_precision", 259, CPyStatic_stats___globals, "dict", cpy_r_r8);
        goto CPyL21;
    }
    cpy_r_r10 = PyDict_Contains(cpy_r_r9, cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/stats.py", "record_call_target_precision", 259, CPyStatic_stats___globals);
        goto CPyL19;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (!cpy_r_r13) goto CPyL9;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r14 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_call_target_precision", "StatisticsVisitor", "typemap", 262, CPyStatic_stats___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r14);
CPyL10: ;
    if (likely(cpy_r_r14 != Py_None))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_call_target_precision", 262, CPyStatic_stats___globals, "dict", cpy_r_r14);
        goto CPyL19;
    }
    cpy_r_r16 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_callee;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_call_target_precision", 262, CPyStatic_stats___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_call_target_precision", 262, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL19;
    }
    cpy_r_r19 = CPyDef_types___get_proper_type(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_call_target_precision", 262, CPyStatic_stats___globals);
        goto CPyL19;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_call_target_precision", 262, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL19;
    }
    cpy_r_callee_type = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_callee_type)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_callee_type) == CPyType_types___CallableType))
        cpy_r_r25 = cpy_r_callee_type;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_call_target_precision", 264, CPyStatic_stats___globals, "mypy.types.CallableType", cpy_r_callee_type);
        goto CPyL19;
    }
    cpy_r_r26 = CPyDef_stats___StatisticsVisitor___record_callable_target_precision(cpy_r_self, cpy_r_o, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "record_call_target_precision", 264, CPyStatic_stats___globals);
        goto CPyL19;
    }
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL20: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL21: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_callee_type);
    goto CPyL18;
}

PyObject *CPyPy_stats___StatisticsVisitor___record_call_target_precision(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:record_call_target_precision", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___record_call_target_precision(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "record_call_target_precision", 257, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "__get__", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_n) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "<lambda>", "__mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj", "__mypyc_env__", 283, CPyStatic_stats___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_typemap;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "<lambda>", "record_callable_target_precision_StatisticsVisitor_env", "typemap", 283, CPyStatic_stats___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'o' of 'record_callable_target_precision_StatisticsVisitor_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<lambda>", 283, CPyStatic_stats___globals);
        goto CPyL10;
    }
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___CallExprObject *)cpy_r_r2)->_args;
    cpy_r_r4 = CPyList_GetItem(cpy_r_r3, cpy_r_n);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<lambda>", 283, CPyStatic_stats___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_nodes___Expression)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "<lambda>", 283, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_r4);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r1, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<lambda>", 283, CPyStatic_stats___globals);
        goto CPyL8;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "<lambda>", 283, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_n;
    if (likely(PyLong_Check(obj_n)))
        arg_n = CPyTagged_BorrowFromObject(obj_n);
    else {
        CPy_TypeError("int", obj_n); goto fail;
    }
    PyObject *retval = CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj_____call__(arg___mypyc_self__, arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "<lambda>", 283, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___record_callable_target_precision(PyObject *cpy_r_self, PyObject *cpy_r_o, PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_actual_to_formal;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_formals;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_n;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_formal;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    cpy_r_r0 = CPyDef_stats___record_callable_target_precision_StatisticsVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 268, CPyStatic_stats___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_o);
    if (((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o != NULL) {
        CPy_DECREF(((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o);
    }
    ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o = cpy_r_o;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 268, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r2 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_callable_target_precision", "StatisticsVisitor", "typemap", 276, CPyStatic_stats___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL38;
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r5 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_callable_target_precision", 276, CPyStatic_stats___globals, "dict", cpy_r_r2);
        goto CPyL37;
    }
    cpy_r_r6 = PyDict_Size(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (cpy_r_r8) {
        goto CPyL8;
    } else
        goto CPyL39;
CPyL6: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 276, CPyStatic_stats___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r10 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_callable_target_precision", "StatisticsVisitor", "typemap", 277, CPyStatic_stats___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_callable_target_precision", 277, CPyStatic_stats___globals, "dict", cpy_r_r10);
        goto CPyL37;
    }
    if (((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_typemap != NULL) {
        CPy_DECREF(((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_typemap);
    }
    ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_typemap = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 277, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_r13 = ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_callable_target_precision", "record_callable_target_precision_StatisticsVisitor_env", "o", 279, CPyStatic_stats___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r13);
CPyL12: ;
    cpy_r_r14 = ((mypy___nodes___CallExprObject *)cpy_r_r13)->_arg_kinds;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_callable_target_precision", "record_callable_target_precision_StatisticsVisitor_env", "o", 280, CPyStatic_stats___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r15);
CPyL13: ;
    cpy_r_r16 = ((mypy___nodes___CallExprObject *)cpy_r_r15)->_arg_names;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_kinds;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_names;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_obj();
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 283, CPyStatic_stats___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *)cpy_r_r19)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *)cpy_r_r19)->___mypyc_env__);
    }
    ((mypy___stats_____mypyc_lambda__0_record_callable_target_precision_StatisticsVisitor_objObject *)cpy_r_r19)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 283, CPyStatic_stats___globals);
        goto CPyL42;
    }
    cpy_r_r21 = CPyDef_argmap___map_formals_to_actuals(cpy_r_r14, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 278, CPyStatic_stats___globals);
        goto CPyL37;
    }
    cpy_r_actual_to_formal = cpy_r_r21;
    cpy_r_r22 = 0;
CPyL17: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_actual_to_formal)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL43;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_actual_to_formal, cpy_r_r22);
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_callable_target_precision", 285, CPyStatic_stats___globals, "list", cpy_r_r27);
        goto CPyL44;
    }
    cpy_r_formals = cpy_r_r28;
    cpy_r_r29 = 0;
CPyL20: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_formals)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL45;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_formals, cpy_r_r29);
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 286, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_n = cpy_r_r35;
    cpy_r_r36 = ((mypy___types___CallableTypeObject *)cpy_r_callee)->_arg_types;
    cpy_r_r37 = CPyList_GetItem(cpy_r_r36, cpy_r_n);
    CPyTagged_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 287, CPyStatic_stats___globals);
        goto CPyL46;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_types___Type)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_callable_target_precision", 287, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r37);
        goto CPyL46;
    }
    cpy_r_r39 = CPyDef_types___get_proper_type(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 287, CPyStatic_stats___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_callable_target_precision", 287, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_r39);
        goto CPyL46;
    }
    cpy_r_formal = cpy_r_r40;
    cpy_r_r41 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_formal)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (cpy_r_r44) {
        goto CPyL47;
    } else
        goto CPyL29;
CPyL27: ;
    cpy_r_r45 = ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_callable_target_precision", "record_callable_target_precision_StatisticsVisitor_env", "o", 289, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r45);
CPyL28: ;
    cpy_r_r46 = ((mypy___nodes___CallExprObject *)cpy_r_r45)->_line;
    CPyTagged_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r46, 8);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 289, CPyStatic_stats___globals);
        goto CPyL46;
    } else
        goto CPyL33;
CPyL29: ;
    cpy_r_r48 = CPyDef_stats___is_imprecise(cpy_r_formal);
    CPy_DECREF(cpy_r_formal);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 290, CPyStatic_stats___globals);
        goto CPyL46;
    }
    if (!cpy_r_r48) goto CPyL33;
    cpy_r_r49 = ((mypy___stats___record_callable_target_precision_StatisticsVisitor_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_callable_target_precision", "record_callable_target_precision_StatisticsVisitor_env", "o", 291, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r49);
CPyL32: ;
    cpy_r_r50 = ((mypy___nodes___CallExprObject *)cpy_r_r49)->_line;
    CPyTagged_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r50, 6);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 291, CPyStatic_stats___globals);
        goto CPyL46;
    }
CPyL33: ;
    cpy_r_r52 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r52;
    goto CPyL20;
CPyL34: ;
    cpy_r_r53 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r53;
    goto CPyL17;
CPyL35: ;
    return 1;
CPyL36: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL36;
CPyL38: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL36;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_actual_to_formal);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_actual_to_formal);
    goto CPyL36;
CPyL45: ;
    CPy_DECREF(cpy_r_formals);
    goto CPyL34;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_actual_to_formal);
    CPy_DecRef(cpy_r_formals);
    goto CPyL36;
CPyL47: ;
    CPy_DECREF(cpy_r_formal);
    goto CPyL27;
}

PyObject *CPyPy_stats___StatisticsVisitor___record_callable_target_precision(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", "callee", 0};
    static CPyArg_Parser parser = {"OO:record_callable_target_precision", kwlist, 0};
    PyObject *obj_o;
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_o, &obj_callee)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely(Py_TYPE(obj_callee) == CPyType_types___CallableType))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_callee); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___record_callable_target_precision(arg_self, arg_o, arg_callee);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "record_callable_target_precision", 268, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_member_expr", 294, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_member_expr", 295, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_member_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_member_expr", 293, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_op_expr", 298, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_op_expr", 299, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_op_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_op_expr", 297, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_op_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_op_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_op_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_op_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_comparison_expr", 302, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_comparison_expr", 303, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_comparison_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_comparison_expr", 301, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_comparison_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_comparison_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_comparison_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_comparison_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_index_expr", 306, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_index_expr", 307, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_index_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_index_expr", 305, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_index_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_index_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_index_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_index_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_expr", 310, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_assignment_expr", 311, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_assignment_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_assignment_expr", 309, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_assignment_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_assignment_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_assignment_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_assignment_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___process_node(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_unary_expr", 314, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_unary_expr", 315, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_unary_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_unary_expr", 313, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_unary_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_unary_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_unary_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_unary_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_str_expr", 318, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_str_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_str_expr", 317, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_str_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_str_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_str_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_str_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_bytes_expr", 321, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_bytes_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_bytes_expr", 320, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_bytes_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_bytes_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_bytes_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_bytes_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_bytes_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_bytes_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_bytes_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_bytes_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_int_expr", 324, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_int_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_int_expr", 323, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_int_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_int_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_int_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_int_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_float_expr", 327, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_float_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_float_expr", 326, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_float_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_float_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_float_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_float_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_complex_expr", 330, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_complex_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_complex_expr", 329, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_complex_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_complex_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_complex_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_complex_expr__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_complex_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_complex_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_complex_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_complex_expr__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_ellipsis", 333, CPyStatic_stats___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___visit_ellipsis(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_ellipsis", 332, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_ellipsis__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_ellipsis__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_ellipsis__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_ellipsis__NodeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___StatisticsVisitor___visit_ellipsis__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___StatisticsVisitor___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___StatisticsVisitor___visit_ellipsis__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___StatisticsVisitor___visit_ellipsis__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_ellipsis__ExpressionVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___process_node(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_all_nodes;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/stats.py", "process_node", "StatisticsVisitor", "all_nodes", 338, CPyStatic_stats___globals);
        goto CPyL12;
    }
CPyL1: ;
    if (!cpy_r_r0) goto CPyL11;
CPyL2: ;
    cpy_r_r1 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "process_node", "StatisticsVisitor", "typemap", 339, CPyStatic_stats___globals);
        goto CPyL12;
    }
CPyL3: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL11;
    cpy_r_r4 = ((mypy___nodes___ContextObject *)cpy_r_node)->_line;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "process_node", "Expression", "line", 340, CPyStatic_stats___globals);
        goto CPyL12;
    }
    CPyTagged_INCREF(cpy_r_r4);
CPyL5: ;
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/stats.py", "process_node", 340, CPyStatic_stats___globals);
        goto CPyL12;
    }
    cpy_r_r6 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "process_node", "StatisticsVisitor", "typemap", 341, CPyStatic_stats___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "process_node", 341, CPyStatic_stats___globals, "dict", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_r8 = CPyDict_GetWithNone(cpy_r_r7, cpy_r_node);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "process_node", 341, CPyStatic_stats___globals);
        goto CPyL12;
    }
    if (PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL6867;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL6867;
    CPy_TypeErrorTraceback("mypy/stats.py", "process_node", 341, CPyStatic_stats___globals, "mypy.types.Type or None", cpy_r_r8);
    goto CPyL12;
__LL6867: ;
    cpy_r_r10 = CPyDef_stats___StatisticsVisitor___type(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "process_node", 341, CPyStatic_stats___globals);
        goto CPyL12;
    }
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_stats___StatisticsVisitor___process_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:process_node", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___process_node(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "process_node", 337, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_kind;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r1 = CPy_TypeCheck(cpy_r_node, cpy_r_r0);
    if (!cpy_r_r1) goto CPyL11;
    cpy_r_r2 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_precise_if_checked_scope", "StatisticsVisitor", "typemap", 344, CPyStatic_stats___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL19;
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r5 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_precise_if_checked_scope", 344, CPyStatic_stats___globals, "dict", cpy_r_r2);
        goto CPyL18;
    }
    cpy_r_r6 = PyDict_Size(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL11;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_precise_if_checked_scope", 344, CPyStatic_stats___globals, "mypy.nodes.Expression", cpy_r_node);
        goto CPyL18;
    }
    cpy_r_r10 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_precise_if_checked_scope", "StatisticsVisitor", "typemap", 344, CPyStatic_stats___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "record_precise_if_checked_scope", 344, CPyStatic_stats___globals, "dict", cpy_r_r10);
        goto CPyL20;
    }
    cpy_r_r12 = PyDict_Contains(cpy_r_r11, cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/stats.py", "record_precise_if_checked_scope", 344, CPyStatic_stats___globals);
        goto CPyL18;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_kind = 2;
    goto CPyL15;
CPyL11: ;
    cpy_r_r16 = CPyDef_stats___StatisticsVisitor___is_checked_scope(cpy_r_self);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "record_precise_if_checked_scope", 346, CPyStatic_stats___globals);
        goto CPyL18;
    }
    if (!cpy_r_r16) goto CPyL14;
    cpy_r_kind = 4;
    goto CPyL15;
CPyL14: ;
    cpy_r_kind = 8;
CPyL15: ;
    cpy_r_r17 = ((mypy___nodes___NodeObject *)cpy_r_node)->_line;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "record_precise_if_checked_scope", "Node", "line", 350, CPyStatic_stats___globals);
        goto CPyL21;
    }
    CPyTagged_INCREF(cpy_r_r17);
CPyL16: ;
    cpy_r_r18 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r17, cpy_r_kind);
    CPyTagged_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "record_precise_if_checked_scope", 350, CPyStatic_stats___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL19: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL11;
CPyL20: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL18;
CPyL21: ;
    CPyTagged_DecRef(cpy_r_kind);
    goto CPyL18;
}

PyObject *CPyPy_stats___StatisticsVisitor___record_precise_if_checked_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:record_precise_if_checked_scope", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Node)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_node); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___record_precise_if_checked_scope(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "record_precise_if_checked_scope", 343, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    CPyPtr cpy_r_r122;
    int64_t cpy_r_r123;
    CPyTagged cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_arg;
    char cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyTagged cpy_r_r130;
    CPyTagged cpy_r_r131;
    char cpy_r_r132;
    CPyTagged cpy_r_r133;
    CPyTagged cpy_r_r134;
    char cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyTagged cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    CPyPtr cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyPtr cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    CPyTagged cpy_r_r148;
    CPyTagged cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyPtr cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyTagged cpy_r_r158;
    CPyPtr cpy_r_r159;
    int64_t cpy_r_r160;
    CPyTagged cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_item;
    char cpy_r_r165;
    CPyTagged cpy_r_r166;
    CPyTagged cpy_r_r167;
    CPyTagged cpy_r_r168;
    char cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyTagged cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    CPyPtr cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    CPyTagged cpy_r_r177;
    CPyTagged cpy_r_r178;
    char cpy_r_r179;
    CPyTagged cpy_r_r180;
    char cpy_r_r181;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 353, CPyStatic_stats___globals);
        goto CPyL127;
    }
    cpy_r_t = cpy_r_r0;
    CPy_INCREF(cpy_r_t);
    if (PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType))
        cpy_r_r1 = cpy_r_t;
    else {
        cpy_r_r1 = NULL;
    }
    if (cpy_r_r1 != NULL) goto __LL6868;
    if (cpy_r_t == Py_None)
        cpy_r_r1 = cpy_r_t;
    else {
        cpy_r_r1 = NULL;
    }
    if (cpy_r_r1 != NULL) goto __LL6868;
    CPy_TypeErrorTraceback("mypy/stats.py", "type", 355, CPyStatic_stats___globals, "mypy.types.ProperType or None", cpy_r_t);
    goto CPyL128;
__LL6868: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    if (cpy_r_r3) {
        goto CPyL6;
    } else
        goto CPyL129;
CPyL3: ;
    cpy_r_r4 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 359, CPyStatic_stats___globals);
        goto CPyL127;
    }
    CPyTagged_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r4, 2);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 359, CPyStatic_stats___globals);
        goto CPyL127;
    }
    return 1;
CPyL6: ;
    cpy_r_r6 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL13;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___AnyType))
        cpy_r_r10 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 362, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_t);
        goto CPyL128;
    }
    cpy_r_r11 = CPyDef_stats___is_special_form_any(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 362, CPyStatic_stats___globals);
        goto CPyL128;
    }
    if (cpy_r_r11) {
        goto CPyL130;
    } else
        goto CPyL13;
CPyL10: ;
    cpy_r_r12 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 364, CPyStatic_stats___globals);
        goto CPyL127;
    }
    CPyTagged_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r12, 4);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 364, CPyStatic_stats___globals);
        goto CPyL127;
    }
    return 1;
CPyL13: ;
    cpy_r_r14 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL22;
    cpy_r_r18 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 368, CPyStatic_stats___globals);
        goto CPyL128;
    }
    CPyTagged_INCREF(cpy_r_r18);
CPyL15: ;
    cpy_r_r19 = CPyTagged_Str(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 368, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r20 = CPyStatics[5455]; /* '  !! Any type around line ' */
    cpy_r_r21 = CPyStr_Build(2, cpy_r_r20, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 368, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r22 = CPyDef_stats___StatisticsVisitor___log(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 368, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r23 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs;
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_any_exprs", 369, CPyStatic_stats___globals);
        goto CPyL128;
    }
CPyL19: ;
    cpy_r_r24 = CPyTagged_Add(cpy_r_r23, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_exprs = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/stats.py", "type", 369, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r26 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 370, CPyStatic_stats___globals);
        goto CPyL128;
    }
    CPyTagged_INCREF(cpy_r_r26);
CPyL21: ;
    cpy_r_r27 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r26, 8);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 370, CPyStatic_stats___globals);
        goto CPyL128;
    } else
        goto CPyL44;
CPyL22: ;
    cpy_r_r28 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_all_nodes;
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "all_nodes", 371, CPyStatic_stats___globals);
        goto CPyL128;
    }
CPyL23: ;
    if (cpy_r_r28) goto CPyL27;
CPyL24: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r29 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 371, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL128;
    }
    cpy_r_r30 = CPyDef_stats___is_imprecise(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 371, CPyStatic_stats___globals);
        goto CPyL128;
    }
    if (cpy_r_r30) goto CPyL32;
CPyL27: ;
    cpy_r_r31 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_all_nodes;
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "all_nodes", 371, CPyStatic_stats___globals);
        goto CPyL128;
    }
CPyL28: ;
    if (!cpy_r_r31) goto CPyL40;
CPyL29: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r32 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 371, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL128;
    }
    cpy_r_r33 = CPyDef_stats___is_imprecise2(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 371, CPyStatic_stats___globals);
        goto CPyL128;
    }
    if (!cpy_r_r33) goto CPyL40;
CPyL32: ;
    cpy_r_r34 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 372, CPyStatic_stats___globals);
        goto CPyL128;
    }
    CPyTagged_INCREF(cpy_r_r34);
CPyL33: ;
    cpy_r_r35 = CPyTagged_Str(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 372, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r36 = CPyStatics[5456]; /* '  !! Imprecise type around line ' */
    cpy_r_r37 = CPyStr_Build(2, cpy_r_r36, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 372, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r38 = CPyDef_stats___StatisticsVisitor___log(cpy_r_self, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 372, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r39 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs;
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_imprecise_exprs", 373, CPyStatic_stats___globals);
        goto CPyL128;
    }
CPyL37: ;
    cpy_r_r40 = CPyTagged_Add(cpy_r_r39, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_imprecise_exprs = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/stats.py", "type", 373, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r42 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 374, CPyStatic_stats___globals);
        goto CPyL128;
    }
    CPyTagged_INCREF(cpy_r_r42);
CPyL39: ;
    cpy_r_r43 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r42, 6);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 374, CPyStatic_stats___globals);
        goto CPyL128;
    } else
        goto CPyL44;
CPyL40: ;
    cpy_r_r44 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs;
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_precise_exprs", 376, CPyStatic_stats___globals);
        goto CPyL128;
    }
CPyL41: ;
    cpy_r_r45 = CPyTagged_Add(cpy_r_r44, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_precise_exprs = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/stats.py", "type", 376, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r47 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 377, CPyStatic_stats___globals);
        goto CPyL128;
    }
    CPyTagged_INCREF(cpy_r_r47);
CPyL43: ;
    cpy_r_r48 = CPyDef_stats___StatisticsVisitor___record_line(cpy_r_self, cpy_r_r47, 4);
    CPyTagged_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 377, CPyStatic_stats___globals);
        goto CPyL128;
    }
CPyL44: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r49 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL128;
    }
    cpy_r_r50 = CPyDef_typeanal___collect_all_inner_types(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals);
        goto CPyL128;
    }
    cpy_r_r51 = CPyDef_types___get_proper_types(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals);
        goto CPyL128;
    }
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r52 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL131;
    }
    cpy_r_r53 = PyList_New(1);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals);
        goto CPyL132;
    }
    cpy_r_r54 = (CPyPtr)&((PyListObject *)cpy_r_r53)->ob_item;
    cpy_r_r55 = *(CPyPtr *)cpy_r_r54;
    *(PyObject * *)cpy_r_r55 = cpy_r_r52;
    cpy_r_r56 = PyNumber_Add(cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals);
        goto CPyL127;
    }
    if (likely(PyList_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals, "list", cpy_r_r56);
        goto CPyL127;
    }
    cpy_r_r58 = 0;
CPyL52: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_r57)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL133;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_r57, cpy_r_r58);
    if (likely(PyObject_TypeCheck(cpy_r_r63, CPyType_types___ProperType)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 379, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_r63);
        goto CPyL134;
    }
    cpy_r_typ = cpy_r_r64;
    cpy_r_r65 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL82;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r69 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 381, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL134;
    }
    cpy_r_r70 = CPyDef_stats___get_original_any(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 381, CPyStatic_stats___globals);
        goto CPyL134;
    }
    cpy_r_typ = cpy_r_r70;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r71 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 382, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL135;
    }
    cpy_r_r72 = CPyDef_stats___is_special_form_any(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 382, CPyStatic_stats___globals);
        goto CPyL135;
    }
    if (cpy_r_r72) goto CPyL136;
    cpy_r_r73 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_type_of_any_counter;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "type_of_any_counter", 384, CPyStatic_stats___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r73);
CPyL61: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r74 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 384, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL137;
    }
    cpy_r_r75 = ((mypy___types___AnyTypeObject *)cpy_r_r74)->_type_of_any;
    CPyTagged_INCREF(cpy_r_r75);
    CPyTagged_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyTagged_StealAsObject(cpy_r_r75);
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r73, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 384, CPyStatic_stats___globals);
        goto CPyL138;
    }
    cpy_r_r78 = CPyStatics[9016]; /* 1 */
    cpy_r_r79 = PyNumber_InPlaceAdd(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 384, CPyStatic_stats___globals);
        goto CPyL138;
    }
    cpy_r_r80 = CPyTagged_StealAsObject(cpy_r_r75);
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r73, cpy_r_r80, cpy_r_r79);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/stats.py", "type", 384, CPyStatic_stats___globals);
        goto CPyL135;
    }
    cpy_r_r83 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types;
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_any_types", 385, CPyStatic_stats___globals);
        goto CPyL135;
    }
CPyL66: ;
    cpy_r_r84 = CPyTagged_Add(cpy_r_r83, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_any_types = cpy_r_r84;
    cpy_r_r85 = 1;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/stats.py", "type", 385, CPyStatic_stats___globals);
        goto CPyL135;
    }
    cpy_r_r86 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r86 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 386, CPyStatic_stats___globals);
        goto CPyL135;
    }
    CPyTagged_INCREF(cpy_r_r86);
CPyL68: ;
    cpy_r_r87 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_any_line_map;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "any_line_map", 386, CPyStatic_stats___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r87);
CPyL69: ;
    cpy_r_r88 = CPyTagged_StealAsObject(cpy_r_r86);
    cpy_r_r89 = PyDict_Contains(cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/stats.py", "type", 386, CPyStatic_stats___globals);
        goto CPyL135;
    }
    cpy_r_r91 = cpy_r_r89;
    if (!cpy_r_r91) goto CPyL77;
    cpy_r_r92 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_any_line_map;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "any_line_map", 387, CPyStatic_stats___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r92);
CPyL72: ;
    cpy_r_r93 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r93 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 387, CPyStatic_stats___globals);
        goto CPyL140;
    }
    CPyTagged_INCREF(cpy_r_r93);
CPyL73: ;
    cpy_r_r94 = CPyTagged_StealAsObject(cpy_r_r93);
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r92, cpy_r_r94);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 387, CPyStatic_stats___globals);
        goto CPyL135;
    }
    if (likely(PyList_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 387, CPyStatic_stats___globals, "list", cpy_r_r95);
        goto CPyL135;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r97 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 387, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL141;
    }
    cpy_r_r98 = PyList_Append(cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/stats.py", "type", 387, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL77: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r100 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 389, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL134;
    }
    cpy_r_r101 = PyList_New(1);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 389, CPyStatic_stats___globals);
        goto CPyL142;
    }
    cpy_r_r102 = (CPyPtr)&((PyListObject *)cpy_r_r101)->ob_item;
    cpy_r_r103 = *(CPyPtr *)cpy_r_r102;
    *(PyObject * *)cpy_r_r103 = cpy_r_r100;
    cpy_r_r104 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_any_line_map;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "any_line_map", 389, CPyStatic_stats___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r104);
CPyL80: ;
    cpy_r_r105 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r105 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "line", 389, CPyStatic_stats___globals);
        goto CPyL144;
    }
    CPyTagged_INCREF(cpy_r_r105);
CPyL81: ;
    cpy_r_r106 = CPyTagged_StealAsObject(cpy_r_r105);
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r104, cpy_r_r106, cpy_r_r101);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/stats.py", "type", 389, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL82: ;
    cpy_r_r109 = (PyObject *)CPyType_types___Instance;
    cpy_r_r110 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r111 = *(PyObject * *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 == cpy_r_r109;
    if (!cpy_r_r112) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r113 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 391, CPyStatic_stats___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL135;
    }
    cpy_r_r114 = ((mypy___types___InstanceObject *)cpy_r_r113)->_args;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = PyObject_IsTrue(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/stats.py", "type", 391, CPyStatic_stats___globals);
        goto CPyL135;
    }
    cpy_r_r117 = cpy_r_r115;
    if (!cpy_r_r117) goto CPyL145;
    cpy_r_r118 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r119 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 392, CPyStatic_stats___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL135;
    }
    cpy_r_r120 = ((mypy___types___InstanceObject *)cpy_r_r119)->_args;
    CPy_INCREF(cpy_r_r120);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r121 = 0;
CPyL88: ;
    cpy_r_r122 = (CPyPtr)&((PyVarObject *)cpy_r_r120)->ob_size;
    cpy_r_r123 = *(int64_t *)cpy_r_r122;
    cpy_r_r124 = cpy_r_r123 << 1;
    cpy_r_r125 = (Py_ssize_t)cpy_r_r121 < (Py_ssize_t)cpy_r_r124;
    if (!cpy_r_r125) goto CPyL146;
    cpy_r_r126 = CPySequenceTuple_GetItem(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "type", 392, CPyStatic_stats___globals);
        goto CPyL147;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r126, CPyType_types___Type)))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 392, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r126);
        goto CPyL147;
    }
    cpy_r_arg = cpy_r_r127;
    cpy_r_r128 = CPyDef_stats___is_complex(cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r128 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 392, CPyStatic_stats___globals);
        goto CPyL147;
    }
    if (cpy_r_r128) {
        goto CPyL148;
    } else
        goto CPyL94;
CPyL93: ;
    cpy_r_r118 = 1;
    goto CPyL95;
CPyL94: ;
    cpy_r_r129 = cpy_r_r121 + 2;
    cpy_r_r121 = cpy_r_r129;
    goto CPyL88;
CPyL95: ;
    if (!cpy_r_r118) goto CPyL98;
    cpy_r_r130 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types;
    if (unlikely(cpy_r_r130 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_complex_types", 393, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL97: ;
    cpy_r_r131 = CPyTagged_Add(cpy_r_r130, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types = cpy_r_r131;
    cpy_r_r132 = 1;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/stats.py", "type", 393, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL98: ;
    cpy_r_r133 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types;
    if (unlikely(cpy_r_r133 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_generic_types", 395, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL99: ;
    cpy_r_r134 = CPyTagged_Add(cpy_r_r133, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_generic_types = cpy_r_r134;
    cpy_r_r135 = 1;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/stats.py", "type", 395, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL100: ;
    cpy_r_r136 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types;
    if (unlikely(cpy_r_r136 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_simple_types", 397, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL101: ;
    cpy_r_r137 = CPyTagged_Add(cpy_r_r136, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_simple_types = cpy_r_r137;
    cpy_r_r138 = 1;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/stats.py", "type", 397, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL102: ;
    cpy_r_r139 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r140 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r141 = *(PyObject * *)cpy_r_r140;
    cpy_r_r142 = cpy_r_r141 == cpy_r_r139;
    if (!cpy_r_r142) goto CPyL104;
    cpy_r_r143 = cpy_r_r142;
    goto CPyL105;
CPyL104: ;
    cpy_r_r144 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r145 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r146 = *(PyObject * *)cpy_r_r145;
    cpy_r_r147 = cpy_r_r146 == cpy_r_r144;
    cpy_r_r143 = cpy_r_r147;
CPyL105: ;
    if (cpy_r_r143) {
        goto CPyL149;
    } else
        goto CPyL108;
CPyL106: ;
    cpy_r_r148 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types;
    if (unlikely(cpy_r_r148 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_function_types", 399, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL107: ;
    cpy_r_r149 = CPyTagged_Add(cpy_r_r148, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_function_types = cpy_r_r149;
    cpy_r_r150 = 1;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/stats.py", "type", 399, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL108: ;
    cpy_r_r151 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r152 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r153 = *(PyObject * *)cpy_r_r152;
    cpy_r_r154 = cpy_r_r153 == cpy_r_r151;
    if (!cpy_r_r154) goto CPyL122;
    cpy_r_r155 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r156 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 401, CPyStatic_stats___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL135;
    }
    cpy_r_r157 = ((mypy___types___TupleTypeObject *)cpy_r_r156)->_items;
    CPy_INCREF(cpy_r_r157);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r158 = 0;
CPyL111: ;
    cpy_r_r159 = (CPyPtr)&((PyVarObject *)cpy_r_r157)->ob_size;
    cpy_r_r160 = *(int64_t *)cpy_r_r159;
    cpy_r_r161 = cpy_r_r160 << 1;
    cpy_r_r162 = (Py_ssize_t)cpy_r_r158 < (Py_ssize_t)cpy_r_r161;
    if (!cpy_r_r162) goto CPyL150;
    cpy_r_r163 = CPyList_GetItemUnsafe(cpy_r_r157, cpy_r_r158);
    if (likely(PyObject_TypeCheck(cpy_r_r163, CPyType_types___Type)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "type", 401, CPyStatic_stats___globals, "mypy.types.Type", cpy_r_r163);
        goto CPyL151;
    }
    cpy_r_item = cpy_r_r164;
    cpy_r_r165 = CPyDef_stats___is_complex(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "type", 401, CPyStatic_stats___globals);
        goto CPyL151;
    }
    if (cpy_r_r165) {
        goto CPyL152;
    } else
        goto CPyL116;
CPyL115: ;
    cpy_r_r155 = 1;
    goto CPyL117;
CPyL116: ;
    cpy_r_r166 = cpy_r_r158 + 2;
    cpy_r_r158 = cpy_r_r166;
    goto CPyL111;
CPyL117: ;
    if (!cpy_r_r155) goto CPyL120;
    cpy_r_r167 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types;
    if (unlikely(cpy_r_r167 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_complex_types", 402, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL119: ;
    cpy_r_r168 = CPyTagged_Add(cpy_r_r167, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_complex_types = cpy_r_r168;
    cpy_r_r169 = 1;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/stats.py", "type", 402, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL120: ;
    cpy_r_r170 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types;
    if (unlikely(cpy_r_r170 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_tuple_types", 404, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL121: ;
    cpy_r_r171 = CPyTagged_Add(cpy_r_r170, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_tuple_types = cpy_r_r171;
    cpy_r_r172 = 1;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/stats.py", "type", 404, CPyStatic_stats___globals);
        goto CPyL134;
    } else
        goto CPyL125;
CPyL122: ;
    cpy_r_r173 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r174 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r175 = *(PyObject * *)cpy_r_r174;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r176 = cpy_r_r175 == cpy_r_r173;
    if (!cpy_r_r176) goto CPyL125;
    cpy_r_r177 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types;
    if (unlikely(cpy_r_r177 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "type", "StatisticsVisitor", "num_typevar_types", 406, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL124: ;
    cpy_r_r178 = CPyTagged_Add(cpy_r_r177, 2);
    if (((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types);
    }
    ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_num_typevar_types = cpy_r_r178;
    cpy_r_r179 = 1;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypy/stats.py", "type", 406, CPyStatic_stats___globals);
        goto CPyL134;
    }
CPyL125: ;
    cpy_r_r180 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r180;
    goto CPyL52;
CPyL126: ;
    return 1;
CPyL127: ;
    cpy_r_r181 = 2;
    return cpy_r_r181;
CPyL128: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL127;
CPyL129: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL3;
CPyL130: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL10;
CPyL131: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL127;
CPyL132: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL127;
CPyL133: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL126;
CPyL134: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL127;
CPyL135: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_typ);
    goto CPyL127;
CPyL136: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL125;
CPyL137: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r73);
    goto CPyL127;
CPyL138: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r73);
    CPyTagged_DecRef(cpy_r_r75);
    goto CPyL127;
CPyL139: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_typ);
    CPyTagged_DecRef(cpy_r_r86);
    goto CPyL127;
CPyL140: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r92);
    goto CPyL127;
CPyL141: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r96);
    goto CPyL127;
CPyL142: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r100);
    goto CPyL127;
CPyL143: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r101);
    goto CPyL127;
CPyL144: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r104);
    goto CPyL127;
CPyL145: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL100;
CPyL146: ;
    CPy_DECREF(cpy_r_r120);
    goto CPyL95;
CPyL147: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r120);
    goto CPyL127;
CPyL148: ;
    CPy_DECREF(cpy_r_r120);
    goto CPyL93;
CPyL149: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL106;
CPyL150: ;
    CPy_DECREF(cpy_r_r157);
    goto CPyL117;
CPyL151: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r157);
    goto CPyL127;
CPyL152: ;
    CPy_DECREF(cpy_r_r157);
    goto CPyL115;
}

PyObject *CPyPy_stats___StatisticsVisitor___type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (PyObject_TypeCheck(obj_t, CPyType_types___Type))
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL6869;
    if (obj_t == Py_None)
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL6869;
    CPy_TypeError("mypy.types.Type or None", obj_t); 
    goto fail;
__LL6869: ;
    char retval = CPyDef_stats___StatisticsVisitor___type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "type", 352, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___log(PyObject *cpy_r_self, PyObject *cpy_r_string) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_output;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "log", "StatisticsVisitor", "output", 409, CPyStatic_stats___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyList_Append(cpy_r_r0, cpy_r_string);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/stats.py", "log", 409, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_stats___StatisticsVisitor___log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"string", 0};
    static CPyArg_Parser parser = {"O:log", kwlist, 0};
    PyObject *obj_string;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_string)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_string;
    if (likely(PyUnicode_Check(obj_string)))
        arg_string = obj_string;
    else {
        CPy_TypeError("str", obj_string); 
        goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___log(arg_self, arg_string);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "log", 408, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___StatisticsVisitor___record_line(PyObject *cpy_r_self, CPyTagged cpy_r_line, CPyTagged cpy_r_precision) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_line", "StatisticsVisitor", "line_map", 412, CPyStatic_stats___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r1 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r2 = CPyStatics[9015]; /* 0 */
    cpy_r_r3 = CPyDict_Get(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "record_line", 412, CPyStatic_stats___globals);
        goto CPyL12;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/stats.py", "record_line", 412, CPyStatic_stats___globals);
        goto CPyL12;
    }
    cpy_r_r5 = cpy_r_r4 & 1;
    cpy_r_r6 = cpy_r_r5 == 0;
    cpy_r_r7 = cpy_r_precision & 1;
    cpy_r_r8 = cpy_r_r7 == 0;
    cpy_r_r9 = cpy_r_r6 & cpy_r_r8;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)cpy_r_precision;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL6;
CPyL5: ;
    cpy_r_r12 = CPyTagged_IsLt_(cpy_r_precision, cpy_r_r4);
    cpy_r_r11 = cpy_r_r12;
CPyL6: ;
    if (!cpy_r_r11) goto CPyL13;
    cpy_r_r13 = cpy_r_r4;
    goto CPyL9;
CPyL8: ;
    CPyTagged_INCREF(cpy_r_precision);
    cpy_r_r13 = cpy_r_precision;
CPyL9: ;
    cpy_r_r14 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_self)->_line_map;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "record_line", "StatisticsVisitor", "line_map", 412, CPyStatic_stats___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r14);
CPyL10: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r17 = CPyDict_SetItem(cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/stats.py", "record_line", 412, CPyStatic_stats___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL13: ;
    CPyTagged_DECREF(cpy_r_r4);
    goto CPyL8;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_r13);
    goto CPyL12;
}

PyObject *CPyPy_stats___StatisticsVisitor___record_line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "precision", 0};
    static CPyArg_Parser parser = {"OO:record_line", kwlist, 0};
    PyObject *obj_line;
    PyObject *obj_precision;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_line, &obj_precision)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___StatisticsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.StatisticsVisitor", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_precision;
    if (likely(PyLong_Check(obj_precision)))
        arg_precision = CPyTagged_BorrowFromObject(obj_precision);
    else {
        CPy_TypeError("int", obj_precision); goto fail;
    }
    char retval = CPyDef_stats___StatisticsVisitor___record_line(arg_self, arg_line, arg_precision);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "record_line", 411, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___dump_type_stats(PyObject *cpy_r_tree, PyObject *cpy_r_path, PyObject *cpy_r_modules, char cpy_r_inferred, PyObject *cpy_r_typemap) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject **cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    if (cpy_r_inferred != 2) goto CPyL2;
    cpy_r_inferred = 0;
CPyL2: ;
    if (cpy_r_typemap != NULL) goto CPyL56;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typemap = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_stats___is_special_module(cpy_r_path);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 422, CPyStatic_stats___globals);
        goto CPyL57;
    }
    if (cpy_r_r1) {
        goto CPyL58;
    } else
        goto CPyL7;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[190]; /* 'print' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 424, CPyStatic_stats___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 424, CPyStatic_stats___globals);
        goto CPyL57;
    } else
        goto CPyL59;
CPyL9: ;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_tree, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 425, CPyStatic_stats___globals);
        goto CPyL57;
    }
CPyL10: ;
    cpy_r_r9 = 2;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_stats___StatisticsVisitor(cpy_r_inferred, cpy_r_r8, cpy_r_modules, cpy_r_typemap, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_typemap);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 425, CPyStatic_stats___globals);
        goto CPyL55;
    }
    cpy_r_visitor = cpy_r_r11;
    cpy_r_r12 = CPyDef_nodes___MypyFile___accept(cpy_r_tree, cpy_r_visitor);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 426, CPyStatic_stats___globals);
        goto CPyL60;
    } else
        goto CPyL61;
CPyL12: ;
    cpy_r_r13 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_output;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "output", 427, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r13);
CPyL13: ;
    cpy_r_r14 = 0;
CPyL14: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL62;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "dump_type_stats", 427, CPyStatic_stats___globals, "str", cpy_r_r19);
        goto CPyL63;
    }
    cpy_r_line = cpy_r_r20;
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[190]; /* 'print' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 428, CPyStatic_stats___globals);
        goto CPyL64;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_line};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 428, CPyStatic_stats___globals);
        goto CPyL64;
    } else
        goto CPyL65;
CPyL18: ;
    CPy_DECREF(cpy_r_line);
    cpy_r_r27 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r27;
    goto CPyL14;
CPyL20: ;
    cpy_r_r28 = CPyStatics[5457]; /* '  ** precision **' */
    cpy_r_r29 = CPyModule_builtins;
    cpy_r_r30 = CPyStatics[190]; /* 'print' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 429, CPyStatic_stats___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r32[1] = {cpy_r_r28};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 429, CPyStatic_stats___globals);
        goto CPyL60;
    } else
        goto CPyL66;
CPyL22: ;
    cpy_r_r35 = CPyStatics[5458]; /* '  precise  ' */
    cpy_r_r36 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_precise_exprs;
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_precise_exprs", 430, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r36);
CPyL23: ;
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[190]; /* 'print' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 430, CPyStatic_stats___globals);
        goto CPyL67;
    }
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r36);
    PyObject *cpy_r_r41[2] = {cpy_r_r35, cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r39, cpy_r_r42, 2, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 430, CPyStatic_stats___globals);
        goto CPyL68;
    } else
        goto CPyL69;
CPyL25: ;
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = CPyStatics[5459]; /* '  imprecise' */
    cpy_r_r45 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_imprecise_exprs;
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_imprecise_exprs", 431, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r45);
CPyL26: ;
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[190]; /* 'print' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 431, CPyStatic_stats___globals);
        goto CPyL70;
    }
    cpy_r_r49 = CPyTagged_StealAsObject(cpy_r_r45);
    PyObject *cpy_r_r50[2] = {cpy_r_r44, cpy_r_r49};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r51, 2, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 431, CPyStatic_stats___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL28: ;
    CPy_DECREF(cpy_r_r49);
    cpy_r_r53 = CPyStatics[5460]; /* '  any      ' */
    cpy_r_r54 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_any_exprs;
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_any_exprs", 432, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r54);
CPyL29: ;
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[190]; /* 'print' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 432, CPyStatic_stats___globals);
        goto CPyL73;
    }
    cpy_r_r58 = CPyTagged_StealAsObject(cpy_r_r54);
    PyObject *cpy_r_r59[2] = {cpy_r_r53, cpy_r_r58};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r60, 2, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 432, CPyStatic_stats___globals);
        goto CPyL74;
    } else
        goto CPyL75;
CPyL31: ;
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = CPyStatics[5461]; /* '  ** kinds **' */
    cpy_r_r63 = CPyModule_builtins;
    cpy_r_r64 = CPyStatics[190]; /* 'print' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 433, CPyStatic_stats___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r66[1] = {cpy_r_r62};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 433, CPyStatic_stats___globals);
        goto CPyL60;
    } else
        goto CPyL76;
CPyL33: ;
    cpy_r_r69 = CPyStatics[5462]; /* '  simple   ' */
    cpy_r_r70 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_simple_types;
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_simple_types", 434, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r70);
CPyL34: ;
    cpy_r_r71 = CPyModule_builtins;
    cpy_r_r72 = CPyStatics[190]; /* 'print' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 434, CPyStatic_stats___globals);
        goto CPyL77;
    }
    cpy_r_r74 = CPyTagged_StealAsObject(cpy_r_r70);
    PyObject *cpy_r_r75[2] = {cpy_r_r69, cpy_r_r74};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r76, 2, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 434, CPyStatic_stats___globals);
        goto CPyL78;
    } else
        goto CPyL79;
CPyL36: ;
    CPy_DECREF(cpy_r_r74);
    cpy_r_r78 = CPyStatics[5463]; /* '  generic  ' */
    cpy_r_r79 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_generic_types;
    if (unlikely(cpy_r_r79 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_generic_types", 435, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r79);
CPyL37: ;
    cpy_r_r80 = CPyModule_builtins;
    cpy_r_r81 = CPyStatics[190]; /* 'print' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 435, CPyStatic_stats___globals);
        goto CPyL80;
    }
    cpy_r_r83 = CPyTagged_StealAsObject(cpy_r_r79);
    PyObject *cpy_r_r84[2] = {cpy_r_r78, cpy_r_r83};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r85, 2, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 435, CPyStatic_stats___globals);
        goto CPyL81;
    } else
        goto CPyL82;
CPyL39: ;
    CPy_DECREF(cpy_r_r83);
    cpy_r_r87 = CPyStatics[5464]; /* '  function ' */
    cpy_r_r88 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_function_types;
    if (unlikely(cpy_r_r88 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_function_types", 436, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r88);
CPyL40: ;
    cpy_r_r89 = CPyModule_builtins;
    cpy_r_r90 = CPyStatics[190]; /* 'print' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 436, CPyStatic_stats___globals);
        goto CPyL83;
    }
    cpy_r_r92 = CPyTagged_StealAsObject(cpy_r_r88);
    PyObject *cpy_r_r93[2] = {cpy_r_r87, cpy_r_r92};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = _PyObject_Vectorcall(cpy_r_r91, cpy_r_r94, 2, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 436, CPyStatic_stats___globals);
        goto CPyL84;
    } else
        goto CPyL85;
CPyL42: ;
    CPy_DECREF(cpy_r_r92);
    cpy_r_r96 = CPyStatics[5465]; /* '  tuple    ' */
    cpy_r_r97 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_tuple_types;
    if (unlikely(cpy_r_r97 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_tuple_types", 437, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r97);
CPyL43: ;
    cpy_r_r98 = CPyModule_builtins;
    cpy_r_r99 = CPyStatics[190]; /* 'print' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 437, CPyStatic_stats___globals);
        goto CPyL86;
    }
    cpy_r_r101 = CPyTagged_StealAsObject(cpy_r_r97);
    PyObject *cpy_r_r102[2] = {cpy_r_r96, cpy_r_r101};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = _PyObject_Vectorcall(cpy_r_r100, cpy_r_r103, 2, 0);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 437, CPyStatic_stats___globals);
        goto CPyL87;
    } else
        goto CPyL88;
CPyL45: ;
    CPy_DECREF(cpy_r_r101);
    cpy_r_r105 = CPyStatics[5466]; /* '  TypeVar  ' */
    cpy_r_r106 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_typevar_types;
    if (unlikely(cpy_r_r106 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_typevar_types", 438, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r106);
CPyL46: ;
    cpy_r_r107 = CPyModule_builtins;
    cpy_r_r108 = CPyStatics[190]; /* 'print' */
    cpy_r_r109 = CPyObject_GetAttr(cpy_r_r107, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 438, CPyStatic_stats___globals);
        goto CPyL89;
    }
    cpy_r_r110 = CPyTagged_StealAsObject(cpy_r_r106);
    PyObject *cpy_r_r111[2] = {cpy_r_r105, cpy_r_r110};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r109, cpy_r_r112, 2, 0);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 438, CPyStatic_stats___globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL48: ;
    CPy_DECREF(cpy_r_r110);
    cpy_r_r114 = CPyStatics[5467]; /* '  complex  ' */
    cpy_r_r115 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_complex_types;
    if (unlikely(cpy_r_r115 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/stats.py", "dump_type_stats", "StatisticsVisitor", "num_complex_types", 439, CPyStatic_stats___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r115);
CPyL49: ;
    cpy_r_r116 = CPyModule_builtins;
    cpy_r_r117 = CPyStatics[190]; /* 'print' */
    cpy_r_r118 = CPyObject_GetAttr(cpy_r_r116, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 439, CPyStatic_stats___globals);
        goto CPyL92;
    }
    cpy_r_r119 = CPyTagged_StealAsObject(cpy_r_r115);
    PyObject *cpy_r_r120[2] = {cpy_r_r114, cpy_r_r119};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = _PyObject_Vectorcall(cpy_r_r118, cpy_r_r121, 2, 0);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 439, CPyStatic_stats___globals);
        goto CPyL93;
    } else
        goto CPyL94;
CPyL51: ;
    CPy_DECREF(cpy_r_r119);
    cpy_r_r123 = CPyStatics[5460]; /* '  any      ' */
    cpy_r_r124 = ((mypy___stats___StatisticsVisitorObject *)cpy_r_visitor)->_num_any_types;
    if (unlikely(cpy_r_r124 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'num_any_types' of 'StatisticsVisitor' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r124);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r124 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 440, CPyStatic_stats___globals);
        goto CPyL55;
    }
CPyL52: ;
    cpy_r_r125 = CPyModule_builtins;
    cpy_r_r126 = CPyStatics[190]; /* 'print' */
    cpy_r_r127 = CPyObject_GetAttr(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 440, CPyStatic_stats___globals);
        goto CPyL95;
    }
    cpy_r_r128 = CPyTagged_StealAsObject(cpy_r_r124);
    PyObject *cpy_r_r129[2] = {cpy_r_r123, cpy_r_r128};
    cpy_r_r130 = (PyObject **)&cpy_r_r129;
    cpy_r_r131 = _PyObject_Vectorcall(cpy_r_r127, cpy_r_r130, 2, 0);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 440, CPyStatic_stats___globals);
        goto CPyL96;
    } else
        goto CPyL97;
CPyL54: ;
    CPy_DECREF(cpy_r_r128);
    return 1;
CPyL55: ;
    cpy_r_r132 = 2;
    return cpy_r_r132;
CPyL56: ;
    CPy_INCREF(cpy_r_typemap);
    goto CPyL4;
CPyL57: ;
    CPy_DecRef(cpy_r_typemap);
    goto CPyL55;
CPyL58: ;
    CPy_DECREF(cpy_r_typemap);
    goto CPyL6;
CPyL59: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL9;
CPyL60: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL55;
CPyL61: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL12;
CPyL62: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL20;
CPyL63: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r13);
    goto CPyL55;
CPyL64: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_line);
    goto CPyL55;
CPyL65: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL18;
CPyL66: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL22;
CPyL67: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r36);
    goto CPyL55;
CPyL68: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r40);
    goto CPyL55;
CPyL69: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL25;
CPyL70: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r45);
    goto CPyL55;
CPyL71: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r49);
    goto CPyL55;
CPyL72: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL28;
CPyL73: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r54);
    goto CPyL55;
CPyL74: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r58);
    goto CPyL55;
CPyL75: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL31;
CPyL76: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL33;
CPyL77: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r70);
    goto CPyL55;
CPyL78: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r74);
    goto CPyL55;
CPyL79: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL36;
CPyL80: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r79);
    goto CPyL55;
CPyL81: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r83);
    goto CPyL55;
CPyL82: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL39;
CPyL83: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r88);
    goto CPyL55;
CPyL84: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r92);
    goto CPyL55;
CPyL85: ;
    CPy_DECREF(cpy_r_r95);
    goto CPyL42;
CPyL86: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r97);
    goto CPyL55;
CPyL87: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r101);
    goto CPyL55;
CPyL88: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL45;
CPyL89: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r106);
    goto CPyL55;
CPyL90: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r110);
    goto CPyL55;
CPyL91: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL48;
CPyL92: ;
    CPy_DecRef(cpy_r_visitor);
    CPyTagged_DecRef(cpy_r_r115);
    goto CPyL55;
CPyL93: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r119);
    goto CPyL55;
CPyL94: ;
    CPy_DECREF(cpy_r_r122);
    goto CPyL51;
CPyL95: ;
    CPyTagged_DecRef(cpy_r_r124);
    goto CPyL55;
CPyL96: ;
    CPy_DecRef(cpy_r_r128);
    goto CPyL55;
CPyL97: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL54;
}

PyObject *CPyPy_stats___dump_type_stats(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tree", "path", "modules", "inferred", "typemap", 0};
    static CPyArg_Parser parser = {"OOO|OO:dump_type_stats", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_path;
    PyObject *obj_modules;
    PyObject *obj_inferred = NULL;
    PyObject *obj_typemap = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_path, &obj_modules, &obj_inferred, &obj_typemap)) {
        return NULL;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char arg_inferred;
    if (obj_inferred == NULL) {
        arg_inferred = 2;
    } else if (unlikely(!PyBool_Check(obj_inferred))) {
        CPy_TypeError("bool", obj_inferred); goto fail;
    } else
        arg_inferred = obj_inferred == Py_True;
    PyObject *arg_typemap;
    if (obj_typemap == NULL) {
        arg_typemap = NULL;
        goto __LL6870;
    }
    if (PyDict_Check(obj_typemap))
        arg_typemap = obj_typemap;
    else {
        arg_typemap = NULL;
    }
    if (arg_typemap != NULL) goto __LL6870;
    if (obj_typemap == Py_None)
        arg_typemap = obj_typemap;
    else {
        arg_typemap = NULL;
    }
    if (arg_typemap != NULL) goto __LL6870;
    CPy_TypeError("dict or None", obj_typemap); 
    goto fail;
__LL6870: ;
    char retval = CPyDef_stats___dump_type_stats(arg_tree, arg_path, arg_modules, arg_inferred, arg_typemap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "dump_type_stats", 415, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___is_special_module(PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    cpy_r_r3 = CPyStatics[172]; /* 'basename' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals, "str", cpy_r_r7);
        goto CPyL28;
    }
    cpy_r_r9 = CPyStatics[5468]; /* 'abc.pyi' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL7;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", -1, CPyStatic_stats___globals);
        goto CPyL28;
    }
CPyL7: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL17;
CPyL9: ;
    cpy_r_r17 = CPyModule_os;
    cpy_r_r18 = CPyStatics[142]; /* 'path' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    cpy_r_r20 = CPyStatics[172]; /* 'basename' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_path};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals, "str", cpy_r_r24);
        goto CPyL28;
    }
    cpy_r_r26 = CPyStatics[5469]; /* 'typing.pyi' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL16;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", -1, CPyStatic_stats___globals);
        goto CPyL28;
    }
CPyL16: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    cpy_r_r16 = cpy_r_r32;
CPyL17: ;
    if (!cpy_r_r16) goto CPyL19;
    cpy_r_r33 = cpy_r_r16;
    goto CPyL27;
CPyL19: ;
    cpy_r_r34 = CPyModule_os;
    cpy_r_r35 = CPyStatics[142]; /* 'path' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    cpy_r_r37 = CPyStatics[172]; /* 'basename' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_path};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals);
        goto CPyL28;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_special_module", 444, CPyStatic_stats___globals, "str", cpy_r_r41);
        goto CPyL28;
    }
    cpy_r_r43 = CPyStatics[5470]; /* 'builtins.pyi' */
    cpy_r_r44 = PyUnicode_Compare(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 == -1;
    if (!cpy_r_r45) goto CPyL26;
    cpy_r_r46 = PyErr_Occurred();
    cpy_r_r47 = cpy_r_r46 != NULL;
    if (!cpy_r_r47) goto CPyL26;
    cpy_r_r48 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_module", -1, CPyStatic_stats___globals);
        goto CPyL28;
    }
CPyL26: ;
    cpy_r_r49 = cpy_r_r44 == 0;
    cpy_r_r33 = cpy_r_r49;
CPyL27: ;
    return cpy_r_r33;
CPyL28: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
}

PyObject *CPyPy_stats___is_special_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:is_special_module", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_stats___is_special_module(arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_special_module", 443, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___is_imprecise(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_stats___HasAnyQuery();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_imprecise", 448, CPyStatic_stats___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_imprecise", 448, CPyStatic_stats___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "is_imprecise", 448, CPyStatic_stats___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_stats___is_imprecise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_imprecise", kwlist, 0};
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
    char retval = CPyDef_stats___is_imprecise(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_imprecise", 447, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___HasAnyQuery_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1174]; /* 'any' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 453, CPyStatic_stats___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_type_visitor___TypeQuery_____init__(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "__init__", 453, CPyStatic_stats___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_stats___HasAnyQuery_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2) || (Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery", obj_self); 
        goto fail;
    }
    char retval = CPyDef_stats___HasAnyQuery_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "__init__", 452, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___HasAnyQuery___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___is_special_form_any(cpy_r_t);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "visit_any", 456, CPyStatic_stats___globals);
        goto CPyL2;
    }
    cpy_r_r1 = cpy_r_r0 ^ 1;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___HasAnyQuery___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2) || (Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_stats___HasAnyQuery___visit_any(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_any", 455, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___HasAnyQuery___visit_any__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___HasAnyQuery___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___HasAnyQuery___visit_any__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2) || (Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___HasAnyQuery___visit_any__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_any__TypeQuery_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___HasAnyQuery___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___HasAnyQuery___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___HasAnyQuery___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2) || (Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___HasAnyQuery___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___is_imprecise2(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_stats___HasAnyQuery2();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_imprecise2", 460, CPyStatic_stats___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_imprecise2", 460, CPyStatic_stats___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "is_imprecise2", 460, CPyStatic_stats___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_stats___is_imprecise2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_imprecise2", kwlist, 0};
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
    char retval = CPyDef_stats___is_imprecise2(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_imprecise2", 459, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___HasAnyQuery2___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 0;
}

PyObject *CPyPy_stats___HasAnyQuery2___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery2", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_stats___HasAnyQuery2___visit_callable_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_callable_type", 464, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___HasAnyQuery2___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___HasAnyQuery2___visit_callable_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery2", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_callable_type__TypeQuery_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_stats___HasAnyQuery2___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_stats___HasAnyQuery2___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_stats___HasAnyQuery2))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.stats.HasAnyQuery2", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___HasAnyQuery2___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___is_generic(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_generic", 471, CPyStatic_stats___globals);
        goto CPyL8;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_generic", 471, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL8;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL9;
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL7;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_generic", 472, CPyStatic_stats___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL10;
    }
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_r7)->_args;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_t);
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/stats.py", "is_generic", 472, CPyStatic_stats___globals);
        goto CPyL8;
    }
    cpy_r_r11 = cpy_r_r9;
    cpy_r_r6 = cpy_r_r11;
CPyL7: ;
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL9: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL3;
CPyL10: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL8;
}

PyObject *CPyPy_stats___is_generic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_generic", kwlist, 0};
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
    char retval = CPyDef_stats___is_generic(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_generic", 470, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___is_complex(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_complex", 476, CPyStatic_stats___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_complex", 476, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL17;
    }
    cpy_r_t = cpy_r_r1;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "is_complex", 477, CPyStatic_stats___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL18;
    }
    cpy_r_r3 = CPyDef_stats___is_generic(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "is_complex", 477, CPyStatic_stats___globals);
        goto CPyL18;
    }
    if (cpy_r_r3) {
        goto CPyL19;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL16;
CPyL6: ;
    cpy_r_r5 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL8;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL9;
CPyL8: ;
    cpy_r_r10 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL9: ;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r14 = cpy_r_r9;
    goto CPyL12;
CPyL11: ;
    cpy_r_r15 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r14 = cpy_r_r18;
CPyL12: ;
    if (cpy_r_r14) {
        goto CPyL20;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r19 = cpy_r_r14;
    goto CPyL15;
CPyL14: ;
    cpy_r_r20 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    CPy_DECREF(cpy_r_t);
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    cpy_r_r19 = cpy_r_r23;
CPyL15: ;
    cpy_r_r4 = cpy_r_r19;
CPyL16: ;
    return cpy_r_r4;
CPyL17: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL18: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL5;
CPyL20: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL13;
}

PyObject *CPyPy_stats___is_complex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_complex", kwlist, 0};
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
    char retval = CPyDef_stats___is_complex(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_complex", 475, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___ensure_dir_exists(PyObject *cpy_r_dir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 481, CPyStatic_stats___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyStatics[1500]; /* 'exists' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 481, CPyStatic_stats___globals);
        goto CPyL8;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_dir};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 481, CPyStatic_stats___globals);
        goto CPyL8;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 481, CPyStatic_stats___globals);
        goto CPyL8;
    }
    if (cpy_r_r8) goto CPyL7;
    cpy_r_r9 = CPyModule_os;
    cpy_r_r10 = CPyStatics[3796]; /* 'makedirs' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 482, CPyStatic_stats___globals);
        goto CPyL8;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_dir};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 482, CPyStatic_stats___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL9: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL7;
}

PyObject *CPyPy_stats___ensure_dir_exists(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:ensure_dir_exists", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    char retval = CPyDef_stats___ensure_dir_exists(arg_dir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "ensure_dir_exists", 480, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats___is_special_form_any(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_stats___get_original_any(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "is_special_form_any", 486, CPyStatic_stats___globals);
        goto CPyL5;
    }
    cpy_r_r1 = ((mypy___types___AnyTypeObject *)cpy_r_r0)->_type_of_any;
    cpy_r_r2 = cpy_r_r1 & 1;
    cpy_r_r3 = cpy_r_r2 == 0;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = cpy_r_r1 == 12;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL4;
CPyL3: ;
    cpy_r_r6 = CPyTagged_IsEq_(cpy_r_r1, 12);
    cpy_r_r5 = cpy_r_r6;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_stats___is_special_form_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_special_form_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_stats___is_special_form_any(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "is_special_form_any", 485, CPyStatic_stats___globals);
    return NULL;
}

PyObject *CPyDef_stats___get_original_any(PyObject *cpy_r_t) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_type_of_any;
    cpy_r_r1 = cpy_r_r0 == 14;
    if (!cpy_r_r1) goto CPyL15;
    cpy_r_r2 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_source_any;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r4) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/stats.py", "get_original_any", 491, CPyStatic_stats___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_source_any;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "get_original_any", 492, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_r8 = ((mypy___types___AnyTypeObject *)cpy_r_r7)->_type_of_any;
    cpy_r_r9 = cpy_r_r8 & 1;
    cpy_r_r10 = cpy_r_r9 == 0;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = cpy_r_r8 != 14;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL8;
CPyL7: ;
    cpy_r_r13 = CPyTagged_IsEq_(cpy_r_r8, 14);
    cpy_r_r14 = cpy_r_r13 ^ 1;
    cpy_r_r12 = cpy_r_r14;
CPyL8: ;
    if (cpy_r_r12) goto CPyL11;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/stats.py", "get_original_any", 492, CPyStatic_stats___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r16 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_source_any;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/stats.py", "get_original_any", 493, CPyStatic_stats___globals, "mypy.types.AnyType", cpy_r_r16);
        goto CPyL14;
    }
    cpy_r_t = cpy_r_r17;
CPyL13: ;
    return cpy_r_t;
CPyL14: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL15: ;
    CPy_INCREF(cpy_r_t);
    goto CPyL13;
}

PyObject *CPyPy_stats___get_original_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:get_original_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_stats___get_original_any(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stats.py", "get_original_any", 489, CPyStatic_stats___globals);
    return NULL;
}

char CPyDef_stats_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    CPyPtr cpy_r_r94;
    CPyPtr cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    int32_t cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", -1, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_stats___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 3, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {5};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9300]; /* (('os', 'os', 'os'),) */
    cpy_r_r15 = CPyStatic_stats___globals;
    cpy_r_r16 = CPyStatics[5471]; /* 'mypy/stats.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL46;
    cpy_r_r19 = CPyStatics[9784]; /* ('Counter',) */
    cpy_r_r20 = CPyStatics[76]; /* 'collections' */
    cpy_r_r21 = CPyStatic_stats___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 6, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_collections = cpy_r_r22;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r24 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r25 = CPyStatic_stats___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 7, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_contextlib = cpy_r_r26;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9641]; /* ('Final', 'Iterator') */
    cpy_r_r28 = CPyStatics[21]; /* 'typing' */
    cpy_r_r29 = CPyStatic_stats___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 8, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9080]; /* ('nodes',) */
    cpy_r_r32 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r33 = CPyStatic_stats___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 10, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9785]; /* ('map_formals_to_actuals',) */
    cpy_r_r36 = CPyStatics[64]; /* 'mypy.argmap' */
    cpy_r_r37 = CPyStatic_stats___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 11, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy___argmap = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___argmap);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9786]; /* ('AssignmentExpr', 'AssignmentStmt', 'BreakStmt',
                                     'BytesExpr', 'CallExpr', 'ClassDef', 'ComparisonExpr',
                                     'ComplexExpr', 'ContinueStmt', 'EllipsisExpr',
                                     'Expression', 'ExpressionStmt', 'FloatExpr', 'FuncDef',
                                     'Import', 'ImportAll', 'ImportFrom', 'IndexExpr',
                                     'IntExpr', 'MemberExpr', 'MypyFile', 'NameExpr', 'Node',
                                     'OpExpr', 'PassStmt', 'RefExpr', 'StrExpr',
                                     'TypeApplication', 'UnaryExpr', 'YieldFromExpr') */
    cpy_r_r40 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r41 = CPyStatic_stats___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 12, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy___nodes = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r44 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r45 = CPyStatic_stats___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 44, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy___traverser = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9787]; /* ('collect_all_inner_types',) */
    cpy_r_r48 = CPyStatics[1035]; /* 'mypy.typeanal' */
    cpy_r_r49 = CPyStatic_stats___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 45, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy___typeanal = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___typeanal);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9788]; /* ('AnyType', 'CallableType', 'FunctionLike', 'Instance',
                                     'TupleType', 'Type', 'TypeOfAny', 'TypeQuery',
                                     'TypeVarType', 'get_proper_type', 'get_proper_types') */
    cpy_r_r52 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r53 = CPyStatic_stats___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 46, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy___types = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9761]; /* ('correct_relative_import',) */
    cpy_r_r56 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r57 = CPyStatic_stats___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 59, CPyStatic_stats___globals);
        goto CPyL46;
    }
    CPyModule_mypy___util = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatic_stats___globals;
    cpy_r_r60 = CPyStatics[5473]; /* 'TYPE_EMPTY' */
    cpy_r_r61 = CPyStatics[9015]; /* 0 */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 61, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r64 = CPyStatic_stats___globals;
    cpy_r_r65 = CPyStatics[5474]; /* 'TYPE_UNANALYZED' */
    cpy_r_r66 = CPyStatics[9016]; /* 1 */
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 62, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r69 = CPyStatic_stats___globals;
    cpy_r_r70 = CPyStatics[5475]; /* 'TYPE_PRECISE' */
    cpy_r_r71 = CPyStatics[9018]; /* 2 */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 63, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r74 = CPyStatic_stats___globals;
    cpy_r_r75 = CPyStatics[5476]; /* 'TYPE_IMPRECISE' */
    cpy_r_r76 = CPyStatics[9026]; /* 3 */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 64, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r79 = CPyStatic_stats___globals;
    cpy_r_r80 = CPyStatics[5477]; /* 'TYPE_ANY' */
    cpy_r_r81 = CPyStatics[9025]; /* 4 */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r79, cpy_r_r80, cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 65, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r84 = CPyStatics[5478]; /* 'empty' */
    cpy_r_r85 = CPyStatics[5479]; /* 'unanalyzed' */
    cpy_r_r86 = CPyStatics[5480]; /* 'precise' */
    cpy_r_r87 = CPyStatics[5481]; /* 'imprecise' */
    cpy_r_r88 = CPyStatics[1174]; /* 'any' */
    cpy_r_r89 = PyList_New(5);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 67, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r90 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r91 = *(CPyPtr *)cpy_r_r90;
    CPy_INCREF(cpy_r_r84);
    *(PyObject * *)cpy_r_r91 = cpy_r_r84;
    cpy_r_r92 = cpy_r_r91 + 8;
    CPy_INCREF(cpy_r_r85);
    *(PyObject * *)cpy_r_r92 = cpy_r_r85;
    cpy_r_r93 = cpy_r_r91 + 16;
    CPy_INCREF(cpy_r_r86);
    *(PyObject * *)cpy_r_r93 = cpy_r_r86;
    cpy_r_r94 = cpy_r_r91 + 24;
    CPy_INCREF(cpy_r_r87);
    *(PyObject * *)cpy_r_r94 = cpy_r_r87;
    cpy_r_r95 = cpy_r_r91 + 32;
    CPy_INCREF(cpy_r_r88);
    *(PyObject * *)cpy_r_r95 = cpy_r_r88;
    CPyStatic_stats___precision_names = cpy_r_r89;
    CPy_INCREF(CPyStatic_stats___precision_names);
    cpy_r_r96 = CPyStatic_stats___globals;
    cpy_r_r97 = CPyStatics[5482]; /* 'precision_names' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 67, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r100 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r101 = PyTuple_Pack(1, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 70, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r102 = CPyStatics[590]; /* 'mypy.stats' */
    cpy_r_r103 = (PyObject *)CPyType_stats___StatisticsVisitor_template;
    cpy_r_r104 = CPyType_FromTemplate(cpy_r_r103, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 70, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r105 = CPyDef_stats___StatisticsVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", -1, CPyStatic_stats___globals);
        goto CPyL47;
    }
    cpy_r_r106 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r107 = CPyStatics[5483]; /* 'inferred' */
    cpy_r_r108 = CPyStatics[2347]; /* 'filename' */
    cpy_r_r109 = CPyStatics[635]; /* 'modules' */
    cpy_r_r110 = CPyStatics[5484]; /* 'typemap' */
    cpy_r_r111 = CPyStatics[5485]; /* 'all_nodes' */
    cpy_r_r112 = CPyStatics[5486]; /* 'visit_untyped_defs' */
    cpy_r_r113 = CPyStatics[5487]; /* 'num_precise_exprs' */
    cpy_r_r114 = CPyStatics[5488]; /* 'num_imprecise_exprs' */
    cpy_r_r115 = CPyStatics[5489]; /* 'num_any_exprs' */
    cpy_r_r116 = CPyStatics[5490]; /* 'num_simple_types' */
    cpy_r_r117 = CPyStatics[5491]; /* 'num_generic_types' */
    cpy_r_r118 = CPyStatics[5492]; /* 'num_tuple_types' */
    cpy_r_r119 = CPyStatics[5493]; /* 'num_function_types' */
    cpy_r_r120 = CPyStatics[5494]; /* 'num_typevar_types' */
    cpy_r_r121 = CPyStatics[5495]; /* 'num_complex_types' */
    cpy_r_r122 = CPyStatics[5496]; /* 'num_any_types' */
    cpy_r_r123 = CPyStatics[2272]; /* 'line' */
    cpy_r_r124 = CPyStatics[5497]; /* 'line_map' */
    cpy_r_r125 = CPyStatics[5498]; /* 'type_of_any_counter' */
    cpy_r_r126 = CPyStatics[5499]; /* 'any_line_map' */
    cpy_r_r127 = CPyStatics[5500]; /* 'checked_scopes' */
    cpy_r_r128 = CPyStatics[5501]; /* 'output' */
    cpy_r_r129 = CPyStatics[5146]; /* 'cur_mod_node' */
    cpy_r_r130 = CPyStatics[4371]; /* 'cur_mod_id' */
    cpy_r_r131 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r132 = PyTuple_Pack(25, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 70, CPyStatic_stats___globals);
        goto CPyL47;
    }
    cpy_r_r133 = PyObject_SetAttr(cpy_r_r104, cpy_r_r106, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 70, CPyStatic_stats___globals);
        goto CPyL47;
    }
    CPyType_stats___StatisticsVisitor = (PyTypeObject *)cpy_r_r104;
    CPy_INCREF(CPyType_stats___StatisticsVisitor);
    cpy_r_r135 = CPyStatic_stats___globals;
    cpy_r_r136 = CPyStatics[5502]; /* 'StatisticsVisitor' */
    cpy_r_r137 = CPyDict_SetItem(cpy_r_r135, cpy_r_r136, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r138 = cpy_r_r137 >= 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 70, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r139 = (PyObject *)CPyType_stats___StatisticsVisitor;
    cpy_r_r140 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r141 = CPyObject_GetAttr(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 174, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r142 = CPyStatic_stats___globals;
    cpy_r_r143 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r144 = CPyDict_GetItem(cpy_r_r142, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 173, CPyStatic_stats___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r145[1] = {cpy_r_r141};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = _PyObject_Vectorcall(cpy_r_r144, cpy_r_r146, 1, 0);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 174, CPyStatic_stats___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r141);
    cpy_r_r148 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r149 = PyObject_SetAttr(cpy_r_r139, cpy_r_r148, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 174, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r151 = (PyObject *)CPyType_type_visitor___TypeQuery;
    cpy_r_r152 = (PyObject *)&PyBool_Type;
    cpy_r_r153 = PyObject_GetItem(cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 451, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r154 = PyTuple_Pack(1, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 451, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r155 = CPyStatics[590]; /* 'mypy.stats' */
    cpy_r_r156 = (PyObject *)CPyType_stats___HasAnyQuery_template;
    cpy_r_r157 = CPyType_FromTemplate(cpy_r_r156, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 451, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r158 = CPyDef_stats___HasAnyQuery_trait_vtable_setup();
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", -1, CPyStatic_stats___globals);
        goto CPyL49;
    }
    cpy_r_r159 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r160 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r161 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r162 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r163 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r164 = PyTuple_Pack(4, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 451, CPyStatic_stats___globals);
        goto CPyL49;
    }
    cpy_r_r165 = PyObject_SetAttr(cpy_r_r157, cpy_r_r159, cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    cpy_r_r166 = cpy_r_r165 >= 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 451, CPyStatic_stats___globals);
        goto CPyL49;
    }
    CPyType_stats___HasAnyQuery = (PyTypeObject *)cpy_r_r157;
    CPy_INCREF(CPyType_stats___HasAnyQuery);
    cpy_r_r167 = CPyStatic_stats___globals;
    cpy_r_r168 = CPyStatics[5503]; /* 'HasAnyQuery' */
    cpy_r_r169 = CPyDict_SetItem(cpy_r_r167, cpy_r_r168, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 451, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r171 = (PyObject *)CPyType_stats___HasAnyQuery;
    cpy_r_r172 = PyTuple_Pack(1, cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 463, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r173 = CPyStatics[590]; /* 'mypy.stats' */
    cpy_r_r174 = (PyObject *)CPyType_stats___HasAnyQuery2_template;
    cpy_r_r175 = CPyType_FromTemplate(cpy_r_r174, cpy_r_r172, cpy_r_r173);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 463, CPyStatic_stats___globals);
        goto CPyL46;
    }
    cpy_r_r176 = CPyDef_stats___HasAnyQuery2_trait_vtable_setup();
    if (unlikely(cpy_r_r176 == 2)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", -1, CPyStatic_stats___globals);
        goto CPyL50;
    }
    cpy_r_r177 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r178 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r179 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r180 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r181 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r182 = PyTuple_Pack(4, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 463, CPyStatic_stats___globals);
        goto CPyL50;
    }
    cpy_r_r183 = PyObject_SetAttr(cpy_r_r175, cpy_r_r177, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 463, CPyStatic_stats___globals);
        goto CPyL50;
    }
    CPyType_stats___HasAnyQuery2 = (PyTypeObject *)cpy_r_r175;
    CPy_INCREF(CPyType_stats___HasAnyQuery2);
    cpy_r_r185 = CPyStatic_stats___globals;
    cpy_r_r186 = CPyStatics[5504]; /* 'HasAnyQuery2' */
    cpy_r_r187 = CPyDict_SetItem(cpy_r_r185, cpy_r_r186, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypy/stats.py", "<module>", 463, CPyStatic_stats___globals);
        goto CPyL46;
    }
    return 1;
CPyL46: ;
    cpy_r_r189 = 2;
    return cpy_r_r189;
CPyL47: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL46;
CPyL48: ;
    CPy_DecRef(cpy_r_r141);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_r157);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL46;
}
