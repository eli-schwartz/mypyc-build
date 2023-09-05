#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
aststrip___NodeStripVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef aststrip___NodeStripVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___aststrip___NodeStripVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___aststrip___NodeStripVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *aststrip___NodeStripVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_aststrip___NodeStripVisitor(PyObject *cpy_r_saved_class_attrs);

static PyObject *
aststrip___NodeStripVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_aststrip___NodeStripVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = aststrip___NodeStripVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_aststrip___NodeStripVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
aststrip___NodeStripVisitor_traverse(mypy___server___aststrip___NodeStripVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type);
    Py_VISIT(self->_saved_class_attrs);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___aststrip___NodeStripVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___aststrip___NodeStripVisitorObject))));
    return 0;
}

static int
aststrip___NodeStripVisitor_clear(mypy___server___aststrip___NodeStripVisitorObject *self)
{
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_saved_class_attrs);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___aststrip___NodeStripVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___aststrip___NodeStripVisitorObject))));
    return 0;
}

static void
aststrip___NodeStripVisitor_dealloc(mypy___server___aststrip___NodeStripVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, aststrip___NodeStripVisitor_dealloc)
    aststrip___NodeStripVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem aststrip___NodeStripVisitor_vtable[118];
static CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_aststrip___NodeStripVisitor_trait_vtable_setup(void)
{
    CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_index_expr__NodeVisitor_glue,
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
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_trait_vtable, aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_offset_table, aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_index_expr__ExpressionVisitor_glue,
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
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_offset_table, aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_block__StatementVisitor_glue,
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
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_trait_vtable, aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_offset_table, aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_trait_vtable, aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_offset_table, aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem aststrip___NodeStripVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)aststrip___NodeStripVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_block__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_class_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_decorator__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_member_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_call_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_op_expr__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_index_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_super_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_all__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor_____init__,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___strip_file_top_level,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_block,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___save_implicit_attributes,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___strip_ref_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___process_lvalue_in_method,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___enter_class,
        (CPyVTableItem)CPyDef_aststrip___NodeStripVisitor___enter_method,
    };
    memcpy(aststrip___NodeStripVisitor_vtable, aststrip___NodeStripVisitor_vtable_scratch, sizeof(aststrip___NodeStripVisitor_vtable));
    return 1;
}

