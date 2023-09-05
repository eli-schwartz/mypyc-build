#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
renaming___VariableRenameVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef renaming___VariableRenameVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___renaming___VariableRenameVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___renaming___VariableRenameVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *renaming___VariableRenameVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___VariableRenameVisitor(void);

static PyObject *
renaming___VariableRenameVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___VariableRenameVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = renaming___VariableRenameVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_renaming___VariableRenameVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
renaming___VariableRenameVisitor_traverse(mypy___renaming___VariableRenameVisitorObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_block_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_block_id));
    }
    if (CPyTagged_CheckLong(self->_disallow_redef_depth)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_disallow_redef_depth));
    }
    if (CPyTagged_CheckLong(self->_loop_depth)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_loop_depth));
    }
    Py_VISIT(self->_block_loop_depth);
    Py_VISIT(self->_blocks);
    Py_VISIT(self->_var_blocks);
    Py_VISIT(self->_refs);
    Py_VISIT(self->_num_reads);
    Py_VISIT(self->_scope_kinds);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___renaming___VariableRenameVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___renaming___VariableRenameVisitorObject))));
    return 0;
}

static int
renaming___VariableRenameVisitor_clear(mypy___renaming___VariableRenameVisitorObject *self)
{
    if (CPyTagged_CheckLong(self->_block_id)) {
        CPyTagged __tmp = self->_block_id;
        self->_block_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_disallow_redef_depth)) {
        CPyTagged __tmp = self->_disallow_redef_depth;
        self->_disallow_redef_depth = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_loop_depth)) {
        CPyTagged __tmp = self->_loop_depth;
        self->_loop_depth = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_block_loop_depth);
    Py_CLEAR(self->_blocks);
    Py_CLEAR(self->_var_blocks);
    Py_CLEAR(self->_refs);
    Py_CLEAR(self->_num_reads);
    Py_CLEAR(self->_scope_kinds);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___renaming___VariableRenameVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___renaming___VariableRenameVisitorObject))));
    return 0;
}

static void
renaming___VariableRenameVisitor_dealloc(mypy___renaming___VariableRenameVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___VariableRenameVisitor_dealloc)
    renaming___VariableRenameVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___VariableRenameVisitor_vtable[129];
static CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_renaming___VariableRenameVisitor_trait_vtable_setup(void)
{
    CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_name_expr__NodeVisitor_glue,
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
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable, renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table, renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue,
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
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table, renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable, renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table, renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable, renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table, renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem renaming___VariableRenameVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)renaming___VariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor_____init__,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_class_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor_____init__,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_block,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_capture_pattern,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___analyze_lvalue,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___handle_arg,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___handle_def,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___handle_refine,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___handle_ref,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___flush_refs,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___clear,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___enter_block,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___enter_try,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___enter_loop,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___current_block,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___enter_scope,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___is_nested,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop,
        (CPyVTableItem)CPyDef_renaming___VariableRenameVisitor___record_assignment,
    };
    memcpy(renaming___VariableRenameVisitor_vtable, renaming___VariableRenameVisitor_vtable_scratch, sizeof(renaming___VariableRenameVisitor_vtable));
    return 1;
}

