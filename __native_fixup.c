#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
fixup___NodeFixer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef fixup___NodeFixer_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___fixup___NodeFixerObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___fixup___NodeFixerObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *fixup___NodeFixer_setup(PyTypeObject *type);
PyObject *CPyDef_fixup___NodeFixer(PyObject *cpy_r_modules, char cpy_r_allow_missing);

static PyObject *
fixup___NodeFixer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_fixup___NodeFixer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = fixup___NodeFixer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_fixup___NodeFixer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
fixup___NodeFixer_traverse(mypy___fixup___NodeFixerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_current_info);
    Py_VISIT(self->_modules);
    Py_VISIT(self->_type_fixer);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___fixup___NodeFixerObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___fixup___NodeFixerObject))));
    return 0;
}

static int
fixup___NodeFixer_clear(mypy___fixup___NodeFixerObject *self)
{
    Py_CLEAR(self->_current_info);
    Py_CLEAR(self->_modules);
    Py_CLEAR(self->_type_fixer);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___fixup___NodeFixerObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___fixup___NodeFixerObject))));
    return 0;
}

static void
fixup___NodeFixer_dealloc(mypy___fixup___NodeFixerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, fixup___NodeFixer_dealloc)
    fixup___NodeFixer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem fixup___NodeFixer_vtable[98];
static CPyVTableItem fixup___NodeFixer_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t fixup___NodeFixer_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem fixup___NodeFixer_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t fixup___NodeFixer_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem fixup___NodeFixer_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t fixup___NodeFixer_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem fixup___NodeFixer_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t fixup___NodeFixer_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_fixup___NodeFixer_trait_vtable_setup(void)
{
    CPyVTableItem fixup___NodeFixer_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_block,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_class_pattern,
    };
    memcpy(fixup___NodeFixer_mypy___visitor___NodeVisitor_trait_vtable, fixup___NodeFixer_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(fixup___NodeFixer_mypy___visitor___NodeVisitor_trait_vtable));
    size_t fixup___NodeFixer_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(fixup___NodeFixer_mypy___visitor___NodeVisitor_offset_table, fixup___NodeFixer_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(fixup___NodeFixer_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem fixup___NodeFixer_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(fixup___NodeFixer_mypy___visitor___ExpressionVisitor_trait_vtable, fixup___NodeFixer_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(fixup___NodeFixer_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t fixup___NodeFixer_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(fixup___NodeFixer_mypy___visitor___ExpressionVisitor_offset_table, fixup___NodeFixer_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(fixup___NodeFixer_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem fixup___NodeFixer_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_block,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_match_stmt,
    };
    memcpy(fixup___NodeFixer_mypy___visitor___StatementVisitor_trait_vtable, fixup___NodeFixer_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(fixup___NodeFixer_mypy___visitor___StatementVisitor_trait_vtable));
    size_t fixup___NodeFixer_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(fixup___NodeFixer_mypy___visitor___StatementVisitor_offset_table, fixup___NodeFixer_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(fixup___NodeFixer_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem fixup___NodeFixer_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_class_pattern,
    };
    memcpy(fixup___NodeFixer_mypy___visitor___PatternVisitor_trait_vtable, fixup___NodeFixer_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(fixup___NodeFixer_mypy___visitor___PatternVisitor_trait_vtable));
    size_t fixup___NodeFixer_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(fixup___NodeFixer_mypy___visitor___PatternVisitor_offset_table, fixup___NodeFixer_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(fixup___NodeFixer_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem fixup___NodeFixer_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)fixup___NodeFixer_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_fixup___NodeFixer_____init__,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_info,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_symbol_table,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_func_def,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_decorator,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_class_def,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_var_expr,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_var,
        (CPyVTableItem)CPyDef_fixup___NodeFixer___visit_type_alias,
        (CPyVTableItem)CPyDef_fixup___NodeFixer_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_block,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_class_pattern,
    };
    memcpy(fixup___NodeFixer_vtable, fixup___NodeFixer_vtable_scratch, sizeof(fixup___NodeFixer_vtable));
    return 1;
}

static PyObject *
fixup___NodeFixer_get_current_info(mypy___fixup___NodeFixerObject *self, void *closure);
static int
fixup___NodeFixer_set_current_info(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure);
static PyObject *
fixup___NodeFixer_get_modules(mypy___fixup___NodeFixerObject *self, void *closure);
static int
fixup___NodeFixer_set_modules(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure);
static PyObject *
fixup___NodeFixer_get_allow_missing(mypy___fixup___NodeFixerObject *self, void *closure);
static int
fixup___NodeFixer_set_allow_missing(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure);
static PyObject *
fixup___NodeFixer_get_type_fixer(mypy___fixup___NodeFixerObject *self, void *closure);
static int
fixup___NodeFixer_set_type_fixer(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure);

static PyGetSetDef fixup___NodeFixer_getseters[] = {
    {"current_info",
     (getter)fixup___NodeFixer_get_current_info, (setter)fixup___NodeFixer_set_current_info,
     NULL, NULL},
    {"modules",
     (getter)fixup___NodeFixer_get_modules, (setter)fixup___NodeFixer_set_modules,
     NULL, NULL},
    {"allow_missing",
     (getter)fixup___NodeFixer_get_allow_missing, (setter)fixup___NodeFixer_set_allow_missing,
     NULL, NULL},
    {"type_fixer",
     (getter)fixup___NodeFixer_get_type_fixer, (setter)fixup___NodeFixer_set_type_fixer,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef fixup___NodeFixer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_fixup___NodeFixer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_info",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_type_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_symbol_table",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_symbol_table,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded_func_def",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_overloaded_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_paramspec_expr",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_paramspec_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple_expr",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_type_var_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias",
     (PyCFunction)CPyPy_fixup___NodeFixer___visit_type_alias,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_fixup___NodeFixer_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_fixup___NodeFixer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NodeFixer",
    .tp_new = fixup___NodeFixer_new,
    .tp_dealloc = (destructor)fixup___NodeFixer_dealloc,
    .tp_traverse = (traverseproc)fixup___NodeFixer_traverse,
    .tp_clear = (inquiry)fixup___NodeFixer_clear,
    .tp_getset = fixup___NodeFixer_getseters,
    .tp_methods = fixup___NodeFixer_methods,
    .tp_init = fixup___NodeFixer_init,
    .tp_members = fixup___NodeFixer_members,
    .tp_basicsize = sizeof(mypy___fixup___NodeFixerObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___fixup___NodeFixerObject),
    .tp_weaklistoffset = sizeof(mypy___fixup___NodeFixerObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_fixup___NodeFixer_template = &CPyType_fixup___NodeFixer_template_;

static PyObject *
fixup___NodeFixer_setup(PyTypeObject *type)
{
    mypy___fixup___NodeFixerObject *self;
    self = (mypy___fixup___NodeFixerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = fixup___NodeFixer_vtable + 12;
    self->_allow_missing = 2;
    if (CPyDef_fixup___NodeFixer_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_fixup___NodeFixer(PyObject *cpy_r_modules, char cpy_r_allow_missing)
{
    PyObject *self = fixup___NodeFixer_setup(CPyType_fixup___NodeFixer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_fixup___NodeFixer_____init__(self, cpy_r_modules, cpy_r_allow_missing);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
fixup___NodeFixer_get_current_info(mypy___fixup___NodeFixerObject *self, void *closure)
{
    if (unlikely(self->_current_info == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'current_info' of 'NodeFixer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_current_info);
    PyObject *retval = self->_current_info;
    return retval;
}

static int
fixup___NodeFixer_set_current_info(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeFixer' object attribute 'current_info' cannot be deleted");
        return -1;
    }
    if (self->_current_info != NULL) {
        CPy_DECREF(self->_current_info);
    }
    PyObject *tmp;
    if ((Py_TYPE(value) == CPyType_nodes___FakeInfo) || (Py_TYPE(value) == CPyType_nodes___TypeInfo))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2872;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2872;
    CPy_TypeError("mypy.nodes.TypeInfo or None", value); 
    tmp = NULL;
__LL2872: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_current_info = tmp;
    return 0;
}

static PyObject *
fixup___NodeFixer_get_modules(mypy___fixup___NodeFixerObject *self, void *closure)
{
    if (unlikely(self->_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'modules' of 'NodeFixer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_modules);
    PyObject *retval = self->_modules;
    return retval;
}

static int
fixup___NodeFixer_set_modules(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeFixer' object attribute 'modules' cannot be deleted");
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
fixup___NodeFixer_get_allow_missing(mypy___fixup___NodeFixerObject *self, void *closure)
{
    if (unlikely(self->_allow_missing == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'allow_missing' of 'NodeFixer' undefined");
        return NULL;
    }
    PyObject *retval = self->_allow_missing ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
fixup___NodeFixer_set_allow_missing(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeFixer' object attribute 'allow_missing' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_missing = tmp;
    return 0;
}

static PyObject *
fixup___NodeFixer_get_type_fixer(mypy___fixup___NodeFixerObject *self, void *closure)
{
    if (unlikely(self->_type_fixer == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_fixer' of 'NodeFixer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_fixer);
    PyObject *retval = self->_type_fixer;
    return retval;
}

static int
fixup___NodeFixer_set_type_fixer(mypy___fixup___NodeFixerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeFixer' object attribute 'type_fixer' cannot be deleted");
        return -1;
    }
    if (self->_type_fixer != NULL) {
        CPy_DECREF(self->_type_fixer);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_fixup___TypeFixer))
        tmp = value;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type_fixer = tmp;
    return 0;
}

static int
fixup___TypeFixer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef fixup___TypeFixer_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___fixup___TypeFixerObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___fixup___TypeFixerObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *fixup___TypeFixer_setup(PyTypeObject *type);
PyObject *CPyDef_fixup___TypeFixer(PyObject *cpy_r_modules, char cpy_r_allow_missing);

static PyObject *
fixup___TypeFixer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_fixup___TypeFixer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = fixup___TypeFixer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_fixup___TypeFixer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
fixup___TypeFixer_traverse(mypy___fixup___TypeFixerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_modules);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___fixup___TypeFixerObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___fixup___TypeFixerObject))));
    return 0;
}

static int
fixup___TypeFixer_clear(mypy___fixup___TypeFixerObject *self)
{
    Py_CLEAR(self->_modules);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___fixup___TypeFixerObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___fixup___TypeFixerObject))));
    return 0;
}

static void
fixup___TypeFixer_dealloc(mypy___fixup___TypeFixerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, fixup___TypeFixer_dealloc)
    fixup___TypeFixer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem fixup___TypeFixer_vtable[26];
static CPyVTableItem fixup___TypeFixer_type_visitor___TypeVisitor_trait_vtable[21];
static size_t fixup___TypeFixer_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_fixup___TypeFixer_trait_vtable_setup(void)
{
    CPyVTableItem fixup___TypeFixer_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(fixup___TypeFixer_type_visitor___TypeVisitor_trait_vtable, fixup___TypeFixer_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(fixup___TypeFixer_type_visitor___TypeVisitor_trait_vtable));
    size_t fixup___TypeFixer_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(fixup___TypeFixer_type_visitor___TypeVisitor_offset_table, fixup___TypeFixer_type_visitor___TypeVisitor_offset_table_scratch, sizeof(fixup___TypeFixer_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem fixup___TypeFixer_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)fixup___TypeFixer_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)fixup___TypeFixer_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_fixup___TypeFixer_____init__,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_instance,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_alias_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_any,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_callable_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_overloaded,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_erased_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_deleted_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_none_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_partial_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_tuple_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_typeddict_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_literal_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_var,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_param_spec,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_unpack_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_parameters,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_unbound_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_union_type,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_void,
        (CPyVTableItem)CPyDef_fixup___TypeFixer___visit_type_type,
    };
    memcpy(fixup___TypeFixer_vtable, fixup___TypeFixer_vtable_scratch, sizeof(fixup___TypeFixer_vtable));
    return 1;
}

static PyObject *
fixup___TypeFixer_get_modules(mypy___fixup___TypeFixerObject *self, void *closure);
static int
fixup___TypeFixer_set_modules(mypy___fixup___TypeFixerObject *self, PyObject *value, void *closure);
static PyObject *
fixup___TypeFixer_get_allow_missing(mypy___fixup___TypeFixerObject *self, void *closure);
static int
fixup___TypeFixer_set_allow_missing(mypy___fixup___TypeFixerObject *self, PyObject *value, void *closure);

static PyGetSetDef fixup___TypeFixer_getseters[] = {
    {"modules",
     (getter)fixup___TypeFixer_get_modules, (setter)fixup___TypeFixer_set_modules,
     NULL, NULL},
    {"allow_missing",
     (getter)fixup___TypeFixer_get_allow_missing, (setter)fixup___TypeFixer_set_allow_missing,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef fixup___TypeFixer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_fixup___TypeFixer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_void",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_void,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_fixup___TypeFixer___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_fixup___TypeFixer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeFixer",
    .tp_new = fixup___TypeFixer_new,
    .tp_dealloc = (destructor)fixup___TypeFixer_dealloc,
    .tp_traverse = (traverseproc)fixup___TypeFixer_traverse,
    .tp_clear = (inquiry)fixup___TypeFixer_clear,
    .tp_getset = fixup___TypeFixer_getseters,
    .tp_methods = fixup___TypeFixer_methods,
    .tp_init = fixup___TypeFixer_init,
    .tp_members = fixup___TypeFixer_members,
    .tp_basicsize = sizeof(mypy___fixup___TypeFixerObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___fixup___TypeFixerObject),
    .tp_weaklistoffset = sizeof(mypy___fixup___TypeFixerObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_fixup___TypeFixer_template = &CPyType_fixup___TypeFixer_template_;

static PyObject *
fixup___TypeFixer_setup(PyTypeObject *type)
{
    mypy___fixup___TypeFixerObject *self;
    self = (mypy___fixup___TypeFixerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = fixup___TypeFixer_vtable + 3;
    self->_allow_missing = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_fixup___TypeFixer(PyObject *cpy_r_modules, char cpy_r_allow_missing)
{
    PyObject *self = fixup___TypeFixer_setup(CPyType_fixup___TypeFixer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_fixup___TypeFixer_____init__(self, cpy_r_modules, cpy_r_allow_missing);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
fixup___TypeFixer_get_modules(mypy___fixup___TypeFixerObject *self, void *closure)
{
    if (unlikely(self->_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'modules' of 'TypeFixer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_modules);
    PyObject *retval = self->_modules;
    return retval;
}

static int
fixup___TypeFixer_set_modules(mypy___fixup___TypeFixerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeFixer' object attribute 'modules' cannot be deleted");
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
fixup___TypeFixer_get_allow_missing(mypy___fixup___TypeFixerObject *self, void *closure)
{
    if (unlikely(self->_allow_missing == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'allow_missing' of 'TypeFixer' undefined");
        return NULL;
    }
    PyObject *retval = self->_allow_missing ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
fixup___TypeFixer_set_allow_missing(mypy___fixup___TypeFixerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeFixer' object attribute 'allow_missing' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_missing = tmp;
    return 0;
}
static PyMethodDef fixupmodule_methods[] = {
    {"fixup_module", (PyCFunction)CPyPy_fixup___fixup_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"lookup_fully_qualified_typeinfo", (PyCFunction)CPyPy_fixup___lookup_fully_qualified_typeinfo, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"lookup_fully_qualified_alias", (PyCFunction)CPyPy_fixup___lookup_fully_qualified_alias, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"missing_info", (PyCFunction)CPyPy_fixup___missing_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"missing_alias", (PyCFunction)CPyPy_fixup___missing_alias, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fixupmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.fixup",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    fixupmodule_methods
};

PyObject *CPyInit_mypy___fixup(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___fixup_internal) {
        Py_INCREF(CPyModule_mypy___fixup_internal);
        return CPyModule_mypy___fixup_internal;
    }
    CPyModule_mypy___fixup_internal = PyModule_Create(&fixupmodule);
    if (unlikely(CPyModule_mypy___fixup_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___fixup_internal, "__name__");
    CPyStatic_fixup___globals = PyModule_GetDict(CPyModule_mypy___fixup_internal);
    if (unlikely(CPyStatic_fixup___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_fixup_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___fixup_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___fixup_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_fixup___NodeFixer);
    Py_CLEAR(CPyType_fixup___TypeFixer);
    return NULL;
}

char CPyDef_fixup___fixup_module(PyObject *cpy_r_tree, PyObject *cpy_r_modules, char cpy_r_allow_missing) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_node_fixer;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_fixup___NodeFixer(cpy_r_modules, cpy_r_allow_missing);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "fixup_module", 51, CPyStatic_fixup___globals);
        goto CPyL5;
    }
    cpy_r_node_fixer = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___MypyFileObject *)cpy_r_tree)->_names;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "fixup_module", "MypyFile", "names", 52, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_tree, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "fixup_module", 52, CPyStatic_fixup___globals);
        goto CPyL7;
    }
CPyL3: ;
    cpy_r_r3 = CPyDef_fixup___NodeFixer___visit_symbol_table(cpy_r_node_fixer, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_node_fixer);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "fixup_module", 52, CPyStatic_fixup___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_node_fixer);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_node_fixer);
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_fixup___fixup_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tree", "modules", "allow_missing", 0};
    static CPyArg_Parser parser = {"OOO:fixup_module", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_modules;
    PyObject *obj_allow_missing;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_modules, &obj_allow_missing)) {
        return NULL;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char arg_allow_missing;
    if (unlikely(!PyBool_Check(obj_allow_missing))) {
        CPy_TypeError("bool", obj_allow_missing); goto fail;
    } else
        arg_allow_missing = obj_allow_missing == Py_True;
    char retval = CPyDef_fixup___fixup_module(arg_tree, arg_modules, arg_allow_missing);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "fixup_module", 50, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_modules, char cpy_r_allow_missing) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPy_INCREF(cpy_r_modules);
    if (((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules != NULL) {
        CPy_DECREF(((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules);
    }
    ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules = cpy_r_modules;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/fixup.py", "__init__", 60, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_allow_missing = cpy_r_allow_missing;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/fixup.py", "__init__", 61, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    cpy_r_r2 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "__init__", "NodeFixer", "modules", 62, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyDef_fixup___TypeFixer(cpy_r_r2, cpy_r_allow_missing);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "__init__", 62, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    if (((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer != NULL) {
        CPy_DECREF(((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer);
    }
    ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/fixup.py", "__init__", 62, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fixup___NodeFixer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modules", "allow_missing", 0};
    PyObject *obj_modules;
    PyObject *obj_allow_missing;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_modules, &obj_allow_missing)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char arg_allow_missing;
    if (unlikely(!PyBool_Check(obj_allow_missing))) {
        CPy_TypeError("bool", obj_allow_missing); goto fail;
    } else
        arg_allow_missing = obj_allow_missing == Py_True;
    char retval = CPyDef_fixup___NodeFixer_____init__(arg_self, arg_modules, arg_allow_missing);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "__init__", 59, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_type_info(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_save_info;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
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
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyTagged cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_instance;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    int64_t cpy_r_r131;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    CPyPtr cpy_r_r136;
    int64_t cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyTagged cpy_r_r139;
    CPyPtr cpy_r_r140;
    int64_t cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    CPyTagged cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    tuple_T3OOO cpy_r_r154;
    tuple_T3OOO cpy_r_r155;
    tuple_T3OOO cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    cpy_r_r0 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "current_info", 66, CPyStatic_fixup___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_save_info = cpy_r_r0;
    CPy_INCREF(cpy_r_info);
    if (((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info != NULL) {
        CPy_DECREF(((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info);
    }
    ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info = cpy_r_info;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 68, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "defn", 69, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r2);
CPyL4: ;
    cpy_r_r3 = PyObject_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 69, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "defn", 70, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPyDef_nodes___ClassDef___accept(cpy_r_r6, cpy_r_self);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 70, CPyStatic_fixup___globals);
        goto CPyL110;
    } else
        goto CPyL121;
CPyL8: ;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "names", 71, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    cpy_r_r9 = PyDict_Size(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL13;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "names", 72, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 72, CPyStatic_fixup___globals);
        goto CPyL122;
    }
CPyL12: ;
    cpy_r_r14 = CPyDef_fixup___NodeFixer___visit_symbol_table(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 72, CPyStatic_fixup___globals);
        goto CPyL110;
    }
CPyL13: ;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "bases", 73, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r15);
CPyL14: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = cpy_r_r18 != 0;
    if (!cpy_r_r19) goto CPyL22;
    cpy_r_r20 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "bases", 74, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r20);
CPyL16: ;
    cpy_r_r21 = 0;
CPyL17: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL123;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_types___Instance))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 74, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r26);
        goto CPyL124;
    }
    cpy_r_base = cpy_r_r27;
    cpy_r_r28 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 75, CPyStatic_fixup___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r28);
CPyL20: ;
    cpy_r_r29 = CPyDef_types___Instance___accept(cpy_r_base, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 75, CPyStatic_fixup___globals);
        goto CPyL124;
    } else
        goto CPyL126;
CPyL21: ;
    cpy_r_r30 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r30;
    goto CPyL17;
CPyL22: ;
    cpy_r_r31 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->__promote;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "_promote", 76, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r31);
CPyL23: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL31;
    cpy_r_r36 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->__promote;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "_promote", 77, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r36);
CPyL25: ;
    cpy_r_r37 = 0;
CPyL26: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL127;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r36, cpy_r_r37);
    if (likely(PyObject_TypeCheck(cpy_r_r42, CPyType_types___ProperType)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 77, CPyStatic_fixup___globals, "mypy.types.ProperType", cpy_r_r42);
        goto CPyL128;
    }
    cpy_r_p = cpy_r_r43;
    cpy_r_r44 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 78, CPyStatic_fixup___globals);
        goto CPyL129;
    }
    CPy_INCREF(cpy_r_r44);
CPyL29: ;
    cpy_r_r45 = CPY_GET_METHOD(cpy_r_p, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_p, cpy_r_r44); /* accept */
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 78, CPyStatic_fixup___globals);
        goto CPyL128;
    } else
        goto CPyL130;
CPyL30: ;
    cpy_r_r46 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r46;
    goto CPyL26;
CPyL31: ;
    cpy_r_r47 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_tuple_type;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "tuple_type", 79, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r47);
CPyL32: ;
    cpy_r_r48 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r49 = cpy_r_r47 != cpy_r_r48;
    CPy_DECREF(cpy_r_r47);
    if (!cpy_r_r49) goto CPyL47;
    cpy_r_r50 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_tuple_type;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "tuple_type", 80, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r50);
CPyL34: ;
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 80, CPyStatic_fixup___globals, "mypy.types.TupleType", cpy_r_r50);
        goto CPyL110;
    }
    cpy_r_r52 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 80, CPyStatic_fixup___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r52);
