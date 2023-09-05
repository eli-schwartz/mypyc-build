#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
astmerge___NodeReplaceVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef astmerge___NodeReplaceVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___astmerge___NodeReplaceVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___astmerge___NodeReplaceVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *astmerge___NodeReplaceVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_astmerge___NodeReplaceVisitor(PyObject *cpy_r_replacements);

static PyObject *
astmerge___NodeReplaceVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_astmerge___NodeReplaceVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = astmerge___NodeReplaceVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_astmerge___NodeReplaceVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
astmerge___NodeReplaceVisitor_traverse(mypy___server___astmerge___NodeReplaceVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_replacements);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___astmerge___NodeReplaceVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___astmerge___NodeReplaceVisitorObject))));
    return 0;
}

static int
astmerge___NodeReplaceVisitor_clear(mypy___server___astmerge___NodeReplaceVisitorObject *self)
{
    Py_CLEAR(self->_replacements);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___astmerge___NodeReplaceVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___astmerge___NodeReplaceVisitorObject))));
    return 0;
}

static void
astmerge___NodeReplaceVisitor_dealloc(mypy___server___astmerge___NodeReplaceVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, astmerge___NodeReplaceVisitor_dealloc)
    astmerge___NodeReplaceVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem astmerge___NodeReplaceVisitor_vtable[128];
static CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_astmerge___NodeReplaceVisitor_trait_vtable_setup(void)
{
    CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__NodeVisitor_glue,
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
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_trait_vtable, astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_offset_table, astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_offset_table, astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_block__StatementVisitor_glue,
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
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_trait_vtable, astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_offset_table, astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_trait_vtable, astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_offset_table, astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem astmerge___NodeReplaceVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)astmerge___NodeReplaceVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor_____init__,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_block__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor_____init__,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_block,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___process_base_func,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___process_type_var_def,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___process_param_spec_def,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___process_type_var_tuple_def,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_ref_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_var,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___fixup,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___fixup_type,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___process_type_info,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info,
        (CPyVTableItem)CPyDef_astmerge___NodeReplaceVisitor___replace_statements,
    };
    memcpy(astmerge___NodeReplaceVisitor_vtable, astmerge___NodeReplaceVisitor_vtable_scratch, sizeof(astmerge___NodeReplaceVisitor_vtable));
    return 1;
}

static PyObject *
astmerge___NodeReplaceVisitor_get_replacements(mypy___server___astmerge___NodeReplaceVisitorObject *self, void *closure);
static int
astmerge___NodeReplaceVisitor_set_replacements(mypy___server___astmerge___NodeReplaceVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef astmerge___NodeReplaceVisitor_getseters[] = {
    {"replacements",
     (getter)astmerge___NodeReplaceVisitor_get_replacements, (setter)astmerge___NodeReplaceVisitor_set_replacements,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef astmerge___NodeReplaceVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded_func_def",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_overloaded_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_base_func",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___process_base_func,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_type_var_def",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___process_type_var_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_param_spec_def",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___process_param_spec_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_type_var_tuple_def",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___process_type_var_tuple_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ref_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_enum_call_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_enum_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fixup",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___fixup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fixup_and_reset_typeinfo",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fixup_type",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___fixup_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_type_info",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___process_type_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_synthetic_type_info",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___process_synthetic_type_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"replace_statements",
     (PyCFunction)CPyPy_astmerge___NodeReplaceVisitor___replace_statements,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_astmerge___NodeReplaceVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NodeReplaceVisitor",
    .tp_new = astmerge___NodeReplaceVisitor_new,
    .tp_dealloc = (destructor)astmerge___NodeReplaceVisitor_dealloc,
    .tp_traverse = (traverseproc)astmerge___NodeReplaceVisitor_traverse,
    .tp_clear = (inquiry)astmerge___NodeReplaceVisitor_clear,
    .tp_getset = astmerge___NodeReplaceVisitor_getseters,
    .tp_methods = astmerge___NodeReplaceVisitor_methods,
    .tp_init = astmerge___NodeReplaceVisitor_init,
    .tp_members = astmerge___NodeReplaceVisitor_members,
    .tp_basicsize = sizeof(mypy___server___astmerge___NodeReplaceVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___astmerge___NodeReplaceVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___server___astmerge___NodeReplaceVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_astmerge___NodeReplaceVisitor_template = &CPyType_astmerge___NodeReplaceVisitor_template_;

static PyObject *
astmerge___NodeReplaceVisitor_setup(PyTypeObject *type)
{
    mypy___server___astmerge___NodeReplaceVisitorObject *self;
    self = (mypy___server___astmerge___NodeReplaceVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = astmerge___NodeReplaceVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor(PyObject *cpy_r_replacements)
{
    PyObject *self = astmerge___NodeReplaceVisitor_setup(CPyType_astmerge___NodeReplaceVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_astmerge___NodeReplaceVisitor_____init__(self, cpy_r_replacements);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
astmerge___NodeReplaceVisitor_get_replacements(mypy___server___astmerge___NodeReplaceVisitorObject *self, void *closure)
{
    if (unlikely(self->_replacements == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'replacements' of 'NodeReplaceVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_replacements);
    PyObject *retval = self->_replacements;
    return retval;
}

static int
astmerge___NodeReplaceVisitor_set_replacements(mypy___server___astmerge___NodeReplaceVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeReplaceVisitor' object attribute 'replacements' cannot be deleted");
        return -1;
    }
    if (self->_replacements != NULL) {
        CPy_DECREF(self->_replacements);
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
    self->_replacements = tmp;
    return 0;
}

static int
astmerge___TypeReplaceVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef astmerge___TypeReplaceVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___astmerge___TypeReplaceVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___astmerge___TypeReplaceVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *astmerge___TypeReplaceVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_astmerge___TypeReplaceVisitor(PyObject *cpy_r_replacements);

static PyObject *
astmerge___TypeReplaceVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_astmerge___TypeReplaceVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = astmerge___TypeReplaceVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_astmerge___TypeReplaceVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
astmerge___TypeReplaceVisitor_traverse(mypy___server___astmerge___TypeReplaceVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_replacements);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___astmerge___TypeReplaceVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___astmerge___TypeReplaceVisitorObject))));
    return 0;
}

static int
astmerge___TypeReplaceVisitor_clear(mypy___server___astmerge___TypeReplaceVisitorObject *self)
{
    Py_CLEAR(self->_replacements);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___astmerge___TypeReplaceVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___astmerge___TypeReplaceVisitorObject))));
    return 0;
}

static void
astmerge___TypeReplaceVisitor_dealloc(mypy___server___astmerge___TypeReplaceVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, astmerge___TypeReplaceVisitor_dealloc)
    astmerge___TypeReplaceVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem astmerge___TypeReplaceVisitor_vtable[34];
static CPyVTableItem astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_astmerge___TypeReplaceVisitor_trait_vtable_setup(void)
{
    CPyVTableItem astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_offset_table, astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_trait_vtable, astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_offset_table, astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem astmerge___TypeReplaceVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)astmerge___TypeReplaceVisitor_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)astmerge___TypeReplaceVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor_____init__,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_instance,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_any,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_type_list,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type,
        (CPyVTableItem)CPyDef_astmerge___TypeReplaceVisitor___fixup,
    };
    memcpy(astmerge___TypeReplaceVisitor_vtable, astmerge___TypeReplaceVisitor_vtable_scratch, sizeof(astmerge___TypeReplaceVisitor_vtable));
    return 1;
}