static PyObject *
renaming___VariableRenameVisitor_get_block_id(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_block_id(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_disallow_redef_depth(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_disallow_redef_depth(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_block_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_block_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_blocks(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_blocks(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_var_blocks(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_var_blocks(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_refs(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_refs(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_num_reads(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_num_reads(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___VariableRenameVisitor_get_scope_kinds(mypy___renaming___VariableRenameVisitorObject *self, void *closure);
static int
renaming___VariableRenameVisitor_set_scope_kinds(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef renaming___VariableRenameVisitor_getseters[] = {
    {"block_id",
     (getter)renaming___VariableRenameVisitor_get_block_id, (setter)renaming___VariableRenameVisitor_set_block_id,
     NULL, NULL},
    {"disallow_redef_depth",
     (getter)renaming___VariableRenameVisitor_get_disallow_redef_depth, (setter)renaming___VariableRenameVisitor_set_disallow_redef_depth,
     NULL, NULL},
    {"loop_depth",
     (getter)renaming___VariableRenameVisitor_get_loop_depth, (setter)renaming___VariableRenameVisitor_set_loop_depth,
     NULL, NULL},
    {"block_loop_depth",
     (getter)renaming___VariableRenameVisitor_get_block_loop_depth, (setter)renaming___VariableRenameVisitor_set_block_loop_depth,
     NULL, NULL},
    {"blocks",
     (getter)renaming___VariableRenameVisitor_get_blocks, (setter)renaming___VariableRenameVisitor_set_blocks,
     NULL, NULL},
    {"var_blocks",
     (getter)renaming___VariableRenameVisitor_get_var_blocks, (setter)renaming___VariableRenameVisitor_set_var_blocks,
     NULL, NULL},
    {"refs",
     (getter)renaming___VariableRenameVisitor_get_refs, (setter)renaming___VariableRenameVisitor_set_refs,
     NULL, NULL},
    {"num_reads",
     (getter)renaming___VariableRenameVisitor_get_num_reads, (setter)renaming___VariableRenameVisitor_set_num_reads,
     NULL, NULL},
    {"scope_kinds",
     (getter)renaming___VariableRenameVisitor_get_scope_kinds, (setter)renaming___VariableRenameVisitor_set_scope_kinds,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef renaming___VariableRenameVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_while_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_while_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_break_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_break_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_continue_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_continue_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_try_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_try_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_capture_pattern",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_capture_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_lvalue",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___analyze_lvalue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"handle_arg",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___handle_arg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"handle_def",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___handle_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"handle_refine",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___handle_refine,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"handle_ref",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___handle_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush_refs",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___flush_refs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"clear",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___clear,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_block",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___enter_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_try",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___enter_try,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_loop",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___enter_loop,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_block",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___current_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_scope",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___enter_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_nested",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___is_nested,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reject_redefinition_of_vars_in_scope",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reject_redefinition_of_vars_in_loop",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_assignment",
     (PyCFunction)CPyPy_renaming___VariableRenameVisitor___record_assignment,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___VariableRenameVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "VariableRenameVisitor",
    .tp_new = renaming___VariableRenameVisitor_new,
    .tp_dealloc = (destructor)renaming___VariableRenameVisitor_dealloc,
    .tp_traverse = (traverseproc)renaming___VariableRenameVisitor_traverse,
    .tp_clear = (inquiry)renaming___VariableRenameVisitor_clear,
    .tp_getset = renaming___VariableRenameVisitor_getseters,
    .tp_methods = renaming___VariableRenameVisitor_methods,
    .tp_init = renaming___VariableRenameVisitor_init,
    .tp_members = renaming___VariableRenameVisitor_members,
    .tp_basicsize = sizeof(mypy___renaming___VariableRenameVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___renaming___VariableRenameVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___renaming___VariableRenameVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___VariableRenameVisitor_template = &CPyType_renaming___VariableRenameVisitor_template_;

static PyObject *
renaming___VariableRenameVisitor_setup(PyTypeObject *type)
{
    mypy___renaming___VariableRenameVisitorObject *self;
    self = (mypy___renaming___VariableRenameVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___VariableRenameVisitor_vtable + 12;
    self->_block_id = CPY_INT_TAG;
    self->_disallow_redef_depth = CPY_INT_TAG;
    self->_loop_depth = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___VariableRenameVisitor(void)
{
    PyObject *self = renaming___VariableRenameVisitor_setup(CPyType_renaming___VariableRenameVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_renaming___VariableRenameVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
renaming___VariableRenameVisitor_get_block_id(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_block_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'block_id' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_block_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_block_id);
    return retval;
}

static int
renaming___VariableRenameVisitor_set_block_id(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'block_id' cannot be deleted");
        return -1;
    }
    if (self->_block_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_block_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_block_id = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_disallow_redef_depth(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_disallow_redef_depth == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'disallow_redef_depth' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_disallow_redef_depth);
    PyObject *retval = CPyTagged_StealAsObject(self->_disallow_redef_depth);
    return retval;
}

static int
renaming___VariableRenameVisitor_set_disallow_redef_depth(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'disallow_redef_depth' cannot be deleted");
        return -1;
    }
    if (self->_disallow_redef_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_disallow_redef_depth);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_disallow_redef_depth = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_loop_depth == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'loop_depth' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_loop_depth);
    PyObject *retval = CPyTagged_StealAsObject(self->_loop_depth);
    return retval;
}

static int
renaming___VariableRenameVisitor_set_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'loop_depth' cannot be deleted");
        return -1;
    }
    if (self->_loop_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_loop_depth);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_loop_depth = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_block_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_block_loop_depth == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'block_loop_depth' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_block_loop_depth);
    PyObject *retval = self->_block_loop_depth;
    return retval;
}

static int
renaming___VariableRenameVisitor_set_block_loop_depth(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'block_loop_depth' cannot be deleted");
        return -1;
    }
    if (self->_block_loop_depth != NULL) {
        CPy_DECREF(self->_block_loop_depth);
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
    self->_block_loop_depth = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_blocks(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_blocks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'blocks' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_blocks);
    PyObject *retval = self->_blocks;
    return retval;
}

static int
renaming___VariableRenameVisitor_set_blocks(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'blocks' cannot be deleted");
        return -1;
    }
    if (self->_blocks != NULL) {
        CPy_DECREF(self->_blocks);
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
    self->_blocks = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_var_blocks(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_var_blocks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'var_blocks' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_var_blocks);
    PyObject *retval = self->_var_blocks;
    return retval;
}

static int
renaming___VariableRenameVisitor_set_var_blocks(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'var_blocks' cannot be deleted");
        return -1;
    }
    if (self->_var_blocks != NULL) {
        CPy_DECREF(self->_var_blocks);
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
    self->_var_blocks = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_refs(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_refs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'refs' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_refs);
    PyObject *retval = self->_refs;
    return retval;
}

static int
renaming___VariableRenameVisitor_set_refs(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'refs' cannot be deleted");
        return -1;
    }
    if (self->_refs != NULL) {
        CPy_DECREF(self->_refs);
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
    self->_refs = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_num_reads(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_num_reads == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_reads' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_num_reads);
    PyObject *retval = self->_num_reads;
    return retval;
}

static int
renaming___VariableRenameVisitor_set_num_reads(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'num_reads' cannot be deleted");
        return -1;
    }
    if (self->_num_reads != NULL) {
        CPy_DECREF(self->_num_reads);
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
    self->_num_reads = tmp;
    return 0;
}

static PyObject *
renaming___VariableRenameVisitor_get_scope_kinds(mypy___renaming___VariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_scope_kinds == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scope_kinds' of 'VariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scope_kinds);
    PyObject *retval = self->_scope_kinds;
    return retval;
}

static int
renaming___VariableRenameVisitor_set_scope_kinds(mypy___renaming___VariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'VariableRenameVisitor' object attribute 'scope_kinds' cannot be deleted");
        return -1;
    }
    if (self->_scope_kinds != NULL) {
        CPy_DECREF(self->_scope_kinds);
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
    self->_scope_kinds = tmp;
    return 0;
}

static int
renaming___LimitedVariableRenameVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef renaming___LimitedVariableRenameVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___renaming___LimitedVariableRenameVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___renaming___LimitedVariableRenameVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *renaming___LimitedVariableRenameVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___LimitedVariableRenameVisitor(void);

static PyObject *
renaming___LimitedVariableRenameVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___LimitedVariableRenameVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = renaming___LimitedVariableRenameVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_renaming___LimitedVariableRenameVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
renaming___LimitedVariableRenameVisitor_traverse(mypy___renaming___LimitedVariableRenameVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_bound_vars);
    Py_VISIT(self->_skipped);
    Py_VISIT(self->_refs);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___renaming___LimitedVariableRenameVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___renaming___LimitedVariableRenameVisitorObject))));
    return 0;
}

static int
renaming___LimitedVariableRenameVisitor_clear(mypy___renaming___LimitedVariableRenameVisitorObject *self)
{
    Py_CLEAR(self->_bound_vars);
    Py_CLEAR(self->_skipped);
    Py_CLEAR(self->_refs);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___renaming___LimitedVariableRenameVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___renaming___LimitedVariableRenameVisitorObject))));
    return 0;
}

static void
renaming___LimitedVariableRenameVisitor_dealloc(mypy___renaming___LimitedVariableRenameVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___LimitedVariableRenameVisitor_dealloc)
    renaming___LimitedVariableRenameVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___LimitedVariableRenameVisitor_vtable[110];
static CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_renaming___LimitedVariableRenameVisitor_trait_vtable_setup(void)
{
    CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__NodeVisitor_glue,
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
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable, renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table, renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue,
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
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table, renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__StatementVisitor_glue,
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
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable, renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table, renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable, renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table, renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem renaming___LimitedVariableRenameVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)renaming___LimitedVariableRenameVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor_____init__,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor_____init__,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___analyze_lvalue,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___enter_scope,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped,
        (CPyVTableItem)CPyDef_renaming___LimitedVariableRenameVisitor___flush_refs,
    };
    memcpy(renaming___LimitedVariableRenameVisitor_vtable, renaming___LimitedVariableRenameVisitor_vtable_scratch, sizeof(renaming___LimitedVariableRenameVisitor_vtable));
    return 1;
}

static PyObject *
renaming___LimitedVariableRenameVisitor_get_bound_vars(mypy___renaming___LimitedVariableRenameVisitorObject *self, void *closure);
static int
renaming___LimitedVariableRenameVisitor_set_bound_vars(mypy___renaming___LimitedVariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___LimitedVariableRenameVisitor_get_skipped(mypy___renaming___LimitedVariableRenameVisitorObject *self, void *closure);
static int
renaming___LimitedVariableRenameVisitor_set_skipped(mypy___renaming___LimitedVariableRenameVisitorObject *self, PyObject *value, void *closure);
static PyObject *
renaming___LimitedVariableRenameVisitor_get_refs(mypy___renaming___LimitedVariableRenameVisitorObject *self, void *closure);
static int
renaming___LimitedVariableRenameVisitor_set_refs(mypy___renaming___LimitedVariableRenameVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef renaming___LimitedVariableRenameVisitor_getseters[] = {
    {"bound_vars",
     (getter)renaming___LimitedVariableRenameVisitor_get_bound_vars, (setter)renaming___LimitedVariableRenameVisitor_set_bound_vars,
     NULL, NULL},
    {"skipped",
     (getter)renaming___LimitedVariableRenameVisitor_get_skipped, (setter)renaming___LimitedVariableRenameVisitor_set_skipped,
     NULL, NULL},
    {"refs",
     (getter)renaming___LimitedVariableRenameVisitor_get_refs, (setter)renaming___LimitedVariableRenameVisitor_set_refs,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef renaming___LimitedVariableRenameVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_lvalue",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___analyze_lvalue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_scope",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___enter_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reject_redefinition_of_vars_in_scope",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_skipped",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___record_skipped,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush_refs",
     (PyCFunction)CPyPy_renaming___LimitedVariableRenameVisitor___flush_refs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___LimitedVariableRenameVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "LimitedVariableRenameVisitor",
    .tp_new = renaming___LimitedVariableRenameVisitor_new,
    .tp_dealloc = (destructor)renaming___LimitedVariableRenameVisitor_dealloc,
    .tp_traverse = (traverseproc)renaming___LimitedVariableRenameVisitor_traverse,
    .tp_clear = (inquiry)renaming___LimitedVariableRenameVisitor_clear,
    .tp_getset = renaming___LimitedVariableRenameVisitor_getseters,
    .tp_methods = renaming___LimitedVariableRenameVisitor_methods,
    .tp_init = renaming___LimitedVariableRenameVisitor_init,
    .tp_members = renaming___LimitedVariableRenameVisitor_members,
    .tp_basicsize = sizeof(mypy___renaming___LimitedVariableRenameVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___renaming___LimitedVariableRenameVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___renaming___LimitedVariableRenameVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___LimitedVariableRenameVisitor_template = &CPyType_renaming___LimitedVariableRenameVisitor_template_;

static PyObject *
renaming___LimitedVariableRenameVisitor_setup(PyTypeObject *type)
{
    mypy___renaming___LimitedVariableRenameVisitorObject *self;
    self = (mypy___renaming___LimitedVariableRenameVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___LimitedVariableRenameVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor(void)
{
    PyObject *self = renaming___LimitedVariableRenameVisitor_setup(CPyType_renaming___LimitedVariableRenameVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_renaming___LimitedVariableRenameVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
renaming___LimitedVariableRenameVisitor_get_bound_vars(mypy___renaming___LimitedVariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_bound_vars == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'bound_vars' of 'LimitedVariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_bound_vars);
    PyObject *retval = self->_bound_vars;
    return retval;
}

static int
renaming___LimitedVariableRenameVisitor_set_bound_vars(mypy___renaming___LimitedVariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LimitedVariableRenameVisitor' object attribute 'bound_vars' cannot be deleted");
        return -1;
    }
    if (self->_bound_vars != NULL) {
        CPy_DECREF(self->_bound_vars);
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
    self->_bound_vars = tmp;
    return 0;
}

static PyObject *
renaming___LimitedVariableRenameVisitor_get_skipped(mypy___renaming___LimitedVariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_skipped == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'skipped' of 'LimitedVariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_skipped);
    PyObject *retval = self->_skipped;
    return retval;
}

static int
renaming___LimitedVariableRenameVisitor_set_skipped(mypy___renaming___LimitedVariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LimitedVariableRenameVisitor' object attribute 'skipped' cannot be deleted");
        return -1;
    }
    if (self->_skipped != NULL) {
        CPy_DECREF(self->_skipped);
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
    self->_skipped = tmp;
    return 0;
}

static PyObject *
renaming___LimitedVariableRenameVisitor_get_refs(mypy___renaming___LimitedVariableRenameVisitorObject *self, void *closure)
{
    if (unlikely(self->_refs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'refs' of 'LimitedVariableRenameVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_refs);
    PyObject *retval = self->_refs;
    return retval;
}

static int
renaming___LimitedVariableRenameVisitor_set_refs(mypy___renaming___LimitedVariableRenameVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LimitedVariableRenameVisitor' object attribute 'refs' cannot be deleted");
        return -1;
    }
    if (self->_refs != NULL) {
        CPy_DECREF(self->_refs);
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
    self->_refs = tmp;
    return 0;
}

static PyObject *renaming___enter_block_VariableRenameVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_env(void);

static PyObject *
renaming___enter_block_VariableRenameVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_block_VariableRenameVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_block_VariableRenameVisitor_env_setup(type);
}

static int
renaming___enter_block_VariableRenameVisitor_env_traverse(mypy___renaming___enter_block_VariableRenameVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
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
renaming___enter_block_VariableRenameVisitor_env_clear(mypy___renaming___enter_block_VariableRenameVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
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
renaming___enter_block_VariableRenameVisitor_env_dealloc(mypy___renaming___enter_block_VariableRenameVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_block_VariableRenameVisitor_env_dealloc)
    renaming___enter_block_VariableRenameVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_block_VariableRenameVisitor_env_vtable[1];
static bool
CPyDef_renaming___enter_block_VariableRenameVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_block_VariableRenameVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(renaming___enter_block_VariableRenameVisitor_env_vtable, renaming___enter_block_VariableRenameVisitor_env_vtable_scratch, sizeof(renaming___enter_block_VariableRenameVisitor_env_vtable));
    return 1;
}

static PyMethodDef renaming___enter_block_VariableRenameVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_block_VariableRenameVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_block_VariableRenameVisitor_env",
    .tp_new = renaming___enter_block_VariableRenameVisitor_env_new,
    .tp_dealloc = (destructor)renaming___enter_block_VariableRenameVisitor_env_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_block_VariableRenameVisitor_env_traverse,
    .tp_clear = (inquiry)renaming___enter_block_VariableRenameVisitor_env_clear,
    .tp_methods = renaming___enter_block_VariableRenameVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___renaming___enter_block_VariableRenameVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_block_VariableRenameVisitor_env_template = &CPyType_renaming___enter_block_VariableRenameVisitor_env_template_;

static PyObject *
renaming___enter_block_VariableRenameVisitor_env_setup(PyTypeObject *type)
{
    mypy___renaming___enter_block_VariableRenameVisitor_envObject *self;
    self = (mypy___renaming___enter_block_VariableRenameVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_block_VariableRenameVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_env(void)
{
    PyObject *self = renaming___enter_block_VariableRenameVisitor_env_setup(CPyType_renaming___enter_block_VariableRenameVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_block_VariableRenameVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen(void);

static PyObject *
renaming___enter_block_VariableRenameVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_block_VariableRenameVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_block_VariableRenameVisitor_gen_setup(type);
}

static int
renaming___enter_block_VariableRenameVisitor_gen_traverse(mypy___renaming___enter_block_VariableRenameVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
renaming___enter_block_VariableRenameVisitor_gen_clear(mypy___renaming___enter_block_VariableRenameVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
renaming___enter_block_VariableRenameVisitor_gen_dealloc(mypy___renaming___enter_block_VariableRenameVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_block_VariableRenameVisitor_gen_dealloc)
    renaming___enter_block_VariableRenameVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_block_VariableRenameVisitor_gen_vtable[6];
static bool
CPyDef_renaming___enter_block_VariableRenameVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_block_VariableRenameVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_renaming___enter_block_VariableRenameVisitor_gen___send,
        (CPyVTableItem)CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_renaming___enter_block_VariableRenameVisitor_gen___throw,
        (CPyVTableItem)CPyDef_renaming___enter_block_VariableRenameVisitor_gen___close,
    };
    memcpy(renaming___enter_block_VariableRenameVisitor_gen_vtable, renaming___enter_block_VariableRenameVisitor_gen_vtable_scratch, sizeof(renaming___enter_block_VariableRenameVisitor_gen_vtable));
    return 1;
}

static PyMethodDef renaming___enter_block_VariableRenameVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_renaming___enter_block_VariableRenameVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_renaming___enter_block_VariableRenameVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_renaming___enter_block_VariableRenameVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_renaming___enter_block_VariableRenameVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_renaming___enter_block_VariableRenameVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_block_VariableRenameVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_block_VariableRenameVisitor_gen",
    .tp_new = renaming___enter_block_VariableRenameVisitor_gen_new,
    .tp_dealloc = (destructor)renaming___enter_block_VariableRenameVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_block_VariableRenameVisitor_gen_traverse,
    .tp_clear = (inquiry)renaming___enter_block_VariableRenameVisitor_gen_clear,
    .tp_methods = renaming___enter_block_VariableRenameVisitor_gen_methods,
    .tp_iter = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____iter__,
    .tp_iternext = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___renaming___enter_block_VariableRenameVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_block_VariableRenameVisitor_gen_template = &CPyType_renaming___enter_block_VariableRenameVisitor_gen_template_;

static PyObject *
renaming___enter_block_VariableRenameVisitor_gen_setup(PyTypeObject *type)
{
    mypy___renaming___enter_block_VariableRenameVisitor_genObject *self;
    self = (mypy___renaming___enter_block_VariableRenameVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_block_VariableRenameVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen(void)
{
    PyObject *self = renaming___enter_block_VariableRenameVisitor_gen_setup(CPyType_renaming___enter_block_VariableRenameVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_try_VariableRenameVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_env(void);

static PyObject *
renaming___enter_try_VariableRenameVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_try_VariableRenameVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_try_VariableRenameVisitor_env_setup(type);
}

static int
renaming___enter_try_VariableRenameVisitor_env_traverse(mypy___renaming___enter_try_VariableRenameVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
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
renaming___enter_try_VariableRenameVisitor_env_clear(mypy___renaming___enter_try_VariableRenameVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
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
renaming___enter_try_VariableRenameVisitor_env_dealloc(mypy___renaming___enter_try_VariableRenameVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_try_VariableRenameVisitor_env_dealloc)
    renaming___enter_try_VariableRenameVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_try_VariableRenameVisitor_env_vtable[1];
static bool
CPyDef_renaming___enter_try_VariableRenameVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_try_VariableRenameVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(renaming___enter_try_VariableRenameVisitor_env_vtable, renaming___enter_try_VariableRenameVisitor_env_vtable_scratch, sizeof(renaming___enter_try_VariableRenameVisitor_env_vtable));
    return 1;
}

static PyMethodDef renaming___enter_try_VariableRenameVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_try_VariableRenameVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_try_VariableRenameVisitor_env",
    .tp_new = renaming___enter_try_VariableRenameVisitor_env_new,
    .tp_dealloc = (destructor)renaming___enter_try_VariableRenameVisitor_env_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_try_VariableRenameVisitor_env_traverse,
    .tp_clear = (inquiry)renaming___enter_try_VariableRenameVisitor_env_clear,
    .tp_methods = renaming___enter_try_VariableRenameVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___renaming___enter_try_VariableRenameVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_try_VariableRenameVisitor_env_template = &CPyType_renaming___enter_try_VariableRenameVisitor_env_template_;

static PyObject *
renaming___enter_try_VariableRenameVisitor_env_setup(PyTypeObject *type)
{
    mypy___renaming___enter_try_VariableRenameVisitor_envObject *self;
    self = (mypy___renaming___enter_try_VariableRenameVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_try_VariableRenameVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_env(void)
{
    PyObject *self = renaming___enter_try_VariableRenameVisitor_env_setup(CPyType_renaming___enter_try_VariableRenameVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_try_VariableRenameVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen(void);

static PyObject *
renaming___enter_try_VariableRenameVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_try_VariableRenameVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_try_VariableRenameVisitor_gen_setup(type);
}

static int
renaming___enter_try_VariableRenameVisitor_gen_traverse(mypy___renaming___enter_try_VariableRenameVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
renaming___enter_try_VariableRenameVisitor_gen_clear(mypy___renaming___enter_try_VariableRenameVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
renaming___enter_try_VariableRenameVisitor_gen_dealloc(mypy___renaming___enter_try_VariableRenameVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_try_VariableRenameVisitor_gen_dealloc)
    renaming___enter_try_VariableRenameVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_try_VariableRenameVisitor_gen_vtable[6];
static bool
CPyDef_renaming___enter_try_VariableRenameVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_try_VariableRenameVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_renaming___enter_try_VariableRenameVisitor_gen___send,
        (CPyVTableItem)CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_renaming___enter_try_VariableRenameVisitor_gen___throw,
        (CPyVTableItem)CPyDef_renaming___enter_try_VariableRenameVisitor_gen___close,
    };
    memcpy(renaming___enter_try_VariableRenameVisitor_gen_vtable, renaming___enter_try_VariableRenameVisitor_gen_vtable_scratch, sizeof(renaming___enter_try_VariableRenameVisitor_gen_vtable));
    return 1;
}

static PyMethodDef renaming___enter_try_VariableRenameVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_renaming___enter_try_VariableRenameVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_renaming___enter_try_VariableRenameVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_renaming___enter_try_VariableRenameVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_renaming___enter_try_VariableRenameVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_renaming___enter_try_VariableRenameVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_try_VariableRenameVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_try_VariableRenameVisitor_gen",
    .tp_new = renaming___enter_try_VariableRenameVisitor_gen_new,
    .tp_dealloc = (destructor)renaming___enter_try_VariableRenameVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_try_VariableRenameVisitor_gen_traverse,
    .tp_clear = (inquiry)renaming___enter_try_VariableRenameVisitor_gen_clear,
    .tp_methods = renaming___enter_try_VariableRenameVisitor_gen_methods,
    .tp_iter = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____iter__,
    .tp_iternext = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___renaming___enter_try_VariableRenameVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_try_VariableRenameVisitor_gen_template = &CPyType_renaming___enter_try_VariableRenameVisitor_gen_template_;

static PyObject *
renaming___enter_try_VariableRenameVisitor_gen_setup(PyTypeObject *type)
{
    mypy___renaming___enter_try_VariableRenameVisitor_genObject *self;
    self = (mypy___renaming___enter_try_VariableRenameVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_try_VariableRenameVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen(void)
{
    PyObject *self = renaming___enter_try_VariableRenameVisitor_gen_setup(CPyType_renaming___enter_try_VariableRenameVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_loop_VariableRenameVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_env(void);

static PyObject *
renaming___enter_loop_VariableRenameVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_loop_VariableRenameVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_loop_VariableRenameVisitor_env_setup(type);
}

static int
renaming___enter_loop_VariableRenameVisitor_env_traverse(mypy___renaming___enter_loop_VariableRenameVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
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
renaming___enter_loop_VariableRenameVisitor_env_clear(mypy___renaming___enter_loop_VariableRenameVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
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
renaming___enter_loop_VariableRenameVisitor_env_dealloc(mypy___renaming___enter_loop_VariableRenameVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_loop_VariableRenameVisitor_env_dealloc)
    renaming___enter_loop_VariableRenameVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_loop_VariableRenameVisitor_env_vtable[1];
static bool
CPyDef_renaming___enter_loop_VariableRenameVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_loop_VariableRenameVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(renaming___enter_loop_VariableRenameVisitor_env_vtable, renaming___enter_loop_VariableRenameVisitor_env_vtable_scratch, sizeof(renaming___enter_loop_VariableRenameVisitor_env_vtable));
    return 1;
}

static PyMethodDef renaming___enter_loop_VariableRenameVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_loop_VariableRenameVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_loop_VariableRenameVisitor_env",
    .tp_new = renaming___enter_loop_VariableRenameVisitor_env_new,
    .tp_dealloc = (destructor)renaming___enter_loop_VariableRenameVisitor_env_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_loop_VariableRenameVisitor_env_traverse,
    .tp_clear = (inquiry)renaming___enter_loop_VariableRenameVisitor_env_clear,
    .tp_methods = renaming___enter_loop_VariableRenameVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___renaming___enter_loop_VariableRenameVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_loop_VariableRenameVisitor_env_template = &CPyType_renaming___enter_loop_VariableRenameVisitor_env_template_;

static PyObject *
renaming___enter_loop_VariableRenameVisitor_env_setup(PyTypeObject *type)
{
    mypy___renaming___enter_loop_VariableRenameVisitor_envObject *self;
    self = (mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_loop_VariableRenameVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_env(void)
{
    PyObject *self = renaming___enter_loop_VariableRenameVisitor_env_setup(CPyType_renaming___enter_loop_VariableRenameVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_loop_VariableRenameVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen(void);

static PyObject *
renaming___enter_loop_VariableRenameVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_loop_VariableRenameVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_loop_VariableRenameVisitor_gen_setup(type);
}

static int
renaming___enter_loop_VariableRenameVisitor_gen_traverse(mypy___renaming___enter_loop_VariableRenameVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
renaming___enter_loop_VariableRenameVisitor_gen_clear(mypy___renaming___enter_loop_VariableRenameVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
renaming___enter_loop_VariableRenameVisitor_gen_dealloc(mypy___renaming___enter_loop_VariableRenameVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_loop_VariableRenameVisitor_gen_dealloc)
    renaming___enter_loop_VariableRenameVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_loop_VariableRenameVisitor_gen_vtable[6];
static bool
CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_loop_VariableRenameVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___send,
        (CPyVTableItem)CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___throw,
        (CPyVTableItem)CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___close,
    };
    memcpy(renaming___enter_loop_VariableRenameVisitor_gen_vtable, renaming___enter_loop_VariableRenameVisitor_gen_vtable_scratch, sizeof(renaming___enter_loop_VariableRenameVisitor_gen_vtable));
    return 1;
}

static PyMethodDef renaming___enter_loop_VariableRenameVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_renaming___enter_loop_VariableRenameVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_renaming___enter_loop_VariableRenameVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_renaming___enter_loop_VariableRenameVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_renaming___enter_loop_VariableRenameVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_renaming___enter_loop_VariableRenameVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_loop_VariableRenameVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_loop_VariableRenameVisitor_gen",
    .tp_new = renaming___enter_loop_VariableRenameVisitor_gen_new,
    .tp_dealloc = (destructor)renaming___enter_loop_VariableRenameVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_loop_VariableRenameVisitor_gen_traverse,
    .tp_clear = (inquiry)renaming___enter_loop_VariableRenameVisitor_gen_clear,
    .tp_methods = renaming___enter_loop_VariableRenameVisitor_gen_methods,
    .tp_iter = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____iter__,
    .tp_iternext = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___renaming___enter_loop_VariableRenameVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_loop_VariableRenameVisitor_gen_template = &CPyType_renaming___enter_loop_VariableRenameVisitor_gen_template_;

static PyObject *
renaming___enter_loop_VariableRenameVisitor_gen_setup(PyTypeObject *type)
{
    mypy___renaming___enter_loop_VariableRenameVisitor_genObject *self;
    self = (mypy___renaming___enter_loop_VariableRenameVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_loop_VariableRenameVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen(void)
{
    PyObject *self = renaming___enter_loop_VariableRenameVisitor_gen_setup(CPyType_renaming___enter_loop_VariableRenameVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_scope_VariableRenameVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_env(void);

static PyObject *
renaming___enter_scope_VariableRenameVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_scope_VariableRenameVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_scope_VariableRenameVisitor_env_setup(type);
}

static int
renaming___enter_scope_VariableRenameVisitor_env_traverse(mypy___renaming___enter_scope_VariableRenameVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    if (CPyTagged_CheckLong(self->_kind)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_kind));
    }
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
renaming___enter_scope_VariableRenameVisitor_env_clear(mypy___renaming___enter_scope_VariableRenameVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    if (CPyTagged_CheckLong(self->_kind)) {
        CPyTagged __tmp = self->_kind;
        self->_kind = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
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
renaming___enter_scope_VariableRenameVisitor_env_dealloc(mypy___renaming___enter_scope_VariableRenameVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_scope_VariableRenameVisitor_env_dealloc)
    renaming___enter_scope_VariableRenameVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_scope_VariableRenameVisitor_env_vtable[1];
static bool
CPyDef_renaming___enter_scope_VariableRenameVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_scope_VariableRenameVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(renaming___enter_scope_VariableRenameVisitor_env_vtable, renaming___enter_scope_VariableRenameVisitor_env_vtable_scratch, sizeof(renaming___enter_scope_VariableRenameVisitor_env_vtable));
    return 1;
}

static PyMethodDef renaming___enter_scope_VariableRenameVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_scope_VariableRenameVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_scope_VariableRenameVisitor_env",
    .tp_new = renaming___enter_scope_VariableRenameVisitor_env_new,
    .tp_dealloc = (destructor)renaming___enter_scope_VariableRenameVisitor_env_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_scope_VariableRenameVisitor_env_traverse,
    .tp_clear = (inquiry)renaming___enter_scope_VariableRenameVisitor_env_clear,
    .tp_methods = renaming___enter_scope_VariableRenameVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___renaming___enter_scope_VariableRenameVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_scope_VariableRenameVisitor_env_template = &CPyType_renaming___enter_scope_VariableRenameVisitor_env_template_;

static PyObject *
renaming___enter_scope_VariableRenameVisitor_env_setup(PyTypeObject *type)
{
    mypy___renaming___enter_scope_VariableRenameVisitor_envObject *self;
    self = (mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_scope_VariableRenameVisitor_env_vtable;
    self->_kind = CPY_INT_TAG;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_env(void)
{
    PyObject *self = renaming___enter_scope_VariableRenameVisitor_env_setup(CPyType_renaming___enter_scope_VariableRenameVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_scope_VariableRenameVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen(void);

static PyObject *
renaming___enter_scope_VariableRenameVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_scope_VariableRenameVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_scope_VariableRenameVisitor_gen_setup(type);
}

static int
renaming___enter_scope_VariableRenameVisitor_gen_traverse(mypy___renaming___enter_scope_VariableRenameVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
renaming___enter_scope_VariableRenameVisitor_gen_clear(mypy___renaming___enter_scope_VariableRenameVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
renaming___enter_scope_VariableRenameVisitor_gen_dealloc(mypy___renaming___enter_scope_VariableRenameVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_scope_VariableRenameVisitor_gen_dealloc)
    renaming___enter_scope_VariableRenameVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_scope_VariableRenameVisitor_gen_vtable[6];
static bool
CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_scope_VariableRenameVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___send,
        (CPyVTableItem)CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___throw,
        (CPyVTableItem)CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___close,
    };
    memcpy(renaming___enter_scope_VariableRenameVisitor_gen_vtable, renaming___enter_scope_VariableRenameVisitor_gen_vtable_scratch, sizeof(renaming___enter_scope_VariableRenameVisitor_gen_vtable));
    return 1;
}

static PyMethodDef renaming___enter_scope_VariableRenameVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_renaming___enter_scope_VariableRenameVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_renaming___enter_scope_VariableRenameVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_renaming___enter_scope_VariableRenameVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_renaming___enter_scope_VariableRenameVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_renaming___enter_scope_VariableRenameVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_scope_VariableRenameVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_scope_VariableRenameVisitor_gen",
    .tp_new = renaming___enter_scope_VariableRenameVisitor_gen_new,
    .tp_dealloc = (destructor)renaming___enter_scope_VariableRenameVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_scope_VariableRenameVisitor_gen_traverse,
    .tp_clear = (inquiry)renaming___enter_scope_VariableRenameVisitor_gen_clear,
    .tp_methods = renaming___enter_scope_VariableRenameVisitor_gen_methods,
    .tp_iter = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____iter__,
    .tp_iternext = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___renaming___enter_scope_VariableRenameVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_scope_VariableRenameVisitor_gen_template = &CPyType_renaming___enter_scope_VariableRenameVisitor_gen_template_;

static PyObject *
renaming___enter_scope_VariableRenameVisitor_gen_setup(PyTypeObject *type)
{
    mypy___renaming___enter_scope_VariableRenameVisitor_genObject *self;
    self = (mypy___renaming___enter_scope_VariableRenameVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_scope_VariableRenameVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen(void)
{
    PyObject *self = renaming___enter_scope_VariableRenameVisitor_gen_setup(CPyType_renaming___enter_scope_VariableRenameVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_scope_LimitedVariableRenameVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_env(void);

static PyObject *
renaming___enter_scope_LimitedVariableRenameVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_scope_LimitedVariableRenameVisitor_env_setup(type);
}

static int
renaming___enter_scope_LimitedVariableRenameVisitor_env_traverse(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
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
renaming___enter_scope_LimitedVariableRenameVisitor_env_clear(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
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
renaming___enter_scope_LimitedVariableRenameVisitor_env_dealloc(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_scope_LimitedVariableRenameVisitor_env_dealloc)
    renaming___enter_scope_LimitedVariableRenameVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_scope_LimitedVariableRenameVisitor_env_vtable[1];
static bool
CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_scope_LimitedVariableRenameVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(renaming___enter_scope_LimitedVariableRenameVisitor_env_vtable, renaming___enter_scope_LimitedVariableRenameVisitor_env_vtable_scratch, sizeof(renaming___enter_scope_LimitedVariableRenameVisitor_env_vtable));
    return 1;
}

static PyMethodDef renaming___enter_scope_LimitedVariableRenameVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_scope_LimitedVariableRenameVisitor_env",
    .tp_new = renaming___enter_scope_LimitedVariableRenameVisitor_env_new,
    .tp_dealloc = (destructor)renaming___enter_scope_LimitedVariableRenameVisitor_env_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_scope_LimitedVariableRenameVisitor_env_traverse,
    .tp_clear = (inquiry)renaming___enter_scope_LimitedVariableRenameVisitor_env_clear,
    .tp_methods = renaming___enter_scope_LimitedVariableRenameVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env_template = &CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env_template_;

static PyObject *
renaming___enter_scope_LimitedVariableRenameVisitor_env_setup(PyTypeObject *type)
{
    mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *self;
    self = (mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_scope_LimitedVariableRenameVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_env(void)
{
    PyObject *self = renaming___enter_scope_LimitedVariableRenameVisitor_env_setup(CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *renaming___enter_scope_LimitedVariableRenameVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen(void);

static PyObject *
renaming___enter_scope_LimitedVariableRenameVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return renaming___enter_scope_LimitedVariableRenameVisitor_gen_setup(type);
}

static int
renaming___enter_scope_LimitedVariableRenameVisitor_gen_traverse(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
renaming___enter_scope_LimitedVariableRenameVisitor_gen_clear(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
renaming___enter_scope_LimitedVariableRenameVisitor_gen_dealloc(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, renaming___enter_scope_LimitedVariableRenameVisitor_gen_dealloc)
    renaming___enter_scope_LimitedVariableRenameVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem renaming___enter_scope_LimitedVariableRenameVisitor_gen_vtable[6];
static bool
CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem renaming___enter_scope_LimitedVariableRenameVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___send,
        (CPyVTableItem)CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___throw,
        (CPyVTableItem)CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___close,
    };
    memcpy(renaming___enter_scope_LimitedVariableRenameVisitor_gen_vtable, renaming___enter_scope_LimitedVariableRenameVisitor_gen_vtable_scratch, sizeof(renaming___enter_scope_LimitedVariableRenameVisitor_gen_vtable));
    return 1;
}

static PyMethodDef renaming___enter_scope_LimitedVariableRenameVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_scope_LimitedVariableRenameVisitor_gen",
    .tp_new = renaming___enter_scope_LimitedVariableRenameVisitor_gen_new,
    .tp_dealloc = (destructor)renaming___enter_scope_LimitedVariableRenameVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)renaming___enter_scope_LimitedVariableRenameVisitor_gen_traverse,
    .tp_clear = (inquiry)renaming___enter_scope_LimitedVariableRenameVisitor_gen_clear,
    .tp_methods = renaming___enter_scope_LimitedVariableRenameVisitor_gen_methods,
    .tp_iter = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____iter__,
    .tp_iternext = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen_template = &CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen_template_;

static PyObject *
renaming___enter_scope_LimitedVariableRenameVisitor_gen_setup(PyTypeObject *type)
{
    mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *self;
    self = (mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = renaming___enter_scope_LimitedVariableRenameVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen(void)
{
    PyObject *self = renaming___enter_scope_LimitedVariableRenameVisitor_gen_setup(CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef renamingmodule_methods[] = {
    {"rename_refs", (PyCFunction)CPyPy_renaming___rename_refs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef renamingmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.renaming",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    renamingmodule_methods
};

PyObject *CPyInit_mypy___renaming(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___renaming_internal) {
        Py_INCREF(CPyModule_mypy___renaming_internal);
        return CPyModule_mypy___renaming_internal;
    }
    CPyModule_mypy___renaming_internal = PyModule_Create(&renamingmodule);
    if (unlikely(CPyModule_mypy___renaming_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___renaming_internal, "__name__");
    CPyStatic_renaming___globals = PyModule_GetDict(CPyModule_mypy___renaming_internal);
    if (unlikely(CPyStatic_renaming___globals == NULL))
        goto fail;
    CPyType_renaming___enter_block_VariableRenameVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_block_VariableRenameVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_block_VariableRenameVisitor_env))
        goto fail;
    CPyType_renaming___enter_block_VariableRenameVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_block_VariableRenameVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_block_VariableRenameVisitor_gen))
        goto fail;
    CPyType_renaming___enter_try_VariableRenameVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_try_VariableRenameVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_try_VariableRenameVisitor_env))
        goto fail;
    CPyType_renaming___enter_try_VariableRenameVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_try_VariableRenameVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_try_VariableRenameVisitor_gen))
        goto fail;
    CPyType_renaming___enter_loop_VariableRenameVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_loop_VariableRenameVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_loop_VariableRenameVisitor_env))
        goto fail;
    CPyType_renaming___enter_loop_VariableRenameVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_loop_VariableRenameVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_loop_VariableRenameVisitor_gen))
        goto fail;
    CPyType_renaming___enter_scope_VariableRenameVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_scope_VariableRenameVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_scope_VariableRenameVisitor_env))
        goto fail;
    CPyType_renaming___enter_scope_VariableRenameVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_scope_VariableRenameVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_scope_VariableRenameVisitor_gen))
        goto fail;
    CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env))
        goto fail;
    CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_renaming_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___renaming_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___renaming_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_renaming___VariableRenameVisitor);
    Py_CLEAR(CPyType_renaming___LimitedVariableRenameVisitor);
    Py_CLEAR(CPyType_renaming___enter_block_VariableRenameVisitor_env);
    Py_CLEAR(CPyType_renaming___enter_block_VariableRenameVisitor_gen);
    Py_CLEAR(CPyType_renaming___enter_try_VariableRenameVisitor_env);
    Py_CLEAR(CPyType_renaming___enter_try_VariableRenameVisitor_gen);
    Py_CLEAR(CPyType_renaming___enter_loop_VariableRenameVisitor_env);
    Py_CLEAR(CPyType_renaming___enter_loop_VariableRenameVisitor_gen);
    Py_CLEAR(CPyType_renaming___enter_scope_VariableRenameVisitor_env);
    Py_CLEAR(CPyType_renaming___enter_scope_VariableRenameVisitor_gen);
    Py_CLEAR(CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_env);
    Py_CLEAR(CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor_____init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_id);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_id = 0;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 72, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_disallow_redef_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_disallow_redef_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_disallow_redef_depth = 0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 74, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_loop_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_loop_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_loop_depth = 0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 76, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 78, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_loop_depth != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_loop_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_loop_depth = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 78, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 80, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 80, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 82, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 82, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 87, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 87, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 89, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 89, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 91, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_scope_kinds != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_scope_kinds);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_scope_kinds = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 91, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
}

PyObject *CPyPy_renaming___VariableRenameVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__init__", 70, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_file_node) {
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
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    tuple_T3OOO cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___clear(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 98, CPyStatic_renaming___globals);
        goto CPyL57;
    }
    cpy_r_r1 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r2 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r3[2] = {cpy_r_self, cpy_r_r2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL57;
    }
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL58;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL59;
    } else
        goto CPyL60;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = CPyStatics[4662]; /* 'enter_block' */
    PyObject *cpy_r_r16[1] = {cpy_r_self};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL36;
    }
    cpy_r_r19 = PyObject_Type(cpy_r_r18);
    cpy_r_r20 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL61;
    }
    cpy_r_r22 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_r18};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL62;
    } else
        goto CPyL63;
CPyL10: ;
    cpy_r_r27 = 1;
    cpy_r_r28 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_defs;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = 0;
CPyL12: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL64;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r28, cpy_r_r29);
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_nodes___Statement)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_mypy_file", 100, CPyStatic_renaming___globals, "mypy.nodes.Statement", cpy_r_r34);
        goto CPyL65;
    }
    cpy_r_d = cpy_r_r35;
    cpy_r_r36 = CPY_GET_METHOD_TRAIT(cpy_r_d, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_d, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 101, CPyStatic_renaming___globals);
        goto CPyL65;
    } else
        goto CPyL66;
CPyL15: ;
    cpy_r_r37 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r37;
    goto CPyL12;
CPyL16: ;
    cpy_r_r38 = CPy_CatchError();
    cpy_r_r27 = 0;
    cpy_r_r39 = CPy_GetExcInfo();
    cpy_r_r40 = cpy_r_r39.f0;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = cpy_r_r39.f2;
    CPy_INCREF(cpy_r_r42);
    CPy_DecRef(cpy_r_r39.f0);
    CPy_DecRef(cpy_r_r39.f1);
    CPy_DecRef(cpy_r_r39.f2);
    PyObject *cpy_r_r43[4] = {cpy_r_r18, cpy_r_r40, cpy_r_r41, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r44, 4, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL67;
    }
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    CPy_DecRef(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL22;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) goto CPyL21;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL68;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL24;
CPyL22: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    cpy_r_r49 = CPy_KeepPropagating();
    if (!cpy_r_r49) {
        goto CPyL25;
    } else
        goto CPyL69;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    tuple_T3OOO __tmp4972 = { NULL, NULL, NULL };
    cpy_r_r50 = __tmp4972;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL26;
CPyL25: ;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r51 = cpy_r_r52;
CPyL26: ;
    if (!cpy_r_r27) goto CPyL70;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r54[4] = {cpy_r_r18, cpy_r_r53, cpy_r_r53, cpy_r_r53};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r55, 4, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL28: ;
    CPy_DECREF(cpy_r_r18);
CPyL29: ;
    if (cpy_r_r51.f0 == NULL) goto CPyL44;
    CPy_Reraise();
    if (!0) {
        goto CPyL32;
    } else
        goto CPyL73;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    if (cpy_r_r51.f0 == NULL) goto CPyL34;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
CPyL34: ;
    cpy_r_r57 = CPy_KeepPropagating();
    if (!cpy_r_r57) {
        goto CPyL36;
    } else
        goto CPyL74;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r58 = CPy_CatchError();
    cpy_r_r14 = 0;
    cpy_r_r59 = CPy_GetExcInfo();
    cpy_r_r60 = cpy_r_r59.f0;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = cpy_r_r59.f1;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = cpy_r_r59.f2;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r59.f0);
    CPy_DECREF(cpy_r_r59.f1);
    CPy_DECREF(cpy_r_r59.f2);
    PyObject *cpy_r_r63[4] = {cpy_r_r5, cpy_r_r60, cpy_r_r61, cpy_r_r62};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r64, 4, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = PyObject_IsTrue(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL42;
    }
    cpy_r_r68 = cpy_r_r66;
    if (cpy_r_r68) goto CPyL41;
    CPy_Reraise();
    if (!0) {
        goto CPyL42;
    } else
        goto CPyL76;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    CPy_DECREF(cpy_r_r58.f2);
    goto CPyL44;
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    CPy_DECREF(cpy_r_r58.f2);
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) {
        goto CPyL45;
    } else
        goto CPyL77;
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    tuple_T3OOO __tmp4973 = { NULL, NULL, NULL };
    cpy_r_r70 = __tmp4973;
    cpy_r_r71 = cpy_r_r70;
    goto CPyL46;
CPyL45: ;
    cpy_r_r72 = CPy_CatchError();
    cpy_r_r71 = cpy_r_r72;
CPyL46: ;
    if (!cpy_r_r14) goto CPyL78;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r74[4] = {cpy_r_r5, cpy_r_r73, cpy_r_r73, cpy_r_r73};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r75, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 99, CPyStatic_renaming___globals);
        goto CPyL79;
    } else
        goto CPyL80;
CPyL48: ;
    CPy_DECREF(cpy_r_r5);
CPyL49: ;
    if (cpy_r_r71.f0 == NULL) goto CPyL56;
    CPy_Reraise();
    if (!0) {
        goto CPyL52;
    } else
        goto CPyL81;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    if (cpy_r_r71.f0 == NULL) goto CPyL54;
    CPy_RestoreExcInfo(cpy_r_r71);
    CPy_XDECREF(cpy_r_r71.f0);
    CPy_XDECREF(cpy_r_r71.f1);
    CPy_XDECREF(cpy_r_r71.f2);
CPyL54: ;
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) goto CPyL57;
    CPy_Unreachable();
CPyL56: ;
    return 1;
CPyL57: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL58: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL57;
CPyL59: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL57;
CPyL60: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL61: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL36;
CPyL62: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL36;
CPyL63: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL10;
CPyL64: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL24;
CPyL65: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL16;
CPyL66: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL15;
CPyL67: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL22;
CPyL68: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL20;
CPyL69: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL23;
CPyL70: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    goto CPyL29;
CPyL71: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL32;
CPyL72: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL28;
CPyL73: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
    goto CPyL31;
CPyL74: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL35;
CPyL75: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL42;
CPyL76: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    CPy_DECREF(cpy_r_r58.f2);
    goto CPyL40;
CPyL77: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL43;
CPyL78: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL49;
CPyL79: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL52;
CPyL80: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL48;
CPyL81: ;
    CPy_XDECREF(cpy_r_r71.f0);
    CPy_XDECREF(cpy_r_r71.f1);
    CPy_XDECREF(cpy_r_r71.f2);
    goto CPyL51;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file_node", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_file_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_file_node;
    if (likely(Py_TYPE(obj_file_node) == CPyType_nodes___MypyFile))
        arg_file_node = obj_file_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file_node); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_mypy_file(arg_self, arg_file_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 93, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
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
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_can_be_redefined;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    tuple_T3OOO cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    tuple_T3OOO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    tuple_T3OOO cpy_r_r93;
    tuple_T3OOO cpy_r_r94;
    tuple_T3OOO cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 106, CPyStatic_renaming___globals);
        goto CPyL69;
    }
    cpy_r_r1 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r2 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r3[2] = {cpy_r_self, cpy_r_r2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL69;
    }
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL70;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = CPyStatics[4662]; /* 'enter_block' */
    PyObject *cpy_r_r16[1] = {cpy_r_self};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    cpy_r_r19 = PyObject_Type(cpy_r_r18);
    cpy_r_r20 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL73;
    }
    cpy_r_r22 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_r18};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL74;
    } else
        goto CPyL75;
CPyL10: ;
    cpy_r_r27 = 1;
    cpy_r_r28 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arguments;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_func_def", "FuncDef", "arguments", 109, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r28);
CPyL12: ;
    cpy_r_r29 = 0;
CPyL13: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL76;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r28, cpy_r_r29);
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_nodes___Argument))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_func_def", 109, CPyStatic_renaming___globals, "mypy.nodes.Argument", cpy_r_r34);
        goto CPyL77;
    }
    cpy_r_arg = cpy_r_r35;
    cpy_r_r36 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_r36, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 110, CPyStatic_renaming___globals);
        goto CPyL78;
    }
CPyL16: ;
    cpy_r_name = cpy_r_r37;
    cpy_r_r38 = CPyStatics[730]; /* 'self' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_name, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL19;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL19;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 113, CPyStatic_renaming___globals);
        goto CPyL79;
    }
CPyL19: ;
    cpy_r_r44 = cpy_r_r39 != 0;
    cpy_r_can_be_redefined = cpy_r_r44;
    cpy_r_r45 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_r45, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 114, CPyStatic_renaming___globals);
        goto CPyL79;
    }
CPyL20: ;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r47 = CPyDef_renaming___VariableRenameVisitor___record_assignment(cpy_r_self, cpy_r_r46, cpy_r_can_be_redefined);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 114, CPyStatic_renaming___globals);
        goto CPyL80;
    }
    cpy_r_r48 = CPyDef_renaming___VariableRenameVisitor___handle_arg(cpy_r_self, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 115, CPyStatic_renaming___globals);
        goto CPyL77;
    }
    cpy_r_r49 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r49;
    goto CPyL13;
CPyL23: ;
    cpy_r_r50 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_body;
    cpy_r_r51 = ((mypy___nodes___BlockObject *)cpy_r_r50)->_body;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = 0;
CPyL24: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_r51)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r52 < (Py_ssize_t)cpy_r_r55;
    if (!cpy_r_r56) goto CPyL81;
    cpy_r_r57 = CPyList_GetItemUnsafe(cpy_r_r51, cpy_r_r52);
    if (likely(PyObject_TypeCheck(cpy_r_r57, CPyType_nodes___Statement)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_func_def", 117, CPyStatic_renaming___globals, "mypy.nodes.Statement", cpy_r_r57);
        goto CPyL82;
    }
    cpy_r_stmt = cpy_r_r58;
    cpy_r_r59 = CPY_GET_METHOD_TRAIT(cpy_r_stmt, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_stmt, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 118, CPyStatic_renaming___globals);
        goto CPyL82;
    } else
        goto CPyL83;
CPyL27: ;
    cpy_r_r60 = cpy_r_r52 + 2;
    cpy_r_r52 = cpy_r_r60;
    goto CPyL24;
CPyL28: ;
    cpy_r_r61 = CPy_CatchError();
    cpy_r_r27 = 0;
    cpy_r_r62 = CPy_GetExcInfo();
    cpy_r_r63 = cpy_r_r62.f0;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = cpy_r_r62.f1;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = cpy_r_r62.f2;
    CPy_INCREF(cpy_r_r65);
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    PyObject *cpy_r_r66[4] = {cpy_r_r18, cpy_r_r63, cpy_r_r64, cpy_r_r65};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r67, 4, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL84;
    }
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    cpy_r_r69 = PyObject_IsTrue(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    cpy_r_r71 = cpy_r_r69;
    if (cpy_r_r71) goto CPyL33;
    CPy_Reraise();
    if (!0) {
        goto CPyL34;
    } else
        goto CPyL85;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r61);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    goto CPyL36;
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r61);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    cpy_r_r72 = CPy_KeepPropagating();
    if (!cpy_r_r72) {
        goto CPyL37;
    } else
        goto CPyL86;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    tuple_T3OOO __tmp4974 = { NULL, NULL, NULL };
    cpy_r_r73 = __tmp4974;
    cpy_r_r74 = cpy_r_r73;
    goto CPyL38;
CPyL37: ;
    cpy_r_r75 = CPy_CatchError();
    cpy_r_r74 = cpy_r_r75;
CPyL38: ;
    if (!cpy_r_r27) goto CPyL87;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r77[4] = {cpy_r_r18, cpy_r_r76, cpy_r_r76, cpy_r_r76};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r78, 4, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL40: ;
    CPy_DECREF(cpy_r_r18);
CPyL41: ;
    if (cpy_r_r74.f0 == NULL) goto CPyL56;
    CPy_Reraise();
    if (!0) {
        goto CPyL44;
    } else
        goto CPyL90;
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    if (cpy_r_r74.f0 == NULL) goto CPyL46;
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_XDECREF(cpy_r_r74.f0);
    CPy_XDECREF(cpy_r_r74.f1);
    CPy_XDECREF(cpy_r_r74.f2);
CPyL46: ;
    cpy_r_r80 = CPy_KeepPropagating();
    if (!cpy_r_r80) {
        goto CPyL48;
    } else
        goto CPyL91;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r81 = CPy_CatchError();
    cpy_r_r14 = 0;
    cpy_r_r82 = CPy_GetExcInfo();
    cpy_r_r83 = cpy_r_r82.f0;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = cpy_r_r82.f1;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = cpy_r_r82.f2;
    CPy_INCREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r82.f0);
    CPy_DECREF(cpy_r_r82.f1);
    CPy_DECREF(cpy_r_r82.f2);
    PyObject *cpy_r_r86[4] = {cpy_r_r5, cpy_r_r83, cpy_r_r84, cpy_r_r85};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r87, 4, 0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r89 = PyObject_IsTrue(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL54;
    }
    cpy_r_r91 = cpy_r_r89;
    if (cpy_r_r91) goto CPyL53;
    CPy_Reraise();
    if (!0) {
        goto CPyL54;
    } else
        goto CPyL93;
CPyL52: ;
    CPy_Unreachable();
CPyL53: ;
    CPy_RestoreExcInfo(cpy_r_r81);
    CPy_DECREF(cpy_r_r81.f0);
    CPy_DECREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_r81.f2);
    goto CPyL56;
CPyL54: ;
    CPy_RestoreExcInfo(cpy_r_r81);
    CPy_DECREF(cpy_r_r81.f0);
    CPy_DECREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_r81.f2);
    cpy_r_r92 = CPy_KeepPropagating();
    if (!cpy_r_r92) {
        goto CPyL57;
    } else
        goto CPyL94;
CPyL55: ;
    CPy_Unreachable();
CPyL56: ;
    tuple_T3OOO __tmp4975 = { NULL, NULL, NULL };
    cpy_r_r93 = __tmp4975;
    cpy_r_r94 = cpy_r_r93;
    goto CPyL58;
CPyL57: ;
    cpy_r_r95 = CPy_CatchError();
    cpy_r_r94 = cpy_r_r95;
CPyL58: ;
    if (!cpy_r_r14) goto CPyL95;
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r97[4] = {cpy_r_r5, cpy_r_r96, cpy_r_r96, cpy_r_r96};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r98, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 108, CPyStatic_renaming___globals);
        goto CPyL96;
    } else
        goto CPyL97;
CPyL60: ;
    CPy_DECREF(cpy_r_r5);
CPyL61: ;
    if (cpy_r_r94.f0 == NULL) goto CPyL68;
    CPy_Reraise();
    if (!0) {
        goto CPyL64;
    } else
        goto CPyL98;
CPyL63: ;
    CPy_Unreachable();
CPyL64: ;
    if (cpy_r_r94.f0 == NULL) goto CPyL66;
    CPy_RestoreExcInfo(cpy_r_r94);
    CPy_XDECREF(cpy_r_r94.f0);
    CPy_XDECREF(cpy_r_r94.f1);
    CPy_XDECREF(cpy_r_r94.f2);
CPyL66: ;
    cpy_r_r100 = CPy_KeepPropagating();
    if (!cpy_r_r100) goto CPyL69;
    CPy_Unreachable();
CPyL68: ;
    return 1;
CPyL69: ;
    cpy_r_r101 = 2;
    return cpy_r_r101;
CPyL70: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL69;
CPyL71: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL69;
CPyL72: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL73: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL48;
CPyL74: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL48;
CPyL75: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL10;
CPyL76: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL23;
CPyL77: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL28;
CPyL78: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_arg);
    goto CPyL28;
CPyL79: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_name);
    goto CPyL28;
CPyL80: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_name);
    goto CPyL28;
CPyL81: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL36;
CPyL82: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL28;
CPyL83: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL27;
CPyL84: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL34;
CPyL85: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    goto CPyL32;
CPyL86: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL35;
CPyL87: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    goto CPyL41;
CPyL88: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL44;
CPyL89: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL40;
CPyL90: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_XDECREF(cpy_r_r74.f0);
    CPy_XDECREF(cpy_r_r74.f1);
    CPy_XDECREF(cpy_r_r74.f2);
    goto CPyL43;
CPyL91: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL47;
CPyL92: ;
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r85);
    goto CPyL54;
CPyL93: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r81.f0);
    CPy_DECREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_r81.f2);
    goto CPyL52;
CPyL94: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL55;
CPyL95: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL61;
CPyL96: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL64;
CPyL97: ;
    CPy_DECREF(cpy_r_r99);
    goto CPyL60;
CPyL98: ;
    CPy_XDECREF(cpy_r_r94.f0);
    CPy_XDECREF(cpy_r_r94.f1);
    CPy_XDECREF(cpy_r_r94.f2);
    goto CPyL63;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_func_def(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 103, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_cdef) {
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
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 121, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r1 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r2 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r3[2] = {cpy_r_self, cpy_r_r2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL30;
    } else
        goto CPyL31;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_cdef);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 123, CPyStatic_renaming___globals);
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
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) goto CPyL12;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL33;
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
        goto CPyL34;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    tuple_T3OOO __tmp4976 = { NULL, NULL, NULL };
    cpy_r_r28 = __tmp4976;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL17;
CPyL16: ;
    cpy_r_r30 = CPy_CatchError();
    cpy_r_r29 = cpy_r_r30;
CPyL17: ;
    if (!cpy_r_r14) goto CPyL35;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r32[4] = {cpy_r_r5, cpy_r_r31, cpy_r_r31, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r33, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 122, CPyStatic_renaming___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL19: ;
    CPy_DECREF(cpy_r_r5);
CPyL20: ;
    if (cpy_r_r29.f0 == NULL) goto CPyL27;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL38;
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
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL32: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL13;
CPyL33: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL11;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL14;
CPyL35: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL20;
CPyL36: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL37: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL19;
CPyL38: ;
    CPy_XDECREF(cpy_r_r29.f0);
    CPy_XDECREF(cpy_r_r29.f1);
    CPy_XDECREF(cpy_r_r29.f2);
    goto CPyL22;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_class_def(arg_self, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 120, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_class_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_class_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_class_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
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
    char cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    tuple_T3OOO cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[4662]; /* 'enter_block' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL27;
    }
    cpy_r_r4 = PyObject_Type(cpy_r_r3);
    cpy_r_r5 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r7 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r3};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL4: ;
    cpy_r_r12 = 1;
    cpy_r_r13 = CPyDef_traverser___TraverserVisitor___visit_block(cpy_r_self, cpy_r_block);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 127, CPyStatic_renaming___globals);
    } else
        goto CPyL14;
    cpy_r_r14 = CPy_CatchError();
    cpy_r_r12 = 0;
    cpy_r_r15 = CPy_GetExcInfo();
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r18);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    PyObject *cpy_r_r19[4] = {cpy_r_r3, cpy_r_r16, cpy_r_r17, cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r20, 4, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL31;
    }
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r21);
    CPy_DecRef(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL12;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) goto CPyL11;
    CPy_Reraise();
    if (!0) {
        goto CPyL12;
    } else
        goto CPyL32;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL14;
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) {
        goto CPyL15;
    } else
        goto CPyL33;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    tuple_T3OOO __tmp4977 = { NULL, NULL, NULL };
    cpy_r_r26 = __tmp4977;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL16;
CPyL15: ;
    cpy_r_r28 = CPy_CatchError();
    cpy_r_r27 = cpy_r_r28;
CPyL16: ;
    if (!cpy_r_r12) goto CPyL34;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r30[4] = {cpy_r_r3, cpy_r_r29, cpy_r_r29, cpy_r_r29};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r31, 4, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_block", 126, CPyStatic_renaming___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL18: ;
    CPy_DECREF(cpy_r_r3);
CPyL19: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL26;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL37;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL24;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
CPyL24: ;
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL27;
    CPy_Unreachable();
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL30: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL31: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL12;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL10;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL34: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL19;
CPyL35: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL22;
CPyL36: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL18;
CPyL37: ;
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
    goto CPyL21;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_block(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_block", 125, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_while_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
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
    char cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    tuple_T3OOO cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[4663]; /* 'enter_loop' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL27;
    }
    cpy_r_r4 = PyObject_Type(cpy_r_r3);
    cpy_r_r5 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r7 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r3};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL4: ;
    cpy_r_r12 = 1;
    cpy_r_r13 = CPyDef_traverser___TraverserVisitor___visit_while_stmt(cpy_r_self, cpy_r_stmt);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 131, CPyStatic_renaming___globals);
    } else
        goto CPyL14;
    cpy_r_r14 = CPy_CatchError();
    cpy_r_r12 = 0;
    cpy_r_r15 = CPy_GetExcInfo();
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r18);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    PyObject *cpy_r_r19[4] = {cpy_r_r3, cpy_r_r16, cpy_r_r17, cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r20, 4, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL31;
    }
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r21);
    CPy_DecRef(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL12;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) goto CPyL11;
    CPy_Reraise();
    if (!0) {
        goto CPyL12;
    } else
        goto CPyL32;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL14;
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) {
        goto CPyL15;
    } else
        goto CPyL33;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    tuple_T3OOO __tmp4978 = { NULL, NULL, NULL };
    cpy_r_r26 = __tmp4978;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL16;
CPyL15: ;
    cpy_r_r28 = CPy_CatchError();
    cpy_r_r27 = cpy_r_r28;
CPyL16: ;
    if (!cpy_r_r12) goto CPyL34;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r30[4] = {cpy_r_r3, cpy_r_r29, cpy_r_r29, cpy_r_r29};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r31, 4, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 130, CPyStatic_renaming___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL18: ;
    CPy_DECREF(cpy_r_r3);
CPyL19: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL26;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL37;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL24;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
CPyL24: ;
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL27;
    CPy_Unreachable();
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL30: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL31: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL12;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL10;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL34: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL19;
CPyL35: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL22;
CPyL36: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL18;
CPyL37: ;
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
    goto CPyL21;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_while_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___WhileStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt", 129, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_while_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_while_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_while_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_while_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T3OOO cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = ((mypy___nodes___ForStmtObject *)cpy_r_stmt)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 134, CPyStatic_renaming___globals);
        goto CPyL33;
    } else
        goto CPyL34;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___ForStmtObject *)cpy_r_stmt)->_index;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_r2, 1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 135, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    cpy_r_r4 = ((mypy___nodes___ForStmtObject *)cpy_r_stmt)->_index;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_METHOD_TRAIT(cpy_r_r4, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r4, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 137, CPyStatic_renaming___globals);
        goto CPyL33;
    } else
        goto CPyL35;
CPyL3: ;
    cpy_r_r6 = CPyStatics[4663]; /* 'enter_loop' */
    PyObject *cpy_r_r7[1] = {cpy_r_self};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    cpy_r_r10 = PyObject_Type(cpy_r_r9);
    cpy_r_r11 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL36;
    }
    cpy_r_r13 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL7: ;
    cpy_r_r18 = 1;
    cpy_r_r19 = ((mypy___nodes___ForStmtObject *)cpy_r_stmt)->_body;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_nodes___Block___accept(cpy_r_r19, cpy_r_self);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 139, CPyStatic_renaming___globals);
    } else
        goto CPyL39;
    cpy_r_r21 = CPy_CatchError();
    cpy_r_r18 = 0;
    cpy_r_r22 = CPy_GetExcInfo();
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r22.f2;
    CPy_INCREF(cpy_r_r25);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    PyObject *cpy_r_r26[4] = {cpy_r_r9, cpy_r_r23, cpy_r_r24, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r27, 4, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL40;
    }
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL15;
    }
    cpy_r_r31 = cpy_r_r29;
    if (cpy_r_r31) goto CPyL14;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL41;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL17;
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    cpy_r_r32 = CPy_KeepPropagating();
    if (!cpy_r_r32) {
        goto CPyL18;
    } else
        goto CPyL42;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    tuple_T3OOO __tmp4979 = { NULL, NULL, NULL };
    cpy_r_r33 = __tmp4979;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL19;