CPyL36: ;
    cpy_r_r53 = CPyDef_types___TupleType___accept(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 80, CPyStatic_fixup___globals);
        goto CPyL110;
    } else
        goto CPyL132;
CPyL37: ;
    cpy_r_r54 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_tuple_type;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "tuple_type", 81, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r54);
CPyL38: ;
    if (likely(cpy_r_r54 != Py_None))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 81, CPyStatic_fixup___globals, "mypy.types.TupleType", cpy_r_r54);
        goto CPyL110;
    }
    cpy_r_r56 = CPyDef_nodes___TypeInfo___update_tuple_type(cpy_r_info, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 81, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r57 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_special_alias;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "special_alias", 82, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r57);
CPyL41: ;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_r57 != cpy_r_r58;
    CPy_DECREF(cpy_r_r57);
    if (!cpy_r_r59) goto CPyL47;
    cpy_r_r60 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "defn", 83, CPyStatic_fixup___globals);
        goto CPyL110;
    }
CPyL43: ;
    cpy_r_r61 = ((mypy___nodes___ClassDefObject *)cpy_r_r60)->_type_vars;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = PySequence_List(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 83, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r63 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_special_alias;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "special_alias", 83, CPyStatic_fixup___globals);
        goto CPyL133;
    }
CPyL45: ;
    if (likely(cpy_r_r63 != Py_None))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 83, CPyStatic_fixup___globals, "mypy.nodes.TypeAlias", cpy_r_r63);
        goto CPyL133;
    }
    CPy_DECREF(((mypy___nodes___TypeAliasObject *)cpy_r_r64)->_alias_tvars);
    ((mypy___nodes___TypeAliasObject *)cpy_r_r64)->_alias_tvars = cpy_r_r62;
CPyL47: ;
    cpy_r_r66 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "typeddict_type", 84, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r66);
CPyL48: ;
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r68 = cpy_r_r66 != cpy_r_r67;
    CPy_DECREF(cpy_r_r66);
    if (!cpy_r_r68) goto CPyL63;
    cpy_r_r69 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "typeddict_type", 85, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r69);
CPyL50: ;
    if (likely(cpy_r_r69 != Py_None))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 85, CPyStatic_fixup___globals, "mypy.types.TypedDictType", cpy_r_r69);
        goto CPyL110;
    }
    cpy_r_r71 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 85, CPyStatic_fixup___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r71);
CPyL52: ;
    cpy_r_r72 = CPyDef_types___TypedDictType___accept(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 85, CPyStatic_fixup___globals);
        goto CPyL110;
    } else
        goto CPyL135;
CPyL53: ;
    cpy_r_r73 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "typeddict_type", 86, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r73);
CPyL54: ;
    if (likely(cpy_r_r73 != Py_None))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 86, CPyStatic_fixup___globals, "mypy.types.TypedDictType", cpy_r_r73);
        goto CPyL110;
    }
    cpy_r_r75 = CPyDef_nodes___TypeInfo___update_typeddict_type(cpy_r_info, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 86, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r76 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_special_alias;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "special_alias", 87, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r76);
CPyL57: ;
    cpy_r_r77 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r78 = cpy_r_r76 != cpy_r_r77;
    CPy_DECREF(cpy_r_r76);
    if (!cpy_r_r78) goto CPyL63;
    cpy_r_r79 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "defn", 88, CPyStatic_fixup___globals);
        goto CPyL110;
    }
CPyL59: ;
    cpy_r_r80 = ((mypy___nodes___ClassDefObject *)cpy_r_r79)->_type_vars;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = PySequence_List(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 88, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r82 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_special_alias;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "special_alias", 88, CPyStatic_fixup___globals);
        goto CPyL136;
    }
CPyL61: ;
    if (likely(cpy_r_r82 != Py_None))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 88, CPyStatic_fixup___globals, "mypy.nodes.TypeAlias", cpy_r_r82);
        goto CPyL136;
    }
    CPy_DECREF(((mypy___nodes___TypeAliasObject *)cpy_r_r83)->_alias_tvars);
    ((mypy___nodes___TypeAliasObject *)cpy_r_r83)->_alias_tvars = cpy_r_r81;
CPyL63: ;
    cpy_r_r85 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_declared_metaclass;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "declared_metaclass", 89, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r85);
CPyL64: ;
    cpy_r_r86 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r87 = cpy_r_r85 != cpy_r_r86;
    CPy_DECREF(cpy_r_r85);
    if (!cpy_r_r87) goto CPyL69;
    cpy_r_r88 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_declared_metaclass;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "declared_metaclass", 90, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r88);
CPyL66: ;
    if (likely(cpy_r_r88 != Py_None))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 90, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r88);
        goto CPyL110;
    }
    cpy_r_r90 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 90, CPyStatic_fixup___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r90);
CPyL68: ;
    cpy_r_r91 = CPyDef_types___Instance___accept(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 90, CPyStatic_fixup___globals);
        goto CPyL110;
    } else
        goto CPyL138;
CPyL69: ;
    cpy_r_r92 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metaclass_type;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "metaclass_type", 91, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r92);