static PyObject *
astmerge___TypeReplaceVisitor_get_replacements(mypy___server___astmerge___TypeReplaceVisitorObject *self, void *closure);
static int
astmerge___TypeReplaceVisitor_set_replacements(mypy___server___astmerge___TypeReplaceVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef astmerge___TypeReplaceVisitor_getseters[] = {
    {"replacements",
     (getter)astmerge___TypeReplaceVisitor_get_replacements, (setter)astmerge___TypeReplaceVisitor_set_replacements,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef astmerge___TypeReplaceVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raw_expression_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_raw_expression_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_list",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_type_list,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_argument",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_callable_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_ellipsis_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_placeholder_type",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___visit_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fixup",
     (PyCFunction)CPyPy_astmerge___TypeReplaceVisitor___fixup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_astmerge___TypeReplaceVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeReplaceVisitor",
    .tp_new = astmerge___TypeReplaceVisitor_new,
    .tp_dealloc = (destructor)astmerge___TypeReplaceVisitor_dealloc,
    .tp_traverse = (traverseproc)astmerge___TypeReplaceVisitor_traverse,
    .tp_clear = (inquiry)astmerge___TypeReplaceVisitor_clear,
    .tp_getset = astmerge___TypeReplaceVisitor_getseters,
    .tp_methods = astmerge___TypeReplaceVisitor_methods,
    .tp_init = astmerge___TypeReplaceVisitor_init,
    .tp_members = astmerge___TypeReplaceVisitor_members,
    .tp_basicsize = sizeof(mypy___server___astmerge___TypeReplaceVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___astmerge___TypeReplaceVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___server___astmerge___TypeReplaceVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_astmerge___TypeReplaceVisitor_template = &CPyType_astmerge___TypeReplaceVisitor_template_;

static PyObject *
astmerge___TypeReplaceVisitor_setup(PyTypeObject *type)
{
    mypy___server___astmerge___TypeReplaceVisitorObject *self;
    self = (mypy___server___astmerge___TypeReplaceVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = astmerge___TypeReplaceVisitor_vtable + 6;
    return (PyObject *)self;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor(PyObject *cpy_r_replacements)
{
    PyObject *self = astmerge___TypeReplaceVisitor_setup(CPyType_astmerge___TypeReplaceVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_astmerge___TypeReplaceVisitor_____init__(self, cpy_r_replacements);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
astmerge___TypeReplaceVisitor_get_replacements(mypy___server___astmerge___TypeReplaceVisitorObject *self, void *closure)
{
    if (unlikely(self->_replacements == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'replacements' of 'TypeReplaceVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_replacements);
    PyObject *retval = self->_replacements;
    return retval;
}

static int
astmerge___TypeReplaceVisitor_set_replacements(mypy___server___astmerge___TypeReplaceVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeReplaceVisitor' object attribute 'replacements' cannot be deleted");
        return -1;
    }
    if (self->_replacements != NULL) {
        CPy_DECREF(self->_replacements);
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
    self->_replacements = tmp;
    return 0;
}
static PyMethodDef astmergemodule_methods[] = {
    {"merge_asts", (PyCFunction)CPyPy_astmerge___merge_asts, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replacement_map_from_symbol_table", (PyCFunction)CPyPy_astmerge___replacement_map_from_symbol_table, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_nodes_in_ast", (PyCFunction)CPyPy_astmerge___replace_nodes_in_ast, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_nodes_in_symbol_table", (PyCFunction)CPyPy_astmerge___replace_nodes_in_symbol_table, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef astmergemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.astmerge",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    astmergemodule_methods
};

PyObject *CPyInit_mypy___server___astmerge(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___astmerge_internal) {
        Py_INCREF(CPyModule_mypy___server___astmerge_internal);
        return CPyModule_mypy___server___astmerge_internal;
    }
    CPyModule_mypy___server___astmerge_internal = PyModule_Create(&astmergemodule);
    if (unlikely(CPyModule_mypy___server___astmerge_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___astmerge_internal, "__name__");
    CPyStatic_astmerge___globals = PyModule_GetDict(CPyModule_mypy___server___astmerge_internal);
    if (unlikely(CPyStatic_astmerge___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_astmerge_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___astmerge_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___astmerge_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_astmerge___NodeReplaceVisitor);
    Py_CLEAR(CPyType_astmerge___TypeReplaceVisitor);
    return NULL;
}

char CPyDef_astmerge___merge_asts(PyObject *cpy_r_old, PyObject *cpy_r_old_symbols, PyObject *cpy_r_new, PyObject *cpy_r_new_symbols) {
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
    PyObject *cpy_r_replacement_map;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_node;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_new, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 129, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_old, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 129, CPyStatic_astmerge___globals);
        goto CPyL18;
    }
CPyL2: ;
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 129, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
CPyL5: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (cpy_r_r7) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 129, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_old, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 133, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
CPyL9: ;
    cpy_r_r10 = CPyDef_astmerge___replacement_map_from_symbol_table(cpy_r_old_symbols, cpy_r_new_symbols, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 132, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    cpy_r_replacement_map = cpy_r_r10;
    cpy_r_r11 = CPyDict_SetItem(cpy_r_replacement_map, cpy_r_new, cpy_r_old);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 136, CPyStatic_astmerge___globals);
        goto CPyL19;
    }
    cpy_r_r13 = CPyDef_astmerge___replace_nodes_in_ast(cpy_r_new, cpy_r_replacement_map);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 139, CPyStatic_astmerge___globals);
        goto CPyL19;
    }
    cpy_r_node = cpy_r_r13;
    cpy_r_r14 = cpy_r_node == cpy_r_old;
    CPy_DECREF(cpy_r_node);
    if (cpy_r_r14) {
        goto CPyL15;
    } else
        goto CPyL20;
CPyL13: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 140, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r16 = CPyDef_astmerge___replace_nodes_in_symbol_table(cpy_r_new_symbols, cpy_r_replacement_map);
    CPy_DECREF(cpy_r_replacement_map);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 144, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_replacement_map);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_replacement_map);
    goto CPyL13;
}

PyObject *CPyPy_astmerge___merge_asts(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"old", "old_symbols", "new", "new_symbols", 0};
    static CPyArg_Parser parser = {"OOOO:merge_asts", kwlist, 0};
    PyObject *obj_old;
    PyObject *obj_old_symbols;
    PyObject *obj_new;
    PyObject *obj_new_symbols;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_old, &obj_old_symbols, &obj_new, &obj_new_symbols)) {
        return NULL;
    }
    PyObject *arg_old;
    if (likely(Py_TYPE(obj_old) == CPyType_nodes___MypyFile))
        arg_old = obj_old;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_old); 
        goto fail;
    }
    PyObject *arg_old_symbols;
    if (likely(PyDict_Check(obj_old_symbols)))
        arg_old_symbols = obj_old_symbols;
    else {
        CPy_TypeError("dict", obj_old_symbols); 
        goto fail;
    }
    PyObject *arg_new;
    if (likely(Py_TYPE(obj_new) == CPyType_nodes___MypyFile))
        arg_new = obj_new;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_new); 
        goto fail;
    }
    PyObject *arg_new_symbols;
    if (likely(PyDict_Check(obj_new_symbols)))
        arg_new_symbols = obj_new_symbols;
    else {
        CPy_TypeError("dict", obj_new_symbols); 
        goto fail;
    }
    char retval = CPyDef_astmerge___merge_asts(arg_old, arg_old_symbols, arg_new, arg_new_symbols);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "merge_asts", 116, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___replacement_map_from_symbol_table(PyObject *cpy_r_old, PyObject *cpy_r_new, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_replacements;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_new_node;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    int64_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_type_repl;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 157, CPyStatic_astmerge___globals);
        goto CPyL76;
    }
    cpy_r_replacements = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_old);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_old);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 158, CPyStatic_astmerge___globals);
        goto CPyL77;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL78;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 158, CPyStatic_astmerge___globals, "str", cpy_r_r8);
        goto CPyL79;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___SymbolTableNode))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 158, CPyStatic_astmerge___globals, "mypy.nodes.SymbolTableNode", cpy_r_r9);
        goto CPyL80;
    }
    cpy_r_name = cpy_r_r10;
    cpy_r_node = cpy_r_r11;
    cpy_r_r12 = PyDict_Contains(cpy_r_new, cpy_r_name);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 159, CPyStatic_astmerge___globals);
        goto CPyL81;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL82;
    cpy_r_r15 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_kind;
    cpy_r_r16 = cpy_r_r15 == 4;
    if (cpy_r_r16) goto CPyL19;
    cpy_r_r17 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL83;
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r20 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 160, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r17);
        goto CPyL81;
    }
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 160, CPyStatic_astmerge___globals);
        goto CPyL81;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL82;
    cpy_r_r24 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 160, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r24);
        goto CPyL81;
    }
    cpy_r_r26 = CPY_GET_ATTR_TRAIT(cpy_r_r25, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 160, CPyStatic_astmerge___globals);
        goto CPyL81;
    }
CPyL14: ;
    cpy_r_r27 = CPyDef_mypy___util___get_prefix(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 160, CPyStatic_astmerge___globals);
        goto CPyL81;
    }
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r27, cpy_r_prefix);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL18;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 160, CPyStatic_astmerge___globals);
        goto CPyL81;
    }
CPyL18: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (!cpy_r_r33) goto CPyL82;
CPyL19: ;
    cpy_r_r34 = CPyDict_GetItem(cpy_r_new, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 162, CPyStatic_astmerge___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_nodes___SymbolTableNode))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 162, CPyStatic_astmerge___globals, "mypy.nodes.SymbolTableNode", cpy_r_r34);
        goto CPyL84;
    }
    cpy_r_new_node = cpy_r_r35;
    cpy_r_r36 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = PyObject_Type(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = PyObject_Type(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = PyObject_RichCompare(cpy_r_r37, cpy_r_r39, 2);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 164, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 164, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    if (!cpy_r_r41) goto CPyL86;
    cpy_r_r42 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_r42 != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL87;
    if (likely(cpy_r_r42 != Py_None))
        cpy_r_r45 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 165, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r42);
        goto CPyL85;
    }
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 165, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    cpy_r_r48 = cpy_r_r46;
    if (!cpy_r_r48) goto CPyL86;
    cpy_r_r49 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_r49 != cpy_r_r50;
    if (!cpy_r_r51) goto CPyL88;
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r52 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 166, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r49);
        goto CPyL85;
    }
    cpy_r_r53 = PyObject_IsTrue(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 166, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    cpy_r_r55 = cpy_r_r53;
    if (!cpy_r_r55) goto CPyL86;
    cpy_r_r56 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    if (likely(cpy_r_r56 != Py_None))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 167, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r56);
        goto CPyL85;
    }
    cpy_r_r58 = CPY_GET_ATTR_TRAIT(cpy_r_r57, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 167, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
CPyL34: ;
    cpy_r_r59 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(cpy_r_r59 != Py_None))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 167, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r59);
        goto CPyL89;
    }
    cpy_r_r61 = CPY_GET_ATTR_TRAIT(cpy_r_r60, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 167, CPyStatic_astmerge___globals);
        goto CPyL89;
    }
CPyL36: ;
    cpy_r_r62 = PyUnicode_Compare(cpy_r_r58, cpy_r_r61);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 == -1;
    if (!cpy_r_r63) goto CPyL39;
    cpy_r_r64 = PyErr_Occurred();
    cpy_r_r65 = cpy_r_r64 != NULL;
    if (!cpy_r_r65) goto CPyL39;
    cpy_r_r66 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 167, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
CPyL39: ;
    cpy_r_r67 = cpy_r_r62 == 0;
    if (!cpy_r_r67) goto CPyL86;
    cpy_r_r68 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_kind;
    cpy_r_r69 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_kind;
    cpy_r_r70 = cpy_r_r68 & 1;
    cpy_r_r71 = cpy_r_r70 != 0;
    if (!cpy_r_r71) goto CPyL42;
    cpy_r_r72 = CPyTagged_IsEq_(cpy_r_r68, cpy_r_r69);
    if (cpy_r_r72) {
        goto CPyL43;
    } else
        goto CPyL86;
CPyL42: ;
    cpy_r_r73 = cpy_r_r68 == cpy_r_r69;
    if (!cpy_r_r73) goto CPyL86;
CPyL43: ;
    cpy_r_r74 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r74);
    if (likely(cpy_r_r74 != Py_None))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 170, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r74);
        goto CPyL85;
    }
    cpy_r_r76 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    CPy_INCREF(cpy_r_r76);
    if (likely(cpy_r_r76 != Py_None))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 170, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r76);
        goto CPyL90;
    }
    cpy_r_r78 = CPyDict_SetItem(cpy_r_replacements, cpy_r_r77, cpy_r_r75);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 170, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    cpy_r_r80 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r81 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_r80)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    if (!cpy_r_r84) goto CPyL48;
    cpy_r_r85 = cpy_r_r84;
    goto CPyL49;
CPyL48: ;
    cpy_r_r86 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_r80)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    cpy_r_r85 = cpy_r_r89;
CPyL49: ;
    if (!cpy_r_r85) goto CPyL86;
    cpy_r_r90 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    cpy_r_r91 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r92 = (CPyPtr)&((PyObject *)cpy_r_r90)->ob_type;
    cpy_r_r93 = *(PyObject * *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 == cpy_r_r91;
    if (!cpy_r_r94) goto CPyL52;
    cpy_r_r95 = cpy_r_r94;
    goto CPyL53;
CPyL52: ;
    cpy_r_r96 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_r90)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    cpy_r_r95 = cpy_r_r99;
CPyL53: ;
    if (!cpy_r_r95) goto CPyL86;
    cpy_r_r100 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely((Py_TYPE(cpy_r_r100) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r100) == CPyType_nodes___TypeInfo)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 173, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r100);
        goto CPyL85;
    }
    cpy_r_r102 = ((mypy___nodes___TypeInfoObject *)cpy_r_r101)->_names;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "replacement_map_from_symbol_table", "TypeInfo", "names", 173, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r102);