CPyL18: ;
    cpy_r_r35 = CPy_CatchError();
    cpy_r_r34 = cpy_r_r35;
CPyL19: ;
    if (!cpy_r_r18) goto CPyL43;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r37[4] = {cpy_r_r9, cpy_r_r36, cpy_r_r36, cpy_r_r36};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r38, 4, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 138, CPyStatic_renaming___globals);
        goto CPyL44;
    } else
        goto CPyL45;
CPyL21: ;
    CPy_DECREF(cpy_r_r9);
CPyL22: ;
    if (cpy_r_r34.f0 == NULL) goto CPyL29;
    CPy_Reraise();
    if (!0) {
        goto CPyL25;
    } else
        goto CPyL46;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    if (cpy_r_r34.f0 == NULL) goto CPyL27;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_XDECREF(cpy_r_r34.f0);
    CPy_XDECREF(cpy_r_r34.f1);
    CPy_XDECREF(cpy_r_r34.f2);
CPyL27: ;
    cpy_r_r40 = CPy_KeepPropagating();
    if (!cpy_r_r40) goto CPyL33;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r41 = ((mypy___nodes___ForStmtObject *)cpy_r_stmt)->_else_body;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    CPy_DECREF(cpy_r_r41);
    if (!cpy_r_r43) goto CPyL32;
    cpy_r_r44 = ((mypy___nodes___ForStmtObject *)cpy_r_stmt)->_else_body;
    CPy_INCREF(cpy_r_r44);
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_for_stmt", 141, CPyStatic_renaming___globals, "mypy.nodes.Block", cpy_r_r44);
        goto CPyL33;
    }
    cpy_r_r46 = CPyDef_nodes___Block___accept(cpy_r_r45, cpy_r_self);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 141, CPyStatic_renaming___globals);
        goto CPyL33;
    } else
        goto CPyL47;
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL34: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL35: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
CPyL36: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL33;
CPyL38: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL7;
CPyL39: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL17;
CPyL40: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL15;
CPyL41: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL13;
CPyL42: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL43: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    goto CPyL22;
CPyL44: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL25;
CPyL45: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL21;
CPyL46: ;
    CPy_XDECREF(cpy_r_r34.f0);
    CPy_XDECREF(cpy_r_r34.f1);
    CPy_XDECREF(cpy_r_r34.f2);
    goto CPyL24;