static PyObject *
aststrip___NodeStripVisitor_get_type(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure);
static int
aststrip___NodeStripVisitor_set_type(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure);
static PyObject *
aststrip___NodeStripVisitor_get_is_class_body(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure);
static int
aststrip___NodeStripVisitor_set_is_class_body(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure);
static PyObject *
aststrip___NodeStripVisitor_get_recurse_into_functions(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure);
static int
aststrip___NodeStripVisitor_set_recurse_into_functions(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure);
static PyObject *
aststrip___NodeStripVisitor_get_saved_class_attrs(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure);
static int
aststrip___NodeStripVisitor_set_saved_class_attrs(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef aststrip___NodeStripVisitor_getseters[] = {
    {"type",
     (getter)aststrip___NodeStripVisitor_get_type, (setter)aststrip___NodeStripVisitor_set_type,
     NULL, NULL},
    {"is_class_body",
     (getter)aststrip___NodeStripVisitor_get_is_class_body, (setter)aststrip___NodeStripVisitor_set_is_class_body,
     NULL, NULL},
    {"recurse_into_functions",
     (getter)aststrip___NodeStripVisitor_get_recurse_into_functions, (setter)aststrip___NodeStripVisitor_set_recurse_into_functions,
     NULL, NULL},
    {"saved_class_attrs",
     (getter)aststrip___NodeStripVisitor_get_saved_class_attrs, (setter)aststrip___NodeStripVisitor_set_saved_class_attrs,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef aststrip___NodeStripVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"strip_file_top_level",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___strip_file_top_level,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"save_implicit_attributes",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___save_implicit_attributes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded_func_def",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_overloaded_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"strip_ref_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___strip_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_lvalue_in_method",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___process_lvalue_in_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_class",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___enter_class,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_method",
     (PyCFunction)CPyPy_aststrip___NodeStripVisitor___enter_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_aststrip___NodeStripVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NodeStripVisitor",
    .tp_new = aststrip___NodeStripVisitor_new,
    .tp_dealloc = (destructor)aststrip___NodeStripVisitor_dealloc,
    .tp_traverse = (traverseproc)aststrip___NodeStripVisitor_traverse,
    .tp_clear = (inquiry)aststrip___NodeStripVisitor_clear,
    .tp_getset = aststrip___NodeStripVisitor_getseters,
    .tp_methods = aststrip___NodeStripVisitor_methods,
    .tp_init = aststrip___NodeStripVisitor_init,
    .tp_members = aststrip___NodeStripVisitor_members,
    .tp_basicsize = sizeof(mypy___server___aststrip___NodeStripVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___aststrip___NodeStripVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___server___aststrip___NodeStripVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_aststrip___NodeStripVisitor_template = &CPyType_aststrip___NodeStripVisitor_template_;

static PyObject *
aststrip___NodeStripVisitor_setup(PyTypeObject *type)
{
    mypy___server___aststrip___NodeStripVisitorObject *self;
    self = (mypy___server___aststrip___NodeStripVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = aststrip___NodeStripVisitor_vtable + 12;
    self->_is_class_body = 2;
    self->_recurse_into_functions = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_aststrip___NodeStripVisitor(PyObject *cpy_r_saved_class_attrs)
{
    PyObject *self = aststrip___NodeStripVisitor_setup(CPyType_aststrip___NodeStripVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_aststrip___NodeStripVisitor_____init__(self, cpy_r_saved_class_attrs);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
aststrip___NodeStripVisitor_get_type(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure)
{
    if (unlikely(self->_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type' of 'NodeStripVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type);
    PyObject *retval = self->_type;
    return retval;
}

static int
aststrip___NodeStripVisitor_set_type(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeStripVisitor' object attribute 'type' cannot be deleted");
        return -1;
    }
    if (self->_type != NULL) {
        CPy_DECREF(self->_type);
    }
    PyObject *tmp;
    if ((Py_TYPE(value) == CPyType_nodes___FakeInfo) || (Py_TYPE(value) == CPyType_nodes___TypeInfo))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6462;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6462;
    CPy_TypeError("mypy.nodes.TypeInfo or None", value); 
    tmp = NULL;
__LL6462: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type = tmp;
    return 0;
}

static PyObject *
aststrip___NodeStripVisitor_get_is_class_body(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure)
{
    if (unlikely(self->_is_class_body == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_class_body' of 'NodeStripVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_class_body ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
aststrip___NodeStripVisitor_set_is_class_body(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeStripVisitor' object attribute 'is_class_body' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_class_body = tmp;
    return 0;
}

static PyObject *
aststrip___NodeStripVisitor_get_recurse_into_functions(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure)
{
    if (unlikely(self->_recurse_into_functions == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'recurse_into_functions' of 'NodeStripVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_recurse_into_functions ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
aststrip___NodeStripVisitor_set_recurse_into_functions(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeStripVisitor' object attribute 'recurse_into_functions' cannot be deleted");
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
aststrip___NodeStripVisitor_get_saved_class_attrs(mypy___server___aststrip___NodeStripVisitorObject *self, void *closure)
{
    if (unlikely(self->_saved_class_attrs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'saved_class_attrs' of 'NodeStripVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_saved_class_attrs);
    PyObject *retval = self->_saved_class_attrs;
    return retval;
}

static int
aststrip___NodeStripVisitor_set_saved_class_attrs(mypy___server___aststrip___NodeStripVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NodeStripVisitor' object attribute 'saved_class_attrs' cannot be deleted");
        return -1;
    }
    if (self->_saved_class_attrs != NULL) {
        CPy_DECREF(self->_saved_class_attrs);
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
    self->_saved_class_attrs = tmp;
    return 0;
}

static PyObject *aststrip___enter_class_NodeStripVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_env(void);

static PyObject *
aststrip___enter_class_NodeStripVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_aststrip___enter_class_NodeStripVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return aststrip___enter_class_NodeStripVisitor_env_setup(type);
}

static int
aststrip___enter_class_NodeStripVisitor_env_traverse(mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_info);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_old_type);
    return 0;
}

static int
aststrip___enter_class_NodeStripVisitor_env_clear(mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_old_type);
    return 0;
}

static void
aststrip___enter_class_NodeStripVisitor_env_dealloc(mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, aststrip___enter_class_NodeStripVisitor_env_dealloc)
    aststrip___enter_class_NodeStripVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem aststrip___enter_class_NodeStripVisitor_env_vtable[1];
static bool
CPyDef_aststrip___enter_class_NodeStripVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem aststrip___enter_class_NodeStripVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(aststrip___enter_class_NodeStripVisitor_env_vtable, aststrip___enter_class_NodeStripVisitor_env_vtable_scratch, sizeof(aststrip___enter_class_NodeStripVisitor_env_vtable));
    return 1;
}

static PyMethodDef aststrip___enter_class_NodeStripVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_aststrip___enter_class_NodeStripVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_class_NodeStripVisitor_env",
    .tp_new = aststrip___enter_class_NodeStripVisitor_env_new,
    .tp_dealloc = (destructor)aststrip___enter_class_NodeStripVisitor_env_dealloc,
    .tp_traverse = (traverseproc)aststrip___enter_class_NodeStripVisitor_env_traverse,
    .tp_clear = (inquiry)aststrip___enter_class_NodeStripVisitor_env_clear,
    .tp_methods = aststrip___enter_class_NodeStripVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___server___aststrip___enter_class_NodeStripVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_aststrip___enter_class_NodeStripVisitor_env_template = &CPyType_aststrip___enter_class_NodeStripVisitor_env_template_;

static PyObject *
aststrip___enter_class_NodeStripVisitor_env_setup(PyTypeObject *type)
{
    mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *self;
    self = (mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = aststrip___enter_class_NodeStripVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_old_is_class_body = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_env(void)
{
    PyObject *self = aststrip___enter_class_NodeStripVisitor_env_setup(CPyType_aststrip___enter_class_NodeStripVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *aststrip___enter_class_NodeStripVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen(void);

static PyObject *
aststrip___enter_class_NodeStripVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_aststrip___enter_class_NodeStripVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return aststrip___enter_class_NodeStripVisitor_gen_setup(type);
}

static int
aststrip___enter_class_NodeStripVisitor_gen_traverse(mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
aststrip___enter_class_NodeStripVisitor_gen_clear(mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
aststrip___enter_class_NodeStripVisitor_gen_dealloc(mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, aststrip___enter_class_NodeStripVisitor_gen_dealloc)
    aststrip___enter_class_NodeStripVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem aststrip___enter_class_NodeStripVisitor_gen_vtable[6];
static bool
CPyDef_aststrip___enter_class_NodeStripVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem aststrip___enter_class_NodeStripVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_aststrip___enter_class_NodeStripVisitor_gen___send,
        (CPyVTableItem)CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_aststrip___enter_class_NodeStripVisitor_gen___throw,
        (CPyVTableItem)CPyDef_aststrip___enter_class_NodeStripVisitor_gen___close,
    };
    memcpy(aststrip___enter_class_NodeStripVisitor_gen_vtable, aststrip___enter_class_NodeStripVisitor_gen_vtable_scratch, sizeof(aststrip___enter_class_NodeStripVisitor_gen_vtable));
    return 1;
}

static PyMethodDef aststrip___enter_class_NodeStripVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_aststrip___enter_class_NodeStripVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_aststrip___enter_class_NodeStripVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_aststrip___enter_class_NodeStripVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_aststrip___enter_class_NodeStripVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_aststrip___enter_class_NodeStripVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_aststrip___enter_class_NodeStripVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_class_NodeStripVisitor_gen",
    .tp_new = aststrip___enter_class_NodeStripVisitor_gen_new,
    .tp_dealloc = (destructor)aststrip___enter_class_NodeStripVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)aststrip___enter_class_NodeStripVisitor_gen_traverse,
    .tp_clear = (inquiry)aststrip___enter_class_NodeStripVisitor_gen_clear,
    .tp_methods = aststrip___enter_class_NodeStripVisitor_gen_methods,
    .tp_iter = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____iter__,
    .tp_iternext = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___server___aststrip___enter_class_NodeStripVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_aststrip___enter_class_NodeStripVisitor_gen_template = &CPyType_aststrip___enter_class_NodeStripVisitor_gen_template_;

static PyObject *
aststrip___enter_class_NodeStripVisitor_gen_setup(PyTypeObject *type)
{
    mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *self;
    self = (mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = aststrip___enter_class_NodeStripVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen(void)
{
    PyObject *self = aststrip___enter_class_NodeStripVisitor_gen_setup(CPyType_aststrip___enter_class_NodeStripVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *aststrip___enter_method_NodeStripVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_env(void);

static PyObject *
aststrip___enter_method_NodeStripVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_aststrip___enter_method_NodeStripVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return aststrip___enter_method_NodeStripVisitor_env_setup(type);
}

static int
aststrip___enter_method_NodeStripVisitor_env_traverse(mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_info);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_old_type);
    return 0;
}

static int
aststrip___enter_method_NodeStripVisitor_env_clear(mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_old_type);
    return 0;
}

static void
aststrip___enter_method_NodeStripVisitor_env_dealloc(mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, aststrip___enter_method_NodeStripVisitor_env_dealloc)
    aststrip___enter_method_NodeStripVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem aststrip___enter_method_NodeStripVisitor_env_vtable[1];
static bool
CPyDef_aststrip___enter_method_NodeStripVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem aststrip___enter_method_NodeStripVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(aststrip___enter_method_NodeStripVisitor_env_vtable, aststrip___enter_method_NodeStripVisitor_env_vtable_scratch, sizeof(aststrip___enter_method_NodeStripVisitor_env_vtable));
    return 1;
}

static PyMethodDef aststrip___enter_method_NodeStripVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_aststrip___enter_method_NodeStripVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_method_NodeStripVisitor_env",
    .tp_new = aststrip___enter_method_NodeStripVisitor_env_new,
    .tp_dealloc = (destructor)aststrip___enter_method_NodeStripVisitor_env_dealloc,
    .tp_traverse = (traverseproc)aststrip___enter_method_NodeStripVisitor_env_traverse,
    .tp_clear = (inquiry)aststrip___enter_method_NodeStripVisitor_env_clear,
    .tp_methods = aststrip___enter_method_NodeStripVisitor_env_methods,
    .tp_basicsize = sizeof(mypy___server___aststrip___enter_method_NodeStripVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_aststrip___enter_method_NodeStripVisitor_env_template = &CPyType_aststrip___enter_method_NodeStripVisitor_env_template_;

static PyObject *
aststrip___enter_method_NodeStripVisitor_env_setup(PyTypeObject *type)
{
    mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *self;
    self = (mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = aststrip___enter_method_NodeStripVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_old_is_class_body = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_env(void)
{
    PyObject *self = aststrip___enter_method_NodeStripVisitor_env_setup(CPyType_aststrip___enter_method_NodeStripVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *aststrip___enter_method_NodeStripVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen(void);

static PyObject *
aststrip___enter_method_NodeStripVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_aststrip___enter_method_NodeStripVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return aststrip___enter_method_NodeStripVisitor_gen_setup(type);
}

static int
aststrip___enter_method_NodeStripVisitor_gen_traverse(mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
aststrip___enter_method_NodeStripVisitor_gen_clear(mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
aststrip___enter_method_NodeStripVisitor_gen_dealloc(mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, aststrip___enter_method_NodeStripVisitor_gen_dealloc)
    aststrip___enter_method_NodeStripVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem aststrip___enter_method_NodeStripVisitor_gen_vtable[6];
static bool
CPyDef_aststrip___enter_method_NodeStripVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem aststrip___enter_method_NodeStripVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_aststrip___enter_method_NodeStripVisitor_gen___send,
        (CPyVTableItem)CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_aststrip___enter_method_NodeStripVisitor_gen___throw,
        (CPyVTableItem)CPyDef_aststrip___enter_method_NodeStripVisitor_gen___close,
    };
    memcpy(aststrip___enter_method_NodeStripVisitor_gen_vtable, aststrip___enter_method_NodeStripVisitor_gen_vtable_scratch, sizeof(aststrip___enter_method_NodeStripVisitor_gen_vtable));
    return 1;
}

static PyMethodDef aststrip___enter_method_NodeStripVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_aststrip___enter_method_NodeStripVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_aststrip___enter_method_NodeStripVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_aststrip___enter_method_NodeStripVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_aststrip___enter_method_NodeStripVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_aststrip___enter_method_NodeStripVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_aststrip___enter_method_NodeStripVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_method_NodeStripVisitor_gen",
    .tp_new = aststrip___enter_method_NodeStripVisitor_gen_new,
    .tp_dealloc = (destructor)aststrip___enter_method_NodeStripVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)aststrip___enter_method_NodeStripVisitor_gen_traverse,
    .tp_clear = (inquiry)aststrip___enter_method_NodeStripVisitor_gen_clear,
    .tp_methods = aststrip___enter_method_NodeStripVisitor_gen_methods,
    .tp_iter = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____iter__,
    .tp_iternext = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypy___server___aststrip___enter_method_NodeStripVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_aststrip___enter_method_NodeStripVisitor_gen_template = &CPyType_aststrip___enter_method_NodeStripVisitor_gen_template_;

static PyObject *
aststrip___enter_method_NodeStripVisitor_gen_setup(PyTypeObject *type)
{
    mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *self;
    self = (mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = aststrip___enter_method_NodeStripVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen(void)
{
    PyObject *self = aststrip___enter_method_NodeStripVisitor_gen_setup(CPyType_aststrip___enter_method_NodeStripVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef aststripmodule_methods[] = {
    {"strip_target", (PyCFunction)CPyPy_aststrip___strip_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef aststripmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.aststrip",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    aststripmodule_methods
};

PyObject *CPyInit_mypy___server___aststrip(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___aststrip_internal) {
        Py_INCREF(CPyModule_mypy___server___aststrip_internal);
        return CPyModule_mypy___server___aststrip_internal;
    }
    CPyModule_mypy___server___aststrip_internal = PyModule_Create(&aststripmodule);
    if (unlikely(CPyModule_mypy___server___aststrip_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___aststrip_internal, "__name__");
    CPyStatic_aststrip___globals = PyModule_GetDict(CPyModule_mypy___server___aststrip_internal);
    if (unlikely(CPyStatic_aststrip___globals == NULL))
        goto fail;
    CPyType_aststrip___enter_class_NodeStripVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_aststrip___enter_class_NodeStripVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_aststrip___enter_class_NodeStripVisitor_env))
        goto fail;
    CPyType_aststrip___enter_class_NodeStripVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_aststrip___enter_class_NodeStripVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_aststrip___enter_class_NodeStripVisitor_gen))
        goto fail;
    CPyType_aststrip___enter_method_NodeStripVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_aststrip___enter_method_NodeStripVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_aststrip___enter_method_NodeStripVisitor_env))
        goto fail;
    CPyType_aststrip___enter_method_NodeStripVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_aststrip___enter_method_NodeStripVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_aststrip___enter_method_NodeStripVisitor_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_aststrip_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___aststrip_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___aststrip_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_aststrip___NodeStripVisitor);
    Py_CLEAR(CPyType_aststrip___enter_class_NodeStripVisitor_env);
    Py_CLEAR(CPyType_aststrip___enter_class_NodeStripVisitor_gen);
    Py_CLEAR(CPyType_aststrip___enter_method_NodeStripVisitor_env);
    Py_CLEAR(CPyType_aststrip___enter_method_NodeStripVisitor_gen);
    return NULL;
}

char CPyDef_aststrip___strip_target(PyObject *cpy_r_node, PyObject *cpy_r_saved_attrs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor(cpy_r_saved_attrs);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 88, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    cpy_r_visitor = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL4;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile))
        cpy_r_r5 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "strip_target", 90, CPyStatic_aststrip___globals, "mypy.nodes.MypyFile", cpy_r_node);
        goto CPyL16;
    }
    cpy_r_r6 = CPyDef_aststrip___NodeStripVisitor___strip_file_top_level(cpy_r_visitor, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 90, CPyStatic_aststrip___globals);
        goto CPyL15;
    } else
        goto CPyL14;
CPyL4: ;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r7 = cpy_r_node;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL6463;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r7 = cpy_r_node;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL6463;
    CPy_TypeErrorTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL16;
__LL6463: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___FuncDef))
        cpy_r_r12 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals, "mypy.nodes.FuncDef", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r13 = CPyDef_nodes___FuncDef___accept(cpy_r_r12, cpy_r_visitor);
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    if (unlikely(cpy_r_r13 != Py_None)) {
        CPy_TypeError("None", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = 1;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL14;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r16 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r17 = CPyDef_nodes___OverloadedFuncDef___accept(cpy_r_r16, cpy_r_visitor);
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    if (unlikely(cpy_r_r17 != Py_None)) {
        CPy_TypeError("None", cpy_r_r17); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = 1;
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 92, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    cpy_r_r15 = cpy_r_r18;
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL16: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL15;
}

PyObject *CPyPy_aststrip___strip_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", "saved_attrs", 0};
    static CPyArg_Parser parser = {"OO:strip_target", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_saved_attrs;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_saved_attrs)) {
        return NULL;
    }
    PyObject *arg_node;
    if (Py_TYPE(obj_node) == CPyType_nodes___MypyFile)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6464;
    if (Py_TYPE(obj_node) == CPyType_nodes___FuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6464;
    if (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6464;
    CPy_TypeError("union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", obj_node); 
    goto fail;
__LL6464: ;
    PyObject *arg_saved_attrs;
    if (likely(PyDict_Check(obj_saved_attrs)))
        arg_saved_attrs = obj_saved_attrs;
    else {
        CPy_TypeError("dict", obj_saved_attrs); 
        goto fail;
    }
    char retval = CPyDef_aststrip___strip_target(arg_node, arg_saved_attrs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "strip_target", 74, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_saved_class_attrs) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type);
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "__init__", 98, CPyStatic_aststrip___globals);
        goto CPyL5;
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_is_class_body = 0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "__init__", 100, CPyStatic_aststrip___globals);
        goto CPyL5;
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_recurse_into_functions = 1;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "__init__", 103, CPyStatic_aststrip___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_saved_class_attrs);
    if (((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_saved_class_attrs != NULL) {
        CPy_DECREF(((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_saved_class_attrs);
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_saved_class_attrs = cpy_r_saved_class_attrs;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "__init__", 107, CPyStatic_aststrip___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_aststrip___NodeStripVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"saved_class_attrs", 0};
    PyObject *obj_saved_class_attrs;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_saved_class_attrs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_saved_class_attrs;
    if (likely(PyDict_Check(obj_saved_class_attrs)))
        arg_saved_class_attrs = obj_saved_class_attrs;
    else {
        CPy_TypeError("dict", obj_saved_class_attrs); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor_____init__(arg_self, arg_saved_class_attrs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "__init__", 96, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___strip_file_top_level(PyObject *cpy_r_self, PyObject *cpy_r_file_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3CIO cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_recurse_into_functions = 0;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 111, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    cpy_r_r1 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_plugin_deps;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_Clear(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 112, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    cpy_r_r3 = CPyDef_nodes___MypyFile___accept(cpy_r_file_node, cpy_r_self);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 113, CPyStatic_aststrip___globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL3: ;
    cpy_r_r4 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_names;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "strip_file_top_level", "MypyFile", "names", 114, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_Copy(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 114, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    cpy_r_r6 = 0;
    cpy_r_r7 = PyDict_Size(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyDict_GetKeysIter(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 114, CPyStatic_aststrip___globals);
        goto CPyL17;
    }
CPyL6: ;
    cpy_r_r10 = CPyDict_NextKey(cpy_r_r9, cpy_r_r6);
    cpy_r_r11 = cpy_r_r10.f1;
    cpy_r_r6 = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f0;
    if (!cpy_r_r12) goto CPyL18;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r10.f2);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "strip_file_top_level", 114, CPyStatic_aststrip___globals, "str", cpy_r_r13);
        goto CPyL19;
    }
    cpy_r_name = cpy_r_r14;
    cpy_r_r15 = CPyStatics[1784]; /* '@' */
    cpy_r_r16 = PySequence_Contains(cpy_r_name, cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 117, CPyStatic_aststrip___globals);
        goto CPyL20;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    if (!cpy_r_r19) goto CPyL21;
    cpy_r_r20 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_names;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "strip_file_top_level", "MypyFile", "names", 118, CPyStatic_aststrip___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r20);
CPyL11: ;
    cpy_r_r21 = PyObject_DelItem(cpy_r_r20, cpy_r_name);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_name);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 118, CPyStatic_aststrip___globals);
        goto CPyL19;
    }
CPyL12: ;
    cpy_r_r23 = CPyDict_CheckSize(cpy_r_r5, cpy_r_r8);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 114, CPyStatic_aststrip___globals);
        goto CPyL19;
    } else
        goto CPyL6;
CPyL13: ;
    cpy_r_r24 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 114, CPyStatic_aststrip___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL16: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL3;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10.f2);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_name);
    goto CPyL15;
CPyL21: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL12;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___strip_file_top_level(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file_node", 0};
    static CPyArg_Parser parser = {"O:strip_file_top_level", kwlist, 0};
    PyObject *obj_file_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_file_node;
    if (likely(Py_TYPE(obj_file_node) == CPyType_nodes___MypyFile))
        arg_file_node = obj_file_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___strip_file_top_level(arg_self, arg_file_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "strip_file_top_level", 109, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_b) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_b)->_is_unreachable;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_block(cpy_r_self, cpy_r_b);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_block", 123, CPyStatic_aststrip___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"b", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_b)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_b;
    if (likely(Py_TYPE(obj_b) == CPyType_nodes___Block))
        arg_b = obj_b;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_b); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_block(arg_self, arg_b);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_block", 120, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_block__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_block(cpy_r_self, cpy_r_block);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_block__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_block__TraverserVisitor_glue(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_block__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
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
    PyObject *cpy_r_v;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_to_delete;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_s;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
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
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    cpy_r_r0 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_recurse_into_functions;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_class_def", "NodeStripVisitor", "recurse_into_functions", 131, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL3;
CPyL2: ;
    cpy_r_r1 = CPyDef_aststrip___NodeStripVisitor___save_implicit_attributes(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 132, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
CPyL3: ;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 135, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_names;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_class_def", "TypeInfo", "names", 135, CPyStatic_aststrip___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = 0;
    cpy_r_r6 = PyDict_Size(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyDict_GetValuesIter(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 135, CPyStatic_aststrip___globals);
        goto CPyL61;
    }
CPyL6: ;
    cpy_r_r9 = CPyDict_NextValue(cpy_r_r8, cpy_r_r5);
    cpy_r_r10 = cpy_r_r9.f1;
    cpy_r_r5 = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f0;
    if (!cpy_r_r11) goto CPyL62;
    cpy_r_r12 = cpy_r_r9.f2;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9.f2);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___SymbolTableNode))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_class_def", 135, CPyStatic_aststrip___globals, "mypy.nodes.SymbolTableNode", cpy_r_r12);
        goto CPyL63;
    }
    cpy_r_v = cpy_r_r13;
    cpy_r_r14 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_v)->_plugin_generated;
    if (!cpy_r_r14) goto CPyL64;