CPyL56: ;
    cpy_r_r103 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    if (likely((Py_TYPE(cpy_r_r103) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r103) == CPyType_nodes___TypeInfo)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 173, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r103);
        goto CPyL91;
    }
    cpy_r_r105 = ((mypy___nodes___TypeInfoObject *)cpy_r_r104)->_names;
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "replacement_map_from_symbol_table", "TypeInfo", "names", 173, CPyStatic_astmerge___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r105);
CPyL58: ;
    cpy_r_r106 = CPyDef_astmerge___replacement_map_from_symbol_table(cpy_r_r102, cpy_r_r105, cpy_r_prefix);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 172, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    cpy_r_type_repl = cpy_r_r106;
    cpy_r_r107 = CPyDict_Update(cpy_r_replacements, cpy_r_type_repl);
    CPy_DECREF(cpy_r_type_repl);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 175, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    cpy_r_r109 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely((Py_TYPE(cpy_r_r109) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r109) == CPyType_nodes___TypeInfo)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 176, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r109);
        goto CPyL85;
    }
    cpy_r_r111 = ((mypy___nodes___TypeInfoObject *)cpy_r_r110)->_special_alias;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "replacement_map_from_symbol_table", "TypeInfo", "special_alias", 176, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r111);
CPyL62: ;
    cpy_r_r112 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r113 = cpy_r_r111 != cpy_r_r112;
    CPy_DECREF(cpy_r_r111);
    if (!cpy_r_r113) goto CPyL86;
    cpy_r_r114 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    if (likely((Py_TYPE(cpy_r_r114) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r114) == CPyType_nodes___TypeInfo)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 176, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r114);
        goto CPyL85;
    }
    cpy_r_r116 = ((mypy___nodes___TypeInfoObject *)cpy_r_r115)->_special_alias;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "replacement_map_from_symbol_table", "TypeInfo", "special_alias", 176, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r116);
CPyL65: ;
    cpy_r_r117 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r118 = cpy_r_r116 != cpy_r_r117;
    CPy_DECREF(cpy_r_r116);
    if (!cpy_r_r118) goto CPyL86;
    cpy_r_r119 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely((Py_TYPE(cpy_r_r119) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r119) == CPyType_nodes___TypeInfo)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 177, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r119);
        goto CPyL85;
    }
    cpy_r_r121 = ((mypy___nodes___TypeInfoObject *)cpy_r_r120)->_special_alias;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "replacement_map_from_symbol_table", "TypeInfo", "special_alias", 177, CPyStatic_astmerge___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r121);
CPyL68: ;
    if (likely(cpy_r_r121 != Py_None))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 177, CPyStatic_astmerge___globals, "mypy.nodes.TypeAlias", cpy_r_r121);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_node);
    cpy_r_r123 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_new_node)->_node;
    if (likely((Py_TYPE(cpy_r_r123) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r123) == CPyType_nodes___TypeInfo)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 177, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r123);
        goto CPyL92;
    }
    cpy_r_r125 = ((mypy___nodes___TypeInfoObject *)cpy_r_r124)->_special_alias;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "replacement_map_from_symbol_table", "TypeInfo", "special_alias", 177, CPyStatic_astmerge___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r125);
CPyL71: ;
    if (likely(cpy_r_r125 != Py_None))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 177, CPyStatic_astmerge___globals, "mypy.nodes.TypeAlias", cpy_r_r125);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_new_node);
    cpy_r_r127 = CPyDict_SetItem(cpy_r_replacements, cpy_r_r126, cpy_r_r122);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 177, CPyStatic_astmerge___globals);
        goto CPyL93;
    }
CPyL73: ;
    cpy_r_r129 = CPyDict_CheckSize(cpy_r_old, cpy_r_r3);
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 158, CPyStatic_astmerge___globals);
        goto CPyL93;
    } else
        goto CPyL2;
CPyL74: ;
    cpy_r_r130 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 158, CPyStatic_astmerge___globals);
        goto CPyL77;
    }
    return cpy_r_replacements;
CPyL76: ;
    cpy_r_r131 = NULL;
    return cpy_r_r131;
CPyL77: ;
    CPy_DecRef(cpy_r_replacements);
    goto CPyL76;
CPyL78: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL74;
CPyL79: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL76;
CPyL80: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL76;
CPyL81: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL76;
CPyL82: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL73;
CPyL83: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r17);
    goto CPyL73;
CPyL84: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_node);
    goto CPyL76;
CPyL85: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_new_node);
    goto CPyL76;
CPyL86: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_new_node);
    goto CPyL73;
CPyL87: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_new_node);
    CPy_DECREF(cpy_r_r42);
    goto CPyL73;
CPyL88: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_new_node);
    CPy_DECREF(cpy_r_r49);
    goto CPyL73;
CPyL89: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_new_node);
    CPy_DecRef(cpy_r_r58);
    goto CPyL76;
CPyL90: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_new_node);
    CPy_DecRef(cpy_r_r75);
    goto CPyL76;
CPyL91: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_new_node);
    CPy_DecRef(cpy_r_r102);
    goto CPyL76;
CPyL92: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_new_node);
    CPy_DecRef(cpy_r_r122);
    goto CPyL76;
CPyL93: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r4);
    goto CPyL76;
}

PyObject *CPyPy_astmerge___replacement_map_from_symbol_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"old", "new", "prefix", 0};
    static CPyArg_Parser parser = {"OOO:replacement_map_from_symbol_table", kwlist, 0};
    PyObject *obj_old;
    PyObject *obj_new;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_old, &obj_new, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_old;
    if (likely(PyDict_Check(obj_old)))
        arg_old = obj_old;
    else {
        CPy_TypeError("dict", obj_old); 
        goto fail;
    }
    PyObject *arg_new;
    if (likely(PyDict_Check(obj_new)))
        arg_new = obj_new;
    else {
        CPy_TypeError("dict", obj_new); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___replacement_map_from_symbol_table(arg_old, arg_new, arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "replacement_map_from_symbol_table", 147, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___replace_nodes_in_ast(PyObject *cpy_r_node, PyObject *cpy_r_replacements) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor(cpy_r_replacements);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_ast", 190, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    cpy_r_visitor = cpy_r_r0;
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_node, CPyType_nodes___SymbolNode, 4, mypy___nodes___SymbolNodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_node, cpy_r_visitor); /* accept */
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_ast", 191, CPyStatic_astmerge___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL2: ;
    cpy_r_r2 = CPyDict_Get(cpy_r_replacements, cpy_r_node, cpy_r_node);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_ast", 192, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_nodes___SymbolNode)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_ast", 192, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r2);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_astmerge___replace_nodes_in_ast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", "replacements", 0};
    static CPyArg_Parser parser = {"OO:replace_nodes_in_ast", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_replacements;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_replacements)) {
        return NULL;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_node); 
        goto fail;
    }
    PyObject *arg_replacements;
    if (likely(PyDict_Check(obj_replacements)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("dict", obj_replacements); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___replace_nodes_in_ast(arg_node, arg_replacements);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_ast", 181, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_replacements) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_replacements);
    if (((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements != NULL) {
        CPy_DECREF(((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements);
    }
    ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements = cpy_r_replacements;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "__init__", 207, CPyStatic_astmerge___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"replacements", 0};
    PyObject *obj_replacements;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_replacements)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_replacements;
    if (likely(PyDict_Check(obj_replacements)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("dict", obj_replacements); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor_____init__(arg_self, arg_replacements);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "__init__", 206, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_mypy_file", 210, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___MypyFile))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_mypy_file", 210, CPyStatic_astmerge___globals, "mypy.nodes.MypyFile", cpy_r_r0);
        goto CPyL5;
    }
    cpy_r_node = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_defs;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_astmerge___NodeReplaceVisitor___replace_statements(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_mypy_file", 211, CPyStatic_astmerge___globals);
        goto CPyL6;
    }
    CPy_DECREF(((mypy___nodes___MypyFileObject *)cpy_r_node)->_defs);
    ((mypy___nodes___MypyFileObject *)cpy_r_node)->_defs = cpy_r_r3;
    cpy_r_r5 = CPyDef_traverser___TraverserVisitor___visit_mypy_file(cpy_r_self, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_mypy_file", 212, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL5;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___MypyFile))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_mypy_file", 209, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_mypy_file__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_mypy_file__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___replace_statements(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_block", 215, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    CPy_DECREF(((mypy___nodes___BlockObject *)cpy_r_node)->_body);
    ((mypy___nodes___BlockObject *)cpy_r_node)->_body = cpy_r_r1;
    cpy_r_r3 = CPyDef_traverser___TraverserVisitor___visit_block(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_block", 216, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Block))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_block(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_block", 214, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_block__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_block(cpy_r_self, cpy_r_block);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_block__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_block__TraverserVisitor_glue(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_block__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def", 219, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___FuncDef))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_func_def", 219, CPyStatic_astmerge___globals, "mypy.nodes.FuncDef", cpy_r_r0);
        goto CPyL5;
    }
    cpy_r_node = cpy_r_r1;
    cpy_r_r2 = CPyDef_astmerge___NodeReplaceVisitor___process_base_func(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def", 220, CPyStatic_astmerge___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def", 221, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL5;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def", 218, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___process_base_func(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded_func_def", 224, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded_func_def", 225, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded_func_def", 223, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded_func_def__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded_func_def__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_overloaded_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded_func_def__StatementVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 229, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_node)->_info);
    ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info = cpy_r_r1;
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_defs;
    cpy_r_r4 = ((mypy___nodes___BlockObject *)cpy_r_r3)->_body;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_astmerge___NodeReplaceVisitor___replace_statements(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 230, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    cpy_r_r6 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_defs;
    CPy_DECREF(((mypy___nodes___BlockObject *)cpy_r_r6)->_body);
    ((mypy___nodes___BlockObject *)cpy_r_r6)->_body = cpy_r_r5;
    cpy_r_r8 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r8);
    cpy_r_info = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_type_vars;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL3: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL18;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___TypeVarLikeType)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_class_def", 232, CPyStatic_astmerge___globals, "mypy.types.TypeVarLikeType", cpy_r_r15);
        goto CPyL19;
    }
    cpy_r_tv = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType))
        cpy_r_r21 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_class_def", 234, CPyStatic_astmerge___globals, "mypy.types.TypeVarType", cpy_r_tv);
        goto CPyL19;
    }
    cpy_r_r22 = CPyDef_astmerge___NodeReplaceVisitor___process_type_var_def(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 234, CPyStatic_astmerge___globals);
        goto CPyL19;
    }
CPyL8: ;
    cpy_r_r23 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r23;
    goto CPyL3;
CPyL9: ;
    cpy_r_r24 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_info);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 231, CPyStatic_astmerge___globals);
        goto CPyL21;
    }
    if (!cpy_r_r24) goto CPyL22;
    cpy_r_r25 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_is_named_tuple;
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AttributeError("mypy/server/astmerge.py", "visit_class_def", "TypeInfo", "is_named_tuple", 236, CPyStatic_astmerge___globals);
        goto CPyL21;
    }