CPyL47: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL32;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ForStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt", 133, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_for_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_break_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_break_stmt", 144, CPyStatic_renaming___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___BreakStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_break_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_break_stmt", 143, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_break_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_break_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_break_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_continue_stmt", 147, CPyStatic_renaming___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ContinueStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_continue_stmt", 146, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_continue_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_continue_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_continue_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_try_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
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
    char cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    tuple_T3OOO cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[4664]; /* 'enter_try' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL27;
    }
    cpy_r_r4 = PyObject_Type(cpy_r_r3);
    cpy_r_r5 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r7 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r3};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL4: ;
    cpy_r_r12 = 1;
    cpy_r_r13 = CPyDef_traverser___TraverserVisitor___visit_try_stmt(cpy_r_self, cpy_r_stmt);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 154, CPyStatic_renaming___globals);
    } else
        goto CPyL14;
    cpy_r_r14 = CPy_CatchError();
    cpy_r_r12 = 0;
    cpy_r_r15 = CPy_GetExcInfo();
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r18);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    PyObject *cpy_r_r19[4] = {cpy_r_r3, cpy_r_r16, cpy_r_r17, cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r20, 4, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL31;
    }
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r21);
    CPy_DecRef(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL12;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) goto CPyL11;
    CPy_Reraise();
    if (!0) {
        goto CPyL12;
    } else
        goto CPyL32;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL14;
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) {
        goto CPyL15;
    } else
        goto CPyL33;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    tuple_T3OOO __tmp4980 = { NULL, NULL, NULL };
    cpy_r_r26 = __tmp4980;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL16;
CPyL15: ;
    cpy_r_r28 = CPy_CatchError();
    cpy_r_r27 = cpy_r_r28;
CPyL16: ;
    if (!cpy_r_r12) goto CPyL34;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r30[4] = {cpy_r_r3, cpy_r_r29, cpy_r_r29, cpy_r_r29};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r31, 4, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 153, CPyStatic_renaming___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL18: ;
    CPy_DECREF(cpy_r_r3);
CPyL19: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL26;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL37;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL24;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
CPyL24: ;
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL27;
    CPy_Unreachable();
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL30: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL31: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL12;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL10;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL34: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL19;
CPyL35: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL22;
CPyL36: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL18;
CPyL37: ;
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
    goto CPyL21;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___TryStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt", 149, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_try_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_try_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_try_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_try_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL15;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 157, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL16;
    }
    cpy_r_expr = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 158, CPyStatic_renaming___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_target;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL18;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (PyObject_TypeCheck(cpy_r_r16, CPyType_nodes___Expression))
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL4981;
    if (cpy_r_r16 == Py_None)
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL4981;
    CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 159, CPyStatic_renaming___globals, "mypy.nodes.Expression or None", cpy_r_r16);
    goto CPyL19;
__LL4981: ;
    cpy_r_target = cpy_r_r17;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_target != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL20;
    if (likely(cpy_r_target != Py_None))
        cpy_r_r20 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 161, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_target);
        goto CPyL19;
    }
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 161, CPyStatic_renaming___globals);
        goto CPyL19;
    }
CPyL11: ;
    cpy_r_r23 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r23;
    goto CPyL6;
CPyL12: ;
    cpy_r_r24 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_body;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_nodes___Block___accept(cpy_r_r24, cpy_r_self);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 168, CPyStatic_renaming___globals);
        goto CPyL14;
    } else
        goto CPyL21;
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL15: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
CPyL18: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL20: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL11;
CPyL21: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL13;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___WithStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 156, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_as_id;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___ImportObject *)cpy_r_imp)->_ids;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp4982;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp4982 = NULL;
        goto __LL4983;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp4982 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp4982 = NULL;
    }
    if (__tmp4982 == NULL) goto __LL4983;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp4982 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4982 = NULL;
    }
    if (__tmp4982 != NULL) goto __LL4984;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp4982 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4982 = NULL;
    }
    if (__tmp4982 != NULL) goto __LL4984;
    __tmp4982 = NULL;
__LL4984: ;
    if (__tmp4982 == NULL) goto __LL4983;
    __tmp4982 = cpy_r_r6;
__LL4983: ;
    if (unlikely(__tmp4982 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4985 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp4985);
        PyObject *__tmp4986;
        if (likely(PyUnicode_Check(__tmp4985)))
            __tmp4986 = __tmp4985;
        else {
            CPy_TypeError("str", __tmp4985); 
            __tmp4986 = NULL;
        }
        cpy_r_r7.f0 = __tmp4986;
        PyObject *__tmp4987 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp4987);
        PyObject *__tmp4988;
        if (PyUnicode_Check(__tmp4987))
            __tmp4988 = __tmp4987;
        else {
            __tmp4988 = NULL;
        }
        if (__tmp4988 != NULL) goto __LL4989;
        if (__tmp4987 == Py_None)
            __tmp4988 = __tmp4987;
        else {
            __tmp4988 = NULL;
        }
        if (__tmp4988 != NULL) goto __LL4989;
        CPy_TypeError("str or None", __tmp4987); 
        __tmp4988 = NULL;
__LL4989: ;
        cpy_r_r7.f1 = __tmp4988;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import", 171, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_as_id = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_as_id != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL15;
    CPy_INCREF(cpy_r_as_id);
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r12 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import", 171, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) {
        goto CPyL17;
    } else
        goto CPyL15;
CPyL6: ;
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r14 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import", 172, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL14;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = cpy_r_id;
CPyL9: ;
    cpy_r_r16 = CPyDef_renaming___VariableRenameVisitor___record_assignment(cpy_r_self, cpy_r_r15, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import", 172, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL1;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_as_id);
    goto CPyL8;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_as_id);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_id);
    goto CPyL6;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___Import))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_import(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import", 170, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_as_id;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___ImportFromObject *)cpy_r_imp)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp4990;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp4990 = NULL;
        goto __LL4991;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp4990 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp4990 = NULL;
    }
    if (__tmp4990 == NULL) goto __LL4991;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp4990 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4990 = NULL;
    }
    if (__tmp4990 != NULL) goto __LL4992;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp4990 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4990 = NULL;
    }
    if (__tmp4990 != NULL) goto __LL4992;
    __tmp4990 = NULL;
__LL4992: ;
    if (__tmp4990 == NULL) goto __LL4991;
    __tmp4990 = cpy_r_r6;
__LL4991: ;
    if (unlikely(__tmp4990 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4993 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp4993);
        PyObject *__tmp4994;
        if (likely(PyUnicode_Check(__tmp4993)))
            __tmp4994 = __tmp4993;
        else {
            CPy_TypeError("str", __tmp4993); 
            __tmp4994 = NULL;
        }
        cpy_r_r7.f0 = __tmp4994;
        PyObject *__tmp4995 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp4995);
        PyObject *__tmp4996;
        if (PyUnicode_Check(__tmp4995))
            __tmp4996 = __tmp4995;
        else {
            __tmp4996 = NULL;
        }
        if (__tmp4996 != NULL) goto __LL4997;
        if (__tmp4995 == Py_None)
            __tmp4996 = __tmp4995;
        else {
            __tmp4996 = NULL;
        }
        if (__tmp4996 != NULL) goto __LL4997;
        CPy_TypeError("str or None", __tmp4995); 
        __tmp4996 = NULL;
__LL4997: ;
        cpy_r_r7.f1 = __tmp4996;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import_from", 175, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_as_id = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_as_id != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL15;
    CPy_INCREF(cpy_r_as_id);
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r12 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import_from", 175, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) {
        goto CPyL17;
    } else
        goto CPyL15;
CPyL6: ;
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r14 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import_from", 176, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL14;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = cpy_r_id;
CPyL9: ;
    cpy_r_r16 = CPyDef_renaming___VariableRenameVisitor___record_assignment(cpy_r_self, cpy_r_r15, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import_from", 176, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL1;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_as_id);
    goto CPyL8;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_as_id);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_id);
    goto CPyL6;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___ImportFrom))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_import_from(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from", 174, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
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
    PyObject *cpy_r_lvalue;
    char cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_assignment_stmt", 179, CPyStatic_renaming___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
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
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_assignment_stmt", 180, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_lvalue = cpy_r_r9;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_lvalue, cpy_r_r10);
    CPy_DECREF(cpy_r_lvalue);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_assignment_stmt", 181, CPyStatic_renaming___globals);
        goto CPyL10;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL9: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssignmentStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_assignment_stmt", 178, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_assignment_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_assignment_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_i;
    char cpy_r_r7;
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
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_guard;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    cpy_r_r0 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_subject;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 184, CPyStatic_renaming___globals);
        goto CPyL45;
    } else
        goto CPyL46;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_patterns;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = 0;
    cpy_r_i = cpy_r_r6;
CPyL2: ;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r7) goto CPyL47;
    cpy_r_r8 = CPyStatics[4662]; /* 'enter_block' */
    PyObject *cpy_r_r9[1] = {cpy_r_self};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    cpy_r_r12 = PyObject_Type(cpy_r_r11);
    cpy_r_r13 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL49;
    }
    cpy_r_r15 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r11};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL50;
    } else
        goto CPyL51;
CPyL7: ;
    cpy_r_r20 = 1;
    cpy_r_r21 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_patterns;
    cpy_r_r22 = CPyList_GetItem(cpy_r_r21, cpy_r_i);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 187, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_patterns___Pattern)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_match_stmt", 187, CPyStatic_renaming___globals, "mypy.patterns.Pattern", cpy_r_r22);
        goto CPyL52;
    }
    cpy_r_r24 = CPY_GET_METHOD_TRAIT(cpy_r_r23, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r23, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 187, CPyStatic_renaming___globals);
        goto CPyL52;
    } else
        goto CPyL53;
CPyL11: ;
    cpy_r_r25 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_guards;
    cpy_r_r26 = CPyList_GetItem(cpy_r_r25, cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 188, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    if (PyObject_TypeCheck(cpy_r_r26, CPyType_nodes___Expression))
        cpy_r_r27 = cpy_r_r26;
    else {
        cpy_r_r27 = NULL;
    }
    if (cpy_r_r27 != NULL) goto __LL4998;
    if (cpy_r_r26 == Py_None)
        cpy_r_r27 = cpy_r_r26;
    else {
        cpy_r_r27 = NULL;
    }
    if (cpy_r_r27 != NULL) goto __LL4998;
    CPy_TypeErrorTraceback("mypy/renaming.py", "visit_match_stmt", 188, CPyStatic_renaming___globals, "mypy.nodes.Expression or None", cpy_r_r26);
    goto CPyL52;
__LL4998: ;
    cpy_r_guard = cpy_r_r27;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_guard != cpy_r_r28;
    if (!cpy_r_r29) goto CPyL54;
    if (likely(cpy_r_guard != Py_None))
        cpy_r_r30 = cpy_r_guard;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_match_stmt", 190, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_guard);
        goto CPyL52;
    }
    cpy_r_r31 = CPY_GET_METHOD_TRAIT(cpy_r_r30, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r30, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 190, CPyStatic_renaming___globals);
        goto CPyL52;
    } else
        goto CPyL55;
CPyL16: ;
    cpy_r_r32 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_bodies;
    cpy_r_r33 = CPyList_GetItemBorrow(cpy_r_r32, cpy_r_i);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 192, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___Block))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_match_stmt", 192, CPyStatic_renaming___globals, "mypy.nodes.Block", cpy_r_r33);
        goto CPyL52;
    }
    cpy_r_r35 = ((mypy___nodes___BlockObject *)cpy_r_r34)->_body;
    CPy_INCREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r36 = 0;
CPyL19: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL56;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r36);
    if (likely(PyObject_TypeCheck(cpy_r_r41, CPyType_nodes___Statement)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_match_stmt", 192, CPyStatic_renaming___globals, "mypy.nodes.Statement", cpy_r_r41);
        goto CPyL57;
    }
    cpy_r_stmt = cpy_r_r42;
    cpy_r_r43 = CPY_GET_METHOD_TRAIT(cpy_r_stmt, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_stmt, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 193, CPyStatic_renaming___globals);
        goto CPyL57;
    } else
        goto CPyL58;
CPyL22: ;
    cpy_r_r44 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r44;
    goto CPyL19;
CPyL23: ;
    cpy_r_r45 = CPy_CatchError();
    cpy_r_r20 = 0;
    cpy_r_r46 = CPy_GetExcInfo();
    cpy_r_r47 = cpy_r_r46.f0;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = cpy_r_r46.f1;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = cpy_r_r46.f2;
    CPy_INCREF(cpy_r_r49);
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    PyObject *cpy_r_r50[4] = {cpy_r_r11, cpy_r_r47, cpy_r_r48, cpy_r_r49};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r51, 4, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL59;
    }
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    cpy_r_r53 = PyObject_IsTrue(cpy_r_r52);
    CPy_DecRef(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    cpy_r_r55 = cpy_r_r53;
    if (cpy_r_r55) goto CPyL28;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL60;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    goto CPyL31;
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    cpy_r_r56 = CPy_KeepPropagating();
    if (!cpy_r_r56) {
        goto CPyL32;
    } else
        goto CPyL61;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    tuple_T3OOO __tmp4999 = { NULL, NULL, NULL };
    cpy_r_r57 = __tmp4999;
    cpy_r_r58 = cpy_r_r57;
    goto CPyL33;
CPyL32: ;
    cpy_r_r59 = CPy_CatchError();
    cpy_r_r58 = cpy_r_r59;
CPyL33: ;
    if (!cpy_r_r20) goto CPyL62;
    cpy_r_r60 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r61[4] = {cpy_r_r11, cpy_r_r60, cpy_r_r60, cpy_r_r60};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r62, 4, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 186, CPyStatic_renaming___globals);
        goto CPyL63;
    } else
        goto CPyL64;
CPyL35: ;
    CPy_DECREF(cpy_r_r11);
CPyL36: ;
    if (cpy_r_r58.f0 == NULL) goto CPyL43;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL65;
CPyL38: ;
    CPy_Unreachable();
CPyL39: ;
    if (cpy_r_r58.f0 == NULL) goto CPyL41;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_XDECREF(cpy_r_r58.f0);
    CPy_XDECREF(cpy_r_r58.f1);
    CPy_XDECREF(cpy_r_r58.f2);
CPyL41: ;
    cpy_r_r64 = CPy_KeepPropagating();
    if (!cpy_r_r64) goto CPyL45;
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r65 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r65;
    cpy_r_i = cpy_r_r65;
    goto CPyL2;
CPyL44: ;
    return 1;
CPyL45: ;
    cpy_r_r66 = 2;
    return cpy_r_r66;
CPyL46: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL47: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL44;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL45;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL45;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL45;
CPyL51: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL7;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL23;
CPyL53: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL11;
CPyL54: ;
    CPy_DECREF(cpy_r_guard);
    goto CPyL16;
CPyL55: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL16;
CPyL56: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL31;
CPyL57: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL23;
CPyL58: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL22;
CPyL59: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    goto CPyL29;
CPyL60: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    goto CPyL27;
CPyL61: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL30;
CPyL62: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    goto CPyL36;
CPyL63: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL39;
CPyL64: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL35;
CPyL65: ;
    CPy_XDECREF(cpy_r_r58.f0);
    CPy_XDECREF(cpy_r_r58.f1);
    CPy_XDECREF(cpy_r_r58.f2);
    goto CPyL38;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___MatchStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt", 183, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_match_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_capture_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___patterns___AsPatternObject *)cpy_r_p)->_name;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypy___patterns___AsPatternObject *)cpy_r_p)->_name;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_capture_pattern", 197, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_r3);
        goto CPyL4;
    }
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_capture_pattern", 197, CPyStatic_renaming___globals);
        goto CPyL4;
    }
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_capture_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_capture_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___AsPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_p); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_capture_pattern(arg_self, arg_p);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_capture_pattern", 195, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, char cpy_r_is_nested) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_name;
    char cpy_r_r6;
    char cpy_r_is_new;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
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
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_item;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    if (cpy_r_is_nested != 2) goto CPyL2;
    cpy_r_is_nested = 0;
CPyL2: ;
    cpy_r_r0 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r4 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 207, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_r4)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_name = cpy_r_r5;
    cpy_r_r6 = CPyDef_renaming___VariableRenameVisitor___record_assignment(cpy_r_self, cpy_r_name, 1);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 208, CPyStatic_renaming___globals);
        goto CPyL40;
    }
    cpy_r_is_new = cpy_r_r6;
    if (!cpy_r_is_new) goto CPyL8;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r7 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 210, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r8 = CPyDef_renaming___VariableRenameVisitor___handle_def(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 210, CPyStatic_renaming___globals);
        goto CPyL40;
    } else
        goto CPyL10;
CPyL8: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r9 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 212, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r10 = CPyDef_renaming___VariableRenameVisitor___handle_refine(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 212, CPyStatic_renaming___globals);
        goto CPyL40;
    }
CPyL10: ;
    if (!cpy_r_is_nested) goto CPyL39;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r11 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 216, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r12 = CPyDef_renaming___VariableRenameVisitor___handle_ref(cpy_r_self, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 216, CPyStatic_renaming___globals);
        goto CPyL40;
    } else
        goto CPyL39;
CPyL13: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL16;
CPyL15: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL16: ;
    if (!cpy_r_r17) goto CPyL28;
    CPy_INCREF(cpy_r_lvalue);
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r22 = cpy_r_lvalue;
    else {
        cpy_r_r22 = NULL;
    }
    if (cpy_r_r22 != NULL) goto __LL5000;
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r22 = cpy_r_lvalue;
    else {
        cpy_r_r22 = NULL;
    }
    if (cpy_r_r22 != NULL) goto __LL5000;
    CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 218, CPyStatic_renaming___globals, "union[mypy.nodes.ListExpr, mypy.nodes.TupleExpr]", cpy_r_lvalue);
    goto CPyL40;
__LL5000: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___ListExpr))
        cpy_r_r27 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 218, CPyStatic_renaming___globals, "mypy.nodes.ListExpr", cpy_r_r22);
        goto CPyL40;
    }
    cpy_r_r28 = ((mypy___nodes___ListExprObject *)cpy_r_r27)->_items;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28;
    goto CPyL23;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___TupleExpr))
        cpy_r_r30 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 218, CPyStatic_renaming___globals, "mypy.nodes.TupleExpr", cpy_r_r22);
        goto CPyL40;
    }
    cpy_r_r31 = ((mypy___nodes___TupleExprObject *)cpy_r_r30)->_items;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r29 = cpy_r_r31;
CPyL23: ;
    cpy_r_r32 = 0;
CPyL24: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r35;
    if (!cpy_r_r36) goto CPyL41;
    cpy_r_r37 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r32);
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_nodes___Expression)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 218, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_r37);
        goto CPyL42;
    }
    cpy_r_item = cpy_r_r38;
    cpy_r_r39 = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_item, 1);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 219, CPyStatic_renaming___globals);
        goto CPyL42;
    }
    cpy_r_r40 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r40;
    goto CPyL24;
CPyL28: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r45 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 221, CPyStatic_renaming___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r46 = ((mypy___nodes___MemberExprObject *)cpy_r_r45)->_expr;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPY_GET_METHOD_TRAIT(cpy_r_r46, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r46, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 221, CPyStatic_renaming___globals);
        goto CPyL40;
    } else
        goto CPyL43;
CPyL31: ;
    cpy_r_r48 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (!cpy_r_r51) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r52 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 223, CPyStatic_renaming___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r53 = ((mypy___nodes___IndexExprObject *)cpy_r_r52)->_base;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPY_GET_METHOD_TRAIT(cpy_r_r53, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r53, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 223, CPyStatic_renaming___globals);
        goto CPyL40;
    } else
        goto CPyL44;
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r55 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 224, CPyStatic_renaming___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r56 = ((mypy___nodes___IndexExprObject *)cpy_r_r55)->_index;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPY_GET_METHOD_TRAIT(cpy_r_r56, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r56, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 224, CPyStatic_renaming___globals);
        goto CPyL40;
    } else
        goto CPyL45;
CPyL36: ;
    cpy_r_r58 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    if (!cpy_r_r61) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___StarExpr))
        cpy_r_r62 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 228, CPyStatic_renaming___globals, "mypy.nodes.StarExpr", cpy_r_lvalue);
        goto CPyL40;
    }
    cpy_r_r63 = ((mypy___nodes___StarExprObject *)cpy_r_r62)->_expr;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_r63, cpy_r_is_nested);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 228, CPyStatic_renaming___globals);
        goto CPyL40;
    }
CPyL39: ;
    return 1;
CPyL40: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
CPyL41: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL39;
CPyL44: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL34;
CPyL45: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL39;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___analyze_lvalue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "is_nested", 0};
    static CPyArg_Parser parser = {"O|O:analyze_lvalue", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_is_nested = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalue, &obj_is_nested)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_lvalue); 
        goto fail;
    }
    char arg_is_nested;
    if (obj_is_nested == NULL) {
        arg_is_nested = 2;
    } else if (unlikely(!PyBool_Check(obj_is_nested))) {
        CPy_TypeError("bool", obj_is_nested); goto fail;
    } else
        arg_is_nested = obj_is_nested == Py_True;
    char retval = CPyDef_renaming___VariableRenameVisitor___analyze_lvalue(arg_self, arg_lvalue, arg_is_nested);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 199, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___handle_ref(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 231, CPyStatic_renaming___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___visit_name_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 230, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___VariableRenameVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___handle_arg(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_arg", 237, CPyStatic_renaming___globals);
        goto CPyL11;
    }
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_arg", 237, CPyStatic_renaming___globals);
        goto CPyL12;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_arg", "VariableRenameVisitor", "refs", 237, CPyStatic_renaming___globals);
        goto CPyL13;
    }
CPyL3: ;
    cpy_r_r5 = CPyList_GetItemShort(cpy_r_r4, -2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_arg", 237, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    if (likely(PyDict_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_arg", 237, CPyStatic_renaming___globals, "dict", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_r7 = CPyDict_SetItem(cpy_r_r6, cpy_r_name, cpy_r_r1);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_arg", 237, CPyStatic_renaming___globals);
        goto CPyL11;
    }
    cpy_r_r9 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_arg", "VariableRenameVisitor", "num_reads", 238, CPyStatic_renaming___globals);
        goto CPyL11;
    }
CPyL7: ;
    cpy_r_r10 = CPyList_GetItemShort(cpy_r_r9, -2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_arg", 238, CPyStatic_renaming___globals);
        goto CPyL11;
    }
    if (likely(PyDict_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_arg", 238, CPyStatic_renaming___globals, "dict", cpy_r_r10);
        goto CPyL11;
    }
    cpy_r_r12 = CPyStatics[9015]; /* 0 */
    cpy_r_r13 = CPyDict_SetItem(cpy_r_r11, cpy_r_name, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_arg", 238, CPyStatic_renaming___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___handle_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:handle_arg", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___handle_arg(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "handle_arg", 235, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___handle_def(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_def", "VariableRenameVisitor", "refs", 243, CPyStatic_renaming___globals);
        goto CPyL13;
    }
CPyL1: ;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_def", 243, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_def", 243, CPyStatic_renaming___globals, "dict", cpy_r_r2);
        goto CPyL13;
    }
    cpy_r_r4 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r3, cpy_r_name, 1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_def", 243, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_def", 243, CPyStatic_renaming___globals, "list", cpy_r_r4);
        goto CPyL13;
    }
    cpy_r_names = cpy_r_r5;
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_def", 244, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_expr);
    *(PyObject * *)cpy_r_r8 = cpy_r_expr;
    cpy_r_r9 = PyList_Append(cpy_r_names, cpy_r_r6);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_def", 244, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    cpy_r_r11 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_def", "VariableRenameVisitor", "num_reads", 245, CPyStatic_renaming___globals);
        goto CPyL13;
    }