CPyL70: ;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r94 = cpy_r_r92 != cpy_r_r93;
    CPy_DECREF(cpy_r_r92);
    if (!cpy_r_r94) goto CPyL75;
    cpy_r_r95 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metaclass_type;
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "metaclass_type", 92, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r95);
CPyL72: ;
    if (likely(cpy_r_r95 != Py_None))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 92, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r95);
        goto CPyL110;
    }
    cpy_r_r97 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 92, CPyStatic_fixup___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r97);
CPyL74: ;
    cpy_r_r98 = CPyDef_types___Instance___accept(cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 92, CPyStatic_fixup___globals);
        goto CPyL110;
    } else
        goto CPyL140;
CPyL75: ;
    cpy_r_r99 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_alt_promote;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "alt_promote", 93, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r99);
CPyL76: ;
    cpy_r_r100 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r101 = cpy_r_r99 != cpy_r_r100;
    CPy_DECREF(cpy_r_r99);
    if (!cpy_r_r101) goto CPyL92;
    cpy_r_r102 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_alt_promote;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "alt_promote", 94, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r102);
CPyL78: ;
    if (likely(cpy_r_r102 != Py_None))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 94, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r102);
        goto CPyL110;
    }
    cpy_r_r104 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "type_fixer", 94, CPyStatic_fixup___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r104);
CPyL80: ;
    cpy_r_r105 = CPyDef_types___Instance___accept(cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 94, CPyStatic_fixup___globals);
        goto CPyL110;
    } else
        goto CPyL142;
CPyL81: ;
    cpy_r_r106 = PyList_New(0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 95, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = CPY_INT_TAG;
    cpy_r_r109 = NULL;
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_types___Instance(cpy_r_info, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 95, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_instance = cpy_r_r111;
    cpy_r_r112 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_alt_promote;
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "alt_promote", 98, CPyStatic_fixup___globals);
        goto CPyL143;
    }
CPyL84: ;
    if (likely(cpy_r_r112 != Py_None))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 98, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r112);
        goto CPyL143;
    }
    cpy_r_r114 = ((mypy___types___InstanceObject *)cpy_r_r113)->_type;
    cpy_r_r115 = ((mypy___nodes___TypeInfoObject *)cpy_r_r114)->__promote;
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "_promote", 98, CPyStatic_fixup___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r115);
CPyL86: ;
    cpy_r_r116 = PySequence_Contains(cpy_r_r115, cpy_r_instance);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 98, CPyStatic_fixup___globals);
        goto CPyL143;
    }
    cpy_r_r118 = cpy_r_r116;
    cpy_r_r119 = cpy_r_r118 ^ 1;
    if (!cpy_r_r119) goto CPyL144;
    cpy_r_r120 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_alt_promote;
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "alt_promote", 99, CPyStatic_fixup___globals);
        goto CPyL143;
    }
CPyL89: ;
    if (likely(cpy_r_r120 != Py_None))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 99, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r120);
        goto CPyL143;
    }
    cpy_r_r122 = ((mypy___types___InstanceObject *)cpy_r_r121)->_type;
    cpy_r_r123 = ((mypy___nodes___TypeInfoObject *)cpy_r_r122)->__promote;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "_promote", 99, CPyStatic_fixup___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r123);
CPyL91: ;
    cpy_r_r124 = PyList_Append(cpy_r_r123, cpy_r_instance);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_instance);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 99, CPyStatic_fixup___globals);
        goto CPyL110;
    }
CPyL92: ;
    cpy_r_r126 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->__mro_refs;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "_mro_refs", 100, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r126);
CPyL93: ;
    cpy_r_r127 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r128 = cpy_r_r126 != cpy_r_r127;
    if (!cpy_r_r128) goto CPyL145;
    if (likely(cpy_r_r126 != Py_None))
        cpy_r_r129 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 100, CPyStatic_fixup___globals, "list", cpy_r_r126);
        goto CPyL110;
    }
    cpy_r_r130 = (CPyPtr)&((PyVarObject *)cpy_r_r129)->ob_size;
    cpy_r_r131 = *(int64_t *)cpy_r_r130;
    CPy_DECREF(cpy_r_r129);
    cpy_r_r132 = cpy_r_r131 << 1;
    cpy_r_r133 = cpy_r_r132 != 0;
    if (!cpy_r_r133) goto CPyL109;
    cpy_r_r134 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->__mro_refs;
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "TypeInfo", "_mro_refs", 105, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r134);
CPyL97: ;
    if (likely(cpy_r_r134 != Py_None))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 105, CPyStatic_fixup___globals, "list", cpy_r_r134);
        goto CPyL110;
    }
    cpy_r_r136 = (CPyPtr)&((PyVarObject *)cpy_r_r135)->ob_size;
    cpy_r_r137 = *(int64_t *)cpy_r_r136;
    cpy_r_r138 = PyList_New(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 101, CPyStatic_fixup___globals);
        goto CPyL146;
    }
    cpy_r_r139 = 0;
CPyL100: ;
    cpy_r_r140 = (CPyPtr)&((PyVarObject *)cpy_r_r135)->ob_size;
    cpy_r_r141 = *(int64_t *)cpy_r_r140;
    cpy_r_r142 = cpy_r_r141 << 1;
    cpy_r_r143 = (Py_ssize_t)cpy_r_r139 < (Py_ssize_t)cpy_r_r142;
    if (!cpy_r_r143) goto CPyL147;
    cpy_r_r144 = CPyList_GetItemUnsafe(cpy_r_r135, cpy_r_r139);
    if (likely(PyUnicode_Check(cpy_r_r144)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_info", 101, CPyStatic_fixup___globals, "str", cpy_r_r144);
        goto CPyL148;
    }
    cpy_r_name = cpy_r_r145;
    cpy_r_r146 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "modules", 103, CPyStatic_fixup___globals);
        goto CPyL149;
    }
    CPy_INCREF(cpy_r_r146);
CPyL103: ;
    cpy_r_r147 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_allow_missing;
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_info", "NodeFixer", "allow_missing", 103, CPyStatic_fixup___globals);
        goto CPyL150;
    }
CPyL104: ;
    cpy_r_r148 = CPyDef_fixup___lookup_fully_qualified_typeinfo(cpy_r_r146, cpy_r_name, cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 102, CPyStatic_fixup___globals);
        goto CPyL148;
    }
    cpy_r_r149 = CPyList_SetItemUnsafe(cpy_r_r138, cpy_r_r139, cpy_r_r148);
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 101, CPyStatic_fixup___globals);
        goto CPyL148;
    }
    cpy_r_r150 = cpy_r_r139 + 2;
    cpy_r_r139 = cpy_r_r150;
    goto CPyL100;
CPyL107: ;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro = cpy_r_r138;
    cpy_r_r151 = 1;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 101, CPyStatic_fixup___globals);
        goto CPyL110;
    }
    cpy_r_r152 = Py_None;
    CPy_INCREF(cpy_r_r152);
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->__mro_refs != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->__mro_refs);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->__mro_refs = cpy_r_r152;
    cpy_r_r153 = 1;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 107, CPyStatic_fixup___globals);
        goto CPyL110;
    }
CPyL109: ;
    tuple_T3OOO __tmp2873 = { NULL, NULL, NULL };
    cpy_r_r154 = __tmp2873;
    cpy_r_r155 = cpy_r_r154;
    goto CPyL111;
CPyL110: ;
    cpy_r_r156 = CPy_CatchError();
    cpy_r_r155 = cpy_r_r156;
CPyL111: ;
    if (((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info != NULL) {
        CPy_DECREF(((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info);
    }
    ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info = cpy_r_save_info;
    cpy_r_r157 = 1;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 109, CPyStatic_fixup___globals);
        goto CPyL115;
    }
    if (cpy_r_r155.f0 == NULL) goto CPyL119;
    CPy_Reraise();
    if (!0) {
        goto CPyL115;
    } else
        goto CPyL151;
CPyL114: ;
    CPy_Unreachable();
CPyL115: ;
    if (cpy_r_r155.f0 == NULL) goto CPyL117;
    CPy_RestoreExcInfo(cpy_r_r155);
    CPy_XDECREF(cpy_r_r155.f0);
    CPy_XDECREF(cpy_r_r155.f1);
    CPy_XDECREF(cpy_r_r155.f2);
CPyL117: ;
    cpy_r_r158 = CPy_KeepPropagating();
    if (!cpy_r_r158) goto CPyL120;
    CPy_Unreachable();
CPyL119: ;
    return 1;
CPyL120: ;
    cpy_r_r159 = 2;
    return cpy_r_r159;
CPyL121: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL8;
CPyL122: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL110;
CPyL123: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL22;
CPyL124: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL110;
CPyL125: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_base);
    goto CPyL110;
CPyL126: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL21;
CPyL127: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL31;
CPyL128: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL110;
CPyL129: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_p);
    goto CPyL110;
CPyL130: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL30;
CPyL131: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL110;
CPyL132: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL37;
CPyL133: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL110;
CPyL134: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL110;
CPyL135: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL53;
CPyL136: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL110;
CPyL137: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL110;
CPyL138: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL69;
CPyL139: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL110;
CPyL140: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL75;
CPyL141: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL110;
CPyL142: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL81;
CPyL143: ;
    CPy_DecRef(cpy_r_instance);
    goto CPyL110;
CPyL144: ;
    CPy_DECREF(cpy_r_instance);
    goto CPyL92;
CPyL145: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL109;
CPyL146: ;
    CPy_DecRef(cpy_r_r135);
    goto CPyL110;
CPyL147: ;
    CPy_DECREF(cpy_r_r135);
    goto CPyL107;
CPyL148: ;
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r138);
    goto CPyL110;
CPyL149: ;
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_name);
    goto CPyL110;
CPyL150: ;
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r146);
    goto CPyL110;
CPyL151: ;
    CPy_XDECREF(cpy_r_r155.f0);
    CPy_XDECREF(cpy_r_r155.f1);
    CPy_XDECREF(cpy_r_r155.f2);
    goto CPyL114;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:visit_type_info", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_type_info(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_info", 65, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_symbol_table(PyObject *cpy_r_self, PyObject *cpy_r_symtab, PyObject *cpy_r_table_fullname) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_cross_ref;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_stnode;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    CPyPtr cpy_r_r104;
    CPyPtr cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyTagged cpy_r_r114;
    char cpy_r_r115;
    cpy_r_r0 = CPyDict_Items(cpy_r_symtab);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 114, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL66;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp2874;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp2874 = NULL;
        goto __LL2875;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp2874 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp2874 = NULL;
    }
    if (__tmp2874 == NULL) goto __LL2875;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r6, 1)) == CPyType_nodes___SymbolTableNode))
        __tmp2874 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp2874 = NULL;
    }
    if (__tmp2874 == NULL) goto __LL2875;
    __tmp2874 = cpy_r_r6;
__LL2875: ;
    if (unlikely(__tmp2874 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.SymbolTableNode]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2876 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp2876);
        PyObject *__tmp2877;
        if (likely(PyUnicode_Check(__tmp2876)))
            __tmp2877 = __tmp2876;
        else {
            CPy_TypeError("str", __tmp2876); 
            __tmp2877 = NULL;
        }
        cpy_r_r7.f0 = __tmp2877;
        PyObject *__tmp2878 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp2878);
        PyObject *__tmp2879;
        if (likely(Py_TYPE(__tmp2878) == CPyType_nodes___SymbolTableNode))
            __tmp2879 = __tmp2878;
        else {
            CPy_TypeError("mypy.nodes.SymbolTableNode", __tmp2878); 
            __tmp2879 = NULL;
        }
        cpy_r_r7.f1 = __tmp2879;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 114, CPyStatic_fixup___globals);
        goto CPyL67;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_key = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_value = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_cross_ref;
    CPy_INCREF(cpy_r_r10);
    cpy_r_cross_ref = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_cross_ref != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL68;
    cpy_r_r13 = Py_None;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_cross_ref);
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_cross_ref = cpy_r_r13;
    CPy_INCREF(cpy_r_cross_ref);
    if (likely(cpy_r_cross_ref != Py_None))
        cpy_r_r15 = cpy_r_cross_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 118, CPyStatic_fixup___globals, "str", cpy_r_cross_ref);
        goto CPyL69;
    }
    cpy_r_r16 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_symbol_table", "NodeFixer", "modules", 118, CPyStatic_fixup___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r16);
CPyL7: ;
    cpy_r_r17 = PyDict_Contains(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 118, CPyStatic_fixup___globals);
        goto CPyL69;
    }
    cpy_r_r19 = cpy_r_r17;
    if (cpy_r_r19) {
        goto CPyL71;
    } else
        goto CPyL14;
CPyL9: ;
    cpy_r_r20 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_symbol_table", "NodeFixer", "modules", 119, CPyStatic_fixup___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r20);
CPyL10: ;
    if (likely(cpy_r_cross_ref != Py_None))
        cpy_r_r21 = cpy_r_cross_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 119, CPyStatic_fixup___globals, "str", cpy_r_cross_ref);
        goto CPyL73;
    }
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 119, CPyStatic_fixup___globals);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___MypyFile))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 119, CPyStatic_fixup___globals, "mypy.nodes.MypyFile", cpy_r_r22);
        goto CPyL74;
    }
    CPy_DECREF(((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node);
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node = cpy_r_r23;
    CPy_DECREF(cpy_r_value);
    goto CPyL63;
CPyL14: ;
    CPy_INCREF(cpy_r_cross_ref);
    if (likely(cpy_r_cross_ref != Py_None))
        cpy_r_r25 = cpy_r_cross_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 122, CPyStatic_fixup___globals, "str", cpy_r_cross_ref);
        goto CPyL69;
    }
    cpy_r_r26 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_symbol_table", "NodeFixer", "modules", 122, CPyStatic_fixup___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r26);
CPyL16: ;
    cpy_r_r27 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_allow_missing;
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AttributeError("mypy/fixup.py", "visit_symbol_table", "NodeFixer", "allow_missing", 122, CPyStatic_fixup___globals);
        goto CPyL76;
    }