CPyL12: ;
    if (!cpy_r_r25) goto CPyL14;
CPyL13: ;
    cpy_r_r26 = CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(cpy_r_self, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 237, CPyStatic_astmerge___globals);
        goto CPyL17;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r27 = CPyDef_astmerge___NodeReplaceVisitor___process_type_info(cpy_r_self, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 239, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
CPyL15: ;
    cpy_r_r28 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 240, CPyStatic_astmerge___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL18: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL9;
CPyL19: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_tv);
    goto CPyL8;
CPyL21: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL15;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ClassDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def", 227, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_class_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___process_base_func(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___FuncBaseObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_base_func", 243, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    cpy_r_r2 = ((mypy___nodes___FuncBaseObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_base_func", 244, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    if (likely((Py_TYPE(cpy_r_r3) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r3) == CPyType_nodes___TypeInfo)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_base_func", 244, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r3);
        goto CPyL7;
    }
    CPy_DECREF(((mypy___nodes___FuncBaseObject *)cpy_r_node)->_info);
    ((mypy___nodes___FuncBaseObject *)cpy_r_node)->_info = cpy_r_r4;
    cpy_r_r6 = ((mypy___nodes___FuncBaseObject *)cpy_r_node)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = ((mypy___nodes___FuncBaseObject *)cpy_r_node)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_base_func", 247, CPyStatic_astmerge___globals, "mypy.types.ProperType", cpy_r_r9);
        goto CPyL7;
    }
    cpy_r_r11 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_base_func", 247, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___process_base_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:process_base_func", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely((Py_TYPE(obj_node) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncBase", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___process_base_func(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "process_base_func", 242, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___process_type_var_def(PyObject *cpy_r_self, PyObject *cpy_r_tv) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_value;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_tv)->_values;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_var_def", 250, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL10;
    }
    cpy_r_value = cpy_r_r7;
    cpy_r_r8 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_def", 251, CPyStatic_astmerge___globals);
        goto CPyL10;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = ((mypy___types___TypeVarTypeObject *)cpy_r_tv)->_upper_bound;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_def", 252, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    cpy_r_r12 = ((mypy___types___TypeVarTypeObject *)cpy_r_tv)->_default;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_def", 253, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL9: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___process_type_var_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tv", 0};
    static CPyArg_Parser parser = {"O:process_type_var_def", kwlist, 0};
    PyObject *obj_tv;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tv)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_tv;
    if (likely(Py_TYPE(obj_tv) == CPyType_types___TypeVarType))
        arg_tv = obj_tv;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_tv); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___process_type_var_def(arg_self, arg_tv);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_def", 249, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___process_param_spec_def(PyObject *cpy_r_self, PyObject *cpy_r_tv) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_tv)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_param_spec_def", 256, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypy___types___ParamSpecTypeObject *)cpy_r_tv)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_param_spec_def", 257, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___process_param_spec_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tv", 0};
    static CPyArg_Parser parser = {"O:process_param_spec_def", kwlist, 0};
    PyObject *obj_tv;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tv)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_tv;
    if (likely(Py_TYPE(obj_tv) == CPyType_types___ParamSpecType))
        arg_tv = obj_tv;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_tv); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___process_param_spec_def(arg_self, arg_tv);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "process_param_spec_def", 255, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___process_type_var_tuple_def(PyObject *cpy_r_self, PyObject *cpy_r_tv) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_tv)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_tuple_def", 260, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_tv)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_tuple_def", 261, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___process_type_var_tuple_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tv", 0};
    static CPyArg_Parser parser = {"O:process_type_var_tuple_def", kwlist, 0};
    PyObject *obj_tv;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tv)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_tv;
    if (likely(Py_TYPE(obj_tv) == CPyType_types___TypeVarTupleType))
        arg_tv = obj_tv;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_tv); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___process_type_var_tuple_def(arg_self, arg_tv);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "process_type_var_tuple_def", 259, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_assignment_stmt", 264, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_assignment_stmt", 265, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssignmentStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assignment_stmt", 263, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assignment_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assignment_stmt__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_ref_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_name_expr", 270, CPyStatic_astmerge___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NameExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_name_expr", 269, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_node)->_def_var;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___nodes___MemberExprObject *)cpy_r_node)->_def_var;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_member_expr", 274, CPyStatic_astmerge___globals, "mypy.nodes.Var", cpy_r_r3);
        goto CPyL8;
    }
    cpy_r_r5 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr", 274, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___Var))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_member_expr", 274, CPyStatic_astmerge___globals, "mypy.nodes.Var", cpy_r_r5);
        goto CPyL8;
    }
    CPy_DECREF(((mypy___nodes___MemberExprObject *)cpy_r_node)->_def_var);
    ((mypy___nodes___MemberExprObject *)cpy_r_node)->_def_var = cpy_r_r6;
CPyL5: ;
    cpy_r_r8 = CPyDef_astmerge___NodeReplaceVisitor___visit_ref_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr", 275, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    cpy_r_r9 = CPyDef_traverser___TraverserVisitor___visit_member_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr", 276, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___MemberExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr", 272, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_node)->_node;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypy___nodes___RefExprObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_ref_expr", 280, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_ref_expr", 280, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    CPy_DECREF(((mypy___nodes___RefExprObject *)cpy_r_node)->_node);
    ((mypy___nodes___RefExprObject *)cpy_r_node)->_node = cpy_r_r5;
    cpy_r_r7 = ((mypy___nodes___RefExprObject *)cpy_r_node)->_node;
    cpy_r_r8 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = ((mypy___nodes___RefExprObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___Var))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_ref_expr", 283, CPyStatic_astmerge___globals, "mypy.nodes.Var", cpy_r_r12);
        goto CPyL7;
    }
    cpy_r_r14 = CPyDef_nodes___Var___accept(cpy_r_r13, cpy_r_self);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_ref_expr", 283, CPyStatic_astmerge___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL8: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL6;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_ref_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely((Py_TYPE(obj_node) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_node) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_node) == CPyType_nodes___RefExpr)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_ref_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_ref_expr", 278, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_namedtuple_expr", 286, CPyStatic_astmerge___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_namedtuple_expr", 287, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    CPy_DECREF(((mypy___nodes___NamedTupleExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___NamedTupleExprObject *)cpy_r_node)->_info = cpy_r_r2;
    cpy_r_r4 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_namedtuple_expr", 288, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL5: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NamedTupleExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_namedtuple_expr", 285, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_namedtuple_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_cast_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_cast_expr", 291, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___CastExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_cast_expr", 292, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___CastExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_cast_expr", 290, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_cast_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_cast_expr__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_cast_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_assert_type_expr", 295, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_assert_type_expr", 296, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssertTypeExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assert_type_expr", 294, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assert_type_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assert_type_expr__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assert_type_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_super_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_super_expr", 299, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___SuperExprObject *)cpy_r_node)->_info;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL6;
    cpy_r_r4 = ((mypy___nodes___SuperExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_super_expr", 301, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r4);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_super_expr", 301, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    if (likely((Py_TYPE(cpy_r_r6) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeInfo)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_super_expr", 301, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r6);
        goto CPyL7;
    }
    CPy_DECREF(((mypy___nodes___SuperExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___SuperExprObject *)cpy_r_node)->_info = cpy_r_r7;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___SuperExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_super_expr", 298, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_super_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_super_expr__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_super_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_super_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_call_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_call_expr", 304, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed;
    cpy_r_r2 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r3 = CPy_TypeCheck(cpy_r_r1, cpy_r_r2);
    if (!cpy_r_r3) goto CPyL6;
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_nodes___SymbolNode)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_call_expr", 306, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r4);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_call_expr", 306, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    if (PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL6456;
    if (cpy_r_r6 == Py_None)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL6456;
    CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_call_expr", 306, CPyStatic_astmerge___globals, "mypy.nodes.Expression or None", cpy_r_r6);
    goto CPyL7;
__LL6456: ;
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed = cpy_r_r7;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___CallExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_call_expr", 303, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_call_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_call_expr__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL12;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 309, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r0);
        goto CPyL11;
    }
    cpy_r_r4 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 309, CPyStatic_astmerge___globals);
        goto CPyL11;
    }
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 310, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r5);
        goto CPyL11;
    }
    cpy_r_r7 = CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 310, CPyStatic_astmerge___globals);
        goto CPyL11;
    }
    CPy_DECREF(((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_info = cpy_r_r7;
    cpy_r_r9 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 311, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r9);
        goto CPyL11;
    }
    cpy_r_r11 = CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 311, CPyStatic_astmerge___globals);
        goto CPyL11;
    }
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_old_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 312, CPyStatic_astmerge___globals);
        goto CPyL11;
    }
    cpy_r_r14 = CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 313, CPyStatic_astmerge___globals);
        goto CPyL11;
    } else
        goto CPyL13;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL13: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL10;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NewTypeExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr", 308, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___LambdaExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_lambda_expr", 316, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    if (likely((Py_TYPE(cpy_r_r1) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r1) == CPyType_nodes___TypeInfo)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_lambda_expr", 316, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r1);
        goto CPyL4;
    }
    CPy_DECREF(((mypy___nodes___LambdaExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___LambdaExprObject *)cpy_r_node)->_info = cpy_r_r2;
    cpy_r_r4 = CPyDef_traverser___TraverserVisitor___visit_lambda_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_lambda_expr", 317, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___LambdaExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_lambda_expr", 315, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_lambda_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_lambda_expr__TraverserVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_lambda_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_expr", 320, CPyStatic_astmerge___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___TypedDictExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_expr", 321, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    CPy_DECREF(((mypy___nodes___TypedDictExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___TypedDictExprObject *)cpy_r_node)->_info = cpy_r_r2;
    cpy_r_r4 = ((mypy___nodes___TypedDictExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_expr", 322, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL5: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypedDictExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_expr", 319, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_typeddict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_enum_call_expr", 325, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    CPy_DECREF(((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_info = cpy_r_r1;
    cpy_r_r3 = ((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_enum_call_expr", 326, CPyStatic_astmerge___globals);
        goto CPyL4;
    }
    cpy_r_r5 = CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_enum_call_expr", 327, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_enum_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___EnumCallExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_enum_call_expr", 324, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_enum_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_enum_call_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_enum_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_enum_call_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___TypeAliasExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_expr", 330, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_expr", 331, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypeAliasExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_expr", 329, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_expr__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___VarObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_var", 336, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    if (likely((Py_TYPE(cpy_r_r1) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r1) == CPyType_nodes___TypeInfo)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_var", 336, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r1);
        goto CPyL5;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_node)->_info);
    ((mypy___nodes___VarObject *)cpy_r_node)->_info = cpy_r_r2;
    cpy_r_r4 = ((mypy___nodes___VarObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_var", 337, CPyStatic_astmerge___globals);
        goto CPyL5;
    }
    cpy_r_r6 = CPyDef_mypy___visitor___NodeVisitor___visit_var(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_var", 338, CPyStatic_astmerge___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL4;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Var))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_var(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_var", 335, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_var__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_var(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_var__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_var__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_var__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_v;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___TypeAliasObject *)cpy_r_node)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias", 341, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypy___nodes___TypeAliasObject *)cpy_r_node)->_alias_tvars;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___TypeVarLikeType)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_type_alias", 342, CPyStatic_astmerge___globals, "mypy.types.TypeVarLikeType", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_v = cpy_r_r9;
    cpy_r_r10 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_v);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias", 343, CPyStatic_astmerge___globals);
        goto CPyL10;
    }
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    cpy_r_r12 = CPyDef_mypy___visitor___NodeVisitor___visit_type_alias(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias", 344, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL11;
CPyL7: ;
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
CPyL11: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL7;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypeAlias))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeAlias", obj_node); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias", 340, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___visit_type_alias__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAlias))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAlias", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___visit_type_alias__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias__NodeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___fixup(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_new;
    tuple_T0 cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_skip_slots;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
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
    tuple_T1O cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup", "NodeReplaceVisitor", "replacements", 349, CPyStatic_astmerge___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 349, CPyStatic_astmerge___globals);
        goto CPyL22;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL21;
    cpy_r_r4 = ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup", "NodeReplaceVisitor", "replacements", 350, CPyStatic_astmerge___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_node);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 350, CPyStatic_astmerge___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_nodes___SymbolNode)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup", 350, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r5);
        goto CPyL22;
    }
    cpy_r_new = cpy_r_r6;
    cpy_r_r7.empty_struct_error_flag = 0;
    cpy_r_r8 = PyTuple_New(0);
    if (unlikely(cpy_r_r8 == NULL))
        CPyError_OutOfMemory();
    cpy_r_skip_slots = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL9;