CPyL8: ;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, -2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_def", 245, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    if (likely(PyDict_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_def", 245, CPyStatic_renaming___globals, "dict", cpy_r_r12);
        goto CPyL13;
    }
    cpy_r_r14 = CPyStatics[9015]; /* 0 */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r13, cpy_r_name, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_name);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_def", 245, CPyStatic_renaming___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL13: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_names);
    goto CPyL12;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___handle_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:handle_def", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___handle_def(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "handle_def", 240, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___handle_refine(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_names;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_refine", "VariableRenameVisitor", "refs", 250, CPyStatic_renaming___globals);
        goto CPyL18;
    }
CPyL1: ;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 250, CPyStatic_renaming___globals);
        goto CPyL18;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_refine", 250, CPyStatic_renaming___globals, "dict", cpy_r_r2);
        goto CPyL18;
    }
    cpy_r_r4 = PyDict_Contains(cpy_r_r3, cpy_r_name);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 250, CPyStatic_renaming___globals);
        goto CPyL18;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL19;
    cpy_r_r7 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_refine", "VariableRenameVisitor", "refs", 251, CPyStatic_renaming___globals);
        goto CPyL18;
    }
CPyL6: ;
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_r7, -2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 251, CPyStatic_renaming___globals);
        goto CPyL18;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_refine", 251, CPyStatic_renaming___globals, "dict", cpy_r_r8);
        goto CPyL18;
    }
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 251, CPyStatic_renaming___globals);
        goto CPyL17;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_refine", 251, CPyStatic_renaming___globals, "list", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_names = cpy_r_r11;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL13;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 253, CPyStatic_renaming___globals);
        goto CPyL20;
    }
    cpy_r_r17 = PyList_Append(cpy_r_names, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 253, CPyStatic_renaming___globals);
        goto CPyL20;
    }
CPyL13: ;
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_names, -2);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 254, CPyStatic_renaming___globals);
        goto CPyL17;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_refine", 254, CPyStatic_renaming___globals, "list", cpy_r_r19);
        goto CPyL17;
    }
    cpy_r_r21 = PyList_Append(cpy_r_r20, cpy_r_expr);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_refine", 254, CPyStatic_renaming___globals);
        goto CPyL17;
    }
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL18: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_names);
    goto CPyL17;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___handle_refine(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:handle_refine", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___handle_refine(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "handle_refine", 247, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___handle_ref(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_names;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_num_reads;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_ref", "VariableRenameVisitor", "refs", 259, CPyStatic_renaming___globals);
        goto CPyL24;
    }
CPyL1: ;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 259, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_ref", 259, CPyStatic_renaming___globals, "dict", cpy_r_r2);
        goto CPyL24;
    }
    cpy_r_r4 = PyDict_Contains(cpy_r_r3, cpy_r_name);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 259, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL16;
    cpy_r_r7 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_ref", "VariableRenameVisitor", "refs", 260, CPyStatic_renaming___globals);
        goto CPyL24;
    }
CPyL6: ;
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_r7, -2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 260, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_ref", 260, CPyStatic_renaming___globals, "dict", cpy_r_r8);
        goto CPyL24;
    }
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 260, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_ref", 260, CPyStatic_renaming___globals, "list", cpy_r_r10);
        goto CPyL24;
    }
    cpy_r_names = cpy_r_r11;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL13;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 262, CPyStatic_renaming___globals);
        goto CPyL25;
    }
    cpy_r_r17 = PyList_Append(cpy_r_names, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 262, CPyStatic_renaming___globals);
        goto CPyL25;
    }
CPyL13: ;
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_names, -2);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 263, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_ref", 263, CPyStatic_renaming___globals, "list", cpy_r_r19);
        goto CPyL24;
    }
    cpy_r_r21 = PyList_Append(cpy_r_r20, cpy_r_expr);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 263, CPyStatic_renaming___globals);
        goto CPyL24;
    }
CPyL16: ;
    cpy_r_r23 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "handle_ref", "VariableRenameVisitor", "num_reads", 264, CPyStatic_renaming___globals);
        goto CPyL24;
    }
CPyL17: ;
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, -2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 264, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (likely(PyDict_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "handle_ref", 264, CPyStatic_renaming___globals, "dict", cpy_r_r24);
        goto CPyL24;
    }
    cpy_r_num_reads = cpy_r_r25;
    cpy_r_r26 = CPyStatics[9015]; /* 0 */
    cpy_r_r27 = CPyDict_Get(cpy_r_num_reads, cpy_r_name, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 265, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    if (likely(PyLong_Check(cpy_r_r27)))
        cpy_r_r28 = CPyTagged_FromObject(cpy_r_r27);
    else {
        CPy_TypeError("int", cpy_r_r27); cpy_r_r28 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 265, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    cpy_r_r29 = CPyTagged_Add(cpy_r_r28, 2);
    CPyTagged_DECREF(cpy_r_r28);
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r31 = CPyDict_SetItem(cpy_r_num_reads, cpy_r_name, cpy_r_r30);
    CPy_DECREF(cpy_r_num_reads);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/renaming.py", "handle_ref", 265, CPyStatic_renaming___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL24: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_names);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_num_reads);
    goto CPyL23;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___handle_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:handle_ref", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___handle_ref(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "handle_ref", 256, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___flush_refs(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_is_func;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T4CIOO cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_name;
    PyObject *cpy_r_refs;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_to_rename;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_item;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_scope_kinds;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "flush_refs", "VariableRenameVisitor", "scope_kinds", 272, CPyStatic_renaming___globals);
        goto CPyL32;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShortBorrow(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 272, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    if (likely(PyLong_Check(cpy_r_r1)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_r1);
    else {
        CPy_TypeError("int", cpy_r_r1); cpy_r_r2 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 272, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    cpy_r_r3 = cpy_r_r2 & 1;
    cpy_r_r4 = cpy_r_r3 == 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r2 == 2;
    CPyTagged_DECREF(cpy_r_r2);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r7 = CPyTagged_IsEq_(cpy_r_r2, 2);
    CPyTagged_DECREF(cpy_r_r2);
    cpy_r_r6 = cpy_r_r7;
CPyL6: ;
    cpy_r_is_func = cpy_r_r6;
    cpy_r_r8 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "flush_refs", "VariableRenameVisitor", "refs", 273, CPyStatic_renaming___globals);
        goto CPyL32;
    }
CPyL7: ;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals, "dict", cpy_r_r9);
        goto CPyL32;
    }
    cpy_r_r11 = 0;
    cpy_r_r12 = PyDict_Size(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = CPyDict_GetItemsIter(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals);
        goto CPyL33;
    }
CPyL10: ;
    cpy_r_r15 = CPyDict_NextItem(cpy_r_r14, cpy_r_r11);
    cpy_r_r16 = cpy_r_r15.f1;
    cpy_r_r11 = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f0;
    if (!cpy_r_r17) goto CPyL34;
    cpy_r_r18 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r15.f3;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r15.f3);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r20 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals, "str", cpy_r_r18);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r21 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals, "list", cpy_r_r19);
        goto CPyL36;
    }
    cpy_r_name = cpy_r_r20;
    CPy_DECREF(cpy_r_name);
    cpy_r_refs = cpy_r_r21;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_refs)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 == 2;
    if (cpy_r_r25) goto CPyL37;
    if (!cpy_r_is_func) goto CPyL18;
    cpy_r_r26 = CPyList_GetSlice(cpy_r_refs, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_refs);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 280, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 280, CPyStatic_renaming___globals, "list", cpy_r_r26);
        goto CPyL38;
    }
    cpy_r_to_rename = cpy_r_r27;
    goto CPyL21;
CPyL18: ;
    cpy_r_r28 = CPyList_GetSlice(cpy_r_refs, 0, -2);
    CPy_DECREF(cpy_r_refs);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 284, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 284, CPyStatic_renaming___globals, "list", cpy_r_r28);
        goto CPyL38;
    }
    cpy_r_to_rename = cpy_r_r29;
CPyL21: ;
    cpy_r_r30 = 0;
    cpy_r_i = 0;
    cpy_r_r31 = 0;
CPyL22: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_to_rename)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL39;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_to_rename, cpy_r_r31);
    if (likely(PyList_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 285, CPyStatic_renaming___globals, "list", cpy_r_r36);
        goto CPyL40;
    }
    cpy_r_item = cpy_r_r37;
    cpy_r_r38 = CPyDef_renaming___rename_refs(cpy_r_item, cpy_r_i);
    CPy_DECREF(cpy_r_item);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 286, CPyStatic_renaming___globals);
        goto CPyL41;
    }
    cpy_r_r39 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r39;
    cpy_r_i = cpy_r_r39;
    cpy_r_r40 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r40;
    goto CPyL22;
CPyL26: ;
    cpy_r_r41 = CPyDict_CheckSize(cpy_r_r10, cpy_r_r13);
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals);
        goto CPyL38;
    } else
        goto CPyL10;
CPyL27: ;
    cpy_r_r42 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 273, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    cpy_r_r43 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "flush_refs", "VariableRenameVisitor", "refs", 287, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r43);
CPyL29: ;
    cpy_r_r44 = CPyList_PopLast(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 287, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    if (likely(PyDict_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeError("dict", cpy_r_r44); 
        cpy_r_r45 = NULL;
    }
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 287, CPyStatic_renaming___globals);
        goto CPyL32;
    } else
        goto CPyL42;
CPyL31: ;
    return 1;
CPyL32: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL33: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL32;
CPyL34: ;
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r15.f3);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r19);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    goto CPyL32;
CPyL37: ;
    CPy_DECREF(cpy_r_refs);
    goto CPyL26;
CPyL38: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    goto CPyL32;
CPyL39: ;
    CPy_DECREF(cpy_r_to_rename);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL26;
CPyL40: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_to_rename);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL32;
CPyL41: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_to_rename);
    goto CPyL32;
CPyL42: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL31;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___flush_refs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush_refs", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___flush_refs(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "flush_refs", 267, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___clear(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "clear", 292, CPyStatic_renaming___globals);
        goto CPyL5;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "clear", 292, CPyStatic_renaming___globals);
        goto CPyL5;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "clear", 293, CPyStatic_renaming___globals);
        goto CPyL5;
    }
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks != NULL) {
        CPy_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "clear", 293, CPyStatic_renaming___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":clear", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___clear(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "clear", 291, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    tuple_T3OOO cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    int64_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = ((mypy___renaming___enter_block_VariableRenameVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_gen", "__mypyc_env__", 296, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "__mypyc_next_label__", 296, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL41;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL53;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 297, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_block_id;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "VariableRenameVisitor", "block_id", 297, CPyStatic_renaming___globals);
        goto CPyL54;
    }
CPyL7: ;
    cpy_r_r6 = CPyTagged_Add(cpy_r_r5, 2);
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_block_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_block_id);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_block_id = cpy_r_r6;
    cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 297, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    cpy_r_r8 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 298, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    cpy_r_r9 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r8)->_blocks;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'blocks' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 298, CPyStatic_renaming___globals);
        goto CPyL52;
    }
CPyL10: ;
    cpy_r_r10 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 298, CPyStatic_renaming___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r10)->_block_id;
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'block_id' of 'VariableRenameVisitor' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r11);
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 298, CPyStatic_renaming___globals);
        goto CPyL55;
    }
CPyL12: ;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r11);
    cpy_r_r13 = PyList_Append(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 298, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    cpy_r_r15 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 299, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r15);
CPyL14: ;
    cpy_r_r16 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_loop_depth;
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'loop_depth' of 'VariableRenameVisitor' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r16);
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 299, CPyStatic_renaming___globals);
        goto CPyL52;
    }
CPyL15: ;
    cpy_r_r17 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 299, CPyStatic_renaming___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r17);
CPyL16: ;
    cpy_r_r18 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r17)->_block_loop_depth;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'block_loop_depth' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 299, CPyStatic_renaming___globals);
        goto CPyL56;
    }
CPyL17: ;
    cpy_r_r19 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 299, CPyStatic_renaming___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r19);
CPyL18: ;
    cpy_r_r20 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r19)->_block_id;
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'block_id' of 'VariableRenameVisitor' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r20);
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 299, CPyStatic_renaming___globals);
        goto CPyL57;
    }
CPyL19: ;
    cpy_r_r21 = CPyTagged_StealAsObject(cpy_r_r20);
    cpy_r_r22 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r18, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 299, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    cpy_r_r25 = Py_None;
    if (((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 301, CPyStatic_renaming___globals);
        goto CPyL26;
    } else
        goto CPyL58;
CPyL21: ;
    CPy_INCREF(cpy_r_r25);
    return cpy_r_r25;
CPyL22: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_type != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL25;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 301, CPyStatic_renaming___globals);
        goto CPyL26;
    } else
        goto CPyL59;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    tuple_T3OOO __tmp5001 = { NULL, NULL, NULL };
    cpy_r_r29 = __tmp5001;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL27;
CPyL26: ;
    cpy_r_r31 = CPy_CatchError();
    cpy_r_r30 = cpy_r_r31;
CPyL27: ;
    cpy_r_r32 = ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_block", "enter_block_VariableRenameVisitor_env", "self", 303, CPyStatic_renaming___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r32);
CPyL28: ;
    cpy_r_r33 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r32)->_blocks;
    if (unlikely(cpy_r_r33 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'blocks' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r33);
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 303, CPyStatic_renaming___globals);
        goto CPyL60;
    }
CPyL29: ;
    cpy_r_r34 = CPyList_PopLast(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 303, CPyStatic_renaming___globals);
        goto CPyL60;
    }
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 303, CPyStatic_renaming___globals);
        goto CPyL60;
    } else
        goto CPyL61;
CPyL31: ;
    if (cpy_r_r30.f0 == NULL) {
        goto CPyL38;
    } else
        goto CPyL62;
CPyL32: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL34;
    } else
        goto CPyL63;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    if (cpy_r_r30.f0 == NULL) goto CPyL36;
    CPy_RestoreExcInfo(cpy_r_r30);
    CPy_XDECREF(cpy_r_r30.f0);
    CPy_XDECREF(cpy_r_r30.f1);
    CPy_XDECREF(cpy_r_r30.f2);
CPyL36: ;
    cpy_r_r36 = CPy_KeepPropagating();
    if (!cpy_r_r36) goto CPyL51;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r37 = Py_None;
    if (((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r38 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    CPyGen_SetStopIterationValue(cpy_r_r37);
    if (!0) goto CPyL51;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r39 = cpy_r_r1 & 1;
    cpy_r_r40 = cpy_r_r39 == 0;
    if (!cpy_r_r40) goto CPyL43;
    cpy_r_r41 = cpy_r_r1 == 0;
    cpy_r_r42 = cpy_r_r41;
    goto CPyL44;
CPyL43: ;
    cpy_r_r43 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r42 = cpy_r_r43;
CPyL44: ;
    if (cpy_r_r42) goto CPyL64;
    cpy_r_r44 = cpy_r_r1 & 1;
    cpy_r_r45 = cpy_r_r44 == 0;
    if (!cpy_r_r45) goto CPyL47;
    cpy_r_r46 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r47 = cpy_r_r46;
    goto CPyL48;
CPyL47: ;
    cpy_r_r48 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r47 = cpy_r_r48;
CPyL48: ;
    if (cpy_r_r47) {
        goto CPyL22;
    } else
        goto CPyL65;
CPyL49: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL51;
CPyL53: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r16);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL51;
CPyL58: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL21;
CPyL59: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL24;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL34;
CPyL61: ;
    CPyTagged_DECREF(cpy_r_r35);
    goto CPyL31;
CPyL62: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL32;
CPyL63: ;
    CPy_XDECREF(cpy_r_r30.f0);
    CPy_XDECREF(cpy_r_r30.f1);
    CPy_XDECREF(cpy_r_r30.f2);
    goto CPyL33;
CPyL64: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL65: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL49;
}

PyObject *CPyPy_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_block_VariableRenameVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_block_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_block_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__next__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_block_VariableRenameVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_block_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_block_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_renaming___enter_block_VariableRenameVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "send", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_renaming___enter_block_VariableRenameVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_block_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_block_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__iter__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_renaming___enter_block_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_renaming___enter_block_VariableRenameVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_block_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_block_VariableRenameVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_renaming___enter_block_VariableRenameVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "throw", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_block_VariableRenameVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_renaming___enter_block_VariableRenameVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp5002 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5002);
    PyObject *__tmp5003 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5003);
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

PyObject *CPyPy_renaming___enter_block_VariableRenameVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_block_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_block_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_block_VariableRenameVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "close", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___enter_block(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_renaming___enter_block_VariableRenameVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_renaming___enter_block_VariableRenameVisitor_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___renaming___enter_block_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___renaming___enter_block_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___renaming___enter_block_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    if (((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_block_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
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

PyObject *CPyPy_renaming___VariableRenameVisitor___enter_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":enter_block", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___enter_block(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_block", 296, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    tuple_T3OOO cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = ((mypy___renaming___enter_try_VariableRenameVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_try", "enter_try_VariableRenameVisitor_gen", "__mypyc_env__", 306, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_try", "enter_try_VariableRenameVisitor_env", "__mypyc_next_label__", 306, CPyStatic_renaming___globals);
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
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_try", "enter_try_VariableRenameVisitor_env", "self", 307, CPyStatic_renaming___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_disallow_redef_depth;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_try", "VariableRenameVisitor", "disallow_redef_depth", 307, CPyStatic_renaming___globals);
        goto CPyL41;
    }
CPyL7: ;
    cpy_r_r6 = CPyTagged_Add(cpy_r_r5, 2);
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_disallow_redef_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_disallow_redef_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_disallow_redef_depth = cpy_r_r6;
    cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 307, CPyStatic_renaming___globals);
        goto CPyL39;
    }
    cpy_r_r8 = Py_None;
    if (((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 309, CPyStatic_renaming___globals);
        goto CPyL14;
    } else
        goto CPyL42;
CPyL9: ;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL10: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_type != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL13;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 309, CPyStatic_renaming___globals);
        goto CPyL14;
    } else
        goto CPyL43;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    tuple_T3OOO __tmp5004 = { NULL, NULL, NULL };
    cpy_r_r12 = __tmp5004;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL15;
CPyL14: ;
    cpy_r_r14 = CPy_CatchError();
    cpy_r_r13 = cpy_r_r14;
CPyL15: ;
    cpy_r_r15 = ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_try", "enter_try_VariableRenameVisitor_env", "self", 311, CPyStatic_renaming___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r15);
CPyL16: ;
    cpy_r_r16 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_disallow_redef_depth;
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_try", "VariableRenameVisitor", "disallow_redef_depth", 311, CPyStatic_renaming___globals);
        goto CPyL45;
    }
CPyL17: ;
    cpy_r_r17 = CPyTagged_Subtract(cpy_r_r16, 2);
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_disallow_redef_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_disallow_redef_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_disallow_redef_depth = cpy_r_r17;
    cpy_r_r18 = 1;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 311, CPyStatic_renaming___globals);
        goto CPyL44;
    }
    if (cpy_r_r13.f0 == NULL) {
        goto CPyL25;
    } else
        goto CPyL46;
CPyL19: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL21;
    } else
        goto CPyL47;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    if (cpy_r_r13.f0 == NULL) goto CPyL23;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
CPyL23: ;
    cpy_r_r19 = CPy_KeepPropagating();
    if (!cpy_r_r19) goto CPyL38;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r20 = Py_None;
    if (((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPyGen_SetStopIterationValue(cpy_r_r20);
    if (!0) goto CPyL38;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r22 = cpy_r_r1 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    if (!cpy_r_r23) goto CPyL30;
    cpy_r_r24 = cpy_r_r1 == 0;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL31;
CPyL30: ;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r25 = cpy_r_r26;
CPyL31: ;
    if (cpy_r_r25) goto CPyL48;
    cpy_r_r27 = cpy_r_r1 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    if (!cpy_r_r28) goto CPyL34;
    cpy_r_r29 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL35;
CPyL34: ;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r31;
CPyL35: ;
    if (cpy_r_r30) {
        goto CPyL10;
    } else
        goto CPyL49;
CPyL36: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL12;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL21;
CPyL46: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL47: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL20;
CPyL48: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL49: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
}

PyObject *CPyPy_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_try_VariableRenameVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_try_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_try_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__next__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_try_VariableRenameVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_try_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_try_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_renaming___enter_try_VariableRenameVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "send", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_renaming___enter_try_VariableRenameVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_try_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_try_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__iter__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_renaming___enter_try_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_renaming___enter_try_VariableRenameVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_try_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_try_VariableRenameVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_renaming___enter_try_VariableRenameVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "throw", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_try_VariableRenameVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_renaming___enter_try_VariableRenameVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp5005 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5005);
    PyObject *__tmp5006 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5006);
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

PyObject *CPyPy_renaming___enter_try_VariableRenameVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_try_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_try_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_try_VariableRenameVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "close", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___enter_try(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_renaming___enter_try_VariableRenameVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_renaming___enter_try_VariableRenameVisitor_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___renaming___enter_try_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___renaming___enter_try_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___renaming___enter_try_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    if (((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_try_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
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

PyObject *CPyPy_renaming___VariableRenameVisitor___enter_try(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":enter_try", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___enter_try(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_try", 306, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    tuple_T3OOO cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = ((mypy___renaming___enter_loop_VariableRenameVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_loop", "enter_loop_VariableRenameVisitor_gen", "__mypyc_env__", 314, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_loop", "enter_loop_VariableRenameVisitor_env", "__mypyc_next_label__", 314, CPyStatic_renaming___globals);
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
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_loop", "enter_loop_VariableRenameVisitor_env", "self", 315, CPyStatic_renaming___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_loop_depth;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_loop", "VariableRenameVisitor", "loop_depth", 315, CPyStatic_renaming___globals);
        goto CPyL41;
    }
CPyL7: ;
    cpy_r_r6 = CPyTagged_Add(cpy_r_r5, 2);
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_loop_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_loop_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_loop_depth = cpy_r_r6;
    cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 315, CPyStatic_renaming___globals);
        goto CPyL39;
    }
    cpy_r_r8 = Py_None;
    if (((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 317, CPyStatic_renaming___globals);
        goto CPyL14;
    } else
        goto CPyL42;
CPyL9: ;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL10: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_type != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL13;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 317, CPyStatic_renaming___globals);
        goto CPyL14;
    } else
        goto CPyL43;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    tuple_T3OOO __tmp5007 = { NULL, NULL, NULL };
    cpy_r_r12 = __tmp5007;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL15;
CPyL14: ;
    cpy_r_r14 = CPy_CatchError();
    cpy_r_r13 = cpy_r_r14;
CPyL15: ;
    cpy_r_r15 = ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_loop", "enter_loop_VariableRenameVisitor_env", "self", 319, CPyStatic_renaming___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r15);
CPyL16: ;
    cpy_r_r16 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_loop_depth;
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_loop", "VariableRenameVisitor", "loop_depth", 319, CPyStatic_renaming___globals);
        goto CPyL45;
    }
CPyL17: ;
    cpy_r_r17 = CPyTagged_Subtract(cpy_r_r16, 2);
    if (((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_loop_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_loop_depth);
    }
    ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r15)->_loop_depth = cpy_r_r17;
    cpy_r_r18 = 1;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 319, CPyStatic_renaming___globals);
        goto CPyL44;
    }
    if (cpy_r_r13.f0 == NULL) {
        goto CPyL25;
    } else
        goto CPyL46;
CPyL19: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL21;
    } else
        goto CPyL47;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    if (cpy_r_r13.f0 == NULL) goto CPyL23;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