CPyL17: ;
    cpy_r_r28 = cpy_r_r27 ^ 1;
    cpy_r_r29 = CPyDef_lookup___lookup_fully_qualified(cpy_r_r25, cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 121, CPyStatic_fixup___globals);
        goto CPyL69;
    }
    cpy_r_stnode = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_stnode != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL77;
    if (likely(cpy_r_stnode != Py_None))
        cpy_r_r32 = cpy_r_stnode;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals, "mypy.nodes.SymbolTableNode", cpy_r_stnode);
        goto CPyL78;
    }
    cpy_r_r33 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r32)->_node;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL79;
    } else
        goto CPyL80;
CPyL21: ;
    cpy_r_r36 = CPyStatics[224]; /* '.' */
    cpy_r_r37 = PyUnicode_Concat(cpy_r_table_fullname, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals);
        goto CPyL81;
    }
    cpy_r_r38 = PyUnicode_Concat(cpy_r_r37, cpy_r_key);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals);
        goto CPyL82;
    }
    if (likely(cpy_r_cross_ref != Py_None))
        cpy_r_r39 = cpy_r_cross_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals, "str", cpy_r_cross_ref);
        goto CPyL83;
    }
    cpy_r_r40.f0 = cpy_r_r38;
    cpy_r_r40.f1 = cpy_r_r39;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals);
        goto CPyL84;
    }
    cpy_r_r44 = PyTuple_New(2);
    if (unlikely(cpy_r_r44 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2880 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r44, 0, __tmp2880);
    PyObject *__tmp2881 = cpy_r_r40.f1;
    PyTuple_SET_ITEM(cpy_r_r44, 1, __tmp2881);
    PyObject *cpy_r_r45[1] = {cpy_r_r44};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r46, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_r44);
    CPy_Raise(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 125, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL28: ;
    if (likely(cpy_r_stnode != Py_None))
        cpy_r_r48 = cpy_r_stnode;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 126, CPyStatic_fixup___globals, "mypy.nodes.SymbolTableNode", cpy_r_stnode);
        goto CPyL86;
    }
    cpy_r_r49 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r48)->_node;
    CPy_INCREF(cpy_r_r49);
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 126, CPyStatic_fixup___globals, "mypy.nodes.SymbolNode", cpy_r_r49);
        goto CPyL86;
    }
    CPy_DECREF(cpy_r_stnode);
    CPy_DECREF(((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node);
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node = cpy_r_r50;
    CPy_DECREF(cpy_r_value);
    goto CPyL63;
CPyL31: ;
    cpy_r_r52 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_allow_missing;
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AttributeError("mypy/fixup.py", "visit_symbol_table", "NodeFixer", "allow_missing", 127, CPyStatic_fixup___globals);
        goto CPyL72;
    }
CPyL32: ;
    if (cpy_r_r52) {
        goto CPyL87;
    } else
        goto CPyL88;
CPyL33: ;
    if (0) {
        goto CPyL89;
    } else
        goto CPyL90;
CPyL34: ;
    cpy_r_r53 = CPyStatics[2555]; /* 'Could not find cross-ref ' */
    if (likely(cpy_r_cross_ref != Py_None))
        cpy_r_r54 = cpy_r_cross_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 128, CPyStatic_fixup___globals, "str", cpy_r_cross_ref);
        goto CPyL65;
    }
    cpy_r_r55 = CPyStr_Build(2, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 128, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    cpy_r_r56 = CPyModule_builtins;
    cpy_r_r57 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 128, CPyStatic_fixup___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r59[1] = {cpy_r_r55};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 1, 0);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 128, CPyStatic_fixup___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r55);
    CPy_Raise(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 128, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r62 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_symbol_table", "NodeFixer", "modules", 131, CPyStatic_fixup___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r62);
CPyL41: ;
    cpy_r_r63 = CPyDef_fixup___missing_info(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 131, CPyStatic_fixup___globals);
        goto CPyL74;
    }
    CPy_DECREF(((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node);
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node = cpy_r_r63;
    CPy_DECREF(cpy_r_value);
    goto CPyL63;
CPyL43: ;
    cpy_r_r65 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node;
    cpy_r_r66 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_r65)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL45;
    cpy_r_r70 = cpy_r_r69;
    goto CPyL46;
CPyL45: ;
    cpy_r_r71 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_r65)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    cpy_r_r70 = cpy_r_r74;
CPyL46: ;
    if (cpy_r_r70) {
        goto CPyL92;
    } else
        goto CPyL49;
CPyL47: ;
    cpy_r_r75 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_value);
    if (likely((Py_TYPE(cpy_r_r75) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r75) == CPyType_nodes___TypeInfo)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 135, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_r75);
        goto CPyL67;
    }
    cpy_r_r77 = CPyDef_fixup___NodeFixer___visit_type_info(cpy_r_self, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 135, CPyStatic_fixup___globals);
        goto CPyL67;
    } else
        goto CPyL63;
CPyL49: ;
    cpy_r_r78 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node;
    cpy_r_r79 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r80 = cpy_r_r78 != cpy_r_r79;
    if (cpy_r_r80) {
        goto CPyL93;
    } else
        goto CPyL52;
CPyL50: ;
    cpy_r_r81 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_value)->_node;
    CPy_INCREF(cpy_r_r81);
    CPy_DECREF(cpy_r_value);
    if (likely(cpy_r_r81 != Py_None))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 137, CPyStatic_fixup___globals, "mypy.nodes.SymbolNode", cpy_r_r81);
        goto CPyL67;
    }
    cpy_r_r83 = CPY_GET_METHOD_TRAIT(cpy_r_r82, CPyType_nodes___SymbolNode, 4, mypy___nodes___SymbolNodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r82, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 137, CPyStatic_fixup___globals);
        goto CPyL67;
    } else
        goto CPyL94;
CPyL52: ;
    if (0) {
        goto CPyL95;
    } else
        goto CPyL96;
CPyL53: ;
    cpy_r_r84 = CPyStatics[163]; /* '' */
    cpy_r_r85 = CPyStatics[2556]; /* 'Unexpected empty node ' */
    cpy_r_r86 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r87 = CPyStatics[163]; /* '' */
    cpy_r_r88 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r89[3] = {cpy_r_r86, cpy_r_key, cpy_r_r87};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = PyObject_VectorcallMethod(cpy_r_r88, cpy_r_r90, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_key);
    if (likely(PyUnicode_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals, "str", cpy_r_r91);
        goto CPyL98;
    }
    cpy_r_r93 = CPyStatics[297]; /* ': ' */
    cpy_r_r94 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r95 = CPyStatics[163]; /* '' */
    cpy_r_r96 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r97[3] = {cpy_r_r94, cpy_r_value, cpy_r_r95};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = PyObject_VectorcallMethod(cpy_r_r96, cpy_r_r98, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals, "str", cpy_r_r99);
        goto CPyL100;
    }
    cpy_r_r101 = PyList_New(4);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL101;
    }
    cpy_r_r102 = (CPyPtr)&((PyListObject *)cpy_r_r101)->ob_item;
    cpy_r_r103 = *(CPyPtr *)cpy_r_r102;
    CPy_INCREF(cpy_r_r85);
    *(PyObject * *)cpy_r_r103 = cpy_r_r85;
    cpy_r_r104 = cpy_r_r103 + 8;
    *(PyObject * *)cpy_r_r104 = cpy_r_r92;
    cpy_r_r105 = cpy_r_r103 + 16;
    CPy_INCREF(cpy_r_r93);
    *(PyObject * *)cpy_r_r105 = cpy_r_r93;
    cpy_r_r106 = cpy_r_r103 + 24;
    *(PyObject * *)cpy_r_r106 = cpy_r_r100;
    cpy_r_r107 = PyUnicode_Join(cpy_r_r84, cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    cpy_r_r108 = CPyModule_builtins;
    cpy_r_r109 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL102;
    }
    PyObject *cpy_r_r111[1] = {cpy_r_r107};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 1, 0);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL102;
    }
    CPy_DECREF(cpy_r_r107);
    CPy_Raise(cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 139, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r114 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r114;
    goto CPyL2;
CPyL64: ;
    return 1;
CPyL65: ;
    cpy_r_r115 = 2;
    return cpy_r_r115;
CPyL66: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL65;
CPyL68: ;
    CPy_DECREF(cpy_r_cross_ref);
    goto CPyL43;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_cross_ref);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_cross_ref);
    CPy_DecRef(cpy_r_r15);
    goto CPyL65;
CPyL71: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL9;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_cross_ref);
    goto CPyL65;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r20);
    goto CPyL65;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_value);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_cross_ref);
    CPy_DecRef(cpy_r_r25);
    goto CPyL65;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_cross_ref);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL65;
CPyL77: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_stnode);
    goto CPyL31;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_cross_ref);
    CPy_DecRef(cpy_r_stnode);
    goto CPyL65;
CPyL79: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_cross_ref);
    goto CPyL28;
CPyL80: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_stnode);
    goto CPyL21;
CPyL81: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_cross_ref);
    goto CPyL65;
CPyL82: ;
    CPy_DecRef(cpy_r_cross_ref);
    goto CPyL65;
CPyL83: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL65;
CPyL84: ;
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    goto CPyL65;
CPyL85: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL65;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_stnode);
    goto CPyL65;
CPyL87: ;
    CPy_DECREF(cpy_r_cross_ref);
    goto CPyL40;
CPyL88: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL33;
CPyL89: ;
    CPy_DECREF(cpy_r_cross_ref);
    goto CPyL63;
CPyL90: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL34;
CPyL91: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL65;
CPyL92: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL47;
CPyL93: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL50;
CPyL94: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL63;
CPyL95: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    goto CPyL63;
CPyL96: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL53;
CPyL97: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    goto CPyL65;
CPyL98: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL65;
CPyL99: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r92);
    goto CPyL65;
CPyL100: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL65;
CPyL101: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r100);
    goto CPyL65;
CPyL102: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL65;
}

PyObject *CPyPy_fixup___NodeFixer___visit_symbol_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symtab", "table_fullname", 0};
    static CPyArg_Parser parser = {"OO:visit_symbol_table", kwlist, 0};
    PyObject *obj_symtab;
    PyObject *obj_table_fullname;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_symtab, &obj_table_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_symtab;
    if (likely(PyDict_Check(obj_symtab)))
        arg_symtab = obj_symtab;
    else {
        CPy_TypeError("dict", obj_symtab); 
        goto fail;
    }
    PyObject *arg_table_fullname;
    if (likely(PyUnicode_Check(obj_table_fullname)))
        arg_table_fullname = obj_table_fullname;
    else {
        CPy_TypeError("str", obj_table_fullname); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_symbol_table(arg_self, arg_symtab, arg_table_fullname);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_symbol_table", 112, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_func_def", "NodeFixer", "current_info", 142, CPyStatic_fixup___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_func_def", "NodeFixer", "current_info", 143, CPyStatic_fixup___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_func_def", 143, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_r3);
        goto CPyL10;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_info);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_info = cpy_r_r4;
CPyL5: ;
    cpy_r_r6 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_func_def", 145, CPyStatic_fixup___globals, "mypy.types.ProperType", cpy_r_r9);
        goto CPyL10;
    }
    cpy_r_r11 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_func_def", "NodeFixer", "type_fixer", 145, CPyStatic_fixup___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = CPY_GET_METHOD(cpy_r_r10, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r10, cpy_r_r11); /* accept */
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_func_def", 145, CPyStatic_fixup___globals);
        goto CPyL10;
    } else
        goto CPyL12;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL11: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL9;
}

PyObject *CPyPy_fixup___NodeFixer___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_func_def(arg_self, arg_func);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_func_def", 141, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_overloaded_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    cpy_r_r0 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_overloaded_func_def", "NodeFixer", "current_info", 148, CPyStatic_fixup___globals);
        goto CPyL35;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_overloaded_func_def", "NodeFixer", "current_info", 149, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 149, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_r3);
        goto CPyL35;
    }
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_info);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_info = cpy_r_r4;
CPyL5: ;
    cpy_r_r6 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 151, CPyStatic_fixup___globals, "mypy.types.ProperType", cpy_r_r9);
        goto CPyL35;
    }
    cpy_r_r11 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_overloaded_func_def", "NodeFixer", "type_fixer", 151, CPyStatic_fixup___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = CPY_GET_METHOD(cpy_r_r10, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r10, cpy_r_r11); /* accept */
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 151, CPyStatic_fixup___globals);
        goto CPyL35;
    } else
        goto CPyL37;
CPyL9: ;
    cpy_r_r13 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL10: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL38;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (Py_TYPE(cpy_r_r19) == CPyType_nodes___FuncDef)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2882;
    if (Py_TYPE(cpy_r_r19) == CPyType_nodes___Decorator)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2882;
    CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 152, CPyStatic_fixup___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r19);
    goto CPyL39;
__LL2882: ;
    cpy_r_item = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___FuncDef))
        cpy_r_r25 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 153, CPyStatic_fixup___globals, "mypy.nodes.FuncDef", cpy_r_item);
        goto CPyL39;
    }
    cpy_r_r26 = CPyDef_nodes___FuncDef___accept(cpy_r_r25, cpy_r_self);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 153, CPyStatic_fixup___globals);
        goto CPyL39;
    }
    if (unlikely(cpy_r_r26 != Py_None)) {
        CPy_TypeError("None", cpy_r_r26); cpy_r_r27 = 2;
    } else
        cpy_r_r27 = 1;
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 153, CPyStatic_fixup___globals);
        goto CPyL39;
    }
    cpy_r_r28 = cpy_r_r27;
    goto CPyL21;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___Decorator))
        cpy_r_r29 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 153, CPyStatic_fixup___globals, "mypy.nodes.Decorator", cpy_r_item);
        goto CPyL39;
    }
    cpy_r_r30 = CPyDef_nodes___Decorator___accept(cpy_r_r29, cpy_r_self);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 153, CPyStatic_fixup___globals);
        goto CPyL39;
    }
    if (unlikely(cpy_r_r30 != Py_None)) {
        CPy_TypeError("None", cpy_r_r30); cpy_r_r31 = 2;
    } else
        cpy_r_r31 = 1;
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 153, CPyStatic_fixup___globals);
        goto CPyL39;
    }
    cpy_r_r28 = cpy_r_r31;
CPyL21: ;
    cpy_r_r32 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r32;
    goto CPyL10;