CPyL8: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    cpy_r_r13 = cpy_r_r17;
CPyL9: ;
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r18 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_new)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL12;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL13;
CPyL12: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_new)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL13: ;
    if (cpy_r_r22) {
        goto CPyL23;
    } else
        goto CPyL19;
CPyL14: ;
    cpy_r_r27 = CPyStatics[4165]; /* 'special_alias' */
    cpy_r_r28.f0 = cpy_r_r27;
    CPy_INCREF(cpy_r_r28.f0);
    cpy_r_r29 = PyTuple_New(1);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6457 = cpy_r_r28.f0;
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp6457);
    cpy_r_skip_slots = cpy_r_r29;
    if (likely((Py_TYPE(cpy_r_new) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_new) == CPyType_nodes___TypeInfo)))
        cpy_r_r30 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup", 356, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_new);
        goto CPyL24;
    }
    cpy_r_r31 = ((mypy___nodes___TypeInfoObject *)cpy_r_r30)->_special_alias;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup", "TypeInfo", "special_alias", 356, CPyStatic_astmerge___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r31);
CPyL16: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r32 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup", 356, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL25;
    }
    cpy_r_r33 = ((mypy___nodes___TypeInfoObject *)cpy_r_r32)->_special_alias;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup", "TypeInfo", "special_alias", 356, CPyStatic_astmerge___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r33);
CPyL18: ;
    cpy_r_r34 = 2;
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_mypy___util___replace_object_state(cpy_r_r31, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 356, CPyStatic_astmerge___globals);
        goto CPyL24;
    }
CPyL19: ;
    cpy_r_r37 = 2;
    cpy_r_r38 = CPyDef_mypy___util___replace_object_state(cpy_r_new, cpy_r_node, cpy_r_r37, cpy_r_skip_slots);
    CPy_DECREF(cpy_r_skip_slots);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 357, CPyStatic_astmerge___globals);
        goto CPyL26;
    }
    return cpy_r_new;
CPyL21: ;
    CPy_INCREF(cpy_r_node);
    return cpy_r_node;
CPyL22: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL23: ;
    CPy_DECREF(cpy_r_skip_slots);
    goto CPyL14;
CPyL24: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_skip_slots);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_skip_slots);
    CPy_DecRef(cpy_r_r31);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL22;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___fixup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:fixup", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___fixup(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 348, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", "NodeReplaceVisitor", "replacements", 367, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 367, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL17;
    cpy_r_r4 = ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", "NodeReplaceVisitor", "replacements", 370, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_node);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 370, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_nodes___SymbolNode)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 370, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_new = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_new)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL9;
CPyL8: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_new)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    cpy_r_r11 = cpy_r_r15;
CPyL9: ;
    if (cpy_r_r11) {
        goto CPyL12;
    } else
        goto CPyL21;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 371, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r17 = CPyStatic_typestate___type_state;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL22;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 372, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL15: ;
    if (likely((Py_TYPE(cpy_r_new) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_new) == CPyType_nodes___TypeInfo)))
        cpy_r_r19 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 372, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_new);
        goto CPyL20;
    }
    cpy_r_r20 = CPyDef_typestate___TypeState___reset_all_subtype_caches_for(cpy_r_r17, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 372, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
CPyL17: ;
    cpy_r_r21 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 373, CPyStatic_astmerge___globals);
        goto CPyL20;
    }
    if (likely((Py_TYPE(cpy_r_r21) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r21) == CPyType_nodes___TypeInfo)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 373, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r21);
        goto CPyL20;
    }
    return cpy_r_r22;
CPyL20: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL21: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL10;
CPyL22: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL13;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:fixup_and_reset_typeinfo", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely((Py_TYPE(obj_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_node) == CPyType_nodes___TypeInfo)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___fixup_and_reset_typeinfo(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "fixup_and_reset_typeinfo", 361, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___fixup_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_typ != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL5;
    CPy_INCREF(cpy_r_typ);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r2 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup_type", 377, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL6;
    }
    cpy_r_r3 = ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup_type", "NodeReplaceVisitor", "replacements", 377, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = CPyDef_astmerge___TypeReplaceVisitor(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_type", 377, CPyStatic_astmerge___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_r4); /* accept */
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup_type", 377, CPyStatic_astmerge___globals);
        goto CPyL6;
    } else
        goto CPyL8;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL8: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___fixup_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:fixup_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (PyObject_TypeCheck(obj_typ, CPyType_types___Type))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL6458;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL6458;
    CPy_TypeError("mypy.types.Type or None", obj_typ); 
    goto fail;
__LL6458: ;
    char retval = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "fixup_type", 375, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___process_type_info(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_target;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
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
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_i;
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
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_info == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    return 1;
CPyL2: ;
    if (likely(cpy_r_info != Py_None))
        cpy_r_r2 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 382, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r3 = ((mypy___nodes___TypeInfoObject *)cpy_r_r2)->_declared_metaclass;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "declared_metaclass", 382, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 382, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_info != Py_None))
        cpy_r_r5 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 383, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_metaclass_type;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "metaclass_type", 383, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 383, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_info != Py_None))
        cpy_r_r8 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 384, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r9 = ((mypy___nodes___TypeInfoObject *)cpy_r_r8)->__promote;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "_promote", 384, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = 0;
CPyL11: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL65;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___ProperType)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 384, CPyStatic_astmerge___globals, "mypy.types.ProperType", cpy_r_r15);
        goto CPyL66;
    }
    cpy_r_target = cpy_r_r16;
    cpy_r_r17 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_target);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 385, CPyStatic_astmerge___globals);
        goto CPyL66;
    }
    cpy_r_r18 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r18;
    goto CPyL11;
CPyL15: ;
    if (likely(cpy_r_info != Py_None))
        cpy_r_r19 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 386, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r20 = ((mypy___nodes___TypeInfoObject *)cpy_r_r19)->_tuple_type;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "tuple_type", 386, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 386, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_info != Py_None))
        cpy_r_r22 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 387, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r23 = ((mypy___nodes___TypeInfoObject *)cpy_r_r22)->_typeddict_type;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "typeddict_type", 387, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r23);
CPyL20: ;
    cpy_r_r24 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 387, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_info != Py_None))
        cpy_r_r25 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 388, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r26 = ((mypy___nodes___TypeInfoObject *)cpy_r_r25)->_special_alias;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "special_alias", 388, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r26);
CPyL23: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    CPy_DECREF(cpy_r_r26);
    if (!cpy_r_r28) goto CPyL28;
    if (likely(cpy_r_info != Py_None))
        cpy_r_r29 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 389, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_special_alias;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "special_alias", 389, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
CPyL26: ;
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 389, CPyStatic_astmerge___globals, "mypy.nodes.TypeAlias", cpy_r_r30);
        goto CPyL64;
    }
    cpy_r_r32 = ((mypy___nodes___TypeAliasObject *)cpy_r_r31)->_target;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 389, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
CPyL28: ;
    CPy_INCREF(cpy_r_info);
    if (likely(cpy_r_info != Py_None))
        cpy_r_r34 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 390, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r35 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 390, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    if (likely((Py_TYPE(cpy_r_r35) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r35) == CPyType_nodes___TypeInfo)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 390, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r35);
        goto CPyL64;
    }
    if (likely(cpy_r_info != Py_None))
        cpy_r_r37 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 390, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL67;
    }
    cpy_r_r38 = ((mypy___nodes___TypeInfoObject *)cpy_r_r37)->_defn;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "defn", 390, CPyStatic_astmerge___globals);
        goto CPyL67;
    }
CPyL33: ;
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_r38)->_info);
    ((mypy___nodes___ClassDefObject *)cpy_r_r38)->_info = cpy_r_r36;
    if (likely(cpy_r_info != Py_None))
        cpy_r_r40 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 391, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL64;
    }
    cpy_r_r41 = ((mypy___nodes___TypeInfoObject *)cpy_r_r40)->_names;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "names", 391, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r41);
CPyL35: ;
    cpy_r_r42 = ((mypy___server___astmerge___NodeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "NodeReplaceVisitor", "replacements", 391, CPyStatic_astmerge___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r42);
CPyL36: ;
    cpy_r_r43 = CPyDef_astmerge___replace_nodes_in_symbol_table(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 391, CPyStatic_astmerge___globals);
        goto CPyL64;
    }
    cpy_r_r44 = 0;
    cpy_r_i = 0;
    if (likely(cpy_r_info != Py_None))
        cpy_r_r45 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 392, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL69;
    }
    cpy_r_r46 = ((mypy___nodes___TypeInfoObject *)cpy_r_r45)->_mro;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "mro", 392, CPyStatic_astmerge___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r46);
CPyL39: ;
    cpy_r_r47 = 0;