CPyL9: ;
    cpy_r_r15 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_v)->_node;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_v);
    cpy_r_r16 = PySet_Add(cpy_r_r2, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 135, CPyStatic_aststrip___globals);
        goto CPyL63;
    }
CPyL10: ;
    cpy_r_r18 = CPyDict_CheckSize(cpy_r_r4, cpy_r_r7);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 135, CPyStatic_aststrip___globals);
        goto CPyL63;
    } else
        goto CPyL6;
CPyL11: ;
    cpy_r_r19 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 135, CPyStatic_aststrip___globals);
        goto CPyL60;
    }
    cpy_r_to_delete = cpy_r_r2;
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 136, CPyStatic_aststrip___globals);
        goto CPyL65;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_node)->_type_vars);
    ((mypy___nodes___ClassDefObject *)cpy_r_node)->_type_vars = cpy_r_r20;
    cpy_r_r22 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_base_type_exprs;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_removed_base_type_exprs;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyList_Extend(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 137, CPyStatic_aststrip___globals);
        goto CPyL65;
    } else
        goto CPyL66;
CPyL14: ;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 138, CPyStatic_aststrip___globals);
        goto CPyL65;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_node)->_removed_base_type_exprs);
    ((mypy___nodes___ClassDefObject *)cpy_r_node)->_removed_base_type_exprs = cpy_r_r25;
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 139, CPyStatic_aststrip___globals);
        goto CPyL65;
    }
    cpy_r_r28 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_defs;
    cpy_r_r29 = ((mypy___nodes___BlockObject *)cpy_r_r28)->_body;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = 0;