CPyL22: ;
    cpy_r_r33 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_impl;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = PyObject_IsTrue(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 154, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL34;
    cpy_r_r37 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_impl;
    CPy_INCREF(cpy_r_r37);
    if (Py_TYPE(cpy_r_r37) == CPyType_nodes___FuncDef)
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL2883;
    if (Py_TYPE(cpy_r_r37) == CPyType_nodes___Decorator)
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL2883;
    CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r37);
    goto CPyL35;
__LL2883: ;
    cpy_r_r39 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_r38)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___FuncDef))
        cpy_r_r43 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals, "mypy.nodes.FuncDef", cpy_r_r38);
        goto CPyL35;
    }
    cpy_r_r44 = CPyDef_nodes___FuncDef___accept(cpy_r_r43, cpy_r_self);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    if (unlikely(cpy_r_r44 != Py_None)) {
        CPy_TypeError("None", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = 1;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    cpy_r_r46 = cpy_r_r45;
    goto CPyL34;
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___Decorator))
        cpy_r_r47 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals, "mypy.nodes.Decorator", cpy_r_r38);
        goto CPyL35;
    }
    cpy_r_r48 = CPyDef_nodes___Decorator___accept(cpy_r_r47, cpy_r_self);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    if (unlikely(cpy_r_r48 != Py_None)) {
        CPy_TypeError("None", cpy_r_r48); cpy_r_r49 = 2;
    } else
        cpy_r_r49 = 1;
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 155, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    cpy_r_r46 = cpy_r_r49;
CPyL34: ;
    return 1;
CPyL35: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
CPyL36: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL9;
CPyL38: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL22;
CPyL39: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL35;
}

PyObject *CPyPy_fixup___NodeFixer___visit_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_overloaded_func_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def", 147, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_overloaded_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_overloaded_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_overloaded_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_overloaded_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_overloaded_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_overloaded_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_overloaded_func_def__StatementVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_d) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_decorator", "NodeFixer", "current_info", 158, CPyStatic_fixup___globals);
        goto CPyL17;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_decorator", "NodeFixer", "current_info", 159, CPyStatic_fixup___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_decorator", 159, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_r3);
        goto CPyL17;
    }
    cpy_r_r5 = ((mypy___nodes___DecoratorObject *)cpy_r_d)->_var;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r5)->_info);
    ((mypy___nodes___VarObject *)cpy_r_r5)->_info = cpy_r_r4;
CPyL5: ;
    cpy_r_r7 = ((mypy___nodes___DecoratorObject *)cpy_r_d)->_func;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_decorator", 160, CPyStatic_fixup___globals);
        goto CPyL17;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = ((mypy___nodes___DecoratorObject *)cpy_r_d)->_func;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_nodes___FuncDef___accept(cpy_r_r11, cpy_r_self);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_decorator", 161, CPyStatic_fixup___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL8: ;
    cpy_r_r13 = ((mypy___nodes___DecoratorObject *)cpy_r_d)->_var;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_decorator", 162, CPyStatic_fixup___globals);
        goto CPyL17;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = ((mypy___nodes___DecoratorObject *)cpy_r_d)->_var;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_nodes___Var___accept(cpy_r_r17, cpy_r_self);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_decorator", 163, CPyStatic_fixup___globals);
        goto CPyL17;
    } else
        goto CPyL19;
CPyL11: ;
    cpy_r_r19 = ((mypy___nodes___DecoratorObject *)cpy_r_d)->_decorators;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
CPyL12: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL20;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_nodes___Expression)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_decorator", 164, CPyStatic_fixup___globals, "mypy.nodes.Expression", cpy_r_r25);
        goto CPyL21;
    }
    cpy_r_node = cpy_r_r26;
    cpy_r_r27 = CPY_GET_METHOD_TRAIT(cpy_r_node, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_node, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_decorator", 165, CPyStatic_fixup___globals);
        goto CPyL21;
    } else
        goto CPyL22;
CPyL15: ;
    cpy_r_r28 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r28;
    goto CPyL12;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL18: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL8;
CPyL19: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL11;
CPyL20: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL15;
}

PyObject *CPyPy_fixup___NodeFixer___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"d", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_d;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_d)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_d;
    if (likely(Py_TYPE(obj_d) == CPyType_nodes___Decorator))
        arg_d = obj_d;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_d); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_decorator(arg_self, arg_d);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_decorator", 157, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_c) {
    PyObject *cpy_r_r0;
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_c)->_type_vars;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL18;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___TypeVarLikeType)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_class_def", 168, CPyStatic_fixup___globals, "mypy.types.TypeVarLikeType", cpy_r_r6);
        goto CPyL19;
    }
    cpy_r_v = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_types___TypeVarType))
        cpy_r_r12 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_class_def", 170, CPyStatic_fixup___globals, "mypy.types.TypeVarType", cpy_r_v);
        goto CPyL20;
    }
    cpy_r_r13 = ((mypy___types___TypeVarTypeObject *)cpy_r_r12)->_values;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL6: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___Type)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_class_def", 170, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL22;
    }
    cpy_r_value = cpy_r_r20;
    cpy_r_r21 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_class_def", "NodeFixer", "type_fixer", 171, CPyStatic_fixup___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r21);
CPyL9: ;
    cpy_r_r22 = CPY_GET_METHOD(cpy_r_value, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_r21); /* accept */
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_class_def", 171, CPyStatic_fixup___globals);
        goto CPyL22;
    } else
        goto CPyL24;
CPyL10: ;
    cpy_r_r23 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r23;
    goto CPyL6;
CPyL11: ;
    cpy_r_r24 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_upper_bound;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_class_def", "NodeFixer", "type_fixer", 172, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r25);
CPyL12: ;
    cpy_r_r26 = CPY_GET_METHOD(cpy_r_r24, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r24, cpy_r_r25); /* accept */
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_class_def", 172, CPyStatic_fixup___globals);
        goto CPyL20;
    } else
        goto CPyL26;
CPyL13: ;
    cpy_r_r27 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_default;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_v);
    cpy_r_r28 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_class_def", "NodeFixer", "type_fixer", 173, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r28);
CPyL14: ;
    cpy_r_r29 = CPY_GET_METHOD(cpy_r_r27, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r27, cpy_r_r28); /* accept */
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_class_def", 173, CPyStatic_fixup___globals);
        goto CPyL19;
    } else
        goto CPyL28;
CPyL15: ;
    cpy_r_r30 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r30;
    goto CPyL1;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL18: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_v);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL11;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r13);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_value);
    goto CPyL17;
CPyL24: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL10;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r24);
    goto CPyL17;
CPyL26: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL13;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    goto CPyL17;
CPyL28: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL15;
}

PyObject *CPyPy_fixup___NodeFixer___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"c", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_c;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_c)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_c;
    if (likely(Py_TYPE(obj_c) == CPyType_nodes___ClassDef))
        arg_c = obj_c;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_c); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_class_def(arg_self, arg_c);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_class_def", 167, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_tv) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___nodes___TypeVarExprObject *)cpy_r_tv)->_values;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL12;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_var_expr", 176, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL13;
    }
    cpy_r_value = cpy_r_r7;
    cpy_r_r8 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_var_expr", "NodeFixer", "type_fixer", 177, CPyStatic_fixup___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r8);
CPyL4: ;
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_value, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_r8); /* accept */
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_expr", 177, CPyStatic_fixup___globals);
        goto CPyL13;
    } else
        goto CPyL15;
CPyL5: ;
    cpy_r_r10 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r10;
    goto CPyL1;
CPyL6: ;
    cpy_r_r11 = ((mypy___nodes___TypeVarExprObject *)cpy_r_tv)->_upper_bound;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_var_expr", "NodeFixer", "type_fixer", 178, CPyStatic_fixup___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r12);
CPyL7: ;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_r11, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r11, cpy_r_r12); /* accept */
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_expr", 178, CPyStatic_fixup___globals);
        goto CPyL11;
    } else
        goto CPyL17;
CPyL8: ;
    cpy_r_r14 = ((mypy___nodes___TypeVarExprObject *)cpy_r_tv)->_default;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_var_expr", "NodeFixer", "type_fixer", 179, CPyStatic_fixup___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r15);
CPyL9: ;
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_r14, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r14, cpy_r_r15); /* accept */
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_expr", 179, CPyStatic_fixup___globals);
        goto CPyL11;
    } else
        goto CPyL19;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_value);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL5;
CPyL16: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL17: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL18: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL11;
CPyL19: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL10;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tv", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_tv;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tv)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_tv;
    if (likely(Py_TYPE(obj_tv) == CPyType_nodes___TypeVarExpr))
        arg_tv = obj_tv;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_tv); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_type_var_expr(arg_self, arg_tv);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_expr", 175, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_type_var_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_var_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_type_var_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_expr__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_paramspec_expr(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_p)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_paramspec_expr", "NodeFixer", "type_fixer", 182, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_r1); /* accept */
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_paramspec_expr", 182, CPyStatic_fixup___globals);
        goto CPyL5;
    } else
        goto CPyL7;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_p)->_default;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_paramspec_expr", "NodeFixer", "type_fixer", 183, CPyStatic_fixup___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_r3, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r3, cpy_r_r4); /* accept */
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_paramspec_expr", 183, CPyStatic_fixup___globals);
        goto CPyL5;
    } else
        goto CPyL9;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
CPyL9: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL4;
}

PyObject *CPyPy_fixup___NodeFixer___visit_paramspec_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_nodes___ParamSpecExpr))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_p); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_paramspec_expr(arg_self, arg_p);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_paramspec_expr", 181, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_paramspec_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_paramspec_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_paramspec_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_paramspec_expr__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_paramspec_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_paramspec_expr__ExpressionVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_tv) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_tv)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_var_tuple_expr", "NodeFixer", "type_fixer", 186, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_r1); /* accept */
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple_expr", 186, CPyStatic_fixup___globals);
        goto CPyL5;
    } else
        goto CPyL7;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_tv)->_default;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_var_tuple_expr", "NodeFixer", "type_fixer", 187, CPyStatic_fixup___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_r3, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r3, cpy_r_r4); /* accept */
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple_expr", 187, CPyStatic_fixup___globals);
        goto CPyL5;
    } else
        goto CPyL9;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
CPyL9: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL4;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_var_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tv", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr", kwlist, 0};
    PyObject *obj_tv;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tv)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_tv;
    if (likely(Py_TYPE(obj_tv) == CPyType_nodes___TypeVarTupleExpr))
        arg_tv = obj_tv;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_tv); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr(arg_self, arg_tv);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple_expr", 185, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_var_tuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple_expr__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_type_var_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_v) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_var", "NodeFixer", "current_info", 190, CPyStatic_fixup___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_current_info;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_var", "NodeFixer", "current_info", 191, CPyStatic_fixup___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_var", 191, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_r3);
        goto CPyL10;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_v)->_info);
    ((mypy___nodes___VarObject *)cpy_r_v)->_info = cpy_r_r4;
CPyL5: ;
    cpy_r_r6 = ((mypy___nodes___VarObject *)cpy_r_v)->_type;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___nodes___VarObject *)cpy_r_v)->_type;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_var", 193, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL10;
    }
    cpy_r_r11 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_var", "NodeFixer", "type_fixer", 193, CPyStatic_fixup___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = CPY_GET_METHOD(cpy_r_r10, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r10, cpy_r_r11); /* accept */
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_var", 193, CPyStatic_fixup___globals);
        goto CPyL10;
    } else
        goto CPyL12;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL11: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL9;
}

PyObject *CPyPy_fixup___NodeFixer___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"v", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_v)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_v;
    if (likely(Py_TYPE(obj_v) == CPyType_nodes___Var))
        arg_v = obj_v;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_v); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_var(arg_self, arg_v);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_var", 189, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_var__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_var(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_var__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_var__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_var__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer___visit_type_alias(PyObject *cpy_r_self, PyObject *cpy_r_a) {
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
    PyObject *cpy_r_v;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypy___nodes___TypeAliasObject *)cpy_r_a)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_alias", "NodeFixer", "type_fixer", 196, CPyStatic_fixup___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_r1); /* accept */
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_alias", 196, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL11;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___TypeAliasObject *)cpy_r_a)->_alias_tvars;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___TypeVarLikeType)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_alias", 197, CPyStatic_fixup___globals, "mypy.types.TypeVarLikeType", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_v = cpy_r_r10;
    cpy_r_r11 = ((mypy___fixup___NodeFixerObject *)cpy_r_self)->_type_fixer;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_alias", "NodeFixer", "type_fixer", 198, CPyStatic_fixup___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r11);
CPyL6: ;
    cpy_r_r12 = CPY_GET_METHOD(cpy_r_v, CPyType_types___TypeVarLikeType, 9, mypy___types___TypeVarLikeTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_v, cpy_r_r11); /* accept */
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_alias", 198, CPyStatic_fixup___globals);
        goto CPyL13;
    } else
        goto CPyL15;
CPyL7: ;
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL3;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
CPyL12: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_v);
    goto CPyL9;
CPyL15: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL7;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_alias(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"a", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias", kwlist, 0};
    PyObject *obj_a;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_a)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_a;
    if (likely(Py_TYPE(obj_a) == CPyType_nodes___TypeAlias))
        arg_a = obj_a;
    else {
        CPy_TypeError("mypy.nodes.TypeAlias", obj_a); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer___visit_type_alias(arg_self, arg_a);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_alias", 195, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___NodeFixer___visit_type_alias__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___NodeFixer___visit_type_alias(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___NodeFixer___visit_type_alias__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___NodeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAlias))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAlias", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___NodeFixer___visit_type_alias__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_alias__NodeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___NodeFixer_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypy___fixup___NodeFixerObject *)cpy_r___mypyc_self__)->_current_info = cpy_r_r0;
    return 1;
}

