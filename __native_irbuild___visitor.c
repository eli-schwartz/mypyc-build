#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef irbuild___visitor___IRBuilderVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *irbuild___visitor___IRBuilderVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor(void);

static PyObject *
irbuild___visitor___IRBuilderVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_irbuild___visitor___IRBuilderVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return irbuild___visitor___IRBuilderVisitor_setup(type);
}

static int
irbuild___visitor___IRBuilderVisitor_traverse(mypyc___irbuild___visitor___IRBuilderVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject))));
    return 0;
}

static int
irbuild___visitor___IRBuilderVisitor_clear(mypyc___irbuild___visitor___IRBuilderVisitorObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject))));
    return 0;
}

static void
irbuild___visitor___IRBuilderVisitor_dealloc(mypyc___irbuild___visitor___IRBuilderVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, irbuild___visitor___IRBuilderVisitor_dealloc)
    irbuild___visitor___IRBuilderVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem irbuild___visitor___IRBuilderVisitor_vtable[149];
static CPyVTableItem irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static bool
CPyDef_irbuild___visitor___IRBuilderVisitor_trait_vtable_setup(void)
{
    CPyVTableItem irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node__ExpressionVisitor_glue,
    };
    memcpy(irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_offset_table, irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_trait_vtable, irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_offset_table, irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem irbuild___visitor___IRBuilderVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)irbuild___visitor___IRBuilderVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)irbuild___visitor___IRBuilderVisitor_mypy___visitor___StatementVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_var,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_irbuild___visitor___IRBuilderVisitor___bail,
    };
    memcpy(irbuild___visitor___IRBuilderVisitor_vtable, irbuild___visitor___IRBuilderVisitor_vtable_scratch, sizeof(irbuild___visitor___IRBuilderVisitor_vtable));
    return 1;
}