CPyL17: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL67;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r30);
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_nodes___Statement)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_class_def", 139, CPyStatic_aststrip___globals, "mypy.nodes.Statement", cpy_r_r35);
        goto CPyL68;
    }
    cpy_r_s = cpy_r_r36;
    cpy_r_r37 = PySet_Contains(cpy_r_to_delete, cpy_r_s);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 140, CPyStatic_aststrip___globals);
        goto CPyL69;
    }
    cpy_r_r39 = cpy_r_r37;
    cpy_r_r40 = cpy_r_r39 ^ 1;
    if (!cpy_r_r40) goto CPyL70;
    cpy_r_r41 = PyList_Append(cpy_r_r27, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 139, CPyStatic_aststrip___globals);
        goto CPyL68;
    }
CPyL22: ;
    cpy_r_r43 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r43;
    goto CPyL17;
CPyL23: ;
    cpy_r_r44 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_defs;
    CPy_DECREF(((mypy___nodes___BlockObject *)cpy_r_r44)->_body);
    ((mypy___nodes___BlockObject *)cpy_r_r44)->_body = cpy_r_r27;
    cpy_r_r46 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[5308]; /* 'enter_class' */
    PyObject *cpy_r_r48[2] = {cpy_r_self, cpy_r_r46};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = PyObject_VectorcallMethod(cpy_r_r47, cpy_r_r49, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r46);
    cpy_r_r51 = PyObject_Type(cpy_r_r50);
    cpy_r_r52 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL72;
    }
    cpy_r_r54 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r54);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r50};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL73;
    } else
        goto CPyL74;
CPyL27: ;
    cpy_r_r59 = 1;
    cpy_r_r60 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 143, CPyStatic_aststrip___globals);
    } else
        goto CPyL37;
    cpy_r_r61 = CPy_CatchError();
    cpy_r_r59 = 0;
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
    PyObject *cpy_r_r66[4] = {cpy_r_r50, cpy_r_r63, cpy_r_r64, cpy_r_r65};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r67, 4, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL75;
    }
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    cpy_r_r69 = PyObject_IsTrue(cpy_r_r68);
    CPy_DecRef(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL35;
    }
    cpy_r_r71 = cpy_r_r69;
    if (cpy_r_r71) goto CPyL34;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL76;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r61);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    goto CPyL37;
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r61);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    cpy_r_r72 = CPy_KeepPropagating();
    if (!cpy_r_r72) {
        goto CPyL38;
    } else
        goto CPyL77;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    tuple_T3OOO __tmp6465 = { NULL, NULL, NULL };
    cpy_r_r73 = __tmp6465;
    cpy_r_r74 = cpy_r_r73;
    goto CPyL39;
CPyL38: ;
    cpy_r_r75 = CPy_CatchError();
    cpy_r_r74 = cpy_r_r75;
CPyL39: ;
    if (!cpy_r_r59) goto CPyL78;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r77[4] = {cpy_r_r50, cpy_r_r76, cpy_r_r76, cpy_r_r76};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r78, 4, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 142, CPyStatic_aststrip___globals);
        goto CPyL79;
    } else
        goto CPyL80;
CPyL41: ;
    CPy_DECREF(cpy_r_r50);
CPyL42: ;
    if (cpy_r_r74.f0 == NULL) goto CPyL49;
    CPy_Reraise();
    if (!0) {
        goto CPyL45;
    } else
        goto CPyL81;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    if (cpy_r_r74.f0 == NULL) goto CPyL47;
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_XDECREF(cpy_r_r74.f0);
    CPy_XDECREF(cpy_r_r74.f1);
    CPy_XDECREF(cpy_r_r74.f2);
CPyL47: ;
    cpy_r_r80 = CPy_KeepPropagating();
    if (!cpy_r_r80) goto CPyL59;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r81 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_defs;
    cpy_r_r82 = ((mypy___nodes___BlockObject *)cpy_r_r81)->_body;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_removed_statements;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = CPyList_Extend(cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 144, CPyStatic_aststrip___globals);
        goto CPyL59;
    } else
        goto CPyL82;
CPyL50: ;
    cpy_r_r85 = PyList_New(0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 145, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_node)->_removed_statements);
    ((mypy___nodes___ClassDefObject *)cpy_r_node)->_removed_statements = cpy_r_r85;
    cpy_r_r87 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r87 != NULL)) goto CPyL54;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r88 = 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 146, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r89 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyDef_typestate___TypeState___reset_subtype_caches_for(cpy_r_r87, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 146, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
    cpy_r_r91 = CPyStatic_nodes___CLASSDEF_NO_INFO;
    if (likely(cpy_r_r91 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"CLASSDEF_NO_INFO\" was not set");
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 148, CPyStatic_aststrip___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL58: ;
    CPy_INCREF(cpy_r_r91);
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_node)->_info);
    ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info = cpy_r_r91;
    cpy_r_r94 = Py_None;
    CPy_INCREF(cpy_r_r94);
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_node)->_analyzed);
    ((mypy___nodes___ClassDefObject *)cpy_r_node)->_analyzed = cpy_r_r94;
    return 1;
CPyL59: ;
    cpy_r_r96 = 2;
    return cpy_r_r96;
CPyL60: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL59;
CPyL61: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL59;
CPyL62: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9.f2);
    goto CPyL11;
CPyL63: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL59;
CPyL64: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL10;
CPyL65: ;
    CPy_DecRef(cpy_r_to_delete);
    goto CPyL59;
CPyL66: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL14;
CPyL67: ;
    CPy_DECREF(cpy_r_to_delete);
    CPy_DECREF(cpy_r_r29);
    goto CPyL23;
CPyL68: ;
    CPy_DecRef(cpy_r_to_delete);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r29);
    goto CPyL59;
CPyL69: ;
    CPy_DecRef(cpy_r_to_delete);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_s);
    goto CPyL59;
CPyL70: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL22;
CPyL71: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL59;
CPyL72: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL59;
CPyL73: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL59;
CPyL74: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL27;
CPyL75: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL35;
CPyL76: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    goto CPyL33;
CPyL77: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL36;
CPyL78: ;
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r53);
    goto CPyL42;
CPyL79: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL45;
CPyL80: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL41;
CPyL81: ;
    CPy_XDECREF(cpy_r_r74.f0);
    CPy_XDECREF(cpy_r_r74.f1);
    CPy_XDECREF(cpy_r_r74.f2);
    goto CPyL44;