PyObject *CPyPy_fixup___NodeFixer_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_fixup___NodeFixer))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.fixup.NodeFixer", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_fixup___NodeFixer_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "__mypyc_defaults_setup", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_modules, char cpy_r_allow_missing) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    CPy_INCREF(cpy_r_modules);
    if (((mypy___fixup___TypeFixerObject *)cpy_r_self)->_modules != NULL) {
        CPy_DECREF(((mypy___fixup___TypeFixerObject *)cpy_r_self)->_modules);
    }
    ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_modules = cpy_r_modules;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/fixup.py", "__init__", 203, CPyStatic_fixup___globals);
        goto CPyL3;
    }
    ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_allow_missing = cpy_r_allow_missing;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/fixup.py", "__init__", 204, CPyStatic_fixup___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modules", "allow_missing", 0};
    PyObject *obj_modules;
    PyObject *obj_allow_missing;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_modules, &obj_allow_missing)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char arg_allow_missing;
    if (unlikely(!PyBool_Check(obj_allow_missing))) {
        CPy_TypeError("bool", obj_allow_missing); goto fail;
    } else
        arg_allow_missing = obj_allow_missing == Py_True;
    char retval = CPyDef_fixup___TypeFixer_____init__(arg_self, arg_modules, arg_allow_missing);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "__init__", 202, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_inst) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_type_ref;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_inst)->_type_ref;
    CPy_INCREF(cpy_r_r0);
    cpy_r_type_ref = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type_ref == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL27;
    } else
        goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_inst)->_type_ref);
    ((mypy___types___InstanceObject *)cpy_r_inst)->_type_ref = cpy_r_r3;
    cpy_r_r5 = ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_instance", "TypeFixer", "modules", 213, CPyStatic_fixup___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(cpy_r_type_ref != Py_None))
        cpy_r_r6 = cpy_r_type_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_instance", 213, CPyStatic_fixup___globals, "str", cpy_r_type_ref);
        goto CPyL29;
    }
    cpy_r_r7 = ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_allow_missing;
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AttributeError("mypy/fixup.py", "visit_instance", "TypeFixer", "allow_missing", 213, CPyStatic_fixup___globals);
        goto CPyL30;
    }
CPyL5: ;
    cpy_r_r8 = CPyDef_fixup___lookup_fully_qualified_typeinfo(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_instance", 212, CPyStatic_fixup___globals);
        goto CPyL26;
    }
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_inst)->_type);
    ((mypy___types___InstanceObject *)cpy_r_inst)->_type = cpy_r_r8;
    cpy_r_r10 = ((mypy___types___InstanceObject *)cpy_r_inst)->_type;
    cpy_r_r11 = ((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_bases;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_instance", "TypeInfo", "bases", 217, CPyStatic_fixup___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r11);
CPyL7: ;
    cpy_r_r12 = 0;
CPyL8: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL31;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_instance", 217, CPyStatic_fixup___globals, "mypy.types.Instance", cpy_r_r17);
        goto CPyL32;
    }
    cpy_r_base = cpy_r_r18;
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_base)->_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyStatic_types___NOT_READY;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL33;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"NOT_READY\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_instance", 218, CPyStatic_fixup___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r22 = cpy_r_r19 == cpy_r_r20;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r22) goto CPyL34;
    cpy_r_r23 = CPyDef_types___Instance___accept(cpy_r_base, cpy_r_self);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_instance", 219, CPyStatic_fixup___globals);
        goto CPyL32;
    } else
        goto CPyL35;
CPyL15: ;
    cpy_r_r24 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r24;
    goto CPyL8;
CPyL16: ;
    cpy_r_r25 = ((mypy___types___InstanceObject *)cpy_r_inst)->_args;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = 0;
CPyL17: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL36;
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_instance", 220, CPyStatic_fixup___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_types___Type)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_instance", 220, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r31);
        goto CPyL37;
    }
    cpy_r_a = cpy_r_r32;
    cpy_r_r33 = CPY_GET_METHOD(cpy_r_a, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_instance", 221, CPyStatic_fixup___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL21: ;
    cpy_r_r34 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r34;
    goto CPyL17;
CPyL22: ;
    cpy_r_r35 = ((mypy___types___InstanceObject *)cpy_r_inst)->_last_known_value;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL25;
    cpy_r_r38 = ((mypy___types___InstanceObject *)cpy_r_inst)->_last_known_value;
    CPy_INCREF(cpy_r_r38);
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_instance", 223, CPyStatic_fixup___globals, "mypy.types.LiteralType", cpy_r_r38);
        goto CPyL26;
    }
    cpy_r_r40 = CPyDef_types___LiteralType___accept(cpy_r_r39, cpy_r_self);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_instance", 223, CPyStatic_fixup___globals);
        goto CPyL26;
    } else
        goto CPyL39;
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL27: ;
    CPy_DECREF(cpy_r_type_ref);
    goto CPyL1;
CPyL28: ;
    CPy_DecRef(cpy_r_type_ref);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL16;
CPyL32: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r19);
    goto CPyL11;
CPyL34: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL15;
CPyL35: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL15;
CPyL36: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL22;
CPyL37: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL26;
CPyL38: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL21;
CPyL39: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL25;
}

PyObject *CPyPy_fixup___TypeFixer___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"inst", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_inst;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_inst)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_inst;
    if (likely(Py_TYPE(obj_inst) == CPyType_types___Instance))
        arg_inst = obj_inst;
    else {
        CPy_TypeError("mypy.types.Instance", obj_inst); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_instance(arg_self, arg_inst);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_instance", 206, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_type_ref;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_type_ref;
    CPy_INCREF(cpy_r_r0);
    cpy_r_type_ref = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type_ref == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL13;
    } else
        goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_type_ref);
    ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_type_ref = cpy_r_r3;
    cpy_r_r5 = ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_alias_type", "TypeFixer", "modules", 231, CPyStatic_fixup___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    if (likely(cpy_r_type_ref != Py_None))
        cpy_r_r6 = cpy_r_type_ref;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_alias_type", 231, CPyStatic_fixup___globals, "str", cpy_r_type_ref);
        goto CPyL15;
    }
    cpy_r_r7 = ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_allow_missing;
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AttributeError("mypy/fixup.py", "visit_type_alias_type", "TypeFixer", "allow_missing", 231, CPyStatic_fixup___globals);
        goto CPyL16;
    }
CPyL5: ;
    cpy_r_r8 = CPyDef_fixup___lookup_fully_qualified_alias(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_alias_type", 230, CPyStatic_fixup___globals);
        goto CPyL12;
    }
    CPy_DECREF(((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias);
    ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias = cpy_r_r8;
    cpy_r_r10 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = 0;
CPyL7: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL17;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_alias_type", 233, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL18;
    }
    cpy_r_a = cpy_r_r17;
    cpy_r_r18 = CPY_GET_METHOD(cpy_r_a, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_alias_type", 234, CPyStatic_fixup___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL10: ;
    cpy_r_r19 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r19;
    goto CPyL7;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL13: ;
    CPy_DECREF(cpy_r_type_ref);
    goto CPyL1;
CPyL14: ;
    CPy_DecRef(cpy_r_type_ref);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL11;
CPyL18: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
CPyL19: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL10;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_type_alias_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_alias_type", 225, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    return 1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_any(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_any", 236, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_ct) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_argt;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 240, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_fallback;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_types___Instance___accept(cpy_r_r4, cpy_r_self);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 241, CPyStatic_fixup___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL3: ;
    cpy_r_r6 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_arg_types;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL4: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL29;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_callable_type", 242, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL30;
    }
    cpy_r_argt = cpy_r_r13;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_argt != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL31;
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_argt, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_argt, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_argt);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 245, CPyStatic_fixup___globals);
        goto CPyL30;
    } else
        goto CPyL32;
CPyL8: ;
    cpy_r_r17 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r17;
    goto CPyL4;
CPyL9: ;
    cpy_r_r18 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_ret_type;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_ret_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPY_GET_METHOD(cpy_r_r21, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r21, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 247, CPyStatic_fixup___globals);
        goto CPyL27;
    } else
        goto CPyL33;
CPyL11: ;
    cpy_r_r23 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_variables;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PyObject_GetIter(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 248, CPyStatic_fixup___globals);
        goto CPyL27;
    }
CPyL12: ;
    cpy_r_r25 = PyIter_Next(cpy_r_r24);
    if (cpy_r_r25 == NULL) goto CPyL34;
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___TypeVarLikeType)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_callable_type", 248, CPyStatic_fixup___globals, "mypy.types.TypeVarLikeType", cpy_r_r25);
        goto CPyL35;
    }
    cpy_r_v = cpy_r_r26;
    cpy_r_r27 = CPY_GET_METHOD(cpy_r_v, CPyType_types___TypeVarLikeType, 9, mypy___types___TypeVarLikeTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_v, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 249, CPyStatic_fixup___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL15: ;
    cpy_r_r28 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 248, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    cpy_r_r29 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_bound_args;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = PyObject_GetIter(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 250, CPyStatic_fixup___globals);
        goto CPyL27;
    }
CPyL17: ;
    cpy_r_r31 = PyIter_Next(cpy_r_r30);
    if (cpy_r_r31 == NULL) goto CPyL37;
    if (PyObject_TypeCheck(cpy_r_r31, CPyType_types___Type))
        cpy_r_r32 = cpy_r_r31;
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 != NULL) goto __LL2884;
    if (cpy_r_r31 == Py_None)
        cpy_r_r32 = cpy_r_r31;
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 != NULL) goto __LL2884;
    CPy_TypeErrorTraceback("mypy/fixup.py", "visit_callable_type", 250, CPyStatic_fixup___globals, "mypy.types.Type or None", cpy_r_r31);
    goto CPyL38;
__LL2884: ;
    cpy_r_arg = cpy_r_r32;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_arg != cpy_r_r33;
    if (!cpy_r_r34) goto CPyL39;
    if (likely(cpy_r_arg != Py_None))
        cpy_r_r35 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_callable_type", 252, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_arg);
        goto CPyL38;
    }
    cpy_r_r36 = CPY_GET_METHOD(cpy_r_r35, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r35, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 252, CPyStatic_fixup___globals);
        goto CPyL38;
    } else
        goto CPyL40;
CPyL22: ;
    cpy_r_r37 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 250, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    cpy_r_r38 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_type_guard;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_r38 != cpy_r_r39;
    if (!cpy_r_r40) goto CPyL26;
    cpy_r_r41 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_type_guard;
    CPy_INCREF(cpy_r_r41);
    if (likely(cpy_r_r41 != Py_None))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_callable_type", 254, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r41);
        goto CPyL27;
    }
    cpy_r_r43 = CPY_GET_METHOD(cpy_r_r42, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r42, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 254, CPyStatic_fixup___globals);
        goto CPyL27;
    } else
        goto CPyL41;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL28: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
CPyL29: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL9;
CPyL30: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_argt);
    goto CPyL8;
CPyL32: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL33: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL11;
CPyL34: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL15;
CPyL35: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL27;
CPyL36: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL12;
CPyL37: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL22;
CPyL38: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL27;
CPyL39: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL17;
CPyL40: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL17;
CPyL41: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL26;
}

PyObject *CPyPy_fixup___TypeFixer___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ct", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_ct;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ct)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_ct;
    if (likely(Py_TYPE(obj_ct) == CPyType_types___CallableType))
        arg_ct = obj_ct;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_ct); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_callable_type(arg_self, arg_ct);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_callable_type", 239, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_ct;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded", 257, CPyStatic_fixup___globals);
        goto CPyL7;
    }
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___CallableType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_overloaded", 257, CPyStatic_fixup___globals, "mypy.types.CallableType", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_ct = cpy_r_r7;
    cpy_r_r8 = CPyDef_types___CallableType___accept(cpy_r_ct, cpy_r_self);
    CPy_DECREF(cpy_r_ct);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_overloaded", 258, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL5;
}

PyObject *CPyPy_fixup___TypeFixer___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_overloaded(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_overloaded", 256, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatics[2557]; /* "Shouldn't get here" */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_erased_type", 262, CPyStatic_fixup___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[2] = {cpy_r_r0, cpy_r_o};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_erased_type", 262, CPyStatic_fixup___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_erased_type", 262, CPyStatic_fixup___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_fixup___TypeFixer___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_erased_type(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_erased_type", 260, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    return 1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_deleted_type(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_deleted_type", 264, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    return 1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_none_type(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_none_type", 267, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    return 1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_uninhabited_type(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_uninhabited_type", 270, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatics[2557]; /* "Shouldn't get here" */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_partial_type", 274, CPyStatic_fixup___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[2] = {cpy_r_r0, cpy_r_o};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_partial_type", 274, CPyStatic_fixup___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_partial_type", 274, CPyStatic_fixup___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_fixup___TypeFixer___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_partial_type(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_partial_type", 273, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_tt) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_it;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_tt)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypy___types___TupleTypeObject *)cpy_r_tt)->_items;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_tuple_type", 278, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL11;
    }
    cpy_r_it = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_it, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_it, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_it);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_tuple_type", 279, CPyStatic_fixup___globals);
        goto CPyL11;
    } else
        goto CPyL12;
CPyL5: ;
    cpy_r_r14 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r14;
    goto CPyL2;
CPyL6: ;
    cpy_r_r15 = ((mypy___types___TupleTypeObject *)cpy_r_tt)->_partial_fallback;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL8;
    cpy_r_r18 = ((mypy___types___TupleTypeObject *)cpy_r_tt)->_partial_fallback;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_types___Instance___accept(cpy_r_r18, cpy_r_self);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_tuple_type", 281, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL13;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL10: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL6;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL13: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL8;
}

PyObject *CPyPy_fixup___TypeFixer___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tt", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_tt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_tt;
    if (likely(Py_TYPE(obj_tt) == CPyType_types___TupleType))
        arg_tt = obj_tt;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_tt); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_tuple_type(arg_self, arg_tt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_tuple_type", 276, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_tdt) {
    PyObject *cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T3CIO cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_it;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Size(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_items;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
    cpy_r_r6 = PyDict_Size(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyDict_GetValuesIter(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 285, CPyStatic_fixup___globals);
        goto CPyL18;
    }
CPyL2: ;
    cpy_r_r9 = CPyDict_NextValue(cpy_r_r8, cpy_r_r5);
    cpy_r_r10 = cpy_r_r9.f1;
    cpy_r_r5 = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f0;
    if (!cpy_r_r11) goto CPyL19;
    cpy_r_r12 = cpy_r_r9.f2;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9.f2);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_typeddict_type", 285, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL20;
    }
    cpy_r_it = cpy_r_r13;
    cpy_r_r14 = CPY_GET_METHOD(cpy_r_it, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_it, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_it);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 286, CPyStatic_fixup___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL5: ;
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_r4, cpy_r_r7);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 285, CPyStatic_fixup___globals);
        goto CPyL20;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 285, CPyStatic_fixup___globals);
        goto CPyL17;
    }