CPyL23: ;
    cpy_r_r19 = CPy_KeepPropagating();
    if (!cpy_r_r19) goto CPyL38;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r20 = Py_None;
    if (((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPyGen_SetStopIterationValue(cpy_r_r20);
    if (!0) goto CPyL38;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r22 = cpy_r_r1 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    if (!cpy_r_r23) goto CPyL30;
    cpy_r_r24 = cpy_r_r1 == 0;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL31;
CPyL30: ;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r25 = cpy_r_r26;
CPyL31: ;
    if (cpy_r_r25) goto CPyL48;
    cpy_r_r27 = cpy_r_r1 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    if (!cpy_r_r28) goto CPyL34;
    cpy_r_r29 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL35;
CPyL34: ;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r31;
CPyL35: ;
    if (cpy_r_r30) {
        goto CPyL10;
    } else
        goto CPyL49;
CPyL36: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL12;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL21;
CPyL46: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL47: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL20;
CPyL48: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL49: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
}

PyObject *CPyPy_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_loop_VariableRenameVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_loop_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_loop_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__next__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_loop_VariableRenameVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_loop_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_loop_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "send", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_renaming___enter_loop_VariableRenameVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_loop_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_loop_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__iter__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_renaming___enter_loop_VariableRenameVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_loop_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_loop_VariableRenameVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "throw", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp5008 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5008);
    PyObject *__tmp5009 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5009);
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

PyObject *CPyPy_renaming___enter_loop_VariableRenameVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_loop_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_loop_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "close", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___enter_loop(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_renaming___enter_loop_VariableRenameVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_renaming___enter_loop_VariableRenameVisitor_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___renaming___enter_loop_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___renaming___enter_loop_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___renaming___enter_loop_VariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    if (((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_loop_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
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

PyObject *CPyPy_renaming___VariableRenameVisitor___enter_loop(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":enter_loop", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___enter_loop(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_loop", 314, CPyStatic_renaming___globals);
    return NULL;
}

CPyTagged CPyDef_renaming___VariableRenameVisitor___current_block(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    cpy_r_r0 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_blocks;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "current_block", "VariableRenameVisitor", "blocks", 322, CPyStatic_renaming___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "current_block", 322, CPyStatic_renaming___globals);
        goto CPyL4;
    }
    if (likely(PyLong_Check(cpy_r_r1)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_r1);
    else {
        CPy_TypeError("int", cpy_r_r1); cpy_r_r2 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "current_block", 322, CPyStatic_renaming___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = CPY_INT_TAG;
    return cpy_r_r3;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___current_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_block", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_renaming___VariableRenameVisitor___current_block(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "current_block", 321, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    tuple_T3OOO cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
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
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
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
    PyObject *cpy_r_r60;
    cpy_r_r0 = ((mypy___renaming___enter_scope_VariableRenameVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_gen", "__mypyc_env__", 325, CPyStatic_renaming___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "__mypyc_next_label__", 325, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL52;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL64;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 326, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r4)->_var_blocks;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'var_blocks' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 326, CPyStatic_renaming___globals);
        goto CPyL63;
    }
CPyL7: ;
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 326, CPyStatic_renaming___globals);
        goto CPyL65;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 326, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    cpy_r_r9 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 327, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r9)->_refs;
    if (unlikely(cpy_r_r10 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'refs' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r10);
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 327, CPyStatic_renaming___globals);
        goto CPyL63;
    }
CPyL11: ;
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 327, CPyStatic_renaming___globals);
        goto CPyL66;
    }
    cpy_r_r12 = PyList_Append(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 327, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    cpy_r_r14 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 328, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r14);
CPyL14: ;
    cpy_r_r15 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r14)->_num_reads;
    if (unlikely(cpy_r_r15 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'num_reads' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r15);
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 328, CPyStatic_renaming___globals);
        goto CPyL63;
    }
CPyL15: ;
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 328, CPyStatic_renaming___globals);
        goto CPyL67;
    }
    cpy_r_r17 = PyList_Append(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 328, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    cpy_r_r19 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 329, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r19);
CPyL18: ;
    cpy_r_r20 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r19)->_scope_kinds;
    if (unlikely(cpy_r_r20 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'scope_kinds' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r20);
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 329, CPyStatic_renaming___globals);
        goto CPyL63;
    }
CPyL19: ;
    cpy_r_r21 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_kind;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "kind", 329, CPyStatic_renaming___globals);
        goto CPyL68;
    }
    CPyTagged_INCREF(cpy_r_r21);
CPyL20: ;
    cpy_r_r22 = CPyTagged_StealAsObject(cpy_r_r21);
    cpy_r_r23 = PyList_Append(cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 329, CPyStatic_renaming___globals);
        goto CPyL63;
    }
    cpy_r_r25 = Py_None;
    if (((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 331, CPyStatic_renaming___globals);
        goto CPyL27;
    } else
        goto CPyL69;
CPyL22: ;
    CPy_INCREF(cpy_r_r25);
    return cpy_r_r25;
CPyL23: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_type != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL26;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 331, CPyStatic_renaming___globals);
        goto CPyL27;
    } else
        goto CPyL70;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    tuple_T3OOO __tmp5010 = { NULL, NULL, NULL };
    cpy_r_r29 = __tmp5010;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL28;
CPyL27: ;
    cpy_r_r31 = CPy_CatchError();
    cpy_r_r30 = cpy_r_r31;
CPyL28: ;
    cpy_r_r32 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 333, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r32);
CPyL29: ;
    cpy_r_r33 = CPyDef_renaming___VariableRenameVisitor___flush_refs(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 333, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    cpy_r_r34 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 334, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r34);
CPyL31: ;
    cpy_r_r35 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r34)->_var_blocks;
    if (unlikely(cpy_r_r35 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'var_blocks' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r35);
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 334, CPyStatic_renaming___globals);
        goto CPyL71;
    }
CPyL32: ;
    cpy_r_r36 = CPyList_PopLast(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 334, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    if (likely(PyDict_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeError("dict", cpy_r_r36); 
        cpy_r_r37 = NULL;
    }
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 334, CPyStatic_renaming___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL34: ;
    cpy_r_r38 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 335, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r38);
CPyL35: ;
    cpy_r_r39 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r38)->_num_reads;
    if (unlikely(cpy_r_r39 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'num_reads' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r39);
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 335, CPyStatic_renaming___globals);
        goto CPyL71;
    }
CPyL36: ;
    cpy_r_r40 = CPyList_PopLast(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 335, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    if (likely(PyDict_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeError("dict", cpy_r_r40); 
        cpy_r_r41 = NULL;
    }
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 335, CPyStatic_renaming___globals);
        goto CPyL71;
    } else
        goto CPyL73;
CPyL38: ;
    cpy_r_r42 = ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_VariableRenameVisitor_env", "self", 336, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r42);
CPyL39: ;
    cpy_r_r43 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_r42)->_scope_kinds;
    if (unlikely(cpy_r_r43 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'scope_kinds' of 'VariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r43);
    }
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 336, CPyStatic_renaming___globals);
        goto CPyL71;
    }
CPyL40: ;
    cpy_r_r44 = CPyList_PopLast(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 336, CPyStatic_renaming___globals);
        goto CPyL71;
    }
    if (likely(PyLong_Check(cpy_r_r44)))
        cpy_r_r45 = CPyTagged_FromObject(cpy_r_r44);
    else {
        CPy_TypeError("int", cpy_r_r44); cpy_r_r45 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 336, CPyStatic_renaming___globals);
        goto CPyL71;
    } else
        goto CPyL74;
CPyL42: ;
    if (cpy_r_r30.f0 == NULL) {
        goto CPyL49;
    } else
        goto CPyL75;
CPyL43: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL45;
    } else
        goto CPyL76;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    if (cpy_r_r30.f0 == NULL) goto CPyL47;
    CPy_RestoreExcInfo(cpy_r_r30);
    CPy_XDECREF(cpy_r_r30.f0);
    CPy_XDECREF(cpy_r_r30.f1);
    CPy_XDECREF(cpy_r_r30.f2);
CPyL47: ;
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL62;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r47 = Py_None;
    if (((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r48 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL62;
    }
    CPyGen_SetStopIterationValue(cpy_r_r47);
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r49 = cpy_r_r1 & 1;
    cpy_r_r50 = cpy_r_r49 == 0;
    if (!cpy_r_r50) goto CPyL54;
    cpy_r_r51 = cpy_r_r1 == 0;
    cpy_r_r52 = cpy_r_r51;
    goto CPyL55;
CPyL54: ;
    cpy_r_r53 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r52 = cpy_r_r53;
CPyL55: ;
    if (cpy_r_r52) goto CPyL77;
    cpy_r_r54 = cpy_r_r1 & 1;
    cpy_r_r55 = cpy_r_r54 == 0;
    if (!cpy_r_r55) goto CPyL58;
    cpy_r_r56 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r57 = cpy_r_r56;
    goto CPyL59;
CPyL58: ;
    cpy_r_r58 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r57 = cpy_r_r58;
CPyL59: ;
    if (cpy_r_r57) {
        goto CPyL23;
    } else
        goto CPyL78;
CPyL60: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r60 = NULL;
    return cpy_r_r60;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL62;
CPyL64: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL62;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL62;
CPyL69: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL22;
CPyL70: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL25;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL72: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL34;
CPyL73: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL38;
CPyL74: ;
    CPyTagged_DECREF(cpy_r_r45);
    goto CPyL42;
CPyL75: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL43;
CPyL76: ;
    CPy_XDECREF(cpy_r_r30.f0);
    CPy_XDECREF(cpy_r_r30.f1);
    CPy_XDECREF(cpy_r_r30.f2);
    goto CPyL44;
CPyL77: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL78: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL60;
}

PyObject *CPyPy_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_scope_VariableRenameVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__next__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_scope_VariableRenameVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "send", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_renaming___enter_scope_VariableRenameVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__iter__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_renaming___enter_scope_VariableRenameVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_VariableRenameVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "throw", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp5011 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5011);
    PyObject *__tmp5012 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5012);
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

PyObject *CPyPy_renaming___enter_scope_VariableRenameVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_VariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_VariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "close", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___VariableRenameVisitor___enter_scope(PyObject *cpy_r_self, CPyTagged cpy_r_kind) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_renaming___enter_scope_VariableRenameVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    CPyTagged_INCREF(cpy_r_kind);
    if (((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_kind != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_kind);
    }
    ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->_kind = cpy_r_kind;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_renaming___enter_scope_VariableRenameVisitor_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___renaming___enter_scope_VariableRenameVisitor_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___renaming___enter_scope_VariableRenameVisitor_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___renaming___enter_scope_VariableRenameVisitor_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
        goto CPyL9;
    }
    if (((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_scope_VariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
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

PyObject *CPyPy_renaming___VariableRenameVisitor___enter_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"kind", 0};
    static CPyArg_Parser parser = {"O:enter_scope", kwlist, 0};
    PyObject *obj_kind;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_kind)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    CPyTagged arg_kind;
    if (likely(PyLong_Check(obj_kind)))
        arg_kind = CPyTagged_BorrowFromObject(obj_kind);
    else {
        CPy_TypeError("int", obj_kind); goto fail;
    }
    PyObject *retval = CPyDef_renaming___VariableRenameVisitor___enter_scope(arg_self, arg_kind);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_scope", 325, CPyStatic_renaming___globals);
    return NULL;
}

CPyTagged CPyDef_renaming___VariableRenameVisitor___is_nested(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    cpy_r_r0 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "is_nested", "VariableRenameVisitor", "var_blocks", 339, CPyStatic_renaming___globals);
        goto CPyL2;
    }
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)2;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5;
    return cpy_r_r6;
CPyL2: ;
    cpy_r_r7 = CPY_INT_TAG;
    return cpy_r_r7;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___is_nested(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_nested", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_renaming___VariableRenameVisitor___is_nested(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "is_nested", 338, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_var_blocks;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T3CIO cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", "VariableRenameVisitor", "var_blocks", 354, CPyStatic_renaming___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 354, CPyStatic_renaming___globals);
        goto CPyL10;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 354, CPyStatic_renaming___globals, "dict", cpy_r_r1);
        goto CPyL10;
    }
    cpy_r_var_blocks = cpy_r_r2;
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_var_blocks);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetKeysIter(cpy_r_var_blocks);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 355, CPyStatic_renaming___globals);
        goto CPyL11;
    }
CPyL4: ;
    cpy_r_r7 = CPyDict_NextKey(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r7.f2);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 355, CPyStatic_renaming___globals, "str", cpy_r_r10);
        goto CPyL13;
    }
    cpy_r_key = cpy_r_r11;
    cpy_r_r12 = CPyStatics[9017]; /* -1 */
    cpy_r_r13 = CPyDict_SetItem(cpy_r_var_blocks, cpy_r_key, cpy_r_r12);
    CPy_DECREF(cpy_r_key);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 356, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_var_blocks, cpy_r_r5);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 355, CPyStatic_renaming___globals);
        goto CPyL13;
    } else
        goto CPyL4;
CPyL8: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 355, CPyStatic_renaming___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL11: ;
    CPy_DecRef(cpy_r_var_blocks);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_var_blocks);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reject_redefinition_of_vars_in_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_scope(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 341, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_var_blocks;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T4CIOO cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_key;
    CPyTagged cpy_r_block;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", "VariableRenameVisitor", "var_blocks", 374, CPyStatic_renaming___globals);
        goto CPyL18;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 374, CPyStatic_renaming___globals);
        goto CPyL18;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 374, CPyStatic_renaming___globals, "dict", cpy_r_r1);
        goto CPyL18;
    }
    cpy_r_var_blocks = cpy_r_r2;
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_var_blocks);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetItemsIter(cpy_r_var_blocks);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 375, CPyStatic_renaming___globals);
        goto CPyL19;
    }
CPyL4: ;
    cpy_r_r7 = CPyDict_NextItem(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL20;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r7.f3;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 375, CPyStatic_renaming___globals, "str", cpy_r_r10);
        goto CPyL21;
    }
    if (likely(PyLong_Check(cpy_r_r11)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r11);
    else {
        CPy_TypeError("int", cpy_r_r11); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 375, CPyStatic_renaming___globals);
        goto CPyL22;
    }
    cpy_r_key = cpy_r_r12;
    cpy_r_block = cpy_r_r13;
    cpy_r_r14 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_block_loop_depth;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", "VariableRenameVisitor", "block_loop_depth", 376, CPyStatic_renaming___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r14);
CPyL8: ;
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_block);
    cpy_r_r16 = CPyDict_GetWithNone(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 376, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (PyLong_Check(cpy_r_r16))
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL5013;
    if (cpy_r_r16 == Py_None)
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL5013;
    CPy_TypeErrorTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 376, CPyStatic_renaming___globals, "int or None", cpy_r_r16);
    goto CPyL24;
__LL5013: ;
    cpy_r_r18 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_loop_depth;
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", "VariableRenameVisitor", "loop_depth", 376, CPyStatic_renaming___globals);
        goto CPyL25;
    }
    CPyTagged_INCREF(cpy_r_r18);
CPyL11: ;
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_r18);
    cpy_r_r20 = PyObject_RichCompare(cpy_r_r17, cpy_r_r19, 2);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 376, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 376, CPyStatic_renaming___globals);
        goto CPyL24;
    }
    if (!cpy_r_r21) goto CPyL26;
    cpy_r_r22 = CPyStatics[9017]; /* -1 */
    cpy_r_r23 = CPyDict_SetItem(cpy_r_var_blocks, cpy_r_key, cpy_r_r22);
    CPy_DECREF(cpy_r_key);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 377, CPyStatic_renaming___globals);
        goto CPyL27;
    }
CPyL15: ;
    cpy_r_r25 = CPyDict_CheckSize(cpy_r_var_blocks, cpy_r_r5);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 375, CPyStatic_renaming___globals);
        goto CPyL27;
    } else
        goto CPyL4;
CPyL16: ;
    cpy_r_r26 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 375, CPyStatic_renaming___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL19: ;
    CPy_DecRef(cpy_r_var_blocks);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_var_blocks);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_key);
    CPyTagged_DecRef(cpy_r_block);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_key);
    goto CPyL18;
CPyL25: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r17);
    goto CPyL18;
CPyL26: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL15;
CPyL27: ;
    CPy_DecRef(cpy_r_var_blocks);
    CPy_DecRef(cpy_r_r6);
    goto CPyL18;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reject_redefinition_of_vars_in_loop", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___VariableRenameVisitor___reject_redefinition_of_vars_in_loop(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_loop", 358, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___VariableRenameVisitor___record_assignment(PyObject *cpy_r_self, PyObject *cpy_r_name, char cpy_r_can_be_redefined) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_block;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_var_blocks;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_num_reads;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "record_assignment", "VariableRenameVisitor", "num_reads", 386, CPyStatic_renaming___globals);
        goto CPyL29;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 386, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "record_assignment", 386, CPyStatic_renaming___globals, "dict", cpy_r_r1);
        goto CPyL29;
    }
    cpy_r_r3 = CPyStatics[9017]; /* -1 */
    cpy_r_r4 = CPyDict_Get(cpy_r_r2, cpy_r_name, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 386, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 386, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    cpy_r_r6 = cpy_r_r5 == 0;
    CPyTagged_DECREF(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL7;
    return 0;
CPyL7: ;
    cpy_r_r7 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_disallow_redef_depth;
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "record_assignment", "VariableRenameVisitor", "disallow_redef_depth", 389, CPyStatic_renaming___globals);
        goto CPyL29;
    }
CPyL8: ;
    cpy_r_r8 = cpy_r_r7 & 1;
    cpy_r_r9 = cpy_r_r8 != 0;
    if (!cpy_r_r9) goto CPyL10;
    cpy_r_r10 = CPyTagged_IsLt_(0, cpy_r_r7);
    if (cpy_r_r10) {
        goto CPyL11;
    } else
        goto CPyL12;
CPyL10: ;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 > (Py_ssize_t)0;
    if (!cpy_r_r11) goto CPyL12;
CPyL11: ;
    cpy_r_can_be_redefined = 0;
CPyL12: ;
    cpy_r_r12 = CPyDef_renaming___VariableRenameVisitor___current_block(cpy_r_self);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 392, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    cpy_r_block = cpy_r_r12;
    cpy_r_r13 = ((mypy___renaming___VariableRenameVisitorObject *)cpy_r_self)->_var_blocks;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "record_assignment", "VariableRenameVisitor", "var_blocks", 393, CPyStatic_renaming___globals);
        goto CPyL30;
    }
CPyL14: ;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, -2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 393, CPyStatic_renaming___globals);
        goto CPyL30;
    }
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "record_assignment", 393, CPyStatic_renaming___globals, "dict", cpy_r_r14);
        goto CPyL30;
    }
    cpy_r_var_blocks = cpy_r_r15;
    cpy_r_r16 = PyDict_Contains(cpy_r_var_blocks, cpy_r_name);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 394, CPyStatic_renaming___globals);
        goto CPyL31;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    if (!cpy_r_r19) goto CPyL22;
    if (!cpy_r_can_be_redefined) goto CPyL32;
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_block);
    cpy_r_r21 = CPyDict_SetItem(cpy_r_var_blocks, cpy_r_name, cpy_r_r20);
    CPy_DECREF(cpy_r_var_blocks);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 399, CPyStatic_renaming___globals);
        goto CPyL29;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r23 = CPyStatics[9017]; /* -1 */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_var_blocks, cpy_r_name, cpy_r_r23);
    CPy_DECREF(cpy_r_var_blocks);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 402, CPyStatic_renaming___globals);
        goto CPyL29;
    }
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r26 = CPyDict_GetItem(cpy_r_var_blocks, cpy_r_name);
    CPy_DECREF(cpy_r_var_blocks);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 404, CPyStatic_renaming___globals);
        goto CPyL30;
    }
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "record_assignment", 404, CPyStatic_renaming___globals);
        goto CPyL30;
    }
    cpy_r_r28 = cpy_r_r27 & 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (!cpy_r_r29) goto CPyL26;
    cpy_r_r30 = CPyTagged_IsEq_(cpy_r_r27, cpy_r_block);
    CPyTagged_DECREF(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_block);
    if (cpy_r_r30) {
        goto CPyL27;
    } else
        goto CPyL28;
CPyL26: ;
    cpy_r_r31 = cpy_r_r27 == cpy_r_block;
    CPyTagged_DECREF(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_block);
    if (!cpy_r_r31) goto CPyL28;
CPyL27: ;
    return 1;
CPyL28: ;
    return 0;
CPyL29: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL30: ;
    CPyTagged_DecRef(cpy_r_block);
    goto CPyL29;
CPyL31: ;
    CPyTagged_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_var_blocks);
    goto CPyL29;
CPyL32: ;
    CPyTagged_DECREF(cpy_r_block);
    goto CPyL20;
}

PyObject *CPyPy_renaming___VariableRenameVisitor___record_assignment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "can_be_redefined", 0};
    static CPyArg_Parser parser = {"OO:record_assignment", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_can_be_redefined;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_can_be_redefined)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___VariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.VariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_can_be_redefined;
    if (unlikely(!PyBool_Check(obj_can_be_redefined))) {
        CPy_TypeError("bool", obj_can_be_redefined); goto fail;
    } else
        arg_can_be_redefined = obj_can_be_redefined == Py_True;
    char retval = CPyDef_renaming___VariableRenameVisitor___record_assignment(arg_self, arg_name, arg_can_be_redefined);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "record_assignment", 379, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 445, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    if (((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars != NULL) {
        CPy_DECREF(((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars);
    }
    ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 445, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 448, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    if (((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_skipped != NULL) {
        CPy_DECREF(((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_skipped);
    }
    ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_skipped = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 448, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 452, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    if (((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_refs != NULL) {
        CPy_DECREF(((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_refs);
    }
    ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_refs = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/renaming.py", "__init__", 452, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__init__", 442, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_file_node) {
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
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    cpy_r_r0 = CPyStatics[4661]; /* 'enter_scope' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL31;
    }
    cpy_r_r4 = PyObject_Type(cpy_r_r3);
    cpy_r_r5 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    cpy_r_r7 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r3};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL33;
    } else
        goto CPyL34;
CPyL4: ;
    cpy_r_r12 = 1;
    cpy_r_r13 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_defs;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL6: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL35;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Statement)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_mypy_file", 460, CPyStatic_renaming___globals, "mypy.nodes.Statement", cpy_r_r19);
        goto CPyL36;
    }
    cpy_r_d = cpy_r_r20;
    cpy_r_r21 = CPY_GET_METHOD_TRAIT(cpy_r_d, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_d, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 461, CPyStatic_renaming___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL9: ;
    cpy_r_r22 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r22;
    goto CPyL6;
CPyL10: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r12 = 0;
    cpy_r_r24 = CPy_GetExcInfo();
    cpy_r_r25 = cpy_r_r24.f0;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = cpy_r_r24.f1;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r24.f2;
    CPy_INCREF(cpy_r_r27);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    PyObject *cpy_r_r28[4] = {cpy_r_r3, cpy_r_r25, cpy_r_r26, cpy_r_r27};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r29, 4, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    cpy_r_r31 = PyObject_IsTrue(cpy_r_r30);
    CPy_DecRef(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL16;
    }
    cpy_r_r33 = cpy_r_r31;
    if (cpy_r_r33) goto CPyL15;
    CPy_Reraise();
    if (!0) {
        goto CPyL16;
    } else
        goto CPyL39;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL18;
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r34 = CPy_KeepPropagating();
    if (!cpy_r_r34) {
        goto CPyL19;
    } else
        goto CPyL40;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    tuple_T3OOO __tmp5014 = { NULL, NULL, NULL };
    cpy_r_r35 = __tmp5014;
    cpy_r_r36 = cpy_r_r35;
    goto CPyL20;
CPyL19: ;
    cpy_r_r37 = CPy_CatchError();
    cpy_r_r36 = cpy_r_r37;
CPyL20: ;
    if (!cpy_r_r12) goto CPyL41;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r39[4] = {cpy_r_r3, cpy_r_r38, cpy_r_r38, cpy_r_r38};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r40, 4, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 459, CPyStatic_renaming___globals);
        goto CPyL42;
    } else
        goto CPyL43;
CPyL22: ;
    CPy_DECREF(cpy_r_r3);
CPyL23: ;
    if (cpy_r_r36.f0 == NULL) goto CPyL30;
    CPy_Reraise();
    if (!0) {
        goto CPyL26;
    } else
        goto CPyL44;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    if (cpy_r_r36.f0 == NULL) goto CPyL28;
    CPy_RestoreExcInfo(cpy_r_r36);
    CPy_XDECREF(cpy_r_r36.f0);
    CPy_XDECREF(cpy_r_r36.f1);
    CPy_XDECREF(cpy_r_r36.f2);
CPyL28: ;
    cpy_r_r42 = CPy_KeepPropagating();
    if (!cpy_r_r42) goto CPyL31;
    CPy_Unreachable();
CPyL30: ;
    return 1;
CPyL31: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL35: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL18;
CPyL36: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL10;
CPyL37: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL9;
CPyL38: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL16;
CPyL39: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL14;
CPyL40: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL17;
CPyL41: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    goto CPyL23;
CPyL42: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL26;
CPyL43: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL22;
CPyL44: ;
    CPy_XDECREF(cpy_r_r36.f0);
    CPy_XDECREF(cpy_r_r36.f1);
    CPy_XDECREF(cpy_r_r36.f2);
    goto CPyL25;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file_node", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_file_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_file_node;
    if (likely(Py_TYPE(obj_file_node) == CPyType_nodes___MypyFile))
        arg_file_node = obj_file_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file_node); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file(arg_self, arg_file_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file", 454, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 464, CPyStatic_renaming___globals);
        goto CPyL35;
    }
    cpy_r_r1 = CPyStatics[4661]; /* 'enter_scope' */
    PyObject *cpy_r_r2[1] = {cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL35;
    }
    cpy_r_r5 = PyObject_Type(cpy_r_r4);
    cpy_r_r6 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL36;
    }
    cpy_r_r8 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r4};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL5: ;
    cpy_r_r13 = 1;
    cpy_r_r14 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arguments;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_func_def", "FuncDef", "arguments", 466, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r14);
CPyL7: ;
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL39;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___Argument))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_func_def", 466, CPyStatic_renaming___globals, "mypy.nodes.Argument", cpy_r_r20);
        goto CPyL40;
    }
    cpy_r_arg = cpy_r_r21;
    cpy_r_r22 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 467, CPyStatic_renaming___globals);
        goto CPyL41;
    }
CPyL11: ;
    CPy_DECREF(cpy_r_arg);
    cpy_r_r24 = CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 467, CPyStatic_renaming___globals);
        goto CPyL40;
    }
    cpy_r_r25 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r25;
    goto CPyL8;
CPyL13: ;
    cpy_r_r26 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_fdef);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 468, CPyStatic_renaming___globals);
    } else
        goto CPyL22;