CPyL40: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL70;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_r46, cpy_r_r47);
    if (likely((Py_TYPE(cpy_r_r52) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r52) == CPyType_nodes___TypeInfo)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 392, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r52);
        goto CPyL71;
    }
    cpy_r_item = cpy_r_r53;
    CPy_DECREF(cpy_r_item);
    if (likely(cpy_r_info != Py_None))
        cpy_r_r54 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL71;
    }
    cpy_r_r55 = ((mypy___nodes___TypeInfoObject *)cpy_r_r54)->_mro;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "mro", 393, CPyStatic_astmerge___globals);
        goto CPyL71;
    }
CPyL44: ;
    cpy_r_r56 = CPyList_GetItem(cpy_r_r55, cpy_r_i);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals);
        goto CPyL71;
    }
    if (likely((Py_TYPE(cpy_r_r56) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r56) == CPyType_nodes___TypeInfo)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r56);
        goto CPyL71;
    }
    cpy_r_r58 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals);
        goto CPyL71;
    }
    if (likely((Py_TYPE(cpy_r_r58) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r58) == CPyType_nodes___TypeInfo)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r58);
        goto CPyL71;
    }
    if (likely(cpy_r_info != Py_None))
        cpy_r_r60 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL72;
    }
    cpy_r_r61 = ((mypy___nodes___TypeInfoObject *)cpy_r_r60)->_mro;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "mro", 393, CPyStatic_astmerge___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r61);
CPyL50: ;
    cpy_r_r62 = CPyList_SetItem(cpy_r_r61, cpy_r_i, cpy_r_r59);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 393, CPyStatic_astmerge___globals);
        goto CPyL73;
    }
    cpy_r_r63 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r63;
    cpy_r_i = cpy_r_r63;
    cpy_r_r64 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r64;
    goto CPyL40;
CPyL52: ;
    cpy_r_r65 = 0;
    cpy_r_i = 0;
    if (likely(cpy_r_info != Py_None))
        cpy_r_r66 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 394, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL69;
    }
    cpy_r_r67 = ((mypy___nodes___TypeInfoObject *)cpy_r_r66)->_bases;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "bases", 394, CPyStatic_astmerge___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r67);
CPyL54: ;
    cpy_r_r68 = 0;
CPyL55: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL74;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_r67, cpy_r_r68);
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_types___Instance))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 394, CPyStatic_astmerge___globals, "mypy.types.Instance", cpy_r_r73);
        goto CPyL75;
    }
    cpy_r_base = cpy_r_r74;
    CPy_DECREF(cpy_r_base);
    if (likely(cpy_r_info != Py_None))
        cpy_r_r75 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 395, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL75;
    }
    cpy_r_r76 = ((mypy___nodes___TypeInfoObject *)cpy_r_r75)->_bases;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_type_info", "TypeInfo", "bases", 395, CPyStatic_astmerge___globals);
        goto CPyL75;
    }
CPyL59: ;
    cpy_r_r77 = CPyList_GetItem(cpy_r_r76, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 395, CPyStatic_astmerge___globals);
        goto CPyL76;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_types___Instance))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_type_info", 395, CPyStatic_astmerge___globals, "mypy.types.Instance", cpy_r_r77);
        goto CPyL76;
    }
    cpy_r_r79 = CPyDef_astmerge___NodeReplaceVisitor___fixup_type(cpy_r_self, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 395, CPyStatic_astmerge___globals);
        goto CPyL76;
    }
    cpy_r_r80 = cpy_r_r65 + 2;
    cpy_r_r65 = cpy_r_r80;
    cpy_r_i = cpy_r_r80;
    cpy_r_r81 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r81;
    goto CPyL55;
CPyL63: ;
    return 1;
CPyL64: ;
    cpy_r_r82 = 2;
    return cpy_r_r82;
CPyL65: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL15;
CPyL66: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL64;
CPyL69: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL64;
CPyL70: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r46);
    goto CPyL52;
CPyL71: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r46);
    goto CPyL64;
CPyL72: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r59);
    goto CPyL64;
CPyL73: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL64;
CPyL74: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r67);
    goto CPyL63;
CPyL75: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r67);
    goto CPyL64;
CPyL76: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL64;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___process_type_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:process_type_info", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if ((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo))
        arg_info = obj_info;
    else {
        arg_info = NULL;
    }
    if (arg_info != NULL) goto __LL6459;
    if (obj_info == Py_None)
        arg_info = obj_info;
    else {
        arg_info = NULL;
    }
    if (arg_info != NULL) goto __LL6459;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_info); 
    goto fail;
__LL6459: ;
    char retval = CPyDef_astmerge___NodeReplaceVisitor___process_type_info(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "process_type_info", 379, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    char cpy_r_r0;
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
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyDef_astmerge___NodeReplaceVisitor___process_type_info(cpy_r_self, cpy_r_info);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 401, CPyStatic_astmerge___globals);
        goto CPyL15;
    }
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "process_synthetic_type_info", "TypeInfo", "names", 402, CPyStatic_astmerge___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 402, CPyStatic_astmerge___globals);
        goto CPyL16;
    }
CPyL3: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL17;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 402, CPyStatic_astmerge___globals, "str", cpy_r_r9);
        goto CPyL18;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___SymbolTableNode))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 402, CPyStatic_astmerge___globals, "mypy.nodes.SymbolTableNode", cpy_r_r10);
        goto CPyL19;
    }
    cpy_r_name = cpy_r_r11;
    CPy_DECREF(cpy_r_name);
    cpy_r_node = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL20;
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r16 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 403, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r13);
        goto CPyL21;
    }
    cpy_r_r17 = PyObject_IsTrue(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 403, CPyStatic_astmerge___globals);
        goto CPyL21;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL22;
    cpy_r_r20 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_node);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 404, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r20);
        goto CPyL23;
    }
    cpy_r_r22 = CPY_GET_METHOD_TRAIT(cpy_r_r21, CPyType_nodes___SymbolNode, 4, mypy___nodes___SymbolNodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r21, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 404, CPyStatic_astmerge___globals);
        goto CPyL23;
    } else
        goto CPyL24;
CPyL12: ;
    cpy_r_r23 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 402, CPyStatic_astmerge___globals);
        goto CPyL23;
    } else
        goto CPyL3;
CPyL13: ;
    cpy_r_r24 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 402, CPyStatic_astmerge___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL20: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_node);
    goto CPyL15;
CPyL22: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL12;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL24: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL12;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___process_synthetic_type_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:process_synthetic_type_info", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_astmerge___NodeReplaceVisitor___process_synthetic_type_info(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "process_synthetic_type_info", 397, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___NodeReplaceVisitor___replace_statements(PyObject *cpy_r_self, PyObject *cpy_r_nodes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_statements", 407, CPyStatic_astmerge___globals);
        goto CPyL12;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL11;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Statement)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_statements", 408, CPyStatic_astmerge___globals, "mypy.nodes.Statement", cpy_r_r6);
        goto CPyL13;
    }
    cpy_r_node = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r9 = CPy_TypeCheck(cpy_r_node, cpy_r_r8);
    if (!cpy_r_r9) goto CPyL9;
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___SymbolNode)))
        cpy_r_r10 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_statements", 410, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL13;
    }
    cpy_r_r11 = CPyDef_astmerge___NodeReplaceVisitor___fixup(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_statements", 410, CPyStatic_astmerge___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_nodes___Statement)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_statements", 410, CPyStatic_astmerge___globals, "mypy.nodes.Statement", cpy_r_r11);
        goto CPyL13;
    }
    cpy_r_node = cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = PyList_Append(cpy_r_result, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_statements", 411, CPyStatic_astmerge___globals);
        goto CPyL13;
    }
    cpy_r_r15 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r15;
    goto CPyL2;
CPyL11: ;
    return cpy_r_result;
CPyL12: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL13: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL12;
}

PyObject *CPyPy_astmerge___NodeReplaceVisitor___replace_statements(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"nodes", 0};
    static CPyArg_Parser parser = {"O:replace_statements", kwlist, 0};
    PyObject *obj_nodes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_nodes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___NodeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.NodeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_nodes;
    if (likely(PyList_Check(obj_nodes)))
        arg_nodes = obj_nodes;
    else {
        CPy_TypeError("list", obj_nodes); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___NodeReplaceVisitor___replace_statements(arg_self, arg_nodes);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "replace_statements", 406, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_replacements) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_replacements);
    if (((mypy___server___astmerge___TypeReplaceVisitorObject *)cpy_r_self)->_replacements != NULL) {
        CPy_DECREF(((mypy___server___astmerge___TypeReplaceVisitorObject *)cpy_r_self)->_replacements);
    }
    ((mypy___server___astmerge___TypeReplaceVisitorObject *)cpy_r_self)->_replacements = cpy_r_replacements;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "__init__", 424, CPyStatic_astmerge___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"replacements", 0};
    PyObject *obj_replacements;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_replacements)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_replacements;
    if (likely(PyDict_Check(obj_replacements)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("dict", obj_replacements); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor_____init__(arg_self, arg_replacements);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "__init__", 423, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
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
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_astmerge___TypeReplaceVisitor___fixup(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_instance", 427, CPyStatic_astmerge___globals);
        goto CPyL12;
    }
    if (likely((Py_TYPE(cpy_r_r1) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r1) == CPyType_nodes___TypeInfo)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_instance", 427, CPyStatic_astmerge___globals, "mypy.nodes.TypeInfo", cpy_r_r1);
        goto CPyL12;
    }
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_typ)->_type);
    ((mypy___types___InstanceObject *)cpy_r_typ)->_type = cpy_r_r2;
    cpy_r_r4 = ((mypy___types___InstanceObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_instance", 428, CPyStatic_astmerge___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_instance", 428, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_arg = cpy_r_r11;
    cpy_r_r12 = CPY_GET_METHOD(cpy_r_arg, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_arg, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_instance", 429, CPyStatic_astmerge___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL7: ;
    cpy_r_r13 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r13;
    goto CPyL3;
CPyL8: ;
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_typ)->_last_known_value;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_r14 != cpy_r_r15;
    CPy_DECREF(cpy_r_r14);
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_typ)->_last_known_value;
    CPy_INCREF(cpy_r_r17);
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_instance", 431, CPyStatic_astmerge___globals, "mypy.types.LiteralType", cpy_r_r17);
        goto CPyL12;
    }
    cpy_r_r19 = CPyDef_types___LiteralType___accept(cpy_r_r18, cpy_r_self);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_instance", 431, CPyStatic_astmerge___globals);
        goto CPyL12;
    } else
        goto CPyL16;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL13: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL8;