CPyL7: ;
    cpy_r_r17 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_fallback;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_fallback;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_r20)->_type_ref;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL15;
    cpy_r_r24 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_fallback;
    cpy_r_r25 = ((mypy___types___InstanceObject *)cpy_r_r24)->_type_ref;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_typeddict_type", 291, CPyStatic_fixup___globals, "str", cpy_r_r25);
        goto CPyL17;
    }
    cpy_r_r27 = ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_modules;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "visit_typeddict_type", "TypeFixer", "modules", 292, CPyStatic_fixup___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r27);
CPyL11: ;
    cpy_r_r28 = ((mypy___fixup___TypeFixerObject *)cpy_r_self)->_allow_missing;
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AttributeError("mypy/fixup.py", "visit_typeddict_type", "TypeFixer", "allow_missing", 293, CPyStatic_fixup___globals);
        goto CPyL23;
    }
CPyL12: ;
    cpy_r_r29 = cpy_r_r28 ^ 1;
    cpy_r_r30 = CPyDef_lookup___lookup_fully_qualified(cpy_r_r26, cpy_r_r27, cpy_r_r29);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 290, CPyStatic_fixup___globals);
        goto CPyL17;
    }
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 == cpy_r_r31;
    CPy_DECREF(cpy_r_r30);
    if (!cpy_r_r32) goto CPyL15;
    cpy_r_r33 = CPyStatics[2558]; /* 'typing._TypedDict' */
    cpy_r_r34 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_fallback;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_r34)->_type_ref);
    ((mypy___types___InstanceObject *)cpy_r_r34)->_type_ref = cpy_r_r33;
CPyL15: ;
    cpy_r_r36 = ((mypy___types___TypedDictTypeObject *)cpy_r_tdt)->_fallback;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_types___Instance___accept(cpy_r_r36, cpy_r_self);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 300, CPyStatic_fixup___globals);
        goto CPyL17;
    } else
        goto CPyL24;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL18: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9.f2);
    goto CPyL6;
CPyL20: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL5;
CPyL22: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL17;
CPyL24: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL16;
}

PyObject *CPyPy_fixup___TypeFixer___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tdt", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_tdt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tdt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_tdt;
    if (likely(Py_TYPE(obj_tdt) == CPyType_types___TypedDictType))
        arg_tdt = obj_tdt;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_tdt); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_typeddict_type(arg_self, arg_tdt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type", 283, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_lt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_lt)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_literal_type", 303, CPyStatic_fixup___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lt", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_lt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_lt;
    if (likely(Py_TYPE(obj_lt) == CPyType_types___LiteralType))
        arg_lt = obj_lt;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_lt); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_literal_type(arg_self, arg_lt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_literal_type", 302, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_tvt) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_vt;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_tvt)->_values;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypy___types___TypeVarTypeObject *)cpy_r_tvt)->_values;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_type_var", 307, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL11;
    }
    cpy_r_vt = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_vt, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_vt, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_vt);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var", 308, CPyStatic_fixup___globals);
        goto CPyL11;
    } else
        goto CPyL12;
CPyL5: ;
    cpy_r_r14 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r14;
    goto CPyL2;
CPyL6: ;
    cpy_r_r15 = ((mypy___types___TypeVarTypeObject *)cpy_r_tvt)->_upper_bound;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_r15, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r15, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var", 309, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL13;
CPyL7: ;
    cpy_r_r17 = ((mypy___types___TypeVarTypeObject *)cpy_r_tvt)->_default;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPY_GET_METHOD(cpy_r_r17, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r17, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var", 310, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL14;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL10: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL6;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL13: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL7;
CPyL14: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL8;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tvt", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_tvt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tvt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_tvt;
    if (likely(Py_TYPE(obj_tvt) == CPyType_types___TypeVarType))
        arg_tvt = obj_tvt;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_tvt); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_type_var(arg_self, arg_tvt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var", 305, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_p)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_param_spec", 313, CPyStatic_fixup___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r2 = ((mypy___types___ParamSpecTypeObject *)cpy_r_p)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_param_spec", 314, CPyStatic_fixup___globals);
        goto CPyL3;
    } else
        goto CPyL5;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL5: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_types___ParamSpecType))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_p); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_param_spec(arg_self, arg_p);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_param_spec", 312, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple", 317, CPyStatic_fixup___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r2 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple", 318, CPyStatic_fixup___globals);
        goto CPyL3;
    } else
        goto CPyL5;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL5: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_type_var_tuple(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple", 316, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_u) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_u)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_unpack_type", 321, CPyStatic_fixup___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"u", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_u;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_u)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_u;
    if (likely(Py_TYPE(obj_u) == CPyType_types___UnpackType))
        arg_u = obj_u;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_u); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_unpack_type(arg_self, arg_u);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_unpack_type", 320, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_argt;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_p)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_parameters", 324, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_argt = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_argt != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL15;
    cpy_r_r10 = CPY_GET_METHOD(cpy_r_argt, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_argt, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_argt);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_parameters", 326, CPyStatic_fixup___globals);
        goto CPyL14;
    } else
        goto CPyL16;
CPyL5: ;
    cpy_r_r11 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r11;
    goto CPyL1;
CPyL6: ;
    cpy_r_r12 = ((mypy___types___ParametersObject *)cpy_r_p)->_variables;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PyObject_GetIter(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_parameters", 327, CPyStatic_fixup___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r14 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r14 == NULL) goto CPyL17;
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___TypeVarLikeType)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_parameters", 327, CPyStatic_fixup___globals, "mypy.types.TypeVarLikeType", cpy_r_r14);
        goto CPyL18;
    }
    cpy_r_var = cpy_r_r15;
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_var, CPyType_types___TypeVarLikeType, 9, mypy___types___TypeVarLikeTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_var, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_var);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_parameters", 328, CPyStatic_fixup___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL10: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_parameters", 327, CPyStatic_fixup___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_argt);
    goto CPyL5;
CPyL16: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
CPyL17: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL10;
CPyL18: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL12;
CPyL19: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL7;
}

PyObject *CPyPy_fixup___TypeFixer___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_types___Parameters))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_p); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_parameters(arg_self, arg_p);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_parameters", 323, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___UnboundTypeObject *)cpy_r_o)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_unbound_type", 331, CPyStatic_fixup___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_unbound_type", 331, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_a = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_a, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_unbound_type", 332, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL5;
}

PyObject *CPyPy_fixup___TypeFixer___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_types___UnboundType))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_o); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_unbound_type(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_unbound_type", 330, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_ut) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_it;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_ut)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypy___types___UnionTypeObject *)cpy_r_ut)->_items;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "visit_union_type", 336, CPyStatic_fixup___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL9;
    }
    cpy_r_it = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_it, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_it, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_it);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_union_type", 337, CPyStatic_fixup___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    cpy_r_r14 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r14;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL8: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
}

PyObject *CPyPy_fixup___TypeFixer___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ut", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_ut;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ut)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_ut;
    if (likely(Py_TYPE(obj_ut) == CPyType_types___UnionType))
        arg_ut = obj_ut;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_ut); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_union_type(arg_self, arg_ut);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_union_type", 334, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_void(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    return 1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_void(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_void", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_fixup___TypeFixer___visit_void(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_void", 339, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup___TypeFixer___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "visit_type_type", 343, CPyStatic_fixup___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_fixup___TypeFixer___visit_type_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_type", 342, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___TypeFixer___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_fixup___TypeFixer___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fixup___TypeFixer___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fixup___TypeFixer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fixup.TypeFixer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___TypeFixer___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___lookup_fully_qualified_typeinfo(PyObject *cpy_r_modules, PyObject *cpy_r_name, char cpy_r_allow_missing) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_stnode;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
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
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = cpy_r_allow_missing ^ 1;
    cpy_r_r1 = CPyDef_lookup___lookup_fully_qualified(cpy_r_name, cpy_r_modules, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 349, CPyStatic_fixup___globals);
        goto CPyL29;
    }
    cpy_r_stnode = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_stnode != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL30;
    if (likely(cpy_r_stnode != Py_None))
        cpy_r_r4 = cpy_r_stnode;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 350, CPyStatic_fixup___globals, "mypy.nodes.SymbolTableNode", cpy_r_stnode);
        goto CPyL31;
    }
    cpy_r_r5 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r4)->_node;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_stnode);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL5: ;
    cpy_r_node = cpy_r_r6;
    cpy_r_r8 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL8;
CPyL7: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL8: ;
    if (!cpy_r_r12) goto CPyL11;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r17 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 352, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL29;
    }
    return cpy_r_r17;
CPyL11: ;
    if (cpy_r_allow_missing) goto CPyL32;
    cpy_r_r18 = PyObject_Type(cpy_r_node);
    cpy_r_r19 = CPyStatics[197]; /* '__name__' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 358, CPyStatic_fixup___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 358, CPyStatic_fixup___globals, "str", cpy_r_r20);
        goto CPyL33;
    }
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_node != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL34;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r24 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 350, CPyStatic_fixup___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL35;
    }
    cpy_r_r25 = PyObject_IsTrue(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 350, CPyStatic_fixup___globals);
        goto CPyL35;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL34;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r28 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 358, CPyStatic_fixup___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL35;
    }
    cpy_r_r29 = CPY_GET_ATTR_TRAIT(cpy_r_r28, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 358, CPyStatic_fixup___globals);
        goto CPyL35;
    }
CPyL20: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL22;
CPyL21: ;
    cpy_r_r31 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r31);
    cpy_r_r30 = cpy_r_r31;
CPyL22: ;
    cpy_r_r32 = CPyStatics[2559]; /* 'Should never get here in normal mode, got ' */
    cpy_r_r33 = CPyStatics[171]; /* ':' */
    cpy_r_r34 = CPyStatics[2560]; /* ' instead of TypeInfo' */
    cpy_r_r35 = CPyStr_Build(5, cpy_r_r32, cpy_r_r21, cpy_r_r33, cpy_r_r30, cpy_r_r34);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 357, CPyStatic_fixup___globals);
        goto CPyL29;
    }
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 355, CPyStatic_fixup___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 355, CPyStatic_fixup___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r35);
    CPy_Raise(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 355, CPyStatic_fixup___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r42 = CPyDef_fixup___missing_info(cpy_r_modules);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 360, CPyStatic_fixup___globals);
        goto CPyL29;
    }
    return cpy_r_r42;
CPyL29: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL30: ;
    CPy_DECREF(cpy_r_stnode);
    goto CPyL4;
CPyL31: ;
    CPy_DecRef(cpy_r_stnode);
    goto CPyL29;
CPyL32: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL21;
CPyL35: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r21);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL29;
}

PyObject *CPyPy_fixup___lookup_fully_qualified_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "name", "allow_missing", 0};
    static CPyArg_Parser parser = {"OO|$@O:lookup_fully_qualified_typeinfo", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_name;
    PyObject *obj_allow_missing;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_modules, &obj_name, &obj_allow_missing)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_allow_missing;
    if (unlikely(!PyBool_Check(obj_allow_missing))) {
        CPy_TypeError("bool", obj_allow_missing); goto fail;
    } else
        arg_allow_missing = obj_allow_missing == Py_True;
    PyObject *retval = CPyDef_fixup___lookup_fully_qualified_typeinfo(arg_modules, arg_name, arg_allow_missing);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_typeinfo", 346, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___lookup_fully_qualified_alias(PyObject *cpy_r_modules, PyObject *cpy_r_name, char cpy_r_allow_missing) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_stnode;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
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
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_alias;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
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
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    cpy_r_r0 = cpy_r_allow_missing ^ 1;
    cpy_r_r1 = CPyDef_lookup___lookup_fully_qualified(cpy_r_name, cpy_r_modules, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 366, CPyStatic_fixup___globals);
        goto CPyL57;
    }
    cpy_r_stnode = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_stnode != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL58;
    if (likely(cpy_r_stnode != Py_None))
        cpy_r_r4 = cpy_r_stnode;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 367, CPyStatic_fixup___globals, "mypy.nodes.SymbolTableNode", cpy_r_stnode);
        goto CPyL59;
    }
    cpy_r_r5 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r4)->_node;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_stnode);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL5: ;
    cpy_r_node = cpy_r_r6;
    cpy_r_r8 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeAlias))
        cpy_r_r12 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 369, CPyStatic_fixup___globals, "mypy.nodes.TypeAlias", cpy_r_node);
        goto CPyL57;
    }
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL11;
CPyL10: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL11: ;
    if (!cpy_r_r17) goto CPyL39;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r22 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 371, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r23 = ((mypy___nodes___TypeInfoObject *)cpy_r_r22)->_special_alias;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "lookup_fully_qualified_alias", "TypeInfo", "special_alias", 371, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r23);
CPyL14: ;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_r23 != cpy_r_r24;
    CPy_DECREF(cpy_r_r23);
    if (!cpy_r_r25) goto CPyL19;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r26 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 373, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_r26)->_special_alias;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "lookup_fully_qualified_alias", "TypeInfo", "special_alias", 373, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r27);
CPyL17: ;
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 373, CPyStatic_fixup___globals, "mypy.nodes.TypeAlias", cpy_r_r27);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_node);
    return cpy_r_r28;