CPyL14: ;
    cpy_r_r27 = CPy_CatchError();
    cpy_r_r13 = 0;
    cpy_r_r28 = CPy_GetExcInfo();
    cpy_r_r29 = cpy_r_r28.f0;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = cpy_r_r28.f1;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = cpy_r_r28.f2;
    CPy_INCREF(cpy_r_r31);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    PyObject *cpy_r_r32[4] = {cpy_r_r4, cpy_r_r29, cpy_r_r30, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r33, 4, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL42;
    }
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    cpy_r_r35 = PyObject_IsTrue(cpy_r_r34);
    CPy_DecRef(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL20;
    }
    cpy_r_r37 = cpy_r_r35;
    if (cpy_r_r37) goto CPyL19;
    CPy_Reraise();
    if (!0) {
        goto CPyL20;
    } else
        goto CPyL43;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    goto CPyL22;
CPyL20: ;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    cpy_r_r38 = CPy_KeepPropagating();
    if (!cpy_r_r38) {
        goto CPyL23;
    } else
        goto CPyL44;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    tuple_T3OOO __tmp5015 = { NULL, NULL, NULL };
    cpy_r_r39 = __tmp5015;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL24;
CPyL23: ;
    cpy_r_r41 = CPy_CatchError();
    cpy_r_r40 = cpy_r_r41;
CPyL24: ;
    if (!cpy_r_r13) goto CPyL45;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r43[4] = {cpy_r_r4, cpy_r_r42, cpy_r_r42, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r44, 4, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 465, CPyStatic_renaming___globals);
        goto CPyL46;
    } else
        goto CPyL47;
CPyL26: ;
    CPy_DECREF(cpy_r_r4);
CPyL27: ;
    if (cpy_r_r40.f0 == NULL) goto CPyL34;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL48;
CPyL29: ;
    CPy_Unreachable();
CPyL30: ;
    if (cpy_r_r40.f0 == NULL) goto CPyL32;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
CPyL32: ;
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL35;
    CPy_Unreachable();
CPyL34: ;
    return 1;
CPyL35: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL36: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL35;
CPyL38: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL5;
CPyL39: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL13;
CPyL40: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL14;
CPyL41: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_arg);
    goto CPyL14;
CPyL42: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL20;
CPyL43: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    goto CPyL18;
CPyL44: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL21;
CPyL45: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    goto CPyL27;
CPyL46: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL30;
CPyL47: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL26;
CPyL48: ;
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
    goto CPyL29;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def", 463, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    tuple_T3OOO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 471, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r1 = CPyStatics[4661]; /* 'enter_scope' */
    PyObject *cpy_r_r2[1] = {cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r5 = PyObject_Type(cpy_r_r4);
    cpy_r_r6 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    cpy_r_r8 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r4};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL30;
    } else
        goto CPyL31;
CPyL5: ;
    cpy_r_r13 = 1;
    cpy_r_r14 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_cdef);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 473, CPyStatic_renaming___globals);
    } else
        goto CPyL15;
    cpy_r_r15 = CPy_CatchError();
    cpy_r_r13 = 0;
    cpy_r_r16 = CPy_GetExcInfo();
    cpy_r_r17 = cpy_r_r16.f0;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r16.f1;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r16.f2;
    CPy_INCREF(cpy_r_r19);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    PyObject *cpy_r_r20[4] = {cpy_r_r4, cpy_r_r17, cpy_r_r18, cpy_r_r19};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r21, 4, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL32;
    }
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    CPy_DecRef(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL13;
    }
    cpy_r_r25 = cpy_r_r23;
    if (cpy_r_r25) goto CPyL12;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL33;
CPyL11: ;
    CPy_Unreachable();
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r15);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    goto CPyL15;
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r15);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    cpy_r_r26 = CPy_KeepPropagating();
    if (!cpy_r_r26) {
        goto CPyL16;
    } else
        goto CPyL34;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    tuple_T3OOO __tmp5016 = { NULL, NULL, NULL };
    cpy_r_r27 = __tmp5016;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL17;
CPyL16: ;
    cpy_r_r29 = CPy_CatchError();
    cpy_r_r28 = cpy_r_r29;
CPyL17: ;
    if (!cpy_r_r13) goto CPyL35;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r31[4] = {cpy_r_r4, cpy_r_r30, cpy_r_r30, cpy_r_r30};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r32, 4, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 472, CPyStatic_renaming___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL19: ;
    CPy_DECREF(cpy_r_r4);
CPyL20: ;
    if (cpy_r_r28.f0 == NULL) goto CPyL27;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL38;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    if (cpy_r_r28.f0 == NULL) goto CPyL25;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_XDECREF(cpy_r_r28.f0);
    CPy_XDECREF(cpy_r_r28.f1);
    CPy_XDECREF(cpy_r_r28.f2);
CPyL25: ;
    cpy_r_r34 = CPy_KeepPropagating();
    if (!cpy_r_r34) goto CPyL28;
    CPy_Unreachable();
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL29: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL5;
CPyL32: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL13;
CPyL33: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r15.f0);
    CPy_DecRef(cpy_r_r15.f1);
    CPy_DecRef(cpy_r_r15.f2);
    goto CPyL11;
CPyL34: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL14;
CPyL35: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    goto CPyL20;
CPyL36: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL23;
CPyL37: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL19;
CPyL38: ;
    CPy_XDECREF(cpy_r_r28.f0);
    CPy_XDECREF(cpy_r_r28.f1);
    CPy_XDECREF(cpy_r_r28.f2);
    goto CPyL22;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def(arg_self, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def", 470, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_class_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_old_len;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    int64_t cpy_r_r46;
    char cpy_r_r47;
    int64_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    cpy_r_r0 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL31;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 476, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL32;
    }
    cpy_r_expr = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 477, CPyStatic_renaming___globals);
        goto CPyL32;
    } else
        goto CPyL33;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_with_stmt", "LimitedVariableRenameVisitor", "bound_vars", 478, CPyStatic_renaming___globals);
        goto CPyL30;
    }
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_old_len = cpy_r_r13;
    cpy_r_r14 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_target;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = 0;
CPyL7: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL34;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (PyObject_TypeCheck(cpy_r_r20, CPyType_nodes___Expression))
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL5017;
    if (cpy_r_r20 == Py_None)
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL5017;
    CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 479, CPyStatic_renaming___globals, "mypy.nodes.Expression or None", cpy_r_r20);
    goto CPyL35;
__LL5017: ;
    cpy_r_target = cpy_r_r21;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_target != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL36;
    if (likely(cpy_r_target != Py_None))
        cpy_r_r24 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 481, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_target);
        goto CPyL35;
    }
    cpy_r_r25 = CPyDef_renaming___LimitedVariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 481, CPyStatic_renaming___globals);
        goto CPyL35;
    }
CPyL12: ;
    cpy_r_r26 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r26;
    goto CPyL7;
CPyL13: ;
    cpy_r_r27 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_target;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = 0;
CPyL14: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL37;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_r27, cpy_r_r28);
    if (PyObject_TypeCheck(cpy_r_r33, CPyType_nodes___Expression))
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL5018;
    if (cpy_r_r33 == Py_None)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL5018;
    CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 482, CPyStatic_renaming___globals, "mypy.nodes.Expression or None", cpy_r_r33);
    goto CPyL38;
__LL5018: ;
    cpy_r_target = cpy_r_r34;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_target != cpy_r_r35;
    if (!cpy_r_r36) goto CPyL39;
    if (likely(cpy_r_target != Py_None))
        cpy_r_r37 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_with_stmt", 484, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_target);
        goto CPyL38;
    }
    cpy_r_r38 = CPY_GET_METHOD_TRAIT(cpy_r_r37, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r37, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 484, CPyStatic_renaming___globals);
        goto CPyL38;
    } else
        goto CPyL40;
CPyL19: ;
    cpy_r_r39 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r39;
    goto CPyL14;
CPyL20: ;
    cpy_r_r40 = ((mypy___nodes___WithStmtObject *)cpy_r_stmt)->_body;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDef_nodes___Block___accept(cpy_r_r40, cpy_r_self);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 485, CPyStatic_renaming___globals);
        goto CPyL41;
    } else
        goto CPyL42;
CPyL21: ;
    cpy_r_r42 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_with_stmt", "LimitedVariableRenameVisitor", "bound_vars", 487, CPyStatic_renaming___globals);
        goto CPyL41;
    }
CPyL22: ;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = cpy_r_r45 & 1;
    cpy_r_r47 = cpy_r_r46 != 0;
    if (cpy_r_r47) goto CPyL24;
    cpy_r_r48 = cpy_r_old_len & 1;
    cpy_r_r49 = cpy_r_r48 != 0;
    if (!cpy_r_r49) goto CPyL25;
CPyL24: ;
    cpy_r_r50 = CPyTagged_IsLt_(cpy_r_old_len, cpy_r_r45);
    if (cpy_r_r50) {
        goto CPyL26;
    } else
        goto CPyL43;
CPyL25: ;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r45 > (Py_ssize_t)cpy_r_old_len;
    if (!cpy_r_r51) goto CPyL43;
CPyL26: ;
    cpy_r_r52 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_with_stmt", "LimitedVariableRenameVisitor", "bound_vars", 488, CPyStatic_renaming___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r52);
CPyL27: ;
    cpy_r_r53 = CPyList_PopLast(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 488, CPyStatic_renaming___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeError("str", cpy_r_r53); 
        cpy_r_r54 = NULL;
    }
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 488, CPyStatic_renaming___globals);
        goto CPyL41;
    } else
        goto CPyL44;
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r55 = 2;
    return cpy_r_r55;
CPyL31: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
CPyL34: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL13;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_old_len);
    CPy_DecRef(cpy_r_r14);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL12;
CPyL37: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL20;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_old_len);
    CPy_DecRef(cpy_r_r27);
    goto CPyL30;
CPyL39: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL19;
CPyL40: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL19;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_old_len);
    goto CPyL30;
CPyL42: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL21;
CPyL43: ;
    CPyTagged_DECREF(cpy_r_old_len);
    goto CPyL29;
CPyL44: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL21;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___WithStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt", 475, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___analyze_lvalue(PyObject *cpy_r_self, PyObject *cpy_r_lvalue) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_var_info;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_item;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
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
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    cpy_r_r0 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r4 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 492, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_r4)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_name = cpy_r_r5;
    cpy_r_r6 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "analyze_lvalue", "LimitedVariableRenameVisitor", "bound_vars", 493, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r6);
CPyL3: ;
    cpy_r_r7 = PySequence_Contains(cpy_r_r6, cpy_r_name);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 493, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    cpy_r_r9 = cpy_r_r7;
    if (cpy_r_r9) {
        goto CPyL49;
    } else
        goto CPyL7;
CPyL5: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r10 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 495, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r11 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 495, CPyStatic_renaming___globals);
        goto CPyL47;
    } else
        goto CPyL46;
CPyL7: ;
    cpy_r_r12 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "analyze_lvalue", "LimitedVariableRenameVisitor", "refs", 497, CPyStatic_renaming___globals);
        goto CPyL48;
    }
CPyL8: ;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 497, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    if (likely(PyDict_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 497, CPyStatic_renaming___globals, "dict", cpy_r_r13);
        goto CPyL48;
    }
    cpy_r_var_info = cpy_r_r14;
    cpy_r_r15 = PyDict_Contains(cpy_r_var_info, cpy_r_name);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 498, CPyStatic_renaming___globals);
        goto CPyL50;
    }
    cpy_r_r17 = cpy_r_r15;
    cpy_r_r18 = cpy_r_r17 ^ 1;
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 499, CPyStatic_renaming___globals);
        goto CPyL50;
    }
    cpy_r_r20 = CPyDict_SetItem(cpy_r_var_info, cpy_r_name, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 499, CPyStatic_renaming___globals);
        goto CPyL50;
    }
CPyL14: ;
    cpy_r_r22 = CPyDict_GetItem(cpy_r_var_info, cpy_r_name);
    CPy_DECREF(cpy_r_var_info);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 500, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 500, CPyStatic_renaming___globals, "list", cpy_r_r22);
        goto CPyL48;
    }
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 500, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    cpy_r_r25 = PyList_Append(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 500, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    cpy_r_r27 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "analyze_lvalue", "LimitedVariableRenameVisitor", "bound_vars", 501, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r27);
CPyL19: ;
    cpy_r_r28 = PyList_Append(cpy_r_r27, cpy_r_name);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_name);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 501, CPyStatic_renaming___globals);
        goto CPyL47;
    } else
        goto CPyL46;
CPyL20: ;
    cpy_r_r30 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL22;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL23;
CPyL22: ;
    cpy_r_r35 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    cpy_r_r34 = cpy_r_r38;
CPyL23: ;
    if (!cpy_r_r34) goto CPyL35;
    CPy_INCREF(cpy_r_lvalue);
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r39 = cpy_r_lvalue;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL5019;
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r39 = cpy_r_lvalue;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL5019;
    CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 503, CPyStatic_renaming___globals, "union[mypy.nodes.ListExpr, mypy.nodes.TupleExpr]", cpy_r_lvalue);
    goto CPyL47;
__LL5019: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_r39)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___ListExpr))
        cpy_r_r44 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 503, CPyStatic_renaming___globals, "mypy.nodes.ListExpr", cpy_r_r39);
        goto CPyL47;
    }
    cpy_r_r45 = ((mypy___nodes___ListExprObject *)cpy_r_r44)->_items;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45;
    goto CPyL30;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___TupleExpr))
        cpy_r_r47 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 503, CPyStatic_renaming___globals, "mypy.nodes.TupleExpr", cpy_r_r39);
        goto CPyL47;
    }
    cpy_r_r48 = ((mypy___nodes___TupleExprObject *)cpy_r_r47)->_items;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r46 = cpy_r_r48;
CPyL30: ;
    cpy_r_r49 = 0;
CPyL31: ;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = (Py_ssize_t)cpy_r_r49 < (Py_ssize_t)cpy_r_r52;
    if (!cpy_r_r53) goto CPyL52;
    cpy_r_r54 = CPyList_GetItemUnsafe(cpy_r_r46, cpy_r_r49);
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_nodes___Expression)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 503, CPyStatic_renaming___globals, "mypy.nodes.Expression", cpy_r_r54);
        goto CPyL53;
    }
    cpy_r_item = cpy_r_r55;
    cpy_r_r56 = CPyDef_renaming___LimitedVariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 504, CPyStatic_renaming___globals);
        goto CPyL53;
    }
    cpy_r_r57 = cpy_r_r49 + 2;
    cpy_r_r49 = cpy_r_r57;
    goto CPyL31;
CPyL35: ;
    cpy_r_r58 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    if (!cpy_r_r61) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r62 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 506, CPyStatic_renaming___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r63 = ((mypy___nodes___MemberExprObject *)cpy_r_r62)->_expr;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPY_GET_METHOD_TRAIT(cpy_r_r63, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r63, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 506, CPyStatic_renaming___globals);
        goto CPyL47;
    } else
        goto CPyL54;
CPyL38: ;
    cpy_r_r65 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL43;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r69 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 508, CPyStatic_renaming___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r70 = ((mypy___nodes___IndexExprObject *)cpy_r_r69)->_base;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = CPY_GET_METHOD_TRAIT(cpy_r_r70, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r70, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 508, CPyStatic_renaming___globals);
        goto CPyL47;
    } else
        goto CPyL55;
CPyL41: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r72 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 509, CPyStatic_renaming___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r73 = ((mypy___nodes___IndexExprObject *)cpy_r_r72)->_index;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPY_GET_METHOD_TRAIT(cpy_r_r73, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r73, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 509, CPyStatic_renaming___globals);
        goto CPyL47;
    } else
        goto CPyL56;
CPyL43: ;
    cpy_r_r75 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r76 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 == cpy_r_r75;
    if (!cpy_r_r78) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___StarExpr))
        cpy_r_r79 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "analyze_lvalue", 511, CPyStatic_renaming___globals, "mypy.nodes.StarExpr", cpy_r_lvalue);
        goto CPyL47;
    }
    cpy_r_r80 = ((mypy___nodes___StarExprObject *)cpy_r_r79)->_expr;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = CPyDef_renaming___LimitedVariableRenameVisitor___analyze_lvalue(cpy_r_self, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 511, CPyStatic_renaming___globals);
        goto CPyL47;
    }
CPyL46: ;
    return 1;
CPyL47: ;
    cpy_r_r82 = 2;
    return cpy_r_r82;
CPyL48: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL47;
CPyL49: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL5;
CPyL50: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_var_info);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r23);
    goto CPyL47;
CPyL52: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL46;
CPyL53: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL47;
CPyL54: ;
    CPy_DECREF(cpy_r_r64);
    goto CPyL46;
CPyL55: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL41;
CPyL56: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL46;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___analyze_lvalue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", 0};
    static CPyArg_Parser parser = {"O:analyze_lvalue", kwlist, 0};
    PyObject *obj_lvalue;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lvalue)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_lvalue); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___analyze_lvalue(arg_self, arg_lvalue);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "analyze_lvalue", 490, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_as_id;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___ImportObject *)cpy_r_imp)->_ids;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp5020;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp5020 = NULL;
        goto __LL5021;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp5020 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp5020 = NULL;
    }
    if (__tmp5020 == NULL) goto __LL5021;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp5020 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp5020 = NULL;
    }
    if (__tmp5020 != NULL) goto __LL5022;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp5020 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp5020 = NULL;
    }
    if (__tmp5020 != NULL) goto __LL5022;
    __tmp5020 = NULL;
__LL5022: ;
    if (__tmp5020 == NULL) goto __LL5021;
    __tmp5020 = cpy_r_r6;
__LL5021: ;
    if (unlikely(__tmp5020 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp5023 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp5023);
        PyObject *__tmp5024;
        if (likely(PyUnicode_Check(__tmp5023)))
            __tmp5024 = __tmp5023;
        else {
            CPy_TypeError("str", __tmp5023); 
            __tmp5024 = NULL;
        }
        cpy_r_r7.f0 = __tmp5024;
        PyObject *__tmp5025 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp5025);
        PyObject *__tmp5026;
        if (PyUnicode_Check(__tmp5025))
            __tmp5026 = __tmp5025;
        else {
            __tmp5026 = NULL;
        }
        if (__tmp5026 != NULL) goto __LL5027;
        if (__tmp5025 == Py_None)
            __tmp5026 = __tmp5025;
        else {
            __tmp5026 = NULL;
        }
        if (__tmp5026 != NULL) goto __LL5027;
        CPy_TypeError("str or None", __tmp5025); 
        __tmp5026 = NULL;
__LL5027: ;
        cpy_r_r7.f1 = __tmp5026;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import", 515, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_as_id = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_as_id != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL15;
    CPy_INCREF(cpy_r_as_id);
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r12 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import", 515, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) {
        goto CPyL17;
    } else
        goto CPyL15;
CPyL6: ;
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r14 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import", 516, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL14;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = cpy_r_id;
CPyL9: ;
    cpy_r_r16 = CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(cpy_r_self, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import", 516, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL1;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_as_id);
    goto CPyL8;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_as_id);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_id);
    goto CPyL6;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___Import))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import", 513, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_as_id;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___ImportFromObject *)cpy_r_imp)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp5028;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp5028 = NULL;
        goto __LL5029;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp5028 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp5028 = NULL;
    }
    if (__tmp5028 == NULL) goto __LL5029;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp5028 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp5028 = NULL;
    }
    if (__tmp5028 != NULL) goto __LL5030;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp5028 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp5028 = NULL;
    }
    if (__tmp5028 != NULL) goto __LL5030;
    __tmp5028 = NULL;
__LL5030: ;
    if (__tmp5028 == NULL) goto __LL5029;
    __tmp5028 = cpy_r_r6;
__LL5029: ;
    if (unlikely(__tmp5028 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp5031 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp5031);
        PyObject *__tmp5032;
        if (likely(PyUnicode_Check(__tmp5031)))
            __tmp5032 = __tmp5031;
        else {
            CPy_TypeError("str", __tmp5031); 
            __tmp5032 = NULL;
        }
        cpy_r_r7.f0 = __tmp5032;
        PyObject *__tmp5033 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp5033);
        PyObject *__tmp5034;
        if (PyUnicode_Check(__tmp5033))
            __tmp5034 = __tmp5033;
        else {
            __tmp5034 = NULL;
        }
        if (__tmp5034 != NULL) goto __LL5035;
        if (__tmp5033 == Py_None)
            __tmp5034 = __tmp5033;
        else {
            __tmp5034 = NULL;
        }
        if (__tmp5034 != NULL) goto __LL5035;
        CPy_TypeError("str or None", __tmp5033); 
        __tmp5034 = NULL;
__LL5035: ;
        cpy_r_r7.f1 = __tmp5034;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import_from", 520, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_as_id = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_as_id != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL15;
    CPy_INCREF(cpy_r_as_id);
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r12 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import_from", 520, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) {
        goto CPyL17;
    } else
        goto CPyL15;