static PyObject *
irbuild___visitor___IRBuilderVisitor_get_builder(mypyc___irbuild___visitor___IRBuilderVisitorObject *self, void *closure);
static int
irbuild___visitor___IRBuilderVisitor_set_builder(mypyc___irbuild___visitor___IRBuilderVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef irbuild___visitor___IRBuilderVisitor_getseters[] = {
    {"builder",
     (getter)irbuild___visitor___IRBuilderVisitor_get_builder, (setter)irbuild___visitor___IRBuilderVisitor_set_builder,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef irbuild___visitor___IRBuilderVisitor_methods[] = {
    {"visit_mypy_file",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded_func_def",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_expression_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_return_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_operator_assignment_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_if_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_if_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_while_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_while_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_break_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_break_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_continue_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_try_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_try_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_pass_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_del_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_del_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_global_decl",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_global_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_nonlocal_decl",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_conditional_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_list_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dict_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_dict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_set_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_comprehension",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_comprehension",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_slice_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_slice_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_yield_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_enum_call_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_temp_node",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_temp_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_paramspec_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_reveal_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"bail",
     (PyCFunction)CPyPy_irbuild___visitor___IRBuilderVisitor___bail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_irbuild___visitor___IRBuilderVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IRBuilderVisitor",
    .tp_new = irbuild___visitor___IRBuilderVisitor_new,
    .tp_dealloc = (destructor)irbuild___visitor___IRBuilderVisitor_dealloc,
    .tp_traverse = (traverseproc)irbuild___visitor___IRBuilderVisitor_traverse,
    .tp_clear = (inquiry)irbuild___visitor___IRBuilderVisitor_clear,
    .tp_getset = irbuild___visitor___IRBuilderVisitor_getseters,
    .tp_methods = irbuild___visitor___IRBuilderVisitor_methods,
    .tp_members = irbuild___visitor___IRBuilderVisitor_members,
    .tp_basicsize = sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___visitor___IRBuilderVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_irbuild___visitor___IRBuilderVisitor_template = &CPyType_irbuild___visitor___IRBuilderVisitor_template_;

static PyObject *
irbuild___visitor___IRBuilderVisitor_setup(PyTypeObject *type)
{
    mypyc___irbuild___visitor___IRBuilderVisitorObject *self;
    self = (mypyc___irbuild___visitor___IRBuilderVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = irbuild___visitor___IRBuilderVisitor_vtable + 6;
    return (PyObject *)self;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor(void)
{
    PyObject *self = irbuild___visitor___IRBuilderVisitor_setup(CPyType_irbuild___visitor___IRBuilderVisitor);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
irbuild___visitor___IRBuilderVisitor_get_builder(mypyc___irbuild___visitor___IRBuilderVisitorObject *self, void *closure)
{
    if (unlikely(self->_builder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builder' of 'IRBuilderVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builder);
    PyObject *retval = self->_builder;
    return retval;
}

static int
irbuild___visitor___IRBuilderVisitor_set_builder(mypyc___irbuild___visitor___IRBuilderVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilderVisitor' object attribute 'builder' cannot be deleted");
        return -1;
    }
    if (self->_builder != NULL) {
        CPy_DECREF(self->_builder);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_builder___IRBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_builder = tmp;
    return 0;
}
static PyMethodDef irbuild___visitormodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef irbuild___visitormodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.visitor",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    irbuild___visitormodule_methods
};

PyObject *CPyInit_mypyc___irbuild___visitor(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___visitor_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___visitor_internal);
        return CPyModule_mypyc___irbuild___visitor_internal;
    }
    CPyModule_mypyc___irbuild___visitor_internal = PyModule_Create(&irbuild___visitormodule);
    if (unlikely(CPyModule_mypyc___irbuild___visitor_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___visitor_internal, "__name__");
    CPyStatic_irbuild___visitor___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___visitor_internal);
    if (unlikely(CPyStatic_irbuild___visitor___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_irbuild___visitor_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___visitor_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___visitor_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_irbuild___visitor___IRBuilderVisitor);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_mypyfile) {
    char cpy_r_r0;
    char cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "use transform_mypy_file instead");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_mypy_file", 164, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"mypyfile", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_mypyfile;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_mypyfile)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_mypyfile;
    if (likely(Py_TYPE(obj_mypyfile) == CPyType_nodes___MypyFile))
        arg_mypyfile = obj_mypyfile;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_mypyfile); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_mypy_file(arg_self, arg_mypyfile);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_mypy_file", 163, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_class_def", "IRBuilderVisitor", "builder", 167, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_classdef___transform_class_def(cpy_r_r0, cpy_r_cdef);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_class_def", 167, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def(arg_self, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_class_def", 166, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_import", "IRBuilderVisitor", "builder", 170, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_import(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import", 170, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Import))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_node); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import", 169, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_import_from", "IRBuilderVisitor", "builder", 173, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_import_from(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import_from", 173, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import_from", 172, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_import_all", "IRBuilderVisitor", "builder", 176, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_import_all(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import_all", 176, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import_all", 175, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_func_def", "IRBuilderVisitor", "builder", 179, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_function___transform_func_def(cpy_r_r0, cpy_r_fdef);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_func_def", 179, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_func_def", 178, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_overloaded_func_def", "IRBuilderVisitor", "builder", 182, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_function___transform_overloaded_func_def(cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_overloaded_func_def", 182, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_overloaded_func_def", 181, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_overloaded_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_overloaded_func_def__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_dec) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_decorator", "IRBuilderVisitor", "builder", 185, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_function___transform_decorator(cpy_r_r0, cpy_r_dec);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_decorator", 185, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dec", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_dec;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dec)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_dec;
    if (likely(Py_TYPE(obj_dec) == CPyType_nodes___Decorator))
        arg_dec = obj_dec;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_dec); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator(arg_self, arg_dec);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_decorator", 184, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_block", "IRBuilderVisitor", "builder", 188, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_block(cpy_r_r0, cpy_r_block);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_block", 188, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_block", 187, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_expression_stmt", "IRBuilderVisitor", "builder", 193, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_expression_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_expression_stmt", 193, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ExpressionStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_expression_stmt", 192, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_expression_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_expression_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_return_stmt", "IRBuilderVisitor", "builder", 196, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_return_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_return_stmt", 196, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ReturnStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_return_stmt", 195, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_return_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_return_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_return_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_assignment_stmt", "IRBuilderVisitor", "builder", 199, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_assignment_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assignment_stmt", 199, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assignment_stmt", 198, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_operator_assignment_stmt", "IRBuilderVisitor", "builder", 202, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_operator_assignment_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_operator_assignment_stmt", 202, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___OperatorAssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_operator_assignment_stmt", 201, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_operator_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_if_stmt", "IRBuilderVisitor", "builder", 205, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_if_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_if_stmt", 205, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_if_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___IfStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_if_stmt", 204, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_if_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_if_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_if_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_while_stmt", "IRBuilderVisitor", "builder", 208, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_while_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_while_stmt", 208, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_while_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___WhileStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_while_stmt", 207, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_while_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_while_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_for_stmt", "IRBuilderVisitor", "builder", 211, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_for_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_for_stmt", 211, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ForStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_for_stmt", 210, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_break_stmt", "IRBuilderVisitor", "builder", 214, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_break_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_break_stmt", 214, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___BreakStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_break_stmt", 213, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_break_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_break_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_continue_stmt", "IRBuilderVisitor", "builder", 217, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_continue_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_continue_stmt", 217, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ContinueStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_continue_stmt", 216, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_continue_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_continue_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_raise_stmt", "IRBuilderVisitor", "builder", 220, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_raise_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_raise_stmt", 220, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___RaiseStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_raise_stmt", 219, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_raise_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_raise_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_try_stmt", "IRBuilderVisitor", "builder", 223, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_try_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_try_stmt", 223, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___TryStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_try_stmt", 222, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_try_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_try_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_with_stmt", "IRBuilderVisitor", "builder", 226, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_with_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_with_stmt", 226, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___WithStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_with_stmt", 225, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    return 1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___PassStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_pass_stmt", 228, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_pass_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_pass_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_assert_stmt", "IRBuilderVisitor", "builder", 232, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_assert_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assert_stmt", 232, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssertStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assert_stmt", 231, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assert_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_del_stmt", "IRBuilderVisitor", "builder", 235, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_del_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_del_stmt", 235, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_del_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___DelStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_del_stmt", 234, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_del_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_del_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_del_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    return 1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_global_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___GlobalDecl))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_global_decl", 237, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_global_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_global_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_global_decl__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    return 1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___NonlocalDecl))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_nonlocal_decl", 241, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_nonlocal_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_nonlocal_decl__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_match_stmt", "IRBuilderVisitor", "builder", 246, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_match_stmt(cpy_r_r0, cpy_r_stmt);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_match_stmt", 246, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___MatchStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt(arg_self, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_match_stmt", 245, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_name_expr", "IRBuilderVisitor", "builder", 251, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_name_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_name_expr", 251, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_name_expr", 250, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_member_expr", "IRBuilderVisitor", "builder", 254, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_member_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_member_expr", 254, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_member_expr", 253, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_super_expr", "IRBuilderVisitor", "builder", 257, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_super_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_super_expr", 257, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___SuperExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_super_expr", 256, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_call_expr", "IRBuilderVisitor", "builder", 260, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_call_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_call_expr", 260, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_call_expr", 259, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_unary_expr", "IRBuilderVisitor", "builder", 263, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_unary_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_unary_expr", 263, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___UnaryExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_unary_expr", 262, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_op_expr", "IRBuilderVisitor", "builder", 266, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_op_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_op_expr", 266, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___OpExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_op_expr", 265, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_index_expr", "IRBuilderVisitor", "builder", 269, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_index_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_index_expr", 269, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___IndexExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_index_expr", 268, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_conditional_expr", "IRBuilderVisitor", "builder", 272, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_conditional_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_conditional_expr", 272, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ConditionalExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_conditional_expr", 271, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_conditional_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_conditional_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_comparison_expr", "IRBuilderVisitor", "builder", 275, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_comparison_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_comparison_expr", 275, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ComparisonExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_comparison_expr", 274, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_int_expr", "IRBuilderVisitor", "builder", 278, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_int_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_int_expr", 278, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___IntExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_int_expr", 277, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_float_expr", "IRBuilderVisitor", "builder", 281, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_float_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_float_expr", 281, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___FloatExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_float_expr", 280, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_complex_expr", "IRBuilderVisitor", "builder", 284, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_complex_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_complex_expr", 284, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ComplexExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_complex_expr", 283, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_complex_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_complex_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_complex_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_str_expr", "IRBuilderVisitor", "builder", 287, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_str_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_str_expr", 287, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___StrExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_str_expr", 286, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_bytes_expr", "IRBuilderVisitor", "builder", 290, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_bytes_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_bytes_expr", 290, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_bytes_expr", 289, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_bytes_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_bytes_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_ellipsis", "IRBuilderVisitor", "builder", 293, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_ellipsis(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_ellipsis", 293, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___EllipsisExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_ellipsis", 292, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_ellipsis__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_ellipsis__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_ellipsis__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_list_expr", "IRBuilderVisitor", "builder", 296, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_list_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_list_expr", 296, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ListExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_list_expr", 295, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_list_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_list_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_tuple_expr", "IRBuilderVisitor", "builder", 299, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_tuple_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_tuple_expr", 299, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___TupleExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_tuple_expr", 298, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_dict_expr", "IRBuilderVisitor", "builder", 302, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_dict_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_dict_expr", 302, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___DictExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_dict_expr", 301, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_dict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_dict_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_set_expr", "IRBuilderVisitor", "builder", 305, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_set_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_set_expr", 305, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___SetExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_set_expr", 304, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_set_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_set_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_list_comprehension", "IRBuilderVisitor", "builder", 308, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_list_comprehension(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_list_comprehension", 308, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___ListComprehension))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_list_comprehension", 307, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_list_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_list_comprehension__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_set_comprehension", "IRBuilderVisitor", "builder", 311, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_set_comprehension(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_set_comprehension", 311, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___SetComprehension))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_set_comprehension", 310, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_set_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_set_comprehension__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_dictionary_comprehension", "IRBuilderVisitor", "builder", 314, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_dictionary_comprehension(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_dictionary_comprehension", 314, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___DictionaryComprehension))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_dictionary_comprehension", 313, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_slice_expr", "IRBuilderVisitor", "builder", 317, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_slice_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_slice_expr", 317, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___SliceExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_slice_expr", 316, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_slice_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_slice_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_slice_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_generator_expr", "IRBuilderVisitor", "builder", 320, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_generator_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_generator_expr", 320, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___GeneratorExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_generator_expr", 319, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_lambda_expr", "IRBuilderVisitor", "builder", 323, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_function___transform_lambda_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_lambda_expr", 323, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___LambdaExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_lambda_expr", 322, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_yield_expr", "IRBuilderVisitor", "builder", 326, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_yield_expr(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_yield_expr", 326, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___YieldExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_yield_expr", 325, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_yield_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_yield_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_yield_from_expr", "IRBuilderVisitor", "builder", 329, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_yield_from_expr(cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_yield_from_expr", 329, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_yield_from_expr", 328, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_await_expr", "IRBuilderVisitor", "builder", 332, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_statement___transform_await_expr(cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_await_expr", 332, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_await_expr", 331, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_await_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_await_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_await_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "visit_assignment_expr", "IRBuilderVisitor", "builder", 335, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expression___transform_assignment_expr(cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assignment_expr", 335, CPyStatic_irbuild___visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assignment_expr", 334, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_enum_call_expr", 340, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_enum_call_expr", 339, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_enum_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_enum_call_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit__promote_expr", 343, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit__promote_expr", 342, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit__promote_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit__promote_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit__promote_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_namedtuple_expr", 346, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_namedtuple_expr", 345, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_newtype_expr", 349, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_newtype_expr", 348, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_temp_node", 352, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_temp_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_temp_node", 351, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_temp_node__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_temp_node__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_temp_node__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_alias_expr", 355, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_alias_expr", 354, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_application", 358, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_application", 357, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_var_expr", 361, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_var_expr", 360, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_paramspec_expr", 364, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_paramspec_expr", 363, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_paramspec_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_paramspec_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_var_tuple_expr", 367, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_var_tuple_expr", 366, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_type_var_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_typeddict_expr", 370, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_typeddict_expr", 369, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile analysis-only expressions");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_reveal_expr", 373, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_reveal_expr", 372, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_reveal_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_reveal_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor___IRBuilderVisitor___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "can't compile Var; should have been handled already?");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_var", 376, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    char retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_var(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_var", 375, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "CastExpr should have been handled in CallExpr");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_cast_expr", 379, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_cast_expr", 378, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "AssertTypeExpr should have been handled in CallExpr");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assert_type_expr", 382, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assert_type_expr", 381, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "should have been handled in Tuple/List/Set/DictExpr or CallExpr");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_star_expr", 385, CPyStatic_irbuild___visitor___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_star_expr", 384, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___visit_star_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___visit_star_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "visit_star_expr__ExpressionVisitor_glue", -1, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___visitor___IRBuilderVisitor___bail(PyObject *cpy_r_self, PyObject *cpy_r_msg, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/visitor.py", "bail", "IRBuilderVisitor", "builder", 396, CPyStatic_irbuild___visitor___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_builder___IRBuilder___error(cpy_r_r0, cpy_r_msg, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "bail", 396, CPyStatic_irbuild___visitor___globals);
        goto CPyL6;
    }
    cpy_r_r2 = (PyObject *)CPyType_builder___UnsupportedException;
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "bail", 397, CPyStatic_irbuild___visitor___globals);
        goto CPyL6;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_builder___UnsupportedException))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/visitor.py", "bail", 397, CPyStatic_irbuild___visitor___globals, "mypyc.irbuild.builder.UnsupportedException", cpy_r_r3);
        goto CPyL6;
    }
    CPy_Raise(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "bail", 397, CPyStatic_irbuild___visitor___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_irbuild___visitor___IRBuilderVisitor___bail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "line", 0};
    static CPyArg_Parser parser = {"OO:bail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.visitor.IRBuilderVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_irbuild___visitor___IRBuilderVisitor___bail(arg_self, arg_msg, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/visitor.py", "bail", 389, CPyStatic_irbuild___visitor___globals);
    return NULL;
}