CPyL82: ;
    CPy_DECREF(cpy_r_r84);
    goto CPyL50;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ClassDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_class_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def", 125, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_class_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_class_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_class_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___save_implicit_attributes(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
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
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->_names;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "save_implicit_attributes", "TypeInfo", "names", 153, CPyStatic_aststrip___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 153, CPyStatic_aststrip___globals);
        goto CPyL13;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL14;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 153, CPyStatic_aststrip___globals, "str", cpy_r_r9);
        goto CPyL15;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___SymbolTableNode))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 153, CPyStatic_aststrip___globals, "mypy.nodes.SymbolTableNode", cpy_r_r10);
        goto CPyL16;
    }
    cpy_r_name = cpy_r_r11;
    cpy_r_sym = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    cpy_r_r14 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL17;
    cpy_r_r18 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_implicit;
    if (!cpy_r_r18) goto CPyL17;
CPyL7: ;
    cpy_r_r19 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_saved_class_attrs;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "save_implicit_attributes", "NodeStripVisitor", "saved_class_attrs", 155, CPyStatic_aststrip___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r19);
CPyL8: ;
    cpy_r_r20.f0 = cpy_r_node;
    cpy_r_r20.f1 = cpy_r_name;
    CPy_INCREF(cpy_r_r20.f0);
    CPy_INCREF(cpy_r_r20.f1);
    CPy_DECREF(cpy_r_name);
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6466 = cpy_r_r20.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp6466);
    PyObject *__tmp6467 = cpy_r_r20.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp6467);
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r19, cpy_r_r21, cpy_r_sym);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 155, CPyStatic_aststrip___globals);
        goto CPyL19;
    }
CPyL9: ;
    cpy_r_r24 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 153, CPyStatic_aststrip___globals);
        goto CPyL19;
    } else
        goto CPyL2;
CPyL10: ;
    cpy_r_r25 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 153, CPyStatic_aststrip___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_sym);
    goto CPyL9;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_sym);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___save_implicit_attributes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:save_implicit_attributes", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ClassDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___save_implicit_attributes(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "save_implicit_attributes", 151, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
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
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    cpy_r_r0 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_recurse_into_functions;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_func_def", "NodeStripVisitor", "recurse_into_functions", 158, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 160, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_node)->_expanded);
    ((mypy___nodes___FuncDefObject *)cpy_r_node)->_expanded = cpy_r_r1;
    cpy_r_r3 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_node)->_type);
    ((mypy___nodes___FuncDefObject *)cpy_r_node)->_type = cpy_r_r3;
    cpy_r_r5 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r7) goto CPyL11;
    cpy_r_r8 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_type;
    cpy_r_r9 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 167, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 168, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
    cpy_r_r15 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_type;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_func_def", 168, CPyStatic_aststrip___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL45;
    }
    CPy_DECREF(((mypy___types___CallableTypeObject *)cpy_r_r16)->_variables);
    ((mypy___types___CallableTypeObject *)cpy_r_r16)->_variables = cpy_r_r14;
CPyL11: ;
    cpy_r_r18 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
    if (!cpy_r_r19) goto CPyL15;
    cpy_r_r20 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r22[2] = {cpy_r_self, cpy_r_r20};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r20);
    cpy_r_r25 = cpy_r_r24;
    goto CPyL18;