CPyL14: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL7;
CPyL16: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL11;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Instance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Instance", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_instance(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_instance", 426, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 434, CPyStatic_astmerge___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 435, CPyStatic_astmerge___globals, "mypy.nodes.TypeAlias", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = CPyDef_astmerge___TypeReplaceVisitor___fixup(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 435, CPyStatic_astmerge___globals);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeAlias))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 435, CPyStatic_astmerge___globals, "mypy.nodes.TypeAlias", cpy_r_r6);
        goto CPyL12;
    }
    CPy_DECREF(((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias);
    ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias = cpy_r_r7;
    cpy_r_r9 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL7: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL13;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___Type)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 436, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_arg = cpy_r_r16;
    cpy_r_r17 = CPY_GET_METHOD(cpy_r_arg, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_arg, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 437, CPyStatic_astmerge___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL10: ;
    cpy_r_r18 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r18;
    goto CPyL7;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL13: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL10;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeAliasType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_type", 433, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    return 1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___AnyType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_any(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_any", 439, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    return 1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___NoneType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_none_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_none_type", 442, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL33;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 446, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL34;
    }
    cpy_r_arg = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_arg, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_arg, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 447, CPyStatic_astmerge___globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_ret_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_r10, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r10, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 448, CPyStatic_astmerge___globals);
        goto CPyL32;
    } else
        goto CPyL36;
CPyL6: ;
    cpy_r_r12 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_definition;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL37;
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r15 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 449, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r12);
        goto CPyL32;
    }
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 449, CPyStatic_astmerge___globals);
        goto CPyL32;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL16;
    cpy_r_r19 = ((mypy___server___astmerge___TypeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "visit_callable_type", "TypeReplaceVisitor", "replacements", 451, CPyStatic_astmerge___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r19);
CPyL11: ;
    cpy_r_r20 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_definition;
    CPy_INCREF(cpy_r_r20);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 451, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r20);
        goto CPyL38;
    }
    cpy_r_r22 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_definition;
    CPy_INCREF(cpy_r_r22);
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 451, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r22);
        goto CPyL39;
    }
    cpy_r_r24 = CPyDict_Get(cpy_r_r19, cpy_r_r21, cpy_r_r23);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 451, CPyStatic_astmerge___globals);
        goto CPyL32;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_nodes___SymbolNode)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 451, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r24);
        goto CPyL32;
    }
    CPy_DECREF(((mypy___types___CallableTypeObject *)cpy_r_typ)->_definition);
    ((mypy___types___CallableTypeObject *)cpy_r_typ)->_definition = cpy_r_r25;
CPyL16: ;
    cpy_r_r27 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_fallback;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    if (!cpy_r_r29) goto CPyL18;
    cpy_r_r30 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyDef_types___Instance___accept(cpy_r_r30, cpy_r_self);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 454, CPyStatic_astmerge___globals);
        goto CPyL32;
    } else
        goto CPyL40;
CPyL18: ;
    cpy_r_r32 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_variables;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = PyObject_GetIter(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 455, CPyStatic_astmerge___globals);
        goto CPyL32;
    }
CPyL19: ;
    cpy_r_r34 = PyIter_Next(cpy_r_r33);
    if (cpy_r_r34 == NULL) goto CPyL41;
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_types___TypeVarLikeType)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 455, CPyStatic_astmerge___globals, "mypy.types.TypeVarLikeType", cpy_r_r34);
        goto CPyL42;
    }
    cpy_r_tv = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL43;
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType))
        cpy_r_r40 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 457, CPyStatic_astmerge___globals, "mypy.types.TypeVarType", cpy_r_tv);
        goto CPyL44;
    }
    cpy_r_r41 = ((mypy___types___TypeVarTypeObject *)cpy_r_r40)->_upper_bound;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPY_GET_METHOD(cpy_r_r41, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r41, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 457, CPyStatic_astmerge___globals);
        goto CPyL44;
    } else
        goto CPyL45;
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType))
        cpy_r_r43 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 458, CPyStatic_astmerge___globals, "mypy.types.TypeVarType", cpy_r_tv);
        goto CPyL44;
    }
    cpy_r_r44 = ((mypy___types___TypeVarTypeObject *)cpy_r_r43)->_values;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r45 = 0;
CPyL26: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL46;
    cpy_r_r50 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r45);
    if (likely(PyObject_TypeCheck(cpy_r_r50, CPyType_types___Type)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_callable_type", 458, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r50);
        goto CPyL47;
    }
    cpy_r_value = cpy_r_r51;
    cpy_r_r52 = CPY_GET_METHOD(cpy_r_value, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 459, CPyStatic_astmerge___globals);
        goto CPyL47;
    } else
        goto CPyL48;
CPyL29: ;
    cpy_r_r53 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r53;
    goto CPyL26;
CPyL30: ;
    cpy_r_r54 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 455, CPyStatic_astmerge___globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r55 = 2;
    return cpy_r_r55;
CPyL33: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL32;
CPyL35: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
CPyL36: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL6;
CPyL37: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL16;
CPyL38: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL32;
CPyL40: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL18;
CPyL41: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL32;
CPyL43: ;
    CPy_DECREF(cpy_r_tv);
    goto CPyL19;
CPyL44: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_tv);
    goto CPyL32;
CPyL45: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL24;
CPyL46: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL19;
CPyL47: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r44);
    goto CPyL32;
CPyL48: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL29;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type", 445, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded", 462, CPyStatic_astmerge___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___CallableType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_overloaded", 462, CPyStatic_astmerge___globals, "mypy.types.CallableType", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPyDef_types___CallableType___accept(cpy_r_item, cpy_r_self);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded", 463, CPyStatic_astmerge___globals);
        goto CPyL11;
    } else
        goto CPyL12;
CPyL5: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL2;
CPyL6: ;
    cpy_r_r10 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_types___Instance___accept(cpy_r_r13, cpy_r_self);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded", 466, CPyStatic_astmerge___globals);
        goto CPyL9;
    } else
        goto CPyL13;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL5;
CPyL13: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL8;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded", 461, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_erased_type", 470, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_erased_type", 470, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_erased_type", 468, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    return 1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___DeletedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_deleted_type", 472, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_partial_type", 476, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_partial_type", 476, CPyStatic_astmerge___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___PartialType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_partial_type", 475, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_tuple_type", 479, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL10;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_item, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_tuple_type", 480, CPyStatic_astmerge___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_types___Instance___accept(cpy_r_r13, cpy_r_self);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_tuple_type", 483, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL12;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL9: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
CPyL12: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL7;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_tuple_type", 478, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_type", 486, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_type", 485, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var", 489, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL1: ;
    cpy_r_r2 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var", 490, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL10;
CPyL2: ;
    cpy_r_r4 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_values;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_type_var", 491, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL12;
    }
    cpy_r_value = cpy_r_r11;
    cpy_r_r12 = CPY_GET_METHOD(cpy_r_value, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var", 492, CPyStatic_astmerge___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r13 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r13;
    goto CPyL3;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL10: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL11: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL13: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL6;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_var(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var", 488, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_param_spec", 495, CPyStatic_astmerge___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r2 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_param_spec", 496, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___ParamSpecType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_param_spec", 494, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var_tuple", 499, CPyStatic_astmerge___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r2 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var_tuple", 500, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarTupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var_tuple", 498, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_unpack_type", 503, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnpackType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_unpack_type", 502, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_parameters", 506, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_arg = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_arg, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_arg, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_parameters", 507, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Parameters))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_parameters(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_parameters", 505, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetValuesIter(cpy_r_r0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 510, CPyStatic_astmerge___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r5 = CPyDict_NextValue(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL10;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 510, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL11;
    }
    cpy_r_value_type = cpy_r_r9;
    cpy_r_r10 = CPY_GET_METHOD(cpy_r_value_type, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value_type, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value_type);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 511, CPyStatic_astmerge___globals);
        goto CPyL11;
    } else
        goto CPyL12;
CPyL4: ;
    cpy_r_r11 = CPyDict_CheckSize(cpy_r_r0, cpy_r_r3);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 510, CPyStatic_astmerge___globals);
        goto CPyL11;
    } else
        goto CPyL1;
CPyL5: ;
    cpy_r_r12 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 510, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    cpy_r_r13 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_types___Instance___accept(cpy_r_r13, cpy_r_self);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 512, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL13;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL5;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL4;
CPyL13: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL7;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypedDictType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type", 509, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_raw_expression_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_raw_expression_type", 514, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_raw_expression_type__SyntheticTypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_literal_type", 518, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___LiteralType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_literal_type", 517, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___UnboundTypeObject *)cpy_r_typ)->_args;
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
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_unbound_type", 521, CPyStatic_astmerge___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_unbound_type", 521, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_arg = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_arg, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_arg, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_unbound_type", 522, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnboundType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_unbound_type", 520, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_type_list(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___TypeListObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_type_list", 525, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_item, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_list", 526, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_list", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeList))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_list(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_list", 524, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_type_list__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_type_list(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_type_list__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_type_list__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_type_list__SyntheticTypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___CallableArgumentObject *)cpy_r_typ)->_typ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_argument", 529, CPyStatic_astmerge___globals);
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

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_callable_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableArgument))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_argument", 528, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_callable_argument__SyntheticTypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    return 1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_ellipsis_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___EllipsisType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_ellipsis_type", 531, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_ellipsis_type__SyntheticTypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    return 1;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UninhabitedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_uninhabited_type", 534, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_union_type", 538, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_item, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_union_type", 539, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnionType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_union_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_union_type", 537, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___PlaceholderTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "visit_placeholder_type", 542, CPyStatic_astmerge___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_item, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "visit_placeholder_type", 543, CPyStatic_astmerge___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_placeholder_type", 541, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "visit_placeholder_type__SyntheticTypeVisitor_glue", -1, CPyStatic_astmerge___globals);
    return NULL;
}

PyObject *CPyDef_astmerge___TypeReplaceVisitor___fixup(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___server___astmerge___TypeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup", "TypeReplaceVisitor", "replacements", 548, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 548, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___server___astmerge___TypeReplaceVisitorObject *)cpy_r_self)->_replacements;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/astmerge.py", "fixup", "TypeReplaceVisitor", "replacements", 549, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_node);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 549, CPyStatic_astmerge___globals);
        goto CPyL8;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_nodes___SymbolNode)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "fixup", 549, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r5);
        goto CPyL8;
    }
    cpy_r_new = cpy_r_r6;
    return cpy_r_new;
CPyL7: ;
    CPy_INCREF(cpy_r_node);
    return cpy_r_node;