char CPyDef_irbuild___visitor_____top_level__(void) {
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
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", -1, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 6, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10239]; /* ('NoReturn',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 8, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10240]; /* ('AssertStmt', 'AssertTypeExpr', 'AssignmentExpr',
                                      'AssignmentStmt', 'AwaitExpr', 'Block', 'BreakStmt',
                                      'BytesExpr', 'CallExpr', 'CastExpr', 'ClassDef',
                                      'ComparisonExpr', 'ComplexExpr', 'ConditionalExpr',
                                      'ContinueStmt', 'Decorator', 'DelStmt', 'DictExpr',
                                      'DictionaryComprehension', 'EllipsisExpr',
                                      'EnumCallExpr', 'ExpressionStmt', 'FloatExpr',
                                      'ForStmt', 'FuncDef', 'GeneratorExpr', 'GlobalDecl',
                                      'IfStmt', 'Import', 'ImportAll', 'ImportFrom',
                                      'IndexExpr', 'IntExpr', 'LambdaExpr',
                                      'ListComprehension', 'ListExpr', 'MatchStmt',
                                      'MemberExpr', 'MypyFile', 'NamedTupleExpr', 'NameExpr',
                                      'NewTypeExpr', 'NonlocalDecl',
                                      'OperatorAssignmentStmt', 'OpExpr',
                                      'OverloadedFuncDef', 'ParamSpecExpr', 'PassStmt',
                                      'PromoteExpr', 'RaiseStmt', 'ReturnStmt', 'RevealExpr',
                                      'SetComprehension', 'SetExpr', 'SliceExpr', 'StarExpr',
                                      'StrExpr', 'SuperExpr', 'TempNode', 'TryStmt',
                                      'TupleExpr', 'TypeAliasExpr', 'TypeApplication',
                                      'TypedDictExpr', 'TypeVarExpr', 'TypeVarTupleExpr',
                                      'UnaryExpr', 'Var', 'WhileStmt', 'WithStmt',
                                      'YieldExpr', 'YieldFromExpr') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 10, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10241]; /* ('Value',) */
    cpy_r_r18 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r19 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 84, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10242]; /* ('IRBuilder', 'IRVisitor', 'UnsupportedException') */
    cpy_r_r22 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r23 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 85, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10243]; /* ('transform_class_def',) */
    cpy_r_r26 = CPyStatics[8176]; /* 'mypyc.irbuild.classdef' */
    cpy_r_r27 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 86, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___irbuild___classdef = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___irbuild___classdef);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10244]; /* ('transform_assignment_expr', 'transform_bytes_expr',
                                      'transform_call_expr', 'transform_comparison_expr',
                                      'transform_complex_expr', 'transform_conditional_expr',
                                      'transform_dict_expr',
                                      'transform_dictionary_comprehension',
                                      'transform_ellipsis', 'transform_float_expr',
                                      'transform_generator_expr', 'transform_index_expr',
                                      'transform_int_expr', 'transform_list_comprehension',
                                      'transform_list_expr', 'transform_member_expr',
                                      'transform_name_expr', 'transform_op_expr',
                                      'transform_set_comprehension', 'transform_set_expr',
                                      'transform_slice_expr', 'transform_str_expr',
                                      'transform_super_expr', 'transform_tuple_expr',
                                      'transform_unary_expr') */
    cpy_r_r30 = CPyStatics[8270]; /* 'mypyc.irbuild.expression' */
    cpy_r_r31 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 87, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___irbuild___expression = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___irbuild___expression);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10245]; /* ('transform_decorator', 'transform_func_def',
                                      'transform_lambda_expr',
                                      'transform_overloaded_func_def') */
    cpy_r_r34 = CPyStatics[8172]; /* 'mypyc.irbuild.function' */
    cpy_r_r35 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 114, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___irbuild___function = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___irbuild___function);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10246]; /* ('transform_assert_stmt', 'transform_assignment_stmt',
                                      'transform_await_expr', 'transform_block',
                                      'transform_break_stmt', 'transform_continue_stmt',
                                      'transform_del_stmt', 'transform_expression_stmt',
                                      'transform_for_stmt', 'transform_if_stmt',
                                      'transform_import', 'transform_import_all',
                                      'transform_import_from', 'transform_match_stmt',
                                      'transform_operator_assignment_stmt',
                                      'transform_raise_stmt', 'transform_return_stmt',
                                      'transform_try_stmt', 'transform_while_stmt',
                                      'transform_with_stmt', 'transform_yield_expr',
                                      'transform_yield_from_expr') */
    cpy_r_r38 = CPyStatics[8277]; /* 'mypyc.irbuild.statement' */
    cpy_r_r39 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 120, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___irbuild___statement = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___irbuild___statement);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = (PyObject *)CPyType_builder___IRVisitor;
    cpy_r_r42 = PyTuple_Pack(1, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 146, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    cpy_r_r43 = CPyStatics[8466]; /* 'mypyc.irbuild.visitor' */
    cpy_r_r44 = (PyObject *)CPyType_irbuild___visitor___IRBuilderVisitor_template;
    cpy_r_r45 = CPyType_FromTemplate(cpy_r_r44, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 146, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    cpy_r_r46 = CPyDef_irbuild___visitor___IRBuilderVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", -1, CPyStatic_irbuild___visitor___globals);
        goto CPyL20;
    }
    cpy_r_r47 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r48 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r49 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r50 = PyTuple_Pack(2, cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 146, CPyStatic_irbuild___visitor___globals);
        goto CPyL20;
    }
    cpy_r_r51 = PyObject_SetAttr(cpy_r_r45, cpy_r_r47, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 146, CPyStatic_irbuild___visitor___globals);
        goto CPyL20;
    }
    CPyType_irbuild___visitor___IRBuilderVisitor = (PyTypeObject *)cpy_r_r45;
    CPy_INCREF(CPyType_irbuild___visitor___IRBuilderVisitor);
    cpy_r_r53 = CPyStatic_irbuild___visitor___globals;
    cpy_r_r54 = CPyStatics[8465]; /* 'IRBuilderVisitor' */
    cpy_r_r55 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/visitor.py", "<module>", 146, CPyStatic_irbuild___visitor___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL20: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL19;
}