CPyL15: ;
    cpy_r_r26 = CPyStatic_aststrip___globals;
    cpy_r_r27 = CPyStatics[699]; /* 'nullcontext' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r28, 0, 0, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL44;
    }
    cpy_r_r25 = cpy_r_r29;
CPyL18: ;
    cpy_r_r30 = PyObject_Type(cpy_r_r25);
    cpy_r_r31 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL47;
    }
    cpy_r_r33 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r25};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL48;
    } else
        goto CPyL49;
CPyL21: ;
    cpy_r_r38 = 1;
    cpy_r_r39 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 170, CPyStatic_aststrip___globals);
    } else
        goto CPyL31;
    cpy_r_r40 = CPy_CatchError();
    cpy_r_r38 = 0;
    cpy_r_r41 = CPy_GetExcInfo();
    cpy_r_r42 = cpy_r_r41.f0;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = cpy_r_r41.f1;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = cpy_r_r41.f2;
    CPy_INCREF(cpy_r_r44);
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    PyObject *cpy_r_r45[4] = {cpy_r_r25, cpy_r_r42, cpy_r_r43, cpy_r_r44};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r46, 4, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL50;
    }
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    cpy_r_r48 = PyObject_IsTrue(cpy_r_r47);
    CPy_DecRef(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL29;
    }
    cpy_r_r50 = cpy_r_r48;
    if (cpy_r_r50) goto CPyL28;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL51;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    goto CPyL31;
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    cpy_r_r51 = CPy_KeepPropagating();
    if (!cpy_r_r51) {
        goto CPyL32;
    } else
        goto CPyL52;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    tuple_T3OOO __tmp6468 = { NULL, NULL, NULL };
    cpy_r_r52 = __tmp6468;
    cpy_r_r53 = cpy_r_r52;
    goto CPyL33;
CPyL32: ;
    cpy_r_r54 = CPy_CatchError();
    cpy_r_r53 = cpy_r_r54;
CPyL33: ;
    if (!cpy_r_r38) goto CPyL53;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r56[4] = {cpy_r_r25, cpy_r_r55, cpy_r_r55, cpy_r_r55};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r57, 4, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 169, CPyStatic_aststrip___globals);
        goto CPyL54;
    } else
        goto CPyL55;
CPyL35: ;
    CPy_DECREF(cpy_r_r25);
CPyL36: ;
    if (cpy_r_r53.f0 == NULL) goto CPyL43;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL56;
CPyL38: ;
    CPy_Unreachable();
CPyL39: ;
    if (cpy_r_r53.f0 == NULL) goto CPyL41;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_XDECREF(cpy_r_r53.f0);
    CPy_XDECREF(cpy_r_r53.f1);
    CPy_XDECREF(cpy_r_r53.f2);
CPyL41: ;
    cpy_r_r59 = CPy_KeepPropagating();
    if (!cpy_r_r59) goto CPyL44;
    CPy_Unreachable();
CPyL43: ;
    return 1;
CPyL44: ;
    cpy_r_r60 = 2;
    return cpy_r_r60;
CPyL45: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r30);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r32);
    goto CPyL44;
CPyL49: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL21;
CPyL50: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL29;
CPyL51: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    goto CPyL27;
CPyL52: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r32);
    goto CPyL30;
CPyL53: ;
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r32);
    goto CPyL36;
CPyL54: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL39;
CPyL55: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL35;
CPyL56: ;
    CPy_XDECREF(cpy_r_r53.f0);
    CPy_XDECREF(cpy_r_r53.f1);
    CPy_XDECREF(cpy_r_r53.f2);
    goto CPyL38;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def", 157, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_var;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r0)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r0)->_type = cpy_r_r1;
    cpy_r_r3 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_decorators;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL1: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_decorator", 174, CPyStatic_aststrip___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_expr = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_decorator", 175, CPyStatic_aststrip___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL4: ;
    cpy_r_r12 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r12;
    goto CPyL1;
CPyL5: ;
    cpy_r_r13 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_recurse_into_functions;
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_decorator", "NodeStripVisitor", "recurse_into_functions", 176, CPyStatic_aststrip___globals);
        goto CPyL10;
    }
CPyL6: ;
    if (!cpy_r_r13) goto CPyL8;
CPyL7: ;
    cpy_r_r14 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_func;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_nodes___FuncDef___accept(cpy_r_r14, cpy_r_self);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_decorator", 177, CPyStatic_aststrip___globals);
        goto CPyL10;
    } else
        goto CPyL14;
CPyL8: ;
    cpy_r_r16 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_var;
    ((mypy___nodes___VarObject *)cpy_r_r16)->_is_final = 0;
    cpy_r_r18 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_func;
    ((mypy___nodes___FuncDefObject *)cpy_r_r18)->_is_final = 0;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL11: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL5;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL14: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL9;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Decorator))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_decorator(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_decorator", 172, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_decorator__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_decorator__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_decorator__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_decorator__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_recurse_into_functions;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_overloaded_func_def", "NodeStripVisitor", "recurse_into_functions", 185, CPyStatic_aststrip___globals);
        goto CPyL7;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r1 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_unanalyzed_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r3[1] = {cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def", 188, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r1);
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def", 188, CPyStatic_aststrip___globals, "list", cpy_r_r5);
        goto CPyL7;
    }
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_items);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_items = cpy_r_r6;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_impl);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_impl = cpy_r_r8;
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_is_final = 0;
    cpy_r_r11 = CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def", 191, CPyStatic_aststrip___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def", 184, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_overloaded_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_overloaded_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_overloaded_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_overloaded_func_def__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_lvalue;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_type);
    ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_type = cpy_r_r0;
    ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_is_final_def = 0;
    ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_is_alias_def = 0;
    cpy_r_r4 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_assignment_stmt", "NodeStripVisitor", "type", 197, CPyStatic_aststrip___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r4);
CPyL1: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL15;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r7 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_assignment_stmt", 197, CPyStatic_aststrip___globals, "mypy.nodes.TypeInfo", cpy_r_r4);
        goto CPyL14;
    }
    cpy_r_r8 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt", 197, CPyStatic_aststrip___globals);
        goto CPyL14;
    }
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_is_class_body;
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "visit_assignment_stmt", "NodeStripVisitor", "is_class_body", 197, CPyStatic_aststrip___globals);
        goto CPyL14;
    }
CPyL6: ;
    if (cpy_r_r9) goto CPyL12;
CPyL7: ;
    cpy_r_r10 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_lvalues;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = 0;
CPyL8: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_nodes___Expression)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "visit_assignment_stmt", 198, CPyStatic_aststrip___globals, "mypy.nodes.Expression", cpy_r_r16);
        goto CPyL17;
    }
    cpy_r_lvalue = cpy_r_r17;
    cpy_r_r18 = CPyDef_aststrip___NodeStripVisitor___process_lvalue_in_method(cpy_r_self, cpy_r_lvalue);
    CPy_DECREF(cpy_r_lvalue);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt", 200, CPyStatic_aststrip___globals);
        goto CPyL17;
    }
    cpy_r_r19 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r19;
    goto CPyL8;
CPyL12: ;
    cpy_r_r20 = CPyDef_traverser___TraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt", 201, CPyStatic_aststrip___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL15: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL12;
CPyL16: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssignmentStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt", 193, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_assignment_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_from", 204, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    CPy_DECREF(((mypy___nodes___ImportFromObject *)cpy_r_node)->_assignments);
    ((mypy___nodes___ImportFromObject *)cpy_r_node)->_assignments = cpy_r_r0;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_import_from(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_from", 203, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_all", 207, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    CPy_DECREF(((mypy___nodes___ImportAllObject *)cpy_r_node)->_assignments);
    ((mypy___nodes___ImportAllObject *)cpy_r_node)->_assignments = cpy_r_r0;
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_import_all(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_all", 206, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_unanalyzed_index_type;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___ForStmtObject *)cpy_r_node)->_index_type);
    ((mypy___nodes___ForStmtObject *)cpy_r_node)->_index_type = cpy_r_r0;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(((mypy___nodes___ForStmtObject *)cpy_r_node)->_inferred_item_type);
    ((mypy___nodes___ForStmtObject *)cpy_r_node)->_inferred_item_type = cpy_r_r2;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(((mypy___nodes___ForStmtObject *)cpy_r_node)->_inferred_iterator_type);
    ((mypy___nodes___ForStmtObject *)cpy_r_node)->_inferred_iterator_type = cpy_r_r4;
    cpy_r_r6 = CPyDef_traverser___TraverserVisitor___visit_for_stmt(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_for_stmt", 213, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ForStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_for_stmt", 209, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_for_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_for_stmt__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___strip_ref_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_name_expr", 216, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NameExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_name_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_name_expr", 215, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___strip_ref_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_member_expr", 219, CPyStatic_aststrip___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_member_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_member_expr", 220, CPyStatic_aststrip___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___MemberExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_member_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_member_expr", 218, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_member_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_member_expr__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed);
    ((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed = cpy_r_r0;
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_index_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_index_expr", 224, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___IndexExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_index_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_index_expr", 222, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_index_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_index_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_index_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_index_expr__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_index_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_index_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_index_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_index_expr__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___OpExprObject *)cpy_r_node)->_analyzed);
    ((mypy___nodes___OpExprObject *)cpy_r_node)->_analyzed = cpy_r_r0;
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_op_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_op_expr", 228, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___OpExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_op_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_op_expr", 226, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_op_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_op_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_op_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_op_expr__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_op_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_op_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_op_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_op_expr__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___strip_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___RefExprObject *)cpy_r_node)->_kind);
    ((mypy___nodes___RefExprObject *)cpy_r_node)->_kind = cpy_r_r0;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(((mypy___nodes___RefExprObject *)cpy_r_node)->_node);
    ((mypy___nodes___RefExprObject *)cpy_r_node)->_node = cpy_r_r2;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_SET_ATTR(cpy_r_node, CPyType_nodes___RefExpr, 7, cpy_r_r4, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "strip_ref_expr", 233, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    ((mypy___nodes___RefExprObject *)cpy_r_node)->_is_new_def = 0;
    ((mypy___nodes___RefExprObject *)cpy_r_node)->_is_inferred_def = 0;
    return 1;
CPyL2: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___strip_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:strip_ref_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely((Py_TYPE(obj_node) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_node) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_node) == CPyType_nodes___RefExpr)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___strip_ref_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "strip_ref_expr", 230, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed = cpy_r_r0;
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_call_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_call_expr", 239, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___CallExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_call_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_call_expr", 237, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_call_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_call_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_call_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_call_expr__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___SuperExprObject *)cpy_r_node)->_info);
    ((mypy___nodes___SuperExprObject *)cpy_r_node)->_info = cpy_r_r0;
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_super_expr(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "visit_super_expr", 243, CPyStatic_aststrip___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___SuperExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_node); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_super_expr(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_super_expr", 241, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___visit_super_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_super_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___visit_super_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_super_expr__TraverserVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_super_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_super_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_super_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_super_expr__NodeVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_aststrip___NodeStripVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip___NodeStripVisitor___process_lvalue_in_method(PyObject *cpy_r_self, PyObject *cpy_r_lvalue) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    tuple_T2OO cpy_r_r30;
    tuple_T2OO cpy_r_key;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_item;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r4 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 247, CPyStatic_aststrip___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL46;
    }
    cpy_r_r5 = ((mypy___nodes___MemberExprObject *)cpy_r_r4)->_is_new_def;
    if (!cpy_r_r5) goto CPyL45;
CPyL3: ;
    cpy_r_r6 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "NodeStripVisitor", "type", 251, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
CPyL4: ;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (cpy_r_r8) goto CPyL7;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 251, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r10 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 252, CPyStatic_aststrip___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL46;
    }
    cpy_r_r11 = ((mypy___nodes___MemberExprObject *)cpy_r_r10)->_name;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "NodeStripVisitor", "type", 252, CPyStatic_aststrip___globals);
        goto CPyL47;
    }
CPyL9: ;
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 252, CPyStatic_aststrip___globals, "mypy.nodes.TypeInfo", cpy_r_r12);
        goto CPyL47;
    }
    cpy_r_r14 = ((mypy___nodes___TypeInfoObject *)cpy_r_r13)->_names;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "TypeInfo", "names", 252, CPyStatic_aststrip___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = PyDict_Contains(cpy_r_r14, cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 252, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL18;
    cpy_r_r18 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "NodeStripVisitor", "type", 253, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
CPyL14: ;
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 253, CPyStatic_aststrip___globals, "mypy.nodes.TypeInfo", cpy_r_r18);
        goto CPyL46;
    }
    cpy_r_r20 = ((mypy___nodes___TypeInfoObject *)cpy_r_r19)->_names;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "TypeInfo", "names", 253, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r20);
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r21 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 253, CPyStatic_aststrip___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL48;
    }
    cpy_r_r22 = ((mypy___nodes___MemberExprObject *)cpy_r_r21)->_name;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyObject_DelItem(cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 253, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
CPyL18: ;
    cpy_r_r25 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_type;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "NodeStripVisitor", "type", 254, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
CPyL19: ;
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 254, CPyStatic_aststrip___globals, "mypy.nodes.TypeInfo", cpy_r_r25);
        goto CPyL46;
    }
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_r26)->_defn;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "TypeInfo", "defn", 254, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r27);
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r28 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 254, CPyStatic_aststrip___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL49;
    }
    cpy_r_r29 = ((mypy___nodes___MemberExprObject *)cpy_r_r28)->_name;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30.f0 = cpy_r_r27;
    cpy_r_r30.f1 = cpy_r_r29;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r29);
    cpy_r_key = cpy_r_r30;
    cpy_r_r31 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_saved_class_attrs;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "NodeStripVisitor", "saved_class_attrs", 255, CPyStatic_aststrip___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r31);
CPyL23: ;
    CPy_INCREF(cpy_r_key.f0);
    CPy_INCREF(cpy_r_key.f1);
    cpy_r_r32 = PyTuple_New(2);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6469 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp6469);
    PyObject *__tmp6470 = cpy_r_key.f1;
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp6470);
    cpy_r_r33 = PyDict_Contains(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 255, CPyStatic_aststrip___globals);
        goto CPyL50;
    }
    cpy_r_r35 = cpy_r_r33;
    if (!cpy_r_r35) goto CPyL51;
    cpy_r_r36 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_self)->_saved_class_attrs;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "process_lvalue_in_method", "NodeStripVisitor", "saved_class_attrs", 256, CPyStatic_aststrip___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r36);
CPyL26: ;
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6471 = cpy_r_key.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp6471);
    PyObject *__tmp6472 = cpy_r_key.f1;
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp6472);
    cpy_r_r38 = PyObject_DelItem(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 256, CPyStatic_aststrip___globals);
        goto CPyL46;
    } else
        goto CPyL45;
CPyL27: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL29;
    cpy_r_r44 = cpy_r_r43;
    goto CPyL30;
CPyL29: ;
    cpy_r_r45 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    cpy_r_r44 = cpy_r_r48;
CPyL30: ;
    if (!cpy_r_r44) goto CPyL42;
    CPy_INCREF(cpy_r_lvalue);
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r49 = cpy_r_lvalue;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL6473;
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r49 = cpy_r_lvalue;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL6473;
    CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 258, CPyStatic_aststrip___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_lvalue);
    goto CPyL46;
__LL6473: ;
    cpy_r_r50 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_r49)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_nodes___TupleExpr))
        cpy_r_r54 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 258, CPyStatic_aststrip___globals, "mypy.nodes.TupleExpr", cpy_r_r49);
        goto CPyL46;
    }
    cpy_r_r55 = ((mypy___nodes___TupleExprObject *)cpy_r_r54)->_items;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55;
    goto CPyL37;
CPyL35: ;
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_nodes___ListExpr))
        cpy_r_r57 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 258, CPyStatic_aststrip___globals, "mypy.nodes.ListExpr", cpy_r_r49);
        goto CPyL46;
    }
    cpy_r_r58 = ((mypy___nodes___ListExprObject *)cpy_r_r57)->_items;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r56 = cpy_r_r58;
CPyL37: ;
    cpy_r_r59 = 0;
CPyL38: ;
    cpy_r_r60 = (CPyPtr)&((PyVarObject *)cpy_r_r56)->ob_size;
    cpy_r_r61 = *(int64_t *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = (Py_ssize_t)cpy_r_r59 < (Py_ssize_t)cpy_r_r62;
    if (!cpy_r_r63) goto CPyL52;
    cpy_r_r64 = CPyList_GetItemUnsafe(cpy_r_r56, cpy_r_r59);
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_nodes___Expression)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 258, CPyStatic_aststrip___globals, "mypy.nodes.Expression", cpy_r_r64);
        goto CPyL53;
    }
    cpy_r_item = cpy_r_r65;
    cpy_r_r66 = CPyDef_aststrip___NodeStripVisitor___process_lvalue_in_method(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 259, CPyStatic_aststrip___globals);
        goto CPyL53;
    }
    cpy_r_r67 = cpy_r_r59 + 2;
    cpy_r_r59 = cpy_r_r67;
    goto CPyL38;
CPyL42: ;
    cpy_r_r68 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___StarExpr))
        cpy_r_r72 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 261, CPyStatic_aststrip___globals, "mypy.nodes.StarExpr", cpy_r_lvalue);
        goto CPyL46;
    }
    cpy_r_r73 = ((mypy___nodes___StarExprObject *)cpy_r_r72)->_expr;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_aststrip___NodeStripVisitor___process_lvalue_in_method(cpy_r_self, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 261, CPyStatic_aststrip___globals);
        goto CPyL46;
    }
CPyL45: ;
    return 1;
CPyL46: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL47: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL46;
CPyL48: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL46;
CPyL49: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_key.f0);
    CPy_DecRef(cpy_r_key.f1);
    goto CPyL46;
CPyL51: ;
    CPy_DECREF(cpy_r_key.f0);
    CPy_DECREF(cpy_r_key.f1);
    goto CPyL45;
CPyL52: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL45;
CPyL53: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL46;
}

PyObject *CPyPy_aststrip___NodeStripVisitor___process_lvalue_in_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", 0};
    static CPyArg_Parser parser = {"O:process_lvalue_in_method", kwlist, 0};
    PyObject *obj_lvalue;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lvalue)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Node)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_lvalue); 
        goto fail;
    }
    char retval = CPyDef_aststrip___NodeStripVisitor___process_lvalue_in_method(arg_self, arg_lvalue);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "process_lvalue_in_method", 245, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    int64_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_gen", "__mypyc_env__", 264, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "__mypyc_next_label__", 264, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL30;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL42;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "self", 265, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r4)->_type;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'type' of 'NodeStripVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 265, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
CPyL7: ;
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 265, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r7 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "self", 266, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r7)->_is_class_body;
    if (unlikely(cpy_r_r8 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_class_body' of 'NodeStripVisitor' undefined");
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 266, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
CPyL10: ;
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_old_is_class_body = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 266, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r10 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "info", 267, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r10);
CPyL12: ;
    cpy_r_r11 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "self", 267, CPyStatic_aststrip___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r11);
CPyL13: ;
    if (((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r11)->_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r11)->_type);
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r11)->_type = cpy_r_r10;
    cpy_r_r12 = 1;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 267, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r13 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "self", 268, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r13);
CPyL15: ;
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r13)->_is_class_body = 1;
    cpy_r_r14 = 1;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 268, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r15 = Py_None;
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r16 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 269, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL18: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_type != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL44;
    } else
        goto CPyL21;
CPyL19: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 269, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r19 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "old_type", 270, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r19);
CPyL22: ;
    cpy_r_r20 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "self", 270, CPyStatic_aststrip___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r20);
CPyL23: ;
    if (((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r20)->_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r20)->_type);
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r20)->_type = cpy_r_r19;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 270, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r22 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_old_is_class_body;
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "old_is_class_body", 271, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
CPyL25: ;
    cpy_r_r23 = ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_class", "enter_class_NodeStripVisitor_env", "self", 271, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r23);
CPyL26: ;
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r23)->_is_class_body = cpy_r_r22;
    cpy_r_r24 = 1;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 271, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r25 = Py_None;
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r26 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPyGen_SetStopIterationValue(cpy_r_r25);
    if (!0) goto CPyL40;
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r27 = cpy_r_r1 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    if (!cpy_r_r28) goto CPyL32;
    cpy_r_r29 = cpy_r_r1 == 0;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL33;
CPyL32: ;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r30 = cpy_r_r31;
CPyL33: ;
    if (cpy_r_r30) goto CPyL46;
    cpy_r_r32 = cpy_r_r1 & 1;
    cpy_r_r33 = cpy_r_r32 == 0;
    if (!cpy_r_r33) goto CPyL36;
    cpy_r_r34 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL37;
CPyL36: ;
    cpy_r_r36 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r35 = cpy_r_r36;
CPyL37: ;
    if (cpy_r_r35) {
        goto CPyL18;
    } else
        goto CPyL47;
CPyL38: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL40;
CPyL44: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL40;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL47: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL38;
}

PyObject *CPyPy_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___enter_class_NodeStripVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_class_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_class_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "__next__", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___enter_class_NodeStripVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_class_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_class_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_aststrip___enter_class_NodeStripVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "send", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_aststrip___enter_class_NodeStripVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_class_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_class_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "__iter__", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_aststrip___enter_class_NodeStripVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_aststrip___enter_class_NodeStripVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_class_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_class_NodeStripVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_aststrip___enter_class_NodeStripVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "throw", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_class_NodeStripVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_aststrip___enter_class_NodeStripVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp6474 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6474);
    PyObject *__tmp6475 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6475);
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

PyObject *CPyPy_aststrip___enter_class_NodeStripVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_class_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_class_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___enter_class_NodeStripVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "close", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___enter_class(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_aststrip___enter_class_NodeStripVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_info);
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_info != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_info);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->_info = cpy_r_info;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_aststrip___enter_class_NodeStripVisitor_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
        goto CPyL9;
    }
    if (((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___aststrip___enter_class_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
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

PyObject *CPyPy_aststrip___NodeStripVisitor___enter_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:enter_class", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___enter_class(arg_self, arg_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "enter_class", 264, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    int64_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_gen", "__mypyc_env__", 274, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "__mypyc_next_label__", 274, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL30;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL42;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "self", 275, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r4)->_type;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'type' of 'NodeStripVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 275, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
CPyL7: ;
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 275, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r7 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "self", 276, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r7)->_is_class_body;
    if (unlikely(cpy_r_r8 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'is_class_body' of 'NodeStripVisitor' undefined");
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 276, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
CPyL10: ;
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_old_is_class_body = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 276, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r10 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "info", 277, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r10);
CPyL12: ;
    cpy_r_r11 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "self", 277, CPyStatic_aststrip___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r11);
CPyL13: ;
    if (((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r11)->_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r11)->_type);
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r11)->_type = cpy_r_r10;
    cpy_r_r12 = 1;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 277, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r13 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "self", 278, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r13);
CPyL15: ;
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r13)->_is_class_body = 0;
    cpy_r_r14 = 1;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 278, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r15 = Py_None;
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r16 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 279, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL18: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_type != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL44;
    } else
        goto CPyL21;
CPyL19: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 279, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r19 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_old_type;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "old_type", 280, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r19);
CPyL22: ;
    cpy_r_r20 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "self", 280, CPyStatic_aststrip___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r20);
CPyL23: ;
    if (((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r20)->_type != NULL) {
        CPy_DECREF(((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r20)->_type);
    }
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r20)->_type = cpy_r_r19;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 280, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r22 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_old_is_class_body;
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "old_is_class_body", 281, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
CPyL25: ;
    cpy_r_r23 = ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/server/aststrip.py", "enter_method", "enter_method_NodeStripVisitor_env", "self", 281, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r23);
CPyL26: ;
    ((mypy___server___aststrip___NodeStripVisitorObject *)cpy_r_r23)->_is_class_body = cpy_r_r22;
    cpy_r_r24 = 1;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 281, CPyStatic_aststrip___globals);
        goto CPyL41;
    }
    cpy_r_r25 = Py_None;
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r26 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPyGen_SetStopIterationValue(cpy_r_r25);
    if (!0) goto CPyL40;
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r27 = cpy_r_r1 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    if (!cpy_r_r28) goto CPyL32;
    cpy_r_r29 = cpy_r_r1 == 0;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL33;
CPyL32: ;
    cpy_r_r31 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r30 = cpy_r_r31;
CPyL33: ;
    if (cpy_r_r30) goto CPyL46;
    cpy_r_r32 = cpy_r_r1 & 1;
    cpy_r_r33 = cpy_r_r32 == 0;
    if (!cpy_r_r33) goto CPyL36;
    cpy_r_r34 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL37;
CPyL36: ;
    cpy_r_r36 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r35 = cpy_r_r36;
CPyL37: ;
    if (cpy_r_r35) {
        goto CPyL18;
    } else
        goto CPyL47;
CPyL38: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL40;
CPyL44: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL40;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL47: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL38;
}

PyObject *CPyPy_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___enter_method_NodeStripVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_method_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_method_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "__next__", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_aststrip___enter_method_NodeStripVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_method_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_method_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_aststrip___enter_method_NodeStripVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "send", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_aststrip___enter_method_NodeStripVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_method_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_method_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "__iter__", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_aststrip___enter_method_NodeStripVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_aststrip___enter_method_NodeStripVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_method_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_method_NodeStripVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_aststrip___enter_method_NodeStripVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "throw", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___enter_method_NodeStripVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_aststrip___enter_method_NodeStripVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp6476 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6476);
    PyObject *__tmp6477 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6477);
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

PyObject *CPyPy_aststrip___enter_method_NodeStripVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_aststrip___enter_method_NodeStripVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.aststrip.enter_method_NodeStripVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___enter_method_NodeStripVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "close", -1, CPyStatic_aststrip___globals);
    return NULL;
}

PyObject *CPyDef_aststrip___NodeStripVisitor___enter_method(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_aststrip___enter_method_NodeStripVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_info);
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_info != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_info);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->_info = cpy_r_info;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_aststrip___enter_method_NodeStripVisitor_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
        goto CPyL9;
    }
    if (((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___aststrip___enter_method_NodeStripVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
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

PyObject *CPyPy_aststrip___NodeStripVisitor___enter_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:enter_method", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_aststrip___NodeStripVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.aststrip.NodeStripVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_aststrip___NodeStripVisitor___enter_method(arg_self, arg_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/aststrip.py", "enter_method", 274, CPyStatic_aststrip___globals);
    return NULL;
}

char CPyDef_aststrip_____top_level__(void) {
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
    tuple_T2OO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T2OO cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", -1, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_aststrip___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 34, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9172]; /* ('contextmanager', 'nullcontext') */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_aststrip___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 36, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9752]; /* ('Dict', 'Iterator', 'Tuple') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_aststrip___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 37, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r18 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r19 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r20 = CPyStatic_aststrip___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r17, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 38, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_typing_extensions = cpy_r_r21;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9753]; /* ('CLASSDEF_NO_INFO', 'AssignmentStmt', 'Block',
                                     'CallExpr', 'ClassDef', 'Decorator', 'ForStmt',
                                     'FuncDef', 'ImportAll', 'ImportFrom', 'IndexExpr',
                                     'ListExpr', 'MemberExpr', 'MypyFile', 'NameExpr',
                                     'Node', 'OpExpr', 'OverloadedFuncDef', 'RefExpr',
                                     'StarExpr', 'SuperExpr', 'SymbolTableNode', 'TupleExpr',
                                     'TypeInfo', 'Var') */
    cpy_r_r23 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r24 = CPyStatic_aststrip___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 40, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_mypy___nodes = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r27 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r28 = CPyStatic_aststrip___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 67, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_mypy___traverser = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9754]; /* ('CallableType',) */
    cpy_r_r31 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r32 = CPyStatic_aststrip___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 68, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_mypy___types = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r35 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r36 = CPyStatic_aststrip___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 69, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    CPyModule_mypy___typestate = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatic_aststrip___globals;
    cpy_r_r39 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 71, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r41 = CPyStatic_aststrip___globals;
    cpy_r_r42 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 71, CPyStatic_aststrip___globals);
        goto CPyL32;
    }
    cpy_r_r44 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r45 = (PyObject *)&PyUnicode_Type;
    cpy_r_r46.f0 = cpy_r_r44;
    cpy_r_r46.f1 = cpy_r_r45;
    CPy_INCREF(cpy_r_r46.f0);
    CPy_INCREF(cpy_r_r46.f1);
    cpy_r_r47 = PyTuple_New(2);
    if (unlikely(cpy_r_r47 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6478 = cpy_r_r46.f0;
    PyTuple_SET_ITEM(cpy_r_r47, 0, __tmp6478);
    PyObject *__tmp6479 = cpy_r_r46.f1;
    PyTuple_SET_ITEM(cpy_r_r47, 1, __tmp6479);
    cpy_r_r48 = PyObject_GetItem(cpy_r_r43, cpy_r_r47);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 71, CPyStatic_aststrip___globals);
        goto CPyL32;
    }
    cpy_r_r49 = (PyObject *)CPyType_nodes___SymbolTableNode;
    cpy_r_r50.f0 = cpy_r_r48;
    cpy_r_r50.f1 = cpy_r_r49;
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r51 = PyTuple_New(2);
    if (unlikely(cpy_r_r51 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6480 = cpy_r_r50.f0;
    PyTuple_SET_ITEM(cpy_r_r51, 0, __tmp6480);
    PyObject *__tmp6481 = cpy_r_r50.f1;
    PyTuple_SET_ITEM(cpy_r_r51, 1, __tmp6481);
    cpy_r_r52 = PyObject_GetItem(cpy_r_r40, cpy_r_r51);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 71, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r53 = CPyStatic_aststrip___globals;
    cpy_r_r54 = CPyStatics[5190]; /* 'SavedAttributes' */
    cpy_r_r55 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 71, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r57 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r58 = PyTuple_Pack(1, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 95, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r59 = CPyStatics[5191]; /* 'mypy.server.aststrip' */
    cpy_r_r60 = (PyObject *)CPyType_aststrip___NodeStripVisitor_template;
    cpy_r_r61 = CPyType_FromTemplate(cpy_r_r60, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 95, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r62 = CPyDef_aststrip___NodeStripVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", -1, CPyStatic_aststrip___globals);
        goto CPyL33;
    }
    cpy_r_r63 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r64 = CPyStatics[802]; /* 'type' */
    cpy_r_r65 = CPyStatics[5310]; /* 'is_class_body' */
    cpy_r_r66 = CPyStatics[1120]; /* 'recurse_into_functions' */
    cpy_r_r67 = CPyStatics[5311]; /* 'saved_class_attrs' */
    cpy_r_r68 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r69 = PyTuple_Pack(5, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 95, CPyStatic_aststrip___globals);
        goto CPyL33;
    }
    cpy_r_r70 = PyObject_SetAttr(cpy_r_r61, cpy_r_r63, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 95, CPyStatic_aststrip___globals);
        goto CPyL33;
    }
    CPyType_aststrip___NodeStripVisitor = (PyTypeObject *)cpy_r_r61;
    CPy_INCREF(CPyType_aststrip___NodeStripVisitor);
    cpy_r_r72 = CPyStatic_aststrip___globals;
    cpy_r_r73 = CPyStatics[5312]; /* 'NodeStripVisitor' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 95, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r76 = (PyObject *)CPyType_aststrip___NodeStripVisitor;
    cpy_r_r77 = CPyStatics[5308]; /* 'enter_class' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 264, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r79 = CPyStatic_aststrip___globals;
    cpy_r_r80 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 263, CPyStatic_aststrip___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r82[1] = {cpy_r_r78};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r81, cpy_r_r83, 1, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 264, CPyStatic_aststrip___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r78);
    cpy_r_r85 = CPyStatics[5308]; /* 'enter_class' */
    cpy_r_r86 = PyObject_SetAttr(cpy_r_r76, cpy_r_r85, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 264, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r88 = (PyObject *)CPyType_aststrip___NodeStripVisitor;
    cpy_r_r89 = CPyStatics[5309]; /* 'enter_method' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 274, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    cpy_r_r91 = CPyStatic_aststrip___globals;
    cpy_r_r92 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 273, CPyStatic_aststrip___globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r94[1] = {cpy_r_r90};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = _PyObject_Vectorcall(cpy_r_r93, cpy_r_r95, 1, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 274, CPyStatic_aststrip___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r90);
    cpy_r_r97 = CPyStatics[5309]; /* 'enter_method' */
    cpy_r_r98 = PyObject_SetAttr(cpy_r_r88, cpy_r_r97, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/server/aststrip.py", "<module>", 274, CPyStatic_aststrip___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r100 = 2;
    return cpy_r_r100;
CPyL32: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_r78);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL31;
}