CPyL19: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r29 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 374, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_tuple_type;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "lookup_fully_qualified_alias", "TypeInfo", "tuple_type", 374, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r30);
CPyL21: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 != cpy_r_r31;
    CPy_DECREF(cpy_r_r30);
    if (!cpy_r_r32) goto CPyL25;
    cpy_r_r33 = (PyObject *)CPyType_nodes___TypeAlias;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r34 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 375, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r35 = CPyDef_nodes___TypeAlias___from_tuple_type(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 375, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    cpy_r_alias = cpy_r_r35;
    goto CPyL36;
CPyL25: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r36 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 376, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r37 = ((mypy___nodes___TypeInfoObject *)cpy_r_r36)->_typeddict_type;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/fixup.py", "lookup_fully_qualified_alias", "TypeInfo", "typeddict_type", 376, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r37);
CPyL27: ;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    CPy_DECREF(cpy_r_r37);
    if (!cpy_r_r39) goto CPyL61;
    cpy_r_r40 = (PyObject *)CPyType_nodes___TypeAlias;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r41 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 377, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r42 = CPyDef_nodes___TypeAlias___from_typeddict_type(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 377, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    cpy_r_alias = cpy_r_r42;
    goto CPyL36;
CPyL31: ;
    if (cpy_r_allow_missing) goto CPyL34;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 379, CPyStatic_fixup___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r44 = CPyDef_fixup___missing_alias();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 380, CPyStatic_fixup___globals);
        goto CPyL57;
    }
    return cpy_r_r44;
CPyL36: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r45 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 381, CPyStatic_fixup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_alias);
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r45)->_special_alias != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r45)->_special_alias);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r45)->_special_alias = cpy_r_alias;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 381, CPyStatic_fixup___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_node);
    return cpy_r_alias;
CPyL39: ;
    if (cpy_r_allow_missing) goto CPyL63;
    cpy_r_r47 = PyObject_Type(cpy_r_node);
    cpy_r_r48 = CPyStatics[197]; /* '__name__' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 388, CPyStatic_fixup___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 388, CPyStatic_fixup___globals, "str", cpy_r_r49);
        goto CPyL60;
    }
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_node != cpy_r_r51;
    if (!cpy_r_r52) goto CPyL64;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r53 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 367, CPyStatic_fixup___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r54 = PyObject_IsTrue(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 367, CPyStatic_fixup___globals);
        goto CPyL65;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL64;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r57 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 388, CPyStatic_fixup___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r58 = CPY_GET_ATTR_TRAIT(cpy_r_r57, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 388, CPyStatic_fixup___globals);
        goto CPyL65;
    }
CPyL48: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_r59 = cpy_r_r58;
    goto CPyL50;
CPyL49: ;
    cpy_r_r60 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r60);
    cpy_r_r59 = cpy_r_r60;
CPyL50: ;
    cpy_r_r61 = CPyStatics[2559]; /* 'Should never get here in normal mode, got ' */
    cpy_r_r62 = CPyStatics[171]; /* ':' */
    cpy_r_r63 = CPyStatics[2561]; /* ' instead of TypeAlias' */
    cpy_r_r64 = CPyStr_Build(5, cpy_r_r61, cpy_r_r50, cpy_r_r62, cpy_r_r59, cpy_r_r63);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 387, CPyStatic_fixup___globals);
        goto CPyL57;
    }
    cpy_r_r65 = CPyModule_builtins;
    cpy_r_r66 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 385, CPyStatic_fixup___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r68[1] = {cpy_r_r64};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 385, CPyStatic_fixup___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r64);
    CPy_Raise(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 385, CPyStatic_fixup___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r71 = CPyDef_fixup___missing_alias();
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 390, CPyStatic_fixup___globals);
        goto CPyL57;
    }
    return cpy_r_r71;
CPyL57: ;
    cpy_r_r72 = NULL;
    return cpy_r_r72;
CPyL58: ;
    CPy_DECREF(cpy_r_stnode);
    goto CPyL4;
CPyL59: ;
    CPy_DecRef(cpy_r_stnode);
    goto CPyL57;
CPyL60: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL57;
CPyL61: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL31;
CPyL62: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_alias);
    goto CPyL57;
CPyL63: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL55;
CPyL64: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL49;
CPyL65: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r50);
    goto CPyL57;
CPyL66: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL57;
}

PyObject *CPyPy_fixup___lookup_fully_qualified_alias(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "name", "allow_missing", 0};
    static CPyArg_Parser parser = {"OO|$@O:lookup_fully_qualified_alias", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_name;
    PyObject *obj_allow_missing;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_modules, &obj_name, &obj_allow_missing)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_allow_missing;
    if (unlikely(!PyBool_Check(obj_allow_missing))) {
        CPy_TypeError("bool", obj_allow_missing); goto fail;
    } else
        arg_allow_missing = obj_allow_missing == Py_True;
    PyObject *retval = CPyDef_fixup___lookup_fully_qualified_alias(arg_modules, arg_name, arg_allow_missing);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "lookup_fully_qualified_alias", 363, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___missing_info(PyObject *cpy_r_modules) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_suggestion;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_dummy_def;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_obj_type;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = CPyStatics[2562]; /* ('<missing {}: *should* have gone away during '
                                    'fine-grained update>') */
    cpy_r_r1 = CPyStatics[2563]; /* 'info' */
    cpy_r_r2 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 397, CPyStatic_fixup___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "missing_info", 397, CPyStatic_fixup___globals, "str", cpy_r_r5);
        goto CPyL17;
    }
    cpy_r_suggestion = cpy_r_r6;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 398, CPyStatic_fixup___globals);
        goto CPyL18;
    }
    cpy_r_r8 = CPyDef_nodes___Block(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 398, CPyStatic_fixup___globals);
        goto CPyL18;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_nodes___ClassDef(cpy_r_suggestion, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 398, CPyStatic_fixup___globals);
        goto CPyL18;
    }
    cpy_r_dummy_def = cpy_r_r13;
    cpy_r_r14 = CPY_SET_ATTR(cpy_r_dummy_def, CPyType_nodes___ClassDef, 7, cpy_r_suggestion, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 399, CPyStatic_fixup___globals);
        goto CPyL19;
    }
    cpy_r_r15 = (PyObject *)CPyType_nodes___SymbolTable;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r15, 0, 0, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 401, CPyStatic_fixup___globals);
        goto CPyL19;
    }
    if (likely(PyDict_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "missing_info", 401, CPyStatic_fixup___globals, "dict", cpy_r_r16);
        goto CPyL19;
    }
    cpy_r_r18 = CPyStatics[2564]; /* '<missing>' */
    cpy_r_r19 = CPyDef_nodes___TypeInfo(cpy_r_r17, cpy_r_dummy_def, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_dummy_def);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 401, CPyStatic_fixup___globals);
        goto CPyL17;
    }
    cpy_r_info = cpy_r_r19;
    cpy_r_r20 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r21 = CPyDef_fixup___lookup_fully_qualified_typeinfo(cpy_r_modules, cpy_r_r20, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 402, CPyStatic_fixup___globals);
        goto CPyL20;
    }
    cpy_r_obj_type = cpy_r_r21;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 403, CPyStatic_fixup___globals);
        goto CPyL21;
    }
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = NULL;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_types___Instance(cpy_r_obj_type, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 403, CPyStatic_fixup___globals);
        goto CPyL21;
    }
    cpy_r_r28 = PyList_New(1);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 403, CPyStatic_fixup___globals);
        goto CPyL22;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    *(PyObject * *)cpy_r_r30 = cpy_r_r27;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases = cpy_r_r28;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 403, CPyStatic_fixup___globals);
        goto CPyL21;
    }
    cpy_r_r32 = PyList_New(2);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 404, CPyStatic_fixup___globals);
        goto CPyL21;
    }
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_r32)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    CPy_INCREF(cpy_r_info);
    *(PyObject * *)cpy_r_r34 = cpy_r_info;
    cpy_r_r35 = cpy_r_r34 + 8;
    *(PyObject * *)cpy_r_r35 = cpy_r_obj_type;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro = cpy_r_r32;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_info", 404, CPyStatic_fixup___globals);
        goto CPyL20;
    }
    return cpy_r_info;
CPyL17: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL18: ;
    CPy_DecRef(cpy_r_suggestion);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_dummy_def);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_obj_type);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r27);
    goto CPyL17;
}

PyObject *CPyPy_fixup___missing_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:missing_info", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_fixup___missing_info(arg_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "missing_info", 396, CPyStatic_fixup___globals);
    return NULL;
}

PyObject *CPyDef_fixup___missing_alias(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_suggestion;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyStatics[2562]; /* ('<missing {}: *should* have gone away during '
                                    'fine-grained update>') */
    cpy_r_r1 = CPyStatics[2565]; /* 'alias' */
    cpy_r_r2 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_alias", 409, CPyStatic_fixup___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/fixup.py", "missing_alias", 409, CPyStatic_fixup___globals, "str", cpy_r_r5);
        goto CPyL5;
    }
    cpy_r_suggestion = cpy_r_r6;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_types___AnyType(12, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_alias", 410, CPyStatic_fixup___globals);
        goto CPyL6;
    }
    cpy_r_r12 = NULL;
    cpy_r_r13 = 2;
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_nodes___TypeAlias(cpy_r_r11, cpy_r_suggestion, -2, -2, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_suggestion);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "missing_alias", 410, CPyStatic_fixup___globals);
        goto CPyL5;
    }
    return cpy_r_r16;
CPyL5: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL6: ;
    CPy_DecRef(cpy_r_suggestion);
    goto CPyL5;
}

PyObject *CPyPy_fixup___missing_alias(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":missing_alias", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_fixup___missing_alias();
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fixup.py", "missing_alias", 408, CPyStatic_fixup___globals);
    return NULL;
}

char CPyDef_fixup_____top_level__(void) {
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
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", -1, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_fixup___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 3, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9355]; /* ('Any', 'Final') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_fixup___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 5, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9408]; /* ('lookup_fully_qualified',) */
    cpy_r_r14 = CPyStatics[2567]; /* 'mypy.lookup' */
    cpy_r_r15 = CPyStatic_fixup___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 7, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule_mypy___lookup = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___lookup);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9409]; /* ('Block', 'ClassDef', 'Decorator', 'FuncDef', 'MypyFile',
                                     'OverloadedFuncDef', 'ParamSpecExpr', 'SymbolTable',
                                     'TypeAlias', 'TypeInfo', 'TypeVarExpr',
                                     'TypeVarTupleExpr', 'Var') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_fixup___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 8, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9410]; /* ('NOT_READY', 'AnyType', 'CallableType', 'Instance',
                                     'LiteralType', 'Overloaded', 'Parameters',
                                     'ParamSpecType', 'TupleType', 'TypeAliasType',
                                     'TypedDictType', 'TypeOfAny', 'TypeType',
                                     'TypeVarTupleType', 'TypeVarType', 'TypeVisitor',
                                     'UnboundType', 'UnionType', 'UnpackType') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_fixup___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 23, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9212]; /* ('NodeVisitor',) */
    cpy_r_r26 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r27 = CPyStatic_fixup___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 44, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    CPyModule_mypy___visitor = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = (PyObject *)CPyType_mypy___visitor___NodeVisitor;
    cpy_r_r30 = Py_None;
    cpy_r_r31 = PyObject_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 56, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r32 = PyTuple_Pack(1, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 56, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r33 = CPyStatics[560]; /* 'mypy.fixup' */
    cpy_r_r34 = (PyObject *)CPyType_fixup___NodeFixer_template;
    cpy_r_r35 = CPyType_FromTemplate(cpy_r_r34, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 56, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r36 = CPyDef_fixup___NodeFixer_trait_vtable_setup();
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", -1, CPyStatic_fixup___globals);
        goto CPyL26;
    }
    cpy_r_r37 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r38 = CPyStatics[2569]; /* 'current_info' */
    cpy_r_r39 = CPyStatics[635]; /* 'modules' */
    cpy_r_r40 = CPyStatics[2570]; /* 'allow_missing' */
    cpy_r_r41 = CPyStatics[2571]; /* 'type_fixer' */
    cpy_r_r42 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r43 = PyTuple_Pack(5, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 56, CPyStatic_fixup___globals);
        goto CPyL26;
    }
    cpy_r_r44 = PyObject_SetAttr(cpy_r_r35, cpy_r_r37, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 56, CPyStatic_fixup___globals);
        goto CPyL26;
    }
    CPyType_fixup___NodeFixer = (PyTypeObject *)cpy_r_r35;
    CPy_INCREF(CPyType_fixup___NodeFixer);
    cpy_r_r46 = CPyStatic_fixup___globals;
    cpy_r_r47 = CPyStatics[2572]; /* 'NodeFixer' */
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r46, cpy_r_r47, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 56, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r50 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r51 = Py_None;
    cpy_r_r52 = PyObject_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 201, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r53 = PyTuple_Pack(1, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 201, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r54 = CPyStatics[560]; /* 'mypy.fixup' */
    cpy_r_r55 = (PyObject *)CPyType_fixup___TypeFixer_template;
    cpy_r_r56 = CPyType_FromTemplate(cpy_r_r55, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 201, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r57 = CPyDef_fixup___TypeFixer_trait_vtable_setup();
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", -1, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    cpy_r_r58 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r59 = CPyStatics[635]; /* 'modules' */
    cpy_r_r60 = CPyStatics[2570]; /* 'allow_missing' */
    cpy_r_r61 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r62 = PyTuple_Pack(3, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 201, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    cpy_r_r63 = PyObject_SetAttr(cpy_r_r56, cpy_r_r58, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 201, CPyStatic_fixup___globals);
        goto CPyL27;
    }
    CPyType_fixup___TypeFixer = (PyTypeObject *)cpy_r_r56;
    CPy_INCREF(CPyType_fixup___TypeFixer);
    cpy_r_r65 = CPyStatic_fixup___globals;
    cpy_r_r66 = CPyStatics[2573]; /* 'TypeFixer' */
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r65, cpy_r_r66, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 201, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    cpy_r_r69 = CPyStatics[2562]; /* ('<missing {}: *should* have gone away during '
                                     'fine-grained update>') */
    cpy_r_r70 = CPyStatic_fixup___globals;
    cpy_r_r71 = CPyStatics[2574]; /* '_SUGGESTION' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/fixup.py", "<module>", 393, CPyStatic_fixup___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r74 = 2;
    return cpy_r_r74;
CPyL26: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL25;
}