CPyL6: ;
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r14 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_import_from", 521, CPyStatic_renaming___globals, "str", cpy_r_as_id);
        goto CPyL14;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = cpy_r_id;
CPyL9: ;
    cpy_r_r16 = CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(cpy_r_self, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import_from", 521, CPyStatic_renaming___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL1;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_as_id);
    goto CPyL8;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_as_id);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_id);
    goto CPyL6;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___ImportFrom))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from", 518, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_import_all", 525, CPyStatic_renaming___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___ImportAll))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_all", 523, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_scope;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_bound_vars;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_name_expr", "LimitedVariableRenameVisitor", "bound_vars", 529, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r1, cpy_r_name);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 529, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL23;
    cpy_r_r5 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "visit_name_expr", "LimitedVariableRenameVisitor", "refs", 531, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyTagged_Subtract(cpy_r_r8, 2);
    cpy_r_r10 = cpy_r_r9;
CPyL5: ;
    cpy_r_r11 = cpy_r_r10 & 1;
    cpy_r_r12 = cpy_r_r11 == 0;
    cpy_r_r13 = 0 & 1;
    cpy_r_r14 = cpy_r_r13 == 0;
    cpy_r_r15 = cpy_r_r12 & cpy_r_r14;
    if (!cpy_r_r15) goto CPyL7;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r10 >= (Py_ssize_t)0;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL8;
CPyL7: ;
    cpy_r_r18 = CPyTagged_IsLt_(cpy_r_r10, 0);
    cpy_r_r19 = cpy_r_r18 ^ 1;
    cpy_r_r17 = cpy_r_r19;
CPyL8: ;
    if (!cpy_r_r17) goto CPyL27;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = cpy_r_r10 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = cpy_r_r22 & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = cpy_r_r24 & cpy_r_r26;
    if (!cpy_r_r27) goto CPyL11;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r22;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL12;
CPyL11: ;
    cpy_r_r30 = CPyTagged_IsLt_(cpy_r_r10, cpy_r_r22);
    cpy_r_r29 = cpy_r_r30;
CPyL12: ;
    if (!cpy_r_r29) goto CPyL27;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r10);
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("short_int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 531, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r32);
    if (likely(PyDict_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_name_expr", 531, CPyStatic_renaming___globals, "dict", cpy_r_r33);
        goto CPyL28;
    }
    cpy_r_scope = cpy_r_r34;
    cpy_r_r35 = PyDict_Contains(cpy_r_scope, cpy_r_name);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 532, CPyStatic_renaming___globals);
        goto CPyL29;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL30;
    cpy_r_r38 = CPyDict_GetItem(cpy_r_scope, cpy_r_name);
    CPy_DECREF(cpy_r_scope);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 533, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_name_expr", 533, CPyStatic_renaming___globals, "list", cpy_r_r38);
        goto CPyL28;
    }
    cpy_r_r40 = CPyList_GetItemShort(cpy_r_r39, -2);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 533, CPyStatic_renaming___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "visit_name_expr", 533, CPyStatic_renaming___globals, "list", cpy_r_r40);
        goto CPyL28;
    }
    cpy_r_r42 = PyList_Append(cpy_r_r41, cpy_r_expr);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 533, CPyStatic_renaming___globals);
        goto CPyL28;
    }
CPyL22: ;
    cpy_r_r44 = cpy_r_r10 + -2;
    CPyTagged_DECREF(cpy_r_r10);
    cpy_r_r10 = cpy_r_r44;
    goto CPyL5;
CPyL23: ;
    cpy_r_r45 = CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(cpy_r_self, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 535, CPyStatic_renaming___globals);
        goto CPyL25;
    }
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL26: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL25;
CPyL27: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r10);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_r10);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_scope);
    goto CPyL25;
CPyL30: ;
    CPy_DECREF(cpy_r_scope);
    goto CPyL22;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_name_expr", 527, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_LimitedVariableRenameVisitor_gen", "__mypyc_env__", 538, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_LimitedVariableRenameVisitor_env", "__mypyc_next_label__", 538, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL23;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL35;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_LimitedVariableRenameVisitor_env", "self", 539, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_r4)->_skipped;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'skipped' of 'LimitedVariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 539, CPyStatic_renaming___globals);
        goto CPyL34;
    }
CPyL7: ;
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 539, CPyStatic_renaming___globals);
        goto CPyL36;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 539, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    cpy_r_r9 = ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_LimitedVariableRenameVisitor_env", "self", 540, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_r9)->_refs;
    if (unlikely(cpy_r_r10 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'refs' of 'LimitedVariableRenameVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r10);
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 540, CPyStatic_renaming___globals);
        goto CPyL34;
    }
CPyL11: ;
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 540, CPyStatic_renaming___globals);
        goto CPyL37;
    }
    cpy_r_r12 = PyList_Append(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 540, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    cpy_r_r14 = Py_None;
    if (((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r15 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 541, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r14);
    return cpy_r_r14;
CPyL15: ;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_type != cpy_r_r16;
    if (cpy_r_r17) {
        goto CPyL38;
    } else
        goto CPyL18;
CPyL16: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 541, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r18 = ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "enter_scope", "enter_scope_LimitedVariableRenameVisitor_env", "self", 542, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r18);
CPyL19: ;
    cpy_r_r19 = CPyDef_renaming___LimitedVariableRenameVisitor___flush_refs(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 542, CPyStatic_renaming___globals);
        goto CPyL34;
    }
    cpy_r_r20 = Py_None;
    if (((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    CPyGen_SetStopIterationValue(cpy_r_r20);
    if (!0) goto CPyL33;
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r22 = cpy_r_r1 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    if (!cpy_r_r23) goto CPyL25;
    cpy_r_r24 = cpy_r_r1 == 0;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL26;
CPyL25: ;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r25 = cpy_r_r26;
CPyL26: ;
    if (cpy_r_r25) goto CPyL39;
    cpy_r_r27 = cpy_r_r1 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    if (!cpy_r_r28) goto CPyL29;
    cpy_r_r29 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL30;
CPyL29: ;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r30 = cpy_r_r31;
CPyL30: ;
    if (cpy_r_r30) {
        goto CPyL15;
    } else
        goto CPyL40;
CPyL31: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL33;
CPyL38: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL16;
CPyL39: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL31;
}

PyObject *CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_LimitedVariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__next__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_LimitedVariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "send", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_LimitedVariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "__iter__", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_LimitedVariableRenameVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "throw", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp5036 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5036);
    PyObject *__tmp5037 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5037);
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

PyObject *CPyPy_renaming___enter_scope_LimitedVariableRenameVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_renaming___enter_scope_LimitedVariableRenameVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.renaming.enter_scope_LimitedVariableRenameVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "close", -1, CPyStatic_renaming___globals);
    return NULL;
}

PyObject *CPyDef_renaming___LimitedVariableRenameVisitor___enter_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_renaming___enter_scope_LimitedVariableRenameVisitor_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
        goto CPyL8;
    }
    if (((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___renaming___enter_scope_LimitedVariableRenameVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
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

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___enter_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":enter_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_renaming___LimitedVariableRenameVisitor___enter_scope(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "enter_scope", 538, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatics[282]; /* '*' */
    cpy_r_r1 = CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 545, CPyStatic_renaming___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reject_redefinition_of_vars_in_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___reject_redefinition_of_vars_in_scope(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "reject_redefinition_of_vars_in_scope", 544, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_skipped;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "record_skipped", "LimitedVariableRenameVisitor", "skipped", 548, CPyStatic_renaming___globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "record_skipped", 548, CPyStatic_renaming___globals);
        goto CPyL5;
    }
    if (likely(PySet_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "record_skipped", 548, CPyStatic_renaming___globals, "set", cpy_r_r1);
        goto CPyL5;
    }
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_name);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/renaming.py", "record_skipped", 548, CPyStatic_renaming___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___record_skipped(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:record_skipped", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___record_skipped(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "record_skipped", 547, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___LimitedVariableRenameVisitor___flush_refs(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_ref_dict;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_skipped;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T4CIOO cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_name;
    PyObject *cpy_r_refs;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_to_rename;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_item;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_refs;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "flush_refs", "LimitedVariableRenameVisitor", "refs", 551, CPyStatic_renaming___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyList_PopLast(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 551, CPyStatic_renaming___globals);
        goto CPyL25;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 551, CPyStatic_renaming___globals, "dict", cpy_r_r1);
        goto CPyL25;
    }
    cpy_r_ref_dict = cpy_r_r2;
    cpy_r_r3 = ((mypy___renaming___LimitedVariableRenameVisitorObject *)cpy_r_self)->_skipped;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/renaming.py", "flush_refs", "LimitedVariableRenameVisitor", "skipped", 552, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyList_PopLast(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 552, CPyStatic_renaming___globals);
        goto CPyL26;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 552, CPyStatic_renaming___globals, "set", cpy_r_r4);
        goto CPyL26;
    }
    cpy_r_skipped = cpy_r_r5;
    cpy_r_r6 = CPyStatics[282]; /* '*' */
    cpy_r_r7 = PySet_Contains(cpy_r_skipped, cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 553, CPyStatic_renaming___globals);
        goto CPyL27;
    }
    cpy_r_r9 = cpy_r_r7;
    cpy_r_r10 = cpy_r_r9 ^ 1;
    if (!cpy_r_r10) goto CPyL28;
    cpy_r_r11 = 0;
    cpy_r_r12 = PyDict_Size(cpy_r_ref_dict);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = CPyDict_GetItemsIter(cpy_r_ref_dict);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 554, CPyStatic_renaming___globals);
        goto CPyL27;
    }
CPyL9: ;
    cpy_r_r15 = CPyDict_NextItem(cpy_r_r14, cpy_r_r11);
    cpy_r_r16 = cpy_r_r15.f1;
    cpy_r_r11 = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f0;
    if (!cpy_r_r17) goto CPyL29;
    cpy_r_r18 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r15.f3;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r15.f3);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r20 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 554, CPyStatic_renaming___globals, "str", cpy_r_r18);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r21 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 554, CPyStatic_renaming___globals, "list", cpy_r_r19);
        goto CPyL31;
    }
    cpy_r_name = cpy_r_r20;
    cpy_r_refs = cpy_r_r21;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_refs)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r24 <= (Py_ssize_t)2;
    if (cpy_r_r25) goto CPyL32;
    cpy_r_r26 = PySet_Contains(cpy_r_skipped, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 555, CPyStatic_renaming___globals);
        goto CPyL33;
    }
    cpy_r_r28 = cpy_r_r26;
    if (cpy_r_r28) goto CPyL34;
    cpy_r_r29 = CPyList_GetSlice(cpy_r_refs, 0, -2);
    CPy_DECREF(cpy_r_refs);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 559, CPyStatic_renaming___globals);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 559, CPyStatic_renaming___globals, "list", cpy_r_r29);
        goto CPyL35;
    }
    cpy_r_to_rename = cpy_r_r30;
    cpy_r_r31 = 0;
    cpy_r_i = 0;
    cpy_r_r32 = 0;
CPyL18: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_to_rename)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r35;
    if (!cpy_r_r36) goto CPyL36;
    cpy_r_r37 = CPyList_GetItemUnsafe(cpy_r_to_rename, cpy_r_r32);
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "flush_refs", 560, CPyStatic_renaming___globals, "list", cpy_r_r37);
        goto CPyL37;
    }
    cpy_r_item = cpy_r_r38;
    cpy_r_r39 = CPyDef_renaming___rename_refs(cpy_r_item, cpy_r_i);
    CPy_DECREF(cpy_r_item);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 561, CPyStatic_renaming___globals);
        goto CPyL38;
    }
    cpy_r_r40 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r40;
    cpy_r_i = cpy_r_r40;
    cpy_r_r41 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r41;
    goto CPyL18;
CPyL22: ;
    cpy_r_r42 = CPyDict_CheckSize(cpy_r_ref_dict, cpy_r_r13);
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 554, CPyStatic_renaming___globals);
        goto CPyL35;
    } else
        goto CPyL9;
CPyL23: ;
    cpy_r_r43 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/renaming.py", "flush_refs", 554, CPyStatic_renaming___globals);
        goto CPyL25;
    }
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL26: ;
    CPy_DecRef(cpy_r_ref_dict);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    goto CPyL25;
CPyL28: ;
    CPy_DECREF(cpy_r_ref_dict);
    CPy_DECREF(cpy_r_skipped);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_ref_dict);
    CPy_DECREF(cpy_r_skipped);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r15.f3);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r19);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_refs);
    goto CPyL22;
CPyL33: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_refs);
    goto CPyL25;
CPyL34: ;
    CPy_DECREF(cpy_r_refs);
    goto CPyL22;
CPyL35: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    CPy_DecRef(cpy_r_r14);
    goto CPyL25;
CPyL36: ;
    CPy_DECREF(cpy_r_to_rename);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL22;
CPyL37: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_to_rename);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL25;
CPyL38: ;
    CPy_DecRef(cpy_r_ref_dict);
    CPy_DecRef(cpy_r_skipped);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_to_rename);
    goto CPyL25;
}

PyObject *CPyPy_renaming___LimitedVariableRenameVisitor___flush_refs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush_refs", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_renaming___LimitedVariableRenameVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.renaming.LimitedVariableRenameVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_renaming___LimitedVariableRenameVisitor___flush_refs(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "flush_refs", 550, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming___rename_refs(PyObject *cpy_r_names, CPyTagged cpy_r_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_new_name;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_expr;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = CPyList_GetItemShortBorrow(cpy_r_names, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "rename_refs", 565, CPyStatic_renaming___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___NameExpr))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "rename_refs", 565, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_r0);
        goto CPyL11;
    }
    cpy_r_r2 = ((mypy___nodes___NameExprObject *)cpy_r_r1)->_name;
    CPy_INCREF(cpy_r_r2);
    cpy_r_name = cpy_r_r2;
    cpy_r_r3 = CPyStatics[385]; /* "'" */
    cpy_r_r4 = CPyTagged_Add(cpy_r_index, 2);
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r6 = PyNumber_Multiply(cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "rename_refs", 566, CPyStatic_renaming___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "rename_refs", 566, CPyStatic_renaming___globals, "str", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_r8 = PyUnicode_Concat(cpy_r_name, cpy_r_r7);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "rename_refs", 566, CPyStatic_renaming___globals);
        goto CPyL11;
    }
    cpy_r_new_name = cpy_r_r8;
    cpy_r_r9 = 0;
CPyL6: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL13;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___NameExpr))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/renaming.py", "rename_refs", 567, CPyStatic_renaming___globals, "mypy.nodes.NameExpr", cpy_r_r14);
        goto CPyL14;
    }
    cpy_r_expr = cpy_r_r15;
    CPy_INCREF(cpy_r_new_name);
    CPy_DECREF(((mypy___nodes___NameExprObject *)cpy_r_expr)->_name);
    ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name = cpy_r_new_name;
    CPy_DECREF(cpy_r_expr);
    cpy_r_r17 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r17;
    goto CPyL6;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL12: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_new_name);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_new_name);
    goto CPyL11;
}

PyObject *CPyPy_renaming___rename_refs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"names", "index", 0};
    static CPyArg_Parser parser = {"OO:rename_refs", kwlist, 0};
    PyObject *obj_names;
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_names, &obj_index)) {
        return NULL;
    }
    PyObject *arg_names;
    if (likely(PyList_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("list", obj_names); 
        goto fail;
    }
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    char retval = CPyDef_renaming___rename_refs(arg_names, arg_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/renaming.py", "rename_refs", 564, CPyStatic_renaming___globals);
    return NULL;
}

char CPyDef_renaming_____top_level__(void) {
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
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
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
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
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
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject **cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", -1, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_renaming___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 1, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_renaming___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 3, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9641]; /* ('Final', 'Iterator') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_renaming___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 4, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9642]; /* ('AssignmentStmt', 'Block', 'BreakStmt', 'ClassDef',
                                     'ContinueStmt', 'ForStmt', 'FuncDef', 'Import',
                                     'ImportAll', 'ImportFrom', 'IndexExpr', 'ListExpr',
                                     'Lvalue', 'MatchStmt', 'MemberExpr', 'MypyFile',
                                     'NameExpr', 'StarExpr', 'TryStmt', 'TupleExpr',
                                     'WhileStmt', 'WithStmt') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_renaming___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 6, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9643]; /* ('AsPattern',) */
    cpy_r_r22 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r23 = CPyStatic_renaming___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 30, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule_mypy___patterns = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___patterns);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r26 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r27 = CPyStatic_renaming___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 31, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    CPyModule_mypy___traverser = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_renaming___globals;
    cpy_r_r30 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r31 = CPyStatics[9015]; /* 0 */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r29, cpy_r_r30, cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 34, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r34 = CPyStatic_renaming___globals;
    cpy_r_r35 = CPyStatics[1852]; /* 'FUNCTION' */
    cpy_r_r36 = CPyStatics[9016]; /* 1 */
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 35, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r39 = CPyStatic_renaming___globals;
    cpy_r_r40 = CPyStatics[4665]; /* 'CLASS' */
    cpy_r_r41 = CPyStatics[9018]; /* 2 */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 36, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r44 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r45 = PyTuple_Pack(1, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 39, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r46 = CPyStatics[588]; /* 'mypy.renaming' */
    cpy_r_r47 = (PyObject *)CPyType_renaming___VariableRenameVisitor_template;
    cpy_r_r48 = CPyType_FromTemplate(cpy_r_r47, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 39, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r49 = CPyDef_renaming___VariableRenameVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", -1, CPyStatic_renaming___globals);
        goto CPyL46;
    }
    cpy_r_r50 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r51 = CPyStatics[4666]; /* 'block_id' */
    cpy_r_r52 = CPyStatics[4667]; /* 'disallow_redef_depth' */
    cpy_r_r53 = CPyStatics[4668]; /* 'loop_depth' */
    cpy_r_r54 = CPyStatics[4669]; /* 'block_loop_depth' */
    cpy_r_r55 = CPyStatics[4670]; /* 'blocks' */
    cpy_r_r56 = CPyStatics[4671]; /* 'var_blocks' */
    cpy_r_r57 = CPyStatics[4672]; /* 'refs' */
    cpy_r_r58 = CPyStatics[4673]; /* 'num_reads' */
    cpy_r_r59 = CPyStatics[4674]; /* 'scope_kinds' */
    cpy_r_r60 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r61 = PyTuple_Pack(10, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 39, CPyStatic_renaming___globals);
        goto CPyL46;
    }
    cpy_r_r62 = PyObject_SetAttr(cpy_r_r48, cpy_r_r50, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 39, CPyStatic_renaming___globals);
        goto CPyL46;
    }
    CPyType_renaming___VariableRenameVisitor = (PyTypeObject *)cpy_r_r48;
    CPy_INCREF(CPyType_renaming___VariableRenameVisitor);
    cpy_r_r64 = CPyStatic_renaming___globals;
    cpy_r_r65 = CPyStatics[587]; /* 'VariableRenameVisitor' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 39, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r68 = (PyObject *)CPyType_renaming___VariableRenameVisitor;
    cpy_r_r69 = CPyStatics[4662]; /* 'enter_block' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 296, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r71 = CPyStatic_renaming___globals;
    cpy_r_r72 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 295, CPyStatic_renaming___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r74[1] = {cpy_r_r70};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r75, 1, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 296, CPyStatic_renaming___globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r70);
    cpy_r_r77 = CPyStatics[4662]; /* 'enter_block' */
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r68, cpy_r_r77, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 296, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r80 = (PyObject *)CPyType_renaming___VariableRenameVisitor;
    cpy_r_r81 = CPyStatics[4664]; /* 'enter_try' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 306, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r83 = CPyStatic_renaming___globals;
    cpy_r_r84 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r85 = CPyDict_GetItem(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 305, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r86[1] = {cpy_r_r82};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 1, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 306, CPyStatic_renaming___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r82);
    cpy_r_r89 = CPyStatics[4664]; /* 'enter_try' */
    cpy_r_r90 = PyObject_SetAttr(cpy_r_r80, cpy_r_r89, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 306, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r92 = (PyObject *)CPyType_renaming___VariableRenameVisitor;
    cpy_r_r93 = CPyStatics[4663]; /* 'enter_loop' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 314, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r95 = CPyStatic_renaming___globals;
    cpy_r_r96 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r97 = CPyDict_GetItem(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 313, CPyStatic_renaming___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r98[1] = {cpy_r_r94};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = _PyObject_Vectorcall(cpy_r_r97, cpy_r_r99, 1, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 314, CPyStatic_renaming___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r94);
    cpy_r_r101 = CPyStatics[4663]; /* 'enter_loop' */
    cpy_r_r102 = PyObject_SetAttr(cpy_r_r92, cpy_r_r101, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 314, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r104 = (PyObject *)CPyType_renaming___VariableRenameVisitor;
    cpy_r_r105 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 325, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r107 = CPyStatic_renaming___globals;
    cpy_r_r108 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r109 = CPyDict_GetItem(cpy_r_r107, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 324, CPyStatic_renaming___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r110[1] = {cpy_r_r106};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = _PyObject_Vectorcall(cpy_r_r109, cpy_r_r111, 1, 0);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 325, CPyStatic_renaming___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r106);
    cpy_r_r113 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r114 = PyObject_SetAttr(cpy_r_r104, cpy_r_r113, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 325, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r116 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r117 = PyTuple_Pack(1, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 412, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r118 = CPyStatics[588]; /* 'mypy.renaming' */
    cpy_r_r119 = (PyObject *)CPyType_renaming___LimitedVariableRenameVisitor_template;
    cpy_r_r120 = CPyType_FromTemplate(cpy_r_r119, cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 412, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r121 = CPyDef_renaming___LimitedVariableRenameVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", -1, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    cpy_r_r122 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r123 = CPyStatics[4675]; /* 'bound_vars' */
    cpy_r_r124 = CPyStatics[4322]; /* 'skipped' */
    cpy_r_r125 = CPyStatics[4672]; /* 'refs' */
    cpy_r_r126 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r127 = PyTuple_Pack(4, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 412, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    cpy_r_r128 = PyObject_SetAttr(cpy_r_r120, cpy_r_r122, cpy_r_r127);
    CPy_DECREF(cpy_r_r127);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 412, CPyStatic_renaming___globals);
        goto CPyL51;
    }
    CPyType_renaming___LimitedVariableRenameVisitor = (PyTypeObject *)cpy_r_r120;
    CPy_INCREF(CPyType_renaming___LimitedVariableRenameVisitor);
    cpy_r_r130 = CPyStatic_renaming___globals;
    cpy_r_r131 = CPyStatics[586]; /* 'LimitedVariableRenameVisitor' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r130, cpy_r_r131, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 412, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r134 = (PyObject *)CPyType_renaming___LimitedVariableRenameVisitor;
    cpy_r_r135 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 538, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    cpy_r_r137 = CPyStatic_renaming___globals;
    cpy_r_r138 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r139 = CPyDict_GetItem(cpy_r_r137, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 537, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r140[1] = {cpy_r_r136};
    cpy_r_r141 = (PyObject **)&cpy_r_r140;
    cpy_r_r142 = _PyObject_Vectorcall(cpy_r_r139, cpy_r_r141, 1, 0);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 538, CPyStatic_renaming___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r136);
    cpy_r_r143 = CPyStatics[4661]; /* 'enter_scope' */
    cpy_r_r144 = PyObject_SetAttr(cpy_r_r134, cpy_r_r143, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/renaming.py", "<module>", 538, CPyStatic_renaming___globals);
        goto CPyL45;
    }
    return 1;
CPyL45: ;
    cpy_r_r146 = 2;
    return cpy_r_r146;
CPyL46: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r120);
    goto CPyL45;
CPyL52: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL45;
}