CPyL8: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_astmerge___TypeReplaceVisitor___fixup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:fixup", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_astmerge___TypeReplaceVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.astmerge.TypeReplaceVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_astmerge___TypeReplaceVisitor___fixup(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "fixup", 547, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge___replace_nodes_in_symbol_table(PyObject *cpy_r_symbols, PyObject *cpy_r_replacements) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T4CIOO cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_old;
    PyObject *cpy_r_r29;
    tuple_T1O cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
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
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_symbols);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetItemsIter(cpy_r_symbols);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 557, CPyStatic_astmerge___globals);
        goto CPyL35;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextItem(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL36;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r4.f3;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r9 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 557, CPyStatic_astmerge___globals, "str", cpy_r_r7);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___SymbolTableNode))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 557, CPyStatic_astmerge___globals, "mypy.nodes.SymbolTableNode", cpy_r_r8);
        goto CPyL38;
    }
    cpy_r_name = cpy_r_r9;
    CPy_DECREF(cpy_r_name);
    cpy_r_node = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL39;
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r14 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 558, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r11);
        goto CPyL40;
    }
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 558, CPyStatic_astmerge___globals);
        goto CPyL40;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL41;
    cpy_r_r18 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r18);
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 559, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r18);
        goto CPyL40;
    }
    cpy_r_r20 = PyDict_Contains(cpy_r_replacements, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 559, CPyStatic_astmerge___globals);
        goto CPyL40;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL17;
    cpy_r_r23 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r23);
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 560, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r23);
        goto CPyL40;
    }
    cpy_r_r25 = CPyDict_GetItem(cpy_r_replacements, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 560, CPyStatic_astmerge___globals);
        goto CPyL40;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_nodes___SymbolNode)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 560, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r25);
        goto CPyL40;
    }
    cpy_r_new = cpy_r_r26;
    cpy_r_r27 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r27);
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 561, CPyStatic_astmerge___globals, "mypy.nodes.SymbolNode", cpy_r_r27);
        goto CPyL42;
    }
    cpy_r_old = cpy_r_r28;
    cpy_r_r29 = CPyStatics[4165]; /* 'special_alias' */
    cpy_r_r30.f0 = cpy_r_r29;
    CPy_INCREF(cpy_r_r30.f0);
    cpy_r_r31 = 2;
    cpy_r_r32 = PyTuple_New(1);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6460 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp6460);
    cpy_r_r33 = CPyDef_mypy___util___replace_object_state(cpy_r_new, cpy_r_old, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_old);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 563, CPyStatic_astmerge___globals);
        goto CPyL42;
    }
    CPy_DECREF(((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node);
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node = cpy_r_new;
CPyL17: ;
    cpy_r_r35 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r36 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r35)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL19;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL20;
CPyL19: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r35)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    cpy_r_r40 = cpy_r_r44;
CPyL20: ;
    if (!cpy_r_r40) goto CPyL41;
    cpy_r_r45 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_node);
    if (Py_TYPE(cpy_r_r45) == CPyType_nodes___Var)
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL6461;
    if (Py_TYPE(cpy_r_r45) == CPyType_nodes___TypeAlias)
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL6461;
    CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals, "union[mypy.nodes.Var, mypy.nodes.TypeAlias]", cpy_r_r45);
    goto CPyL43;
__LL6461: ;
    cpy_r_r47 = CPyDef_astmerge___NodeReplaceVisitor(cpy_r_replacements);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals);
        goto CPyL44;
    }
    cpy_r_r48 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_r46)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (!cpy_r_r51) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_nodes___Var))
        cpy_r_r52 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals, "mypy.nodes.Var", cpy_r_r46);
        goto CPyL45;
    }
    cpy_r_r53 = CPyDef_nodes___Var___accept(cpy_r_r52, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals);
        goto CPyL43;
    }
    if (unlikely(cpy_r_r53 != Py_None)) {
        CPy_TypeError("None", cpy_r_r53); cpy_r_r54 = 2;
    } else
        cpy_r_r54 = 1;
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals);
        goto CPyL43;
    }
    cpy_r_r55 = cpy_r_r54;
    goto CPyL32;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_nodes___TypeAlias))
        cpy_r_r56 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals, "mypy.nodes.TypeAlias", cpy_r_r46);
        goto CPyL45;
    }
    cpy_r_r57 = CPyDef_nodes___TypeAlias___accept(cpy_r_r56, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals);
        goto CPyL43;
    }
    if (unlikely(cpy_r_r57 != Py_None)) {
        CPy_TypeError("None", cpy_r_r57); cpy_r_r58 = 2;
    } else
        cpy_r_r58 = 1;
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 567, CPyStatic_astmerge___globals);
        goto CPyL43;
    }
    cpy_r_r55 = cpy_r_r58;
CPyL32: ;
    cpy_r_r59 = CPyDict_CheckSize(cpy_r_symbols, cpy_r_r2);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 557, CPyStatic_astmerge___globals);
        goto CPyL43;
    } else
        goto CPyL1;
CPyL33: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 557, CPyStatic_astmerge___globals);
        goto CPyL35;
    }
    return 1;
CPyL35: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL36: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    goto CPyL35;
CPyL39: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r11);
    goto CPyL32;
CPyL40: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_node);
    goto CPyL35;
CPyL41: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL32;
CPyL42: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_new);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r46);
    goto CPyL35;
CPyL45: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r47);
    goto CPyL35;
}

PyObject *CPyPy_astmerge___replace_nodes_in_symbol_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"symbols", "replacements", 0};
    static CPyArg_Parser parser = {"OO:replace_nodes_in_symbol_table", kwlist, 0};
    PyObject *obj_symbols;
    PyObject *obj_replacements;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_symbols, &obj_replacements)) {
        return NULL;
    }
    PyObject *arg_symbols;
    if (likely(PyDict_Check(obj_symbols)))
        arg_symbols = obj_symbols;
    else {
        CPy_TypeError("dict", obj_symbols); 
        goto fail;
    }
    PyObject *arg_replacements;
    if (likely(PyDict_Check(obj_replacements)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("dict", obj_replacements); 
        goto fail;
    }
    char retval = CPyDef_astmerge___replace_nodes_in_symbol_table(arg_symbols, arg_replacements);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/astmerge.py", "replace_nodes_in_symbol_table", 554, CPyStatic_astmerge___globals);
    return NULL;
}

char CPyDef_astmerge_____top_level__(void) {
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
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
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
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", -1, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_astmerge___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 48, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9748]; /* ('TypeVar', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_astmerge___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 50, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9749]; /* ('MDEF', 'AssertTypeExpr', 'AssignmentStmt', 'Block',
                                     'CallExpr', 'CastExpr', 'ClassDef', 'EnumCallExpr',
                                     'FuncBase', 'FuncDef', 'LambdaExpr', 'MemberExpr',
                                     'MypyFile', 'NamedTupleExpr', 'NameExpr', 'NewTypeExpr',
                                     'OverloadedFuncDef', 'RefExpr', 'Statement',
                                     'SuperExpr', 'SymbolNode', 'SymbolTable', 'TypeAlias',
                                     'TypeAliasExpr', 'TypedDictExpr', 'TypeInfo', 'Var') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_astmerge___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 52, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r18 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r19 = CPyStatic_astmerge___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 81, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_mypy___traverser = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9750]; /* ('AnyType', 'CallableArgument', 'CallableType',
                                     'DeletedType', 'EllipsisType', 'ErasedType', 'Instance',
                                     'LiteralType', 'NoneType', 'Overloaded', 'Parameters',
                                     'ParamSpecType', 'PartialType', 'PlaceholderType',
                                     'RawExpressionType', 'SyntheticTypeVisitor',
                                     'TupleType', 'Type', 'TypeAliasType', 'TypedDictType',
                                     'TypeList', 'TypeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_astmerge___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 82, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r26 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r27 = CPyStatic_astmerge___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 112, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_mypy___typestate = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9751]; /* ('get_prefix', 'replace_object_state') */
    cpy_r_r30 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r31 = CPyStatic_astmerge___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 113, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    CPyModule_mypy___util = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[5303]; /* 'SN' */
    cpy_r_r34 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r35 = CPyStatic_astmerge___globals;
    cpy_r_r36 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 195, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r38[2] = {cpy_r_r33, cpy_r_r34};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = CPyStatics[9381]; /* ('bound',) */
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, cpy_r_r40);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 195, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r42 = CPyStatic_astmerge___globals;
    cpy_r_r43 = CPyStatics[5303]; /* 'SN' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 195, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r46 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r47 = PyTuple_Pack(1, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 198, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r48 = CPyStatics[5304]; /* 'mypy.server.astmerge' */
    cpy_r_r49 = (PyObject *)CPyType_astmerge___NodeReplaceVisitor_template;
    cpy_r_r50 = CPyType_FromTemplate(cpy_r_r49, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 198, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r51 = CPyDef_astmerge___NodeReplaceVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", -1, CPyStatic_astmerge___globals);
        goto CPyL28;
    }
    cpy_r_r52 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r53 = CPyStatics[5305]; /* 'replacements' */
    cpy_r_r54 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r55 = PyTuple_Pack(2, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 198, CPyStatic_astmerge___globals);
        goto CPyL28;
    }
    cpy_r_r56 = PyObject_SetAttr(cpy_r_r50, cpy_r_r52, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 198, CPyStatic_astmerge___globals);
        goto CPyL28;
    }
    CPyType_astmerge___NodeReplaceVisitor = (PyTypeObject *)cpy_r_r50;
    CPy_INCREF(CPyType_astmerge___NodeReplaceVisitor);
    cpy_r_r58 = CPyStatic_astmerge___globals;
    cpy_r_r59 = CPyStatics[5306]; /* 'NodeReplaceVisitor' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r58, cpy_r_r59, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 198, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r62 = (PyObject *)CPyType_type_visitor___SyntheticTypeVisitor;
    cpy_r_r63 = Py_None;
    cpy_r_r64 = PyObject_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 415, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r65 = PyTuple_Pack(1, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 415, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r66 = CPyStatics[5304]; /* 'mypy.server.astmerge' */
    cpy_r_r67 = (PyObject *)CPyType_astmerge___TypeReplaceVisitor_template;
    cpy_r_r68 = CPyType_FromTemplate(cpy_r_r67, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 415, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    cpy_r_r69 = CPyDef_astmerge___TypeReplaceVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", -1, CPyStatic_astmerge___globals);
        goto CPyL29;
    }
    cpy_r_r70 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r71 = CPyStatics[5305]; /* 'replacements' */
    cpy_r_r72 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r73 = PyTuple_Pack(2, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 415, CPyStatic_astmerge___globals);
        goto CPyL29;
    }
    cpy_r_r74 = PyObject_SetAttr(cpy_r_r68, cpy_r_r70, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 415, CPyStatic_astmerge___globals);
        goto CPyL29;
    }
    CPyType_astmerge___TypeReplaceVisitor = (PyTypeObject *)cpy_r_r68;
    CPy_INCREF(CPyType_astmerge___TypeReplaceVisitor);
    cpy_r_r76 = CPyStatic_astmerge___globals;
    cpy_r_r77 = CPyStatics[5307]; /* 'TypeReplaceVisitor' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/server/astmerge.py", "<module>", 415, CPyStatic_astmerge___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r80 = 2;
    return cpy_r_r80;
CPyL28: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL27;
}
