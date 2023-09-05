#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
strconv___StrConv_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef strconv___StrConv_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___strconv___StrConvObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___strconv___StrConvObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *strconv___StrConv_setup(PyTypeObject *type);
PyObject *CPyDef_strconv___StrConv(char cpy_r_show_ids, PyObject *cpy_r_options);

static PyObject *
strconv___StrConv_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_strconv___StrConv) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = strconv___StrConv_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_strconv___StrConv_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
strconv___StrConv_traverse(mypy___strconv___StrConvObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    Py_VISIT(self->_id_mapper);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___strconv___StrConvObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___strconv___StrConvObject))));
    return 0;
}

static int
strconv___StrConv_clear(mypy___strconv___StrConvObject *self)
{
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_id_mapper);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___strconv___StrConvObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___strconv___StrConvObject))));
    return 0;
}

static void
strconv___StrConv_dealloc(mypy___strconv___StrConvObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, strconv___StrConv_dealloc)
    strconv___StrConv_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem strconv___StrConv_vtable[102];
static CPyVTableItem strconv___StrConv_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t strconv___StrConv_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem strconv___StrConv_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t strconv___StrConv_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem strconv___StrConv_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t strconv___StrConv_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem strconv___StrConv_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t strconv___StrConv_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_strconv___StrConv_trait_vtable_setup(void)
{
    CPyVTableItem strconv___StrConv_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit__promote_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_temp_node__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(strconv___StrConv_mypy___visitor___NodeVisitor_trait_vtable, strconv___StrConv_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(strconv___StrConv_mypy___visitor___NodeVisitor_trait_vtable));
    size_t strconv___StrConv_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(strconv___StrConv_mypy___visitor___NodeVisitor_offset_table, strconv___StrConv_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(strconv___StrConv_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem strconv___StrConv_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_temp_node__ExpressionVisitor_glue,
    };
    memcpy(strconv___StrConv_mypy___visitor___ExpressionVisitor_trait_vtable, strconv___StrConv_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(strconv___StrConv_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t strconv___StrConv_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(strconv___StrConv_mypy___visitor___ExpressionVisitor_offset_table, strconv___StrConv_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(strconv___StrConv_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem strconv___StrConv_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(strconv___StrConv_mypy___visitor___StatementVisitor_trait_vtable, strconv___StrConv_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(strconv___StrConv_mypy___visitor___StatementVisitor_trait_vtable));
    size_t strconv___StrConv_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(strconv___StrConv_mypy___visitor___StatementVisitor_offset_table, strconv___StrConv_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(strconv___StrConv_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem strconv___StrConv_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(strconv___StrConv_mypy___visitor___PatternVisitor_trait_vtable, strconv___StrConv_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(strconv___StrConv_mypy___visitor___PatternVisitor_trait_vtable));
    size_t strconv___StrConv_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(strconv___StrConv_mypy___visitor___PatternVisitor_offset_table, strconv___StrConv_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(strconv___StrConv_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem strconv___StrConv_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)strconv___StrConv_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)strconv___StrConv_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)strconv___StrConv_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)strconv___StrConv_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)strconv___StrConv_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)strconv___StrConv_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)strconv___StrConv_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)strconv___StrConv_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_strconv___StrConv_____init__,
        (CPyVTableItem)CPyDef_strconv___StrConv___stringify_type,
        (CPyVTableItem)CPyDef_strconv___StrConv___get_id,
        (CPyVTableItem)CPyDef_strconv___StrConv___format_id,
        (CPyVTableItem)CPyDef_strconv___StrConv___dump,
        (CPyVTableItem)CPyDef_strconv___StrConv___func_helper,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_mypy_file,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import_from,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_import_all,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_func_def,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_class_def,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_var,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_global_decl,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_decorator,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_block,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_expression_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_while_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_for_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_return_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_if_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_break_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_continue_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_pass_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_raise_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assert_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_await_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_del_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_try_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_with_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_match_stmt,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_int_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_str_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_bytes_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___str_repr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_float_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_complex_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_ellipsis,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_star_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_name_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___pretty_name,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_member_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_yield_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_call_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_op_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_comparison_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_cast_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_reveal_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_assignment_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_unary_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_list_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_dict_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_set_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_tuple_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_index_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_super_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_application,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_var_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit__promote_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_newtype_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_lambda_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_generator_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_list_comprehension,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_set_comprehension,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_conditional_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_slice_expr,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_temp_node,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_as_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_or_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_value_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_starred_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_strconv___StrConv___visit_class_pattern,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
    };
    memcpy(strconv___StrConv_vtable, strconv___StrConv_vtable_scratch, sizeof(strconv___StrConv_vtable));
    return 1;
}

static PyObject *
strconv___StrConv_get_options(mypy___strconv___StrConvObject *self, void *closure);
static int
strconv___StrConv_set_options(mypy___strconv___StrConvObject *self, PyObject *value, void *closure);
static PyObject *
strconv___StrConv_get_show_ids(mypy___strconv___StrConvObject *self, void *closure);
static int
strconv___StrConv_set_show_ids(mypy___strconv___StrConvObject *self, PyObject *value, void *closure);
static PyObject *
strconv___StrConv_get_id_mapper(mypy___strconv___StrConvObject *self, void *closure);
static int
strconv___StrConv_set_id_mapper(mypy___strconv___StrConvObject *self, PyObject *value, void *closure);

static PyGetSetDef strconv___StrConv_getseters[] = {
    {"options",
     (getter)strconv___StrConv_get_options, (setter)strconv___StrConv_set_options,
     NULL, NULL},
    {"show_ids",
     (getter)strconv___StrConv_get_show_ids, (setter)strconv___StrConv_set_show_ids,
     NULL, NULL},
    {"id_mapper",
     (getter)strconv___StrConv_get_id_mapper, (setter)strconv___StrConv_set_id_mapper,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef strconv___StrConv_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_strconv___StrConv_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"stringify_type",
     (PyCFunction)CPyPy_strconv___StrConv___stringify_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_id",
     (PyCFunction)CPyPy_strconv___StrConv___get_id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_id",
     (PyCFunction)CPyPy_strconv___StrConv___format_id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"dump",
     (PyCFunction)CPyPy_strconv___StrConv___dump,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"func_helper",
     (PyCFunction)CPyPy_strconv___StrConv___func_helper,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_strconv___StrConv___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_strconv___StrConv___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_strconv___StrConv___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_strconv___StrConv___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_strconv___StrConv___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded_func_def",
     (PyCFunction)CPyPy_strconv___StrConv___visit_overloaded_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_strconv___StrConv___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_strconv___StrConv___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_global_decl",
     (PyCFunction)CPyPy_strconv___StrConv___visit_global_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_nonlocal_decl",
     (PyCFunction)CPyPy_strconv___StrConv___visit_nonlocal_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_strconv___StrConv___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_strconv___StrConv___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_expression_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_expression_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_operator_assignment_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_operator_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_while_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_while_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_return_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_if_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_if_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_break_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_break_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_continue_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_continue_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_pass_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_pass_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_raise_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_assert_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_del_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_del_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_try_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_try_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_strconv___StrConv___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"str_repr",
     (PyCFunction)CPyPy_strconv___StrConv___str_repr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_strconv___StrConv___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pretty_name",
     (PyCFunction)CPyPy_strconv___StrConv___pretty_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_yield_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_reveal_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_reveal_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_list_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dict_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_dict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_set_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_strconv___StrConv___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_paramspec_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_paramspec_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_type_var_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_enum_call_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_enum_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_comprehension",
     (PyCFunction)CPyPy_strconv___StrConv___visit_list_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_comprehension",
     (PyCFunction)CPyPy_strconv___StrConv___visit_set_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_strconv___StrConv___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_conditional_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_conditional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_slice_expr",
     (PyCFunction)CPyPy_strconv___StrConv___visit_slice_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_temp_node",
     (PyCFunction)CPyPy_strconv___StrConv___visit_temp_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_as_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_as_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_or_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_or_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_value_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_value_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_singleton_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_singleton_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_sequence_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_sequence_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_starred_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_starred_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mapping_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_mapping_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_pattern",
     (PyCFunction)CPyPy_strconv___StrConv___visit_class_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_strconv___StrConv_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StrConv",
    .tp_new = strconv___StrConv_new,
    .tp_dealloc = (destructor)strconv___StrConv_dealloc,
    .tp_traverse = (traverseproc)strconv___StrConv_traverse,
    .tp_clear = (inquiry)strconv___StrConv_clear,
    .tp_getset = strconv___StrConv_getseters,
    .tp_methods = strconv___StrConv_methods,
    .tp_init = strconv___StrConv_init,
    .tp_members = strconv___StrConv_members,
    .tp_basicsize = sizeof(mypy___strconv___StrConvObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___strconv___StrConvObject),
    .tp_weaklistoffset = sizeof(mypy___strconv___StrConvObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_strconv___StrConv_template = &CPyType_strconv___StrConv_template_;

static PyObject *
strconv___StrConv_setup(PyTypeObject *type)
{
    mypy___strconv___StrConvObject *self;
    self = (mypy___strconv___StrConvObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = strconv___StrConv_vtable + 12;
    self->_show_ids = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_strconv___StrConv(char cpy_r_show_ids, PyObject *cpy_r_options)
{
    PyObject *self = strconv___StrConv_setup(CPyType_strconv___StrConv);
    if (self == NULL)
        return NULL;
    char res = CPyDef_strconv___StrConv_____init__(self, cpy_r_show_ids, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
strconv___StrConv_get_options(mypy___strconv___StrConvObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'StrConv' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
strconv___StrConv_set_options(mypy___strconv___StrConvObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StrConv' object attribute 'options' cannot be deleted");
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
strconv___StrConv_get_show_ids(mypy___strconv___StrConvObject *self, void *closure)
{
    if (unlikely(self->_show_ids == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'show_ids' of 'StrConv' undefined");
        return NULL;
    }
    PyObject *retval = self->_show_ids ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
strconv___StrConv_set_show_ids(mypy___strconv___StrConvObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StrConv' object attribute 'show_ids' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_ids = tmp;
    return 0;
}

static PyObject *
strconv___StrConv_get_id_mapper(mypy___strconv___StrConvObject *self, void *closure)
{
    if (unlikely(self->_id_mapper == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'id_mapper' of 'StrConv' undefined");
        return NULL;
    }
    CPy_INCREF(self->_id_mapper);
    PyObject *retval = self->_id_mapper;
    return retval;
}

static int
strconv___StrConv_set_id_mapper(mypy___strconv___StrConvObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StrConv' object attribute 'id_mapper' cannot be deleted");
        return -1;
    }
    if (self->_id_mapper != NULL) {
        CPy_DECREF(self->_id_mapper);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_mypy___util___IdMapper)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6871;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6871;
    CPy_TypeError("mypy.util.IdMapper or None", value); 
    tmp = NULL;
__LL6871: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_id_mapper = tmp;
    return 0;
}

static PyObject *strconv___str_repr_StrConv_env_setup(PyTypeObject *type);
PyObject *CPyDef_strconv___str_repr_StrConv_env(void);

static PyObject *
strconv___str_repr_StrConv_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_strconv___str_repr_StrConv_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return strconv___str_repr_StrConv_env_setup(type);
}

static int
strconv___str_repr_StrConv_env_traverse(mypy___strconv___str_repr_StrConv_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_s);
    return 0;
}

static int
strconv___str_repr_StrConv_env_clear(mypy___strconv___str_repr_StrConv_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_s);
    return 0;
}

static void
strconv___str_repr_StrConv_env_dealloc(mypy___strconv___str_repr_StrConv_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, strconv___str_repr_StrConv_env_dealloc)
    strconv___str_repr_StrConv_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem strconv___str_repr_StrConv_env_vtable[1];
static bool
CPyDef_strconv___str_repr_StrConv_env_trait_vtable_setup(void)
{
    CPyVTableItem strconv___str_repr_StrConv_env_vtable_scratch[] = {
        NULL
    };
    memcpy(strconv___str_repr_StrConv_env_vtable, strconv___str_repr_StrConv_env_vtable_scratch, sizeof(strconv___str_repr_StrConv_env_vtable));
    return 1;
}

static PyMethodDef strconv___str_repr_StrConv_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_strconv___str_repr_StrConv_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "str_repr_StrConv_env",
    .tp_new = strconv___str_repr_StrConv_env_new,
    .tp_dealloc = (destructor)strconv___str_repr_StrConv_env_dealloc,
    .tp_traverse = (traverseproc)strconv___str_repr_StrConv_env_traverse,
    .tp_clear = (inquiry)strconv___str_repr_StrConv_env_clear,
    .tp_methods = strconv___str_repr_StrConv_env_methods,
    .tp_basicsize = sizeof(mypy___strconv___str_repr_StrConv_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_strconv___str_repr_StrConv_env_template = &CPyType_strconv___str_repr_StrConv_env_template_;

static PyObject *
strconv___str_repr_StrConv_env_setup(PyTypeObject *type)
{
    mypy___strconv___str_repr_StrConv_envObject *self;
    self = (mypy___strconv___str_repr_StrConv_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = strconv___str_repr_StrConv_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_strconv___str_repr_StrConv_env(void)
{
    PyObject *self = strconv___str_repr_StrConv_env_setup(CPyType_strconv___str_repr_StrConv_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__strconv_____mypyc_lambda__0_str_repr_StrConv_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____get__(self, instance, owner);
}
PyMemberDef strconv_____mypyc_lambda__0_str_repr_StrConv_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *strconv_____mypyc_lambda__0_str_repr_StrConv_obj_setup(PyTypeObject *type);
PyObject *CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj(void);

static PyObject *
strconv_____mypyc_lambda__0_str_repr_StrConv_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return strconv_____mypyc_lambda__0_str_repr_StrConv_obj_setup(type);
}

static int
strconv_____mypyc_lambda__0_str_repr_StrConv_obj_traverse(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject))));
    return 0;
}

static int
strconv_____mypyc_lambda__0_str_repr_StrConv_obj_clear(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject))));
    return 0;
}

static void
strconv_____mypyc_lambda__0_str_repr_StrConv_obj_dealloc(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, strconv_____mypyc_lambda__0_str_repr_StrConv_obj_dealloc)
    strconv_____mypyc_lambda__0_str_repr_StrConv_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem strconv_____mypyc_lambda__0_str_repr_StrConv_obj_vtable[2];
static bool
CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_trait_vtable_setup(void)
{
    CPyVTableItem strconv_____mypyc_lambda__0_str_repr_StrConv_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____call__,
        (CPyVTableItem)CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____get__,
    };
    memcpy(strconv_____mypyc_lambda__0_str_repr_StrConv_obj_vtable, strconv_____mypyc_lambda__0_str_repr_StrConv_obj_vtable_scratch, sizeof(strconv_____mypyc_lambda__0_str_repr_StrConv_obj_vtable));
    return 1;
}

static PyMethodDef strconv_____mypyc_lambda__0_str_repr_StrConv_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_str_repr_StrConv_obj",
    .tp_new = strconv_____mypyc_lambda__0_str_repr_StrConv_obj_new,
    .tp_dealloc = (destructor)strconv_____mypyc_lambda__0_str_repr_StrConv_obj_dealloc,
    .tp_traverse = (traverseproc)strconv_____mypyc_lambda__0_str_repr_StrConv_obj_traverse,
    .tp_clear = (inquiry)strconv_____mypyc_lambda__0_str_repr_StrConv_obj_clear,
    .tp_methods = strconv_____mypyc_lambda__0_str_repr_StrConv_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__strconv_____mypyc_lambda__0_str_repr_StrConv_obj,
    .tp_members = strconv_____mypyc_lambda__0_str_repr_StrConv_obj_members,
    .tp_basicsize = sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject),
    .tp_weaklistoffset = sizeof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_template = &CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_template_;

static PyObject *
strconv_____mypyc_lambda__0_str_repr_StrConv_obj_setup(PyTypeObject *type)
{
    mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *self;
    self = (mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = strconv_____mypyc_lambda__0_str_repr_StrConv_obj_vtable;
    self->vectorcall = CPyPy_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj(void)
{
    PyObject *self = strconv_____mypyc_lambda__0_str_repr_StrConv_obj_setup(CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__strconv_____mypyc_lambda__1_str_repr_StrConv_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____get__(self, instance, owner);
}
PyMemberDef strconv_____mypyc_lambda__1_str_repr_StrConv_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *strconv_____mypyc_lambda__1_str_repr_StrConv_obj_setup(PyTypeObject *type);
PyObject *CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj(void);

static PyObject *
strconv_____mypyc_lambda__1_str_repr_StrConv_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return strconv_____mypyc_lambda__1_str_repr_StrConv_obj_setup(type);
}

static int
strconv_____mypyc_lambda__1_str_repr_StrConv_obj_traverse(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject))));
    return 0;
}

static int
strconv_____mypyc_lambda__1_str_repr_StrConv_obj_clear(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject))));
    return 0;
}

static void
strconv_____mypyc_lambda__1_str_repr_StrConv_obj_dealloc(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, strconv_____mypyc_lambda__1_str_repr_StrConv_obj_dealloc)
    strconv_____mypyc_lambda__1_str_repr_StrConv_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem strconv_____mypyc_lambda__1_str_repr_StrConv_obj_vtable[2];
static bool
CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_trait_vtable_setup(void)
{
    CPyVTableItem strconv_____mypyc_lambda__1_str_repr_StrConv_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____call__,
        (CPyVTableItem)CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____get__,
    };
    memcpy(strconv_____mypyc_lambda__1_str_repr_StrConv_obj_vtable, strconv_____mypyc_lambda__1_str_repr_StrConv_obj_vtable_scratch, sizeof(strconv_____mypyc_lambda__1_str_repr_StrConv_obj_vtable));
    return 1;
}

static PyMethodDef strconv_____mypyc_lambda__1_str_repr_StrConv_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_str_repr_StrConv_obj",
    .tp_new = strconv_____mypyc_lambda__1_str_repr_StrConv_obj_new,
    .tp_dealloc = (destructor)strconv_____mypyc_lambda__1_str_repr_StrConv_obj_dealloc,
    .tp_traverse = (traverseproc)strconv_____mypyc_lambda__1_str_repr_StrConv_obj_traverse,
    .tp_clear = (inquiry)strconv_____mypyc_lambda__1_str_repr_StrConv_obj_clear,
    .tp_methods = strconv_____mypyc_lambda__1_str_repr_StrConv_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__strconv_____mypyc_lambda__1_str_repr_StrConv_obj,
    .tp_members = strconv_____mypyc_lambda__1_str_repr_StrConv_obj_members,
    .tp_basicsize = sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject),
    .tp_weaklistoffset = sizeof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_template = &CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_template_;

static PyObject *
strconv_____mypyc_lambda__1_str_repr_StrConv_obj_setup(PyTypeObject *type)
{
    mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *self;
    self = (mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = strconv_____mypyc_lambda__1_str_repr_StrConv_obj_vtable;
    self->vectorcall = CPyPy_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj(void)
{
    PyObject *self = strconv_____mypyc_lambda__1_str_repr_StrConv_obj_setup(CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef strconvmodule_methods[] = {
    {"dump_tagged", (PyCFunction)CPyPy_strconv___dump_tagged, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"indent", (PyCFunction)CPyPy_strconv___indent, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef strconvmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.strconv",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    strconvmodule_methods
};

PyObject *CPyInit_mypy___strconv(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___strconv_internal) {
        Py_INCREF(CPyModule_mypy___strconv_internal);
        return CPyModule_mypy___strconv_internal;
    }
    CPyModule_mypy___strconv_internal = PyModule_Create(&strconvmodule);
    if (unlikely(CPyModule_mypy___strconv_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___strconv_internal, "__name__");
    CPyStatic_strconv___globals = PyModule_GetDict(CPyModule_mypy___strconv_internal);
    if (unlikely(CPyStatic_strconv___globals == NULL))
        goto fail;
    CPyType_strconv___str_repr_StrConv_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_strconv___str_repr_StrConv_env_template, NULL, modname);
    if (unlikely(!CPyType_strconv___str_repr_StrConv_env))
        goto fail;
    CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_template, NULL, modname);
    if (unlikely(!CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj))
        goto fail;
    CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_template, NULL, modname);
    if (unlikely(!CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_strconv_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___strconv_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___strconv_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_strconv___StrConv);
    Py_CLEAR(CPyType_strconv___str_repr_StrConv_env);
    Py_CLEAR(CPyType_strconv_____mypyc_lambda__0_str_repr_StrConv_obj);
    Py_CLEAR(CPyType_strconv_____mypyc_lambda__1_str_repr_StrConv_obj);
    return NULL;
}

char CPyDef_strconv___StrConv_____init__(PyObject *cpy_r_self, char cpy_r_show_ids, PyObject *cpy_r_options) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    if (cpy_r_show_ids != 2) goto CPyL2;
    cpy_r_show_ids = 0;
CPyL2: ;
    CPy_INCREF(cpy_r_options);
    if (((mypy___strconv___StrConvObject *)cpy_r_self)->_options != NULL) {
        CPy_DECREF(((mypy___strconv___StrConvObject *)cpy_r_self)->_options);
    }
    ((mypy___strconv___StrConvObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/strconv.py", "__init__", 34, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    ((mypy___strconv___StrConvObject *)cpy_r_self)->_show_ids = cpy_r_show_ids;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/strconv.py", "__init__", 35, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    if (((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper != NULL) {
        CPy_DECREF(((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper);
    }
    ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/strconv.py", "__init__", 36, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (!cpy_r_show_ids) goto CPyL8;
    cpy_r_r4 = CPyDef_mypy___util___IdMapper();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "__init__", 38, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper != NULL) {
        CPy_DECREF(((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper);
    }
    ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/strconv.py", "__init__", 38, CPyStatic_strconv___globals);
        goto CPyL9;
    }
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_strconv___StrConv_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"show_ids", "options", 0};
    PyObject *obj_show_ids = NULL;
    PyObject *obj_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|$O@O", "__init__", kwlist, &obj_show_ids, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    char arg_show_ids;
    if (obj_show_ids == NULL) {
        arg_show_ids = 2;
    } else if (unlikely(!PyBool_Check(obj_show_ids))) {
        CPy_TypeError("bool", obj_show_ids); goto fail;
    } else
        arg_show_ids = obj_show_ids == Py_True;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_strconv___StrConv_____init__(arg_self, arg_show_ids, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "__init__", 33, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___stringify_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyStatic_strconv___globals;
    cpy_r_r1 = CPyModule_mypy___types;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r5 = PyImport_Import(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "stringify_type", 41, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    CPyModule_mypy___types = cpy_r_r5;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r7 = PyImport_GetModuleDict();
    cpy_r_r8 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "stringify_type", 41, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r0, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/strconv.py", "stringify_type", 41, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r12 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "stringify_type", "StrConv", "id_mapper", 43, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r12);
CPyL6: ;
    cpy_r_r13 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "stringify_type", "StrConv", "options", 43, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r13);
CPyL7: ;
    cpy_r_r14 = CPyDef_types___TypeStrVisitor(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "stringify_type", 43, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r15 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r14); /* accept */
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "stringify_type", 43, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "stringify_type", 43, CPyStatic_strconv___globals, "str", cpy_r_r15);
        goto CPyL11;
    }
    return cpy_r_r16;
CPyL11: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL12: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL11;
}

PyObject *CPyPy_strconv___StrConv___stringify_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:stringify_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___stringify_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "stringify_type", 40, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___get_id(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "get_id", "StrConv", "id_mapper", 46, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "get_id", "StrConv", "id_mapper", 47, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "get_id", 47, CPyStatic_strconv___globals, "mypy.util.IdMapper", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = CPyDef_mypy___util___IdMapper___id(cpy_r_r4, cpy_r_o);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/strconv.py", "get_id", 47, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_strconv___StrConv___get_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:get_id", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    PyObject *retval = CPyDef_strconv___StrConv___get_id(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "get_id", 45, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___format_id(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    cpy_r_r0 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "format_id", "StrConv", "id_mapper", 51, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = CPyStatics[2465]; /* '<' */
    cpy_r_r4 = CPyDef_strconv___StrConv___get_id(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "format_id", 52, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r5 = PyObject_Str(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "format_id", 52, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyStatics[840]; /* '>' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "format_id", 52, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_strconv___StrConv___format_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:format_id", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    PyObject *retval = CPyDef_strconv___StrConv___format_id(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "format_id", 50, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___dump(PyObject *cpy_r_self, PyObject *cpy_r_nodes, PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_tag;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyDef_mypy___util___short_type(cpy_r_obj);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 63, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_r1 = CPyStatics[171]; /* ':' */
    cpy_r_r2 = PyUnicode_Concat(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 63, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_r3 = ((mypy___nodes___ContextObject *)cpy_r_obj)->_line;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/strconv.py", "dump", "Context", "line", 63, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    CPyTagged_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = CPyTagged_Str(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 63, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    cpy_r_r5 = PyUnicode_Concat(cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 63, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_tag = cpy_r_r5;
    cpy_r_r6 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_show_ids;
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AttributeError("mypy/strconv.py", "dump", "StrConv", "show_ids", 64, CPyStatic_strconv___globals);
        goto CPyL20;
    }
CPyL6: ;
    if (!cpy_r_r6) goto CPyL16;
CPyL7: ;
    cpy_r_r7 = ((mypy___strconv___StrConvObject *)cpy_r_self)->_id_mapper;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "dump", "StrConv", "id_mapper", 65, CPyStatic_strconv___globals);
        goto CPyL20;
    }
CPyL8: ;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    if (cpy_r_r9) {
        goto CPyL11;
    } else
        goto CPyL21;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 65, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r11 = CPyStatics[2465]; /* '<' */
    cpy_r_r12 = CPyDef_strconv___StrConv___get_id(cpy_r_self, cpy_r_obj);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 66, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r13 = PyObject_Str(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 66, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r14 = CPyStatics[840]; /* '>' */
    cpy_r_r15 = CPyStr_Build(3, cpy_r_r11, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 66, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r16 = CPyStr_Append(cpy_r_tag, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 66, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_tag = cpy_r_r16;
CPyL16: ;
    cpy_r_r17 = CPyDef_strconv___dump_tagged(cpy_r_nodes, cpy_r_tag, cpy_r_self);
    CPy_DECREF(cpy_r_tag);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump", 67, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    return cpy_r_r17;
CPyL18: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_tag);
    goto CPyL18;
CPyL21: ;
    CPy_DECREF(cpy_r_tag);
    goto CPyL9;
}

PyObject *CPyPy_strconv___StrConv___dump(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"nodes", "obj", 0};
    static CPyArg_Parser parser = {"OO:dump", kwlist, 0};
    PyObject *obj_nodes;
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_nodes, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_nodes = obj_nodes;
    PyObject *arg_obj;
    if (likely(PyObject_TypeCheck(obj_obj, CPyType_nodes___Context)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_obj); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___dump(arg_self, arg_nodes, arg_obj);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "dump", 56, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___func_helper(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_extra;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    CPyPtr cpy_r_r47;
    tuple_T2OO cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    tuple_T2OO cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_a;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T2OO cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 75, CPyStatic_strconv___globals);
        goto CPyL43;
    }
    cpy_r_args = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 76, CPyStatic_strconv___globals);
        goto CPyL44;
    }
    cpy_r_extra = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_arguments;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "func_helper", "FuncItem", "arguments", 77, CPyStatic_strconv___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL46;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___Argument))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "func_helper", 77, CPyStatic_strconv___globals, "mypy.nodes.Argument", cpy_r_r8);
        goto CPyL47;
    }
    cpy_r_arg = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r10);
    cpy_r_kind = cpy_r_r10;
    cpy_r_r11 = CPyStatics[829]; /* 'is_required' */
    PyObject *cpy_r_r12[1] = {cpy_r_kind};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 79, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 79, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    if (cpy_r_r15) {
        goto CPyL49;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r16 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r17 = PyList_Append(cpy_r_args, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 80, CPyStatic_strconv___globals);
        goto CPyL47;
    } else
        goto CPyL31;
CPyL10: ;
    cpy_r_r19 = CPyStatics[1075]; /* 'is_optional' */
    PyObject *cpy_r_r20[1] = {cpy_r_kind};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_VectorcallMethod(cpy_r_r19, cpy_r_r21, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 81, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 81, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    if (cpy_r_r23) {
        goto CPyL50;
    } else
        goto CPyL19;
CPyL13: ;
    cpy_r_r24 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 != cpy_r_r25;
    if (cpy_r_r26) {
        goto CPyL16;
    } else
        goto CPyL51;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 82, CPyStatic_strconv___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r28 = CPyStatics[748]; /* 'default' */
    cpy_r_r29 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_arg);
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "func_helper", 83, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r30);
        goto CPyL52;
    }
    cpy_r_r32 = PyList_New(2);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 83, CPyStatic_strconv___globals);
        goto CPyL53;
    }
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_r32)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    *(PyObject * *)cpy_r_r34 = cpy_r_r29;
    cpy_r_r35 = cpy_r_r34 + 8;
    *(PyObject * *)cpy_r_r35 = cpy_r_r31;
    cpy_r_r36.f0 = cpy_r_r28;
    cpy_r_r36.f1 = cpy_r_r32;
    CPy_INCREF(cpy_r_r36.f0);
    CPy_INCREF(cpy_r_r36.f1);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6872 = cpy_r_r36.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp6872);
    PyObject *__tmp6873 = cpy_r_r36.f1;
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp6873);
    cpy_r_r38 = PyList_Append(cpy_r_args, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 83, CPyStatic_strconv___globals);
        goto CPyL47;
    } else
        goto CPyL31;
CPyL19: ;
    cpy_r_r40 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL54;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 84, CPyStatic_strconv___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r42 = cpy_r_kind == cpy_r_r40;
    if (cpy_r_r42) {
        goto CPyL55;
    } else
        goto CPyL25;
CPyL23: ;
    cpy_r_r43 = CPyStatics[3769]; /* 'VarArg' */
    cpy_r_r44 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r45 = PyList_New(1);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 85, CPyStatic_strconv___globals);
        goto CPyL56;
    }
    cpy_r_r46 = (CPyPtr)&((PyListObject *)cpy_r_r45)->ob_item;
    cpy_r_r47 = *(CPyPtr *)cpy_r_r46;
    *(PyObject * *)cpy_r_r47 = cpy_r_r44;
    cpy_r_r48.f0 = cpy_r_r43;
    cpy_r_r48.f1 = cpy_r_r45;
    CPy_INCREF(cpy_r_r48.f0);
    CPy_INCREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6874 = cpy_r_r48.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp6874);
    PyObject *__tmp6875 = cpy_r_r48.f1;
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp6875);
    cpy_r_r50 = PyList_Append(cpy_r_extra, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 85, CPyStatic_strconv___globals);
        goto CPyL47;
    } else
        goto CPyL31;
CPyL25: ;
    cpy_r_r52 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r52 == NULL)) {
        goto CPyL57;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 86, CPyStatic_strconv___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r54 = cpy_r_kind == cpy_r_r52;
    CPy_DECREF(cpy_r_kind);
    if (!cpy_r_r54) goto CPyL58;
    cpy_r_r55 = CPyStatics[5505]; /* 'DictVarArg' */
    cpy_r_r56 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r57 = PyList_New(1);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 87, CPyStatic_strconv___globals);
        goto CPyL59;
    }
    cpy_r_r58 = (CPyPtr)&((PyListObject *)cpy_r_r57)->ob_item;
    cpy_r_r59 = *(CPyPtr *)cpy_r_r58;
    *(PyObject * *)cpy_r_r59 = cpy_r_r56;
    cpy_r_r60.f0 = cpy_r_r55;
    cpy_r_r60.f1 = cpy_r_r57;
    CPy_INCREF(cpy_r_r60.f0);
    CPy_INCREF(cpy_r_r60.f1);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r61 = PyTuple_New(2);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6876 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp6876);
    PyObject *__tmp6877 = cpy_r_r60.f1;
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp6877);
    cpy_r_r62 = PyList_Append(cpy_r_extra, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 87, CPyStatic_strconv___globals);
        goto CPyL47;
    }
CPyL31: ;
    cpy_r_r64 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r64;
    goto CPyL4;
CPyL32: ;
    cpy_r_r65 = PyList_New(0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 88, CPyStatic_strconv___globals);
        goto CPyL45;
    }
    cpy_r_a = cpy_r_r65;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = cpy_r_r68 != 0;
    if (!cpy_r_r69) goto CPyL60;
    cpy_r_r70 = CPyStatics[5506]; /* 'Args' */
    cpy_r_r71.f0 = cpy_r_r70;
    cpy_r_r71.f1 = cpy_r_args;
    CPy_INCREF(cpy_r_r71.f0);
    CPy_INCREF(cpy_r_r71.f1);
    CPy_DECREF(cpy_r_args);
    cpy_r_r72 = PyTuple_New(2);
    if (unlikely(cpy_r_r72 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6878 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r72, 0, __tmp6878);
    PyObject *__tmp6879 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r72, 1, __tmp6879);
    cpy_r_r73 = PyList_Append(cpy_r_a, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 90, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL35: ;
    cpy_r_r75 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_r75 != cpy_r_r76;
    CPy_DECREF(cpy_r_r75);
    if (!cpy_r_r77) goto CPyL38;
    cpy_r_r78 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r78);
    if (likely(cpy_r_r78 != Py_None))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "func_helper", 92, CPyStatic_strconv___globals, "mypy.types.ProperType", cpy_r_r78);
        goto CPyL61;
    }
    cpy_r_r80 = PyList_Append(cpy_r_a, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 92, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL38: ;
    cpy_r_r82 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_is_generator;
    if (!cpy_r_r82) goto CPyL40;
CPyL39: ;
    cpy_r_r83 = CPyStatics[4331]; /* 'Generator' */
    cpy_r_r84 = PyList_Append(cpy_r_a, cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 94, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL40: ;
    cpy_r_r86 = CPyList_Extend(cpy_r_a, cpy_r_extra);
    CPy_DECREF(cpy_r_extra);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 95, CPyStatic_strconv___globals);
        goto CPyL62;
    } else
        goto CPyL63;
CPyL41: ;
    cpy_r_r87 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = PyList_Append(cpy_r_a, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/strconv.py", "func_helper", 96, CPyStatic_strconv___globals);
        goto CPyL62;
    }
    return cpy_r_a;
CPyL43: ;
    cpy_r_r90 = NULL;
    return cpy_r_r90;
CPyL44: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    goto CPyL43;
CPyL46: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL32;
CPyL47: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    goto CPyL43;
CPyL48: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    goto CPyL43;
CPyL49: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL9;
CPyL50: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL13;
CPyL51: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_extra);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_arg);
    goto CPyL14;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r29);
    goto CPyL43;
CPyL53: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r31);
    goto CPyL43;
CPyL54: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    goto CPyL20;
CPyL55: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL23;
CPyL56: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r44);
    goto CPyL43;
CPyL57: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    goto CPyL26;
CPyL58: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL31;
CPyL59: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r56);
    goto CPyL43;
CPyL60: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL35;
CPyL61: ;
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_a);
    goto CPyL43;
CPyL62: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL43;
CPyL63: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL41;
}

PyObject *CPyPy_strconv___StrConv___func_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:func_helper", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___func_helper(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "func_helper", 69, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_a;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_defs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 103, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_a = cpy_r_r1;
    cpy_r_r4 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_is_bom;
    if (!cpy_r_r4) goto CPyL3;
CPyL2: ;
    cpy_r_r5 = CPyStatics[5507]; /* 'BOM' */
    cpy_r_r6 = CPyList_Insert(cpy_r_a, 0, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 105, CPyStatic_strconv___globals);
        goto CPyL29;
    }
CPyL3: ;
    cpy_r_r8 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_path;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[8]; /* 'main' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL6;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 109, CPyStatic_strconv___globals);
        goto CPyL29;
    }
CPyL6: ;
    cpy_r_r15 = cpy_r_r10 != 0;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_path;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyModule_os;
    cpy_r_r18 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 112, CPyStatic_strconv___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_mypy_file", 112, CPyStatic_strconv___globals, "str", cpy_r_r19);
        goto CPyL30;
    }
    cpy_r_r21 = CPyStatics[1594]; /* '/' */
    cpy_r_r22 = PyUnicode_Replace(cpy_r_r16, cpy_r_r20, cpy_r_r21, -1);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 112, CPyStatic_strconv___globals);
        goto CPyL29;
    }
    cpy_r_r23 = CPyList_Insert(cpy_r_a, 0, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 112, CPyStatic_strconv___globals);
        goto CPyL29;
    }
CPyL11: ;
    cpy_r_r25 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_ignored_lines;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PyDict_Size(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = cpy_r_r27 != 0;
    if (!cpy_r_r28) goto CPyL25;
    cpy_r_r29 = CPyStatics[71]; /* ', ' */
    cpy_r_r30 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_ignored_lines;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyModule_builtins;
    cpy_r_r32 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r34[1] = {cpy_r_r30};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r30);
    if (likely(PyList_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals, "list", cpy_r_r36);
        goto CPyL29;
    }
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = PyList_New(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    cpy_r_r41 = 0;
CPyL17: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL33;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r41);
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r47 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r47 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL34;
    }
    cpy_r_line = cpy_r_r47;
    cpy_r_r48 = CPyTagged_Str(cpy_r_line);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL34;
    }
    cpy_r_r49 = CPyList_SetItemUnsafe(cpy_r_r40, cpy_r_r41, cpy_r_r48);
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL34;
    }
    cpy_r_r50 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r50;
    goto CPyL17;
CPyL22: ;
    cpy_r_r51 = PyUnicode_Join(cpy_r_r29, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL29;
    }
    cpy_r_r52 = CPyStatics[5508]; /* 'IgnoredLines(' */
    cpy_r_r53 = CPyStatics[72]; /* ')' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r52, cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL29;
    }
    cpy_r_r55 = PyList_Append(cpy_r_a, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 114, CPyStatic_strconv___globals);
        goto CPyL29;
    }
CPyL25: ;
    cpy_r_r57 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 115, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    return cpy_r_r57;
CPyL27: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r16);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r30);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r37);
    goto CPyL27;
CPyL33: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL22;
CPyL34: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    goto CPyL27;
}

PyObject *CPyPy_strconv___StrConv___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_mypy_file(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file", 101, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
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
    PyObject *cpy_r_as_id;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 118, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___ImportObject *)cpy_r_o)->_ids;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL15;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    PyObject *__tmp6880;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp6880 = NULL;
        goto __LL6881;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp6880 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp6880 = NULL;
    }
    if (__tmp6880 == NULL) goto __LL6881;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1)))
        __tmp6880 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6880 = NULL;
    }
    if (__tmp6880 != NULL) goto __LL6882;
    if (PyTuple_GET_ITEM(cpy_r_r7, 1) == Py_None)
        __tmp6880 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6880 = NULL;
    }
    if (__tmp6880 != NULL) goto __LL6882;
    __tmp6880 = NULL;
__LL6882: ;
    if (__tmp6880 == NULL) goto __LL6881;
    __tmp6880 = cpy_r_r7;
__LL6881: ;
    if (unlikely(__tmp6880 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6883 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp6883);
        PyObject *__tmp6884;
        if (likely(PyUnicode_Check(__tmp6883)))
            __tmp6884 = __tmp6883;
        else {
            CPy_TypeError("str", __tmp6883); 
            __tmp6884 = NULL;
        }
        cpy_r_r8.f0 = __tmp6884;
        PyObject *__tmp6885 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp6885);
        PyObject *__tmp6886;
        if (PyUnicode_Check(__tmp6885))
            __tmp6886 = __tmp6885;
        else {
            __tmp6886 = NULL;
        }
        if (__tmp6886 != NULL) goto __LL6887;
        if (__tmp6885 == Py_None)
            __tmp6886 = __tmp6885;
        else {
            __tmp6886 = NULL;
        }
        if (__tmp6886 != NULL) goto __LL6887;
        CPy_TypeError("str or None", __tmp6885); 
        __tmp6886 = NULL;
__LL6887: ;
        cpy_r_r8.f1 = __tmp6886;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 119, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_id = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_as_id = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_as_id != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL17;
    cpy_r_r13 = CPyStatics[4020]; /* ' : ' */
    if (likely(cpy_r_as_id != Py_None))
        cpy_r_r14 = cpy_r_as_id;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_import", 121, CPyStatic_strconv___globals, "str", cpy_r_as_id);
        goto CPyL18;
    }
    cpy_r_r15 = CPyStr_Build(3, cpy_r_id, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 121, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r16 = PyList_Append(cpy_r_a, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 121, CPyStatic_strconv___globals);
        goto CPyL16;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r18 = PyList_Append(cpy_r_a, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 123, CPyStatic_strconv___globals);
        goto CPyL16;
    }
CPyL9: ;
    cpy_r_r20 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r20;
    goto CPyL2;
CPyL10: ;
    cpy_r_r21 = CPyStatics[5509]; /* 'Import:' */
    cpy_r_r22 = ((mypy___nodes___ImportObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyTagged_Str(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 124, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    cpy_r_r24 = CPyStatics[2381]; /* '(' */
    cpy_r_r25 = CPyStatics[71]; /* ', ' */
    cpy_r_r26 = PyUnicode_Join(cpy_r_r25, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 124, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r27 = CPyStatics[72]; /* ')' */
    cpy_r_r28 = CPyStr_Build(5, cpy_r_r21, cpy_r_r23, cpy_r_r24, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import", 124, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    return cpy_r_r28;
CPyL14: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL15: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_as_id);
    goto CPyL8;
CPyL18: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_id);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL14;
}

PyObject *CPyPy_strconv___StrConv___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import", 117, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_as_name;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
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
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 127, CPyStatic_strconv___globals);
        goto CPyL17;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL18;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    PyObject *__tmp6888;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp6888 = NULL;
        goto __LL6889;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp6888 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp6888 = NULL;
    }
    if (__tmp6888 == NULL) goto __LL6889;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1)))
        __tmp6888 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6888 = NULL;
    }
    if (__tmp6888 != NULL) goto __LL6890;
    if (PyTuple_GET_ITEM(cpy_r_r7, 1) == Py_None)
        __tmp6888 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6888 = NULL;
    }
    if (__tmp6888 != NULL) goto __LL6890;
    __tmp6888 = NULL;
__LL6890: ;
    if (__tmp6888 == NULL) goto __LL6889;
    __tmp6888 = cpy_r_r7;
__LL6889: ;
    if (unlikely(__tmp6888 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6891 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp6891);
        PyObject *__tmp6892;
        if (likely(PyUnicode_Check(__tmp6891)))
            __tmp6892 = __tmp6891;
        else {
            CPy_TypeError("str", __tmp6891); 
            __tmp6892 = NULL;
        }
        cpy_r_r8.f0 = __tmp6892;
        PyObject *__tmp6893 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp6893);
        PyObject *__tmp6894;
        if (PyUnicode_Check(__tmp6893))
            __tmp6894 = __tmp6893;
        else {
            __tmp6894 = NULL;
        }
        if (__tmp6894 != NULL) goto __LL6895;
        if (__tmp6893 == Py_None)
            __tmp6894 = __tmp6893;
        else {
            __tmp6894 = NULL;
        }
        if (__tmp6894 != NULL) goto __LL6895;
        CPy_TypeError("str or None", __tmp6893); 
        __tmp6894 = NULL;
__LL6895: ;
        cpy_r_r8.f1 = __tmp6894;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 128, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_name = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_as_name = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_as_name != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL20;
    cpy_r_r13 = CPyStatics[4020]; /* ' : ' */
    if (likely(cpy_r_as_name != Py_None))
        cpy_r_r14 = cpy_r_as_name;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_import_from", 130, CPyStatic_strconv___globals, "str", cpy_r_as_name);
        goto CPyL21;
    }
    cpy_r_r15 = CPyStr_Build(3, cpy_r_name, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 130, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    cpy_r_r16 = PyList_Append(cpy_r_a, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 130, CPyStatic_strconv___globals);
        goto CPyL19;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r18 = PyList_Append(cpy_r_a, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 132, CPyStatic_strconv___globals);
        goto CPyL19;
    }
CPyL9: ;
    cpy_r_r20 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r20;
    goto CPyL2;
CPyL10: ;
    cpy_r_r21 = CPyStatics[5510]; /* 'ImportFrom:' */
    cpy_r_r22 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyTagged_Str(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 133, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    cpy_r_r24 = CPyStatics[2381]; /* '(' */
    cpy_r_r25 = CPyStatics[224]; /* '.' */
    cpy_r_r26 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_relative;
    CPyTagged_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_r28 = PyNumber_Multiply(cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 133, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_import_from", 133, CPyStatic_strconv___globals, "str", cpy_r_r28);
        goto CPyL23;
    }
    cpy_r_r30 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_id;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = PyUnicode_Concat(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 133, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    cpy_r_r32 = CPyStatics[5511]; /* ', [' */
    cpy_r_r33 = CPyStatics[71]; /* ', ' */
    cpy_r_r34 = PyUnicode_Join(cpy_r_r33, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 133, CPyStatic_strconv___globals);
        goto CPyL24;
    }
    cpy_r_r35 = CPyStatics[5512]; /* '])' */
    cpy_r_r36 = CPyStr_Build(7, cpy_r_r21, cpy_r_r23, cpy_r_r24, cpy_r_r31, cpy_r_r32, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 133, CPyStatic_strconv___globals);
        goto CPyL17;
    }
    return cpy_r_r36;
CPyL17: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL18: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL19: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_as_name);
    goto CPyL8;
CPyL21: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_name);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r23);
    goto CPyL17;
CPyL24: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r31);
    goto CPyL17;
}

PyObject *CPyPy_strconv___StrConv___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import_from(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import_from", 126, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyStatics[5513]; /* 'ImportAll:' */
    cpy_r_r1 = ((mypy___nodes___ImportAllObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_all", 136, CPyStatic_strconv___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = CPyStatics[224]; /* '.' */
    cpy_r_r5 = ((mypy___nodes___ImportAllObject *)cpy_r_o)->_relative;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r_r7 = PyNumber_Multiply(cpy_r_r4, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_all", 136, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_import_all", 136, CPyStatic_strconv___globals, "str", cpy_r_r7);
        goto CPyL7;
    }
    cpy_r_r9 = ((mypy___nodes___ImportAllObject *)cpy_r_o)->_id;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_all", 136, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r11 = CPyStatics[72]; /* ')' */
    cpy_r_r12 = CPyStr_Build(5, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_import_all", 136, CPyStatic_strconv___globals);
        goto CPyL6;
    }
    return cpy_r_r12;
CPyL6: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_strconv___StrConv___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import_all(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import_all", 135, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    int64_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    cpy_r_r0 = CPyDef_strconv___StrConv___func_helper(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 141, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 142, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL2: ;
    cpy_r_r2 = CPyList_Insert(cpy_r_a, 0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 142, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    cpy_r_r4 = PySet_New(NULL);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 143, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    cpy_r_r5 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_arguments;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_func_def", "FuncDef", "arguments", 143, CPyStatic_strconv___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL50;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_nodes___Argument))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_func_def", 143, CPyStatic_strconv___globals, "mypy.nodes.Argument", cpy_r_r11);
        goto CPyL51;
    }
    cpy_r_arg = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r14 = PySet_Add(cpy_r_r4, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 143, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    cpy_r_r16 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r16;
    goto CPyL6;
CPyL10: ;
    cpy_r_arg_kinds = cpy_r_r4;
    cpy_r_r17 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r19 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r21 = PySet_New(NULL);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals);
        goto CPyL54;
    }
    cpy_r_r22 = PySet_Add(cpy_r_r21, cpy_r_r17);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals);
        goto CPyL55;
    }
    cpy_r_r24 = PySet_Add(cpy_r_r21, cpy_r_r19);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals);
        goto CPyL55;
    }
    cpy_r_r26 = PyNumber_And(cpy_r_arg_kinds, cpy_r_r21);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    if (likely(PySet_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_func_def", 144, CPyStatic_strconv___globals, "set", cpy_r_r26);
        goto CPyL48;
    }
    cpy_r_r28 = (CPyPtr)&((PySetObject *)cpy_r_r27)->used;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r30 > (Py_ssize_t)0;
    if (!cpy_r_r31) goto CPyL26;
    cpy_r_r32 = CPyStatics[5514]; /* 'MaxPos(' */
    cpy_r_r33 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_max_pos;
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/strconv.py", "visit_func_def", "FuncDef", "max_pos", 145, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    CPyTagged_INCREF(cpy_r_r33);
CPyL23: ;
    cpy_r_r34 = CPyTagged_Str(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 145, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    cpy_r_r35 = CPyStatics[72]; /* ')' */
    cpy_r_r36 = CPyStr_Build(3, cpy_r_r32, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 145, CPyStatic_strconv___globals);
        goto CPyL48;
    }
    cpy_r_r37 = CPyList_Insert(cpy_r_a, 2, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 145, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL26: ;
    cpy_r_r39 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_abstract_status;
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/strconv.py", "visit_func_def", "FuncDef", "abstract_status", 146, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL27: ;
    cpy_r_r40 = cpy_r_r39 & 1;
    cpy_r_r41 = cpy_r_r40 == 0;
    if (!cpy_r_r41) goto CPyL29;
    cpy_r_r42 = cpy_r_r39 == 2;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL30;
CPyL29: ;
    cpy_r_r44 = CPyTagged_IsEq_(cpy_r_r39, 2);
    cpy_r_r43 = cpy_r_r44;
CPyL30: ;
    if (!cpy_r_r43) goto CPyL32;
    cpy_r_r45 = cpy_r_r43;
    goto CPyL37;
CPyL32: ;
    cpy_r_r46 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_abstract_status;
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/strconv.py", "visit_func_def", "FuncDef", "abstract_status", 146, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL33: ;
    cpy_r_r47 = cpy_r_r46 & 1;
    cpy_r_r48 = cpy_r_r47 == 0;
    if (!cpy_r_r48) goto CPyL35;
    cpy_r_r49 = cpy_r_r46 == 4;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL36;
CPyL35: ;
    cpy_r_r51 = CPyTagged_IsEq_(cpy_r_r46, 4);
    cpy_r_r50 = cpy_r_r51;
CPyL36: ;
    cpy_r_r45 = cpy_r_r50;
CPyL37: ;
    if (!cpy_r_r45) goto CPyL39;
    cpy_r_r52 = CPyStatics[5291]; /* 'Abstract' */
    cpy_r_r53 = CPyList_Insert(cpy_r_a, -2, cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 147, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL39: ;
    cpy_r_r55 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_is_static;
    if (!cpy_r_r55) goto CPyL41;
CPyL40: ;
    cpy_r_r56 = CPyStatics[5515]; /* 'Static' */
    cpy_r_r57 = CPyList_Insert(cpy_r_a, -2, cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 149, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL41: ;
    cpy_r_r59 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_is_class;
    if (!cpy_r_r59) goto CPyL43;
CPyL42: ;
    cpy_r_r60 = CPyStatics[4329]; /* 'Class' */
    cpy_r_r61 = CPyList_Insert(cpy_r_a, -2, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 151, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL43: ;
    cpy_r_r63 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_is_property;
    if (!cpy_r_r63) goto CPyL45;
CPyL44: ;
    cpy_r_r64 = CPyStatics[5516]; /* 'Property' */
    cpy_r_r65 = CPyList_Insert(cpy_r_a, -2, cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 153, CPyStatic_strconv___globals);
        goto CPyL48;
    }
CPyL45: ;
    cpy_r_r67 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 154, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    return cpy_r_r67;
CPyL47: ;
    cpy_r_r68 = NULL;
    return cpy_r_r68;
CPyL48: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r4);
    goto CPyL47;
CPyL50: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL51: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL11;
CPyL53: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL14;
CPyL54: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL47;
CPyL55: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r21);
    goto CPyL47;
}

PyObject *CPyPy_strconv___StrConv___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_func_def(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_func_def", 140, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_overloaded_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 157, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_overloaded_func_def", 157, CPyStatic_strconv___globals, "list", cpy_r_r4);
        goto CPyL17;
    }
    cpy_r_a = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_overloaded_func_def", 159, CPyStatic_strconv___globals, "mypy.types.ProperType", cpy_r_r9);
        goto CPyL19;
    }
    cpy_r_r11 = CPyStatics[5517]; /* 'insert' */
    cpy_r_r12 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r13[3] = {cpy_r_a, cpy_r_r12, cpy_r_r10};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r14, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 159, CPyStatic_strconv___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL5: ;
    CPy_DECREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r16 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_impl;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = PyObject_IsTrue(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 160, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_impl;
    CPy_INCREF(cpy_r_r20);
    if (Py_TYPE(cpy_r_r20) == CPyType_nodes___FuncDef)
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL6896;
    if (Py_TYPE(cpy_r_r20) == CPyType_nodes___Decorator)
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL6896;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_overloaded_func_def", 161, CPyStatic_strconv___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r20);
    goto CPyL19;
__LL6896: ;
    cpy_r_r22 = CPyStatics[5517]; /* 'insert' */
    cpy_r_r23 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r24[3] = {cpy_r_a, cpy_r_r23, cpy_r_r21};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r22, cpy_r_r25, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 161, CPyStatic_strconv___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL10: ;
    CPy_DECREF(cpy_r_r21);
CPyL11: ;
    cpy_r_r27 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_is_static;
    if (!cpy_r_r27) goto CPyL13;
CPyL12: ;
    cpy_r_r28 = CPyStatics[5515]; /* 'Static' */
    cpy_r_r29 = CPyStatics[5517]; /* 'insert' */
    cpy_r_r30 = CPyStatics[9017]; /* -1 */
    PyObject *cpy_r_r31[3] = {cpy_r_a, cpy_r_r30, cpy_r_r28};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r32, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 163, CPyStatic_strconv___globals);
        goto CPyL19;
    } else
        goto CPyL24;
CPyL13: ;
    cpy_r_r34 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_is_class;
    if (!cpy_r_r34) goto CPyL15;
CPyL14: ;
    cpy_r_r35 = CPyStatics[4329]; /* 'Class' */
    cpy_r_r36 = CPyStatics[5517]; /* 'insert' */
    cpy_r_r37 = CPyStatics[9017]; /* -1 */
    PyObject *cpy_r_r38[3] = {cpy_r_a, cpy_r_r37, cpy_r_r35};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r39, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 165, CPyStatic_strconv___globals);
        goto CPyL19;
    } else
        goto CPyL25;
CPyL15: ;
    cpy_r_r41 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 166, CPyStatic_strconv___globals);
        goto CPyL17;
    }
    return cpy_r_r41;
CPyL17: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r10);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL5;
CPyL22: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r21);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL10;
CPyL24: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL13;
CPyL25: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL15;
}

PyObject *CPyPy_strconv___StrConv___visit_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_overloaded_func_def(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def", 156, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_overloaded_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_overloaded_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_overloaded_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_overloaded_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_overloaded_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_overloaded_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_overloaded_func_def__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T2OO cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    tuple_T2OO cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T2OO cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    int64_t cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyPtr cpy_r_r102;
    int64_t cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyPtr cpy_r_r127;
    CPyPtr cpy_r_r128;
    tuple_T2OO cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_defs;
    cpy_r_r2 = ((mypy___nodes___BlockObject *)cpy_r_r1)->_body;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyList_New(2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 169, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r0;
    cpy_r_r6 = cpy_r_r5 + 8;
    *(PyObject * *)cpy_r_r6 = cpy_r_r2;
    cpy_r_a = cpy_r_r3;
    cpy_r_r7 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_base_type_exprs;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL19;
    cpy_r_r12 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 173, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (!cpy_r_r13) goto CPyL18;
    cpy_r_r14 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_bases;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "bases", 173, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r15);
CPyL5: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = cpy_r_r18 != 0;
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r20 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r21 = ((mypy___nodes___TypeInfoObject *)cpy_r_r20)->_bases;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "bases", 174, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL7: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 != 2;
    if (cpy_r_r25) goto CPyL16;
    cpy_r_r26 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_r26)->_bases;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "bases", 174, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL9: ;
    cpy_r_r28 = CPyList_GetItemShortBorrow(cpy_r_r27, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 174, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_def", 174, CPyStatic_strconv___globals, "mypy.types.Instance", cpy_r_r28);
        goto CPyL61;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_type;
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 174, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL12: ;
    cpy_r_r32 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL15;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL15;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 174, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL15: ;
    cpy_r_r38 = cpy_r_r33 != 0;
    if (!cpy_r_r38) goto CPyL19;
CPyL16: ;
    cpy_r_r39 = CPyStatics[5518]; /* 'BaseType' */
    cpy_r_r40 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r41 = ((mypy___nodes___TypeInfoObject *)cpy_r_r40)->_bases;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "bases", 175, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r41);
CPyL17: ;
    cpy_r_r42.f0 = cpy_r_r39;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = PyTuple_New(2);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6897 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp6897);
    PyObject *__tmp6898 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp6898);
    cpy_r_r44 = CPyList_Insert(cpy_r_a, 2, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 175, CPyStatic_strconv___globals);
        goto CPyL61;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r46 = CPyStatics[5519]; /* 'BaseTypeExpr' */
    cpy_r_r47 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_base_type_exprs;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48.f0 = cpy_r_r46;
    cpy_r_r48.f1 = cpy_r_r47;
    CPy_INCREF(cpy_r_r48.f0);
    CPy_INCREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6899 = cpy_r_r48.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp6899);
    PyObject *__tmp6900 = cpy_r_r48.f1;
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp6900);
    cpy_r_r50 = CPyList_Insert(cpy_r_a, 2, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 177, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL19: ;
    cpy_r_r52 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_type_vars;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_r52)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = cpy_r_r55 != 0;
    if (!cpy_r_r56) goto CPyL21;
    cpy_r_r57 = CPyStatics[5520]; /* 'TypeVars' */
    cpy_r_r58 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_type_vars;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59.f0 = cpy_r_r57;
    cpy_r_r59.f1 = cpy_r_r58;
    CPy_INCREF(cpy_r_r59.f0);
    CPy_INCREF(cpy_r_r59.f1);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = PyTuple_New(2);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6901 = cpy_r_r59.f0;
    PyTuple_SET_ITEM(cpy_r_r60, 0, __tmp6901);
    PyObject *__tmp6902 = cpy_r_r59.f1;
    PyTuple_SET_ITEM(cpy_r_r60, 1, __tmp6902);
    cpy_r_r61 = CPyList_Insert(cpy_r_a, 2, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 179, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL21: ;
    cpy_r_r63 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_metaclass;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_r63 != cpy_r_r64;
    CPy_DECREF(cpy_r_r63);
    if (!cpy_r_r65) goto CPyL27;
    cpy_r_r66 = CPyStatics[5521]; /* 'Metaclass(' */
    cpy_r_r67 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_metaclass;
    CPy_INCREF(cpy_r_r67);
    if (likely(cpy_r_r67 != Py_None))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_def", 181, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r67);
        goto CPyL61;
    }
    cpy_r_r69 = CPY_GET_METHOD_TRAIT(cpy_r_r68, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r68, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 181, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (likely(PyUnicode_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_def", 181, CPyStatic_strconv___globals, "str", cpy_r_r69);
        goto CPyL61;
    }
    cpy_r_r71 = CPyStatics[72]; /* ')' */
    cpy_r_r72 = CPyStr_Build(3, cpy_r_r66, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 181, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    cpy_r_r73 = CPyList_Insert(cpy_r_a, 2, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 181, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL27: ;
    cpy_r_r75 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_decorators;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r75)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    CPy_DECREF(cpy_r_r75);
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = cpy_r_r78 != 0;
    if (!cpy_r_r79) goto CPyL29;
    cpy_r_r80 = CPyStatics[5522]; /* 'Decorators' */
    cpy_r_r81 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_decorators;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82.f0 = cpy_r_r80;
    cpy_r_r82.f1 = cpy_r_r81;
    CPy_INCREF(cpy_r_r82.f0);
    CPy_INCREF(cpy_r_r82.f1);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = PyTuple_New(2);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6903 = cpy_r_r82.f0;
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp6903);
    PyObject *__tmp6904 = cpy_r_r82.f1;
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp6904);
    cpy_r_r84 = CPyList_Insert(cpy_r_a, 2, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 183, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL29: ;
    cpy_r_r86 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 184, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (!cpy_r_r87) goto CPyL44;
    cpy_r_r88 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r89 = ((mypy___nodes___TypeInfoObject *)cpy_r_r88)->__promote;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "_promote", 184, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r89);
CPyL32: ;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_r89)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    CPy_DECREF(cpy_r_r89);
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = cpy_r_r92 != 0;
    if (!cpy_r_r93) goto CPyL44;
    cpy_r_r94 = CPyStatics[5523]; /* 'Promote([' */
    cpy_r_r95 = CPyStatics[242]; /* ',' */
    cpy_r_r96 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r97 = ((mypy___nodes___TypeInfoObject *)cpy_r_r96)->__promote;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "_promote", 185, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r97);
CPyL34: ;
    cpy_r_r98 = (CPyPtr)&((PyVarObject *)cpy_r_r97)->ob_size;
    cpy_r_r99 = *(int64_t *)cpy_r_r98;
    cpy_r_r100 = PyList_New(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals);
        goto CPyL62;
    }
    cpy_r_r101 = 0;
CPyL36: ;
    cpy_r_r102 = (CPyPtr)&((PyVarObject *)cpy_r_r97)->ob_size;
    cpy_r_r103 = *(int64_t *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 << 1;
    cpy_r_r105 = (Py_ssize_t)cpy_r_r101 < (Py_ssize_t)cpy_r_r104;
    if (!cpy_r_r105) goto CPyL63;
    cpy_r_r106 = CPyList_GetItemUnsafe(cpy_r_r97, cpy_r_r101);
    if (likely(PyObject_TypeCheck(cpy_r_r106, CPyType_types___ProperType)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals, "mypy.types.ProperType", cpy_r_r106);
        goto CPyL64;
    }
    cpy_r_p = cpy_r_r107;
    cpy_r_r108 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals);
        goto CPyL64;
    }
    cpy_r_r109 = CPyList_SetItemUnsafe(cpy_r_r100, cpy_r_r101, cpy_r_r108);
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals);
        goto CPyL64;
    }
    cpy_r_r110 = cpy_r_r101 + 2;
    cpy_r_r101 = cpy_r_r110;
    goto CPyL36;
CPyL41: ;
    cpy_r_r111 = PyUnicode_Join(cpy_r_r95, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    cpy_r_r112 = CPyStatics[5512]; /* '])' */
    cpy_r_r113 = CPyStr_Build(3, cpy_r_r94, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    cpy_r_r114 = CPyList_Insert(cpy_r_a, 2, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 185, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL44: ;
    cpy_r_r116 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r116);
    cpy_r_r117 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 186, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (!cpy_r_r117) goto CPyL52;
    cpy_r_r118 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r119 = ((mypy___nodes___TypeInfoObject *)cpy_r_r118)->_tuple_type;
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "tuple_type", 186, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r119);
CPyL47: ;
    cpy_r_r120 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r121 = cpy_r_r119 != cpy_r_r120;
    CPy_DECREF(cpy_r_r119);
    if (!cpy_r_r121) goto CPyL52;
    cpy_r_r122 = CPyStatics[41]; /* 'TupleType' */
    cpy_r_r123 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r124 = ((mypy___nodes___TypeInfoObject *)cpy_r_r123)->_tuple_type;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "tuple_type", 187, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r124);
CPyL49: ;
    if (likely(cpy_r_r124 != Py_None))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_def", 187, CPyStatic_strconv___globals, "mypy.types.TupleType", cpy_r_r124);
        goto CPyL61;
    }
    cpy_r_r126 = PyList_New(1);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 187, CPyStatic_strconv___globals);
        goto CPyL65;
    }
    cpy_r_r127 = (CPyPtr)&((PyListObject *)cpy_r_r126)->ob_item;
    cpy_r_r128 = *(CPyPtr *)cpy_r_r127;
    *(PyObject * *)cpy_r_r128 = cpy_r_r125;
    cpy_r_r129.f0 = cpy_r_r122;
    cpy_r_r129.f1 = cpy_r_r126;
    CPy_INCREF(cpy_r_r129.f0);
    CPy_INCREF(cpy_r_r129.f1);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r130 = PyTuple_New(2);
    if (unlikely(cpy_r_r130 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6905 = cpy_r_r129.f0;
    PyTuple_SET_ITEM(cpy_r_r130, 0, __tmp6905);
    PyObject *__tmp6906 = cpy_r_r129.f1;
    PyTuple_SET_ITEM(cpy_r_r130, 1, __tmp6906);
    cpy_r_r131 = CPyList_Insert(cpy_r_a, 2, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 187, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL52: ;
    cpy_r_r133 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r133);
    cpy_r_r134 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 188, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (!cpy_r_r134) goto CPyL57;
    cpy_r_r135 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    cpy_r_r136 = ((mypy___nodes___TypeInfoObject *)cpy_r_r135)->_fallback_to_any;
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AttributeError("mypy/strconv.py", "visit_class_def", "TypeInfo", "fallback_to_any", 188, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL55: ;
    if (!cpy_r_r136) goto CPyL57;
CPyL56: ;
    cpy_r_r137 = CPyStatics[5524]; /* 'FallbackToAny' */
    cpy_r_r138 = CPyList_Insert(cpy_r_a, 2, cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 189, CPyStatic_strconv___globals);
        goto CPyL61;
    }
CPyL57: ;
    cpy_r_r140 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 190, CPyStatic_strconv___globals);
        goto CPyL59;
    }
    return cpy_r_r140;
CPyL59: ;
    cpy_r_r141 = NULL;
    return cpy_r_r141;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL59;
CPyL61: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL59;
CPyL62: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r97);
    goto CPyL59;
CPyL63: ;
    CPy_DECREF(cpy_r_r97);
    goto CPyL41;
CPyL64: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r100);
    goto CPyL59;
CPyL65: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r125);
    goto CPyL59;
}

PyObject *CPyPy_strconv___StrConv___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_class_def(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_class_def", 168, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_lst;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
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
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_lst = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___VarObject *)cpy_r_o)->_line;
    cpy_r_r2 = cpy_r_r1 & 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = CPyTagged_IsLt_(cpy_r_r1, 0);
    if (cpy_r_r4) {
        goto CPyL11;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)0;
    if (cpy_r_r5) {
        goto CPyL11;
    } else
        goto CPyL4;
CPyL3: ;
    cpy_r_r6 = CPyStatics[5525]; /* ':nil' */
    CPy_INCREF(cpy_r_r6);
    cpy_r_lst = cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = CPyStatics[104]; /* 'Var' */
    cpy_r_r8 = PyUnicode_Concat(cpy_r_r7, cpy_r_lst);
    CPy_DECREF(cpy_r_lst);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_var", 198, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r9 = CPyStatics[2381]; /* '(' */
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_var", 198, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_var", 198, CPyStatic_strconv___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r12 = PyUnicode_Concat(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_var", 198, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r13 = CPyStatics[72]; /* ')' */
    cpy_r_r14 = PyUnicode_Concat(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_var", 198, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_lst);
    goto CPyL3;
CPyL12: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL10;
}

PyObject *CPyPy_strconv___StrConv___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_var(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_var", 192, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_var__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_var(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_var__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_var__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_var__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_global_decl(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___GlobalDeclObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_global_decl", 201, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_global_decl", 201, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_global_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_global_decl(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_global_decl", 200, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_global_decl__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_global_decl__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_global_decl__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_global_decl__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_global_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_global_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_global_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_global_decl__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_nonlocal_decl(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___NonlocalDeclObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_nonlocal_decl", 204, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_nonlocal_decl", 204, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_nonlocal_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_nonlocal_decl(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_nonlocal_decl", 203, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_nonlocal_decl__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_nonlocal_decl__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_nonlocal_decl__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_nonlocal_decl__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_nonlocal_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_nonlocal_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_nonlocal_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_nonlocal_decl__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_var;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_func;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyList_New(3);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_decorator", 207, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r0;
    cpy_r_r6 = cpy_r_r5 + 8;
    *(PyObject * *)cpy_r_r6 = cpy_r_r1;
    cpy_r_r7 = cpy_r_r5 + 16;
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_r8 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r3, cpy_r_o);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_decorator", 207, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_decorator(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_decorator", 206, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_block", 212, CPyStatic_strconv___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_block(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_block", 211, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_expression_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_expression_stmt", 215, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_expression_stmt", 215, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_expression_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_expression_stmt", 214, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_expression_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_expression_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_expression_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_expression_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_expression_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_expression_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_expression_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_expression_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 218, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    cpy_r_a = cpy_r_r0;
    CPy_DECREF(cpy_r_a);
    cpy_r_r1 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPyStatics[5526]; /* 'Lvalues' */
    cpy_r_r7 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8.f0 = cpy_r_r6;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 220, CPyStatic_strconv___globals);
        goto CPyL15;
    }
    cpy_r_r10 = PyTuple_New(2);
    if (unlikely(cpy_r_r10 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6907 = cpy_r_r8.f0;
    PyTuple_SET_ITEM(cpy_r_r10, 0, __tmp6907);
    PyObject *__tmp6908 = cpy_r_r8.f1;
    PyTuple_SET_ITEM(cpy_r_r10, 1, __tmp6908);
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_r10;
    cpy_r_a = cpy_r_r9;
    goto CPyL8;
CPyL4: ;
    cpy_r_r13 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 222, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_nodes___Expression)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_assignment_stmt", 222, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r14);
        goto CPyL14;
    }
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 222, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_a = cpy_r_r16;
CPyL8: ;
    cpy_r_r19 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_rvalue;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = PyList_Append(cpy_r_a, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 223, CPyStatic_strconv___globals);
        goto CPyL17;
    }
    cpy_r_r22 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r24) goto CPyL12;
    cpy_r_r25 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_assignment_stmt", 225, CPyStatic_strconv___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL17;
    }
    cpy_r_r27 = PyList_Append(cpy_r_a, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 225, CPyStatic_strconv___globals);
        goto CPyL17;
    }
CPyL12: ;
    cpy_r_r29 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 226, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    return cpy_r_r29;
CPyL14: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL15: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL14;
}

PyObject *CPyPy_strconv___StrConv___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assignment_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt", 217, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_operator_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_lvalue;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_rvalue;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyList_New(3);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_operator_assignment_stmt", 229, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r0;
    cpy_r_r6 = cpy_r_r5 + 8;
    *(PyObject * *)cpy_r_r6 = cpy_r_r1;
    cpy_r_r7 = cpy_r_r5 + 16;
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_r8 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r3, cpy_r_o);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_operator_assignment_stmt", 229, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_operator_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_operator_assignment_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_operator_assignment_stmt", 228, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_operator_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_operator_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_operator_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_operator_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_operator_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_operator_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_while_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_while_stmt", 232, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_a = cpy_r_r2;
    cpy_r_r6 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL4;
    cpy_r_r9 = CPyStatics[5527]; /* 'Else' */
    cpy_r_r10 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_else_body;
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_while_stmt", 234, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r10);
        goto CPyL8;
    }
    cpy_r_r12 = ((mypy___nodes___BlockObject *)cpy_r_r11)->_body;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13.f0 = cpy_r_r9;
    cpy_r_r13.f1 = cpy_r_r12;
    CPy_INCREF(cpy_r_r13.f0);
    CPy_INCREF(cpy_r_r13.f1);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = PyTuple_New(2);
    if (unlikely(cpy_r_r14 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6909 = cpy_r_r13.f0;
    PyTuple_SET_ITEM(cpy_r_r14, 0, __tmp6909);
    PyObject *__tmp6910 = cpy_r_r13.f1;
    PyTuple_SET_ITEM(cpy_r_r14, 1, __tmp6910);
    cpy_r_r15 = PyList_Append(cpy_r_a, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_while_stmt", 234, CPyStatic_strconv___globals);
        goto CPyL8;
    }
CPyL4: ;
    cpy_r_r17 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_while_stmt", 235, CPyStatic_strconv___globals);
        goto CPyL6;
    }
    return cpy_r_r17;
CPyL6: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL6;
}

PyObject *CPyPy_strconv___StrConv___visit_while_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_while_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_while_stmt", 231, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_while_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_while_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_while_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_while_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_while_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_while_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_while_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_while_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 238, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_is_async;
    if (!cpy_r_r1) goto CPyL3;
CPyL2: ;
    cpy_r_r2 = CPyStatics[5528]; /* 'Async' */
    cpy_r_r3 = CPyStatics[163]; /* '' */
    cpy_r_r4.f0 = cpy_r_r2;
    cpy_r_r4.f1 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    cpy_r_r5 = PyTuple_New(2);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6911 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp6911);
    PyObject *__tmp6912 = cpy_r_r4.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp6912);
    cpy_r_r6 = PyList_Append(cpy_r_a, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 240, CPyStatic_strconv___globals);
        goto CPyL15;
    }
CPyL3: ;
    cpy_r_r8 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyList_Append(cpy_r_a, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 241, CPyStatic_strconv___globals);
        goto CPyL15;
    }
    cpy_r_r11 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index_type;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r13) goto CPyL7;
    cpy_r_r14 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index_type;
    CPy_INCREF(cpy_r_r14);
    if (likely(cpy_r_r14 != Py_None))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_for_stmt", 243, CPyStatic_strconv___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL15;
    }
    cpy_r_r16 = PyList_Append(cpy_r_a, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 243, CPyStatic_strconv___globals);
        goto CPyL15;
    }
CPyL7: ;
    cpy_r_r18 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = PyList_New(2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 244, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    *(PyObject * *)cpy_r_r22 = cpy_r_r18;
    cpy_r_r23 = cpy_r_r22 + 8;
    *(PyObject * *)cpy_r_r23 = cpy_r_r19;
    cpy_r_r24 = CPyList_Extend(cpy_r_a, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 244, CPyStatic_strconv___globals);
        goto CPyL15;
    } else
        goto CPyL17;
CPyL9: ;
    cpy_r_r25 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    CPy_DECREF(cpy_r_r25);
    if (!cpy_r_r27) goto CPyL12;
    cpy_r_r28 = CPyStatics[5527]; /* 'Else' */
    cpy_r_r29 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_else_body;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_for_stmt", 246, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r29);
        goto CPyL15;
    }
    cpy_r_r31 = ((mypy___nodes___BlockObject *)cpy_r_r30)->_body;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32.f0 = cpy_r_r28;
    cpy_r_r32.f1 = cpy_r_r31;
    CPy_INCREF(cpy_r_r32.f0);
    CPy_INCREF(cpy_r_r32.f1);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = PyTuple_New(2);
    if (unlikely(cpy_r_r33 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6913 = cpy_r_r32.f0;
    PyTuple_SET_ITEM(cpy_r_r33, 0, __tmp6913);
    PyObject *__tmp6914 = cpy_r_r32.f1;
    PyTuple_SET_ITEM(cpy_r_r33, 1, __tmp6914);
    cpy_r_r34 = PyList_Append(cpy_r_a, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 246, CPyStatic_strconv___globals);
        goto CPyL15;
    }
CPyL12: ;
    cpy_r_r36 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 247, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    return cpy_r_r36;
CPyL14: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL15: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL9;
}

PyObject *CPyPy_strconv___StrConv___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_for_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt", 237, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_return_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___ReturnStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_return_stmt", 250, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_return_stmt", 250, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_return_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_return_stmt", 249, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_return_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_return_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_return_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_return_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_return_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_return_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_return_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_return_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_if_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2OO cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 253, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_expr;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = 0;
    cpy_r_i = cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r6) goto CPyL19;
    cpy_r_r7 = CPyStatics[5529]; /* 'If' */
    cpy_r_r8 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_expr;
    cpy_r_r9 = CPyList_GetItem(cpy_r_r8, cpy_r_i);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 255, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_if_stmt", 255, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 255, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14.f0 = cpy_r_r7;
    cpy_r_r14.f1 = cpy_r_r11;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = PyTuple_New(2);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6915 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp6915);
    PyObject *__tmp6916 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp6916);
    cpy_r_r16 = PyList_Append(cpy_r_a, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 255, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r18 = CPyStatics[5530]; /* 'Then' */
    cpy_r_r19 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_body;
    cpy_r_r20 = CPyList_GetItemBorrow(cpy_r_r19, cpy_r_i);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 256, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___Block))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_if_stmt", 256, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r20);
        goto CPyL20;
    }
    cpy_r_r22 = ((mypy___nodes___BlockObject *)cpy_r_r21)->_body;
    CPy_INCREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r23.f0 = cpy_r_r18;
    cpy_r_r23.f1 = cpy_r_r22;
    CPy_INCREF(cpy_r_r23.f0);
    CPy_INCREF(cpy_r_r23.f1);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = PyTuple_New(2);
    if (unlikely(cpy_r_r24 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6917 = cpy_r_r23.f0;
    PyTuple_SET_ITEM(cpy_r_r24, 0, __tmp6917);
    PyObject *__tmp6918 = cpy_r_r23.f1;
    PyTuple_SET_ITEM(cpy_r_r24, 1, __tmp6918);
    cpy_r_r25 = PyList_Append(cpy_r_a, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 256, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    cpy_r_r27 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r27;
    cpy_r_i = cpy_r_r27;
    goto CPyL2;
CPyL11: ;
    cpy_r_r28 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_r28 != cpy_r_r29;
    CPy_DECREF(cpy_r_r28);
    if (cpy_r_r30) goto CPyL14;
    cpy_r_r31 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 259, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    return cpy_r_r31;
CPyL14: ;
    cpy_r_r32 = CPyStatics[5527]; /* 'Else' */
    cpy_r_r33 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_else_body;
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_if_stmt", 261, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r33);
        goto CPyL22;
    }
    cpy_r_r35 = ((mypy___nodes___BlockObject *)cpy_r_r34)->_body;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36.f0 = cpy_r_r32;
    cpy_r_r36.f1 = cpy_r_r35;
    CPy_INCREF(cpy_r_r36.f0);
    CPy_INCREF(cpy_r_r36.f1);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = PyList_New(2);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 261, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6919 = cpy_r_r36.f0;
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp6919);
    PyObject *__tmp6920 = cpy_r_r36.f1;
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp6920);
    cpy_r_r39 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r40 = *(CPyPtr *)cpy_r_r39;
    *(PyObject * *)cpy_r_r40 = cpy_r_a;
    cpy_r_r41 = cpy_r_r40 + 8;
    *(PyObject * *)cpy_r_r41 = cpy_r_r38;
    cpy_r_r42 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r37, cpy_r_o);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 261, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    return cpy_r_r42;
CPyL18: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL19: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL11;
CPyL20: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    goto CPyL18;
}

PyObject *CPyPy_strconv___StrConv___visit_if_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_if_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt", 252, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_if_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_if_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_if_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_if_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_if_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_if_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_if_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_break_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_break_stmt", 264, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_break_stmt", 264, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_break_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_break_stmt", 263, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_break_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_break_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_break_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_break_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_break_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_break_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_break_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_break_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_continue_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_continue_stmt", 267, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_continue_stmt", 267, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_continue_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_continue_stmt", 266, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_continue_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_continue_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_continue_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_continue_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_continue_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_continue_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_continue_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_continue_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_pass_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_pass_stmt", 270, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_pass_stmt", 270, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_pass_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_pass_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_pass_stmt", 269, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_pass_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_pass_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_pass_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_pass_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_pass_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_pass_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_pass_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_pass_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_raise_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___RaiseStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___RaiseStmtObject *)cpy_r_o)->_from_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_raise_stmt", 273, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_raise_stmt", 273, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_raise_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_raise_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_raise_stmt", 272, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_raise_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_raise_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_raise_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_raise_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_raise_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_raise_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_raise_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_raise_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assert_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___nodes___AssertStmtObject *)cpy_r_o)->_msg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___nodes___AssertStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___nodes___AssertStmtObject *)cpy_r_o)->_msg;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_assert_stmt", 277, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r4);
        goto CPyL9;
    }
    cpy_r_r6 = PyList_New(2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt", 277, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r3;
    cpy_r_r9 = cpy_r_r8 + 8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r5;
    cpy_r_r10 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r6, cpy_r_o);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt", 277, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL5: ;
    cpy_r_r11 = ((mypy___nodes___AssertStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt", 279, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r11;
    cpy_r_r15 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r12, cpy_r_o);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt", 279, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL9: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL8;
}

PyObject *CPyPy_strconv___StrConv___visit_assert_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assert_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt", 275, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assert_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assert_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assert_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assert_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assert_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assert_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assert_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___AwaitExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_await_expr", 282, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_await_expr", 282, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_await_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_await_expr", 281, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_await_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_await_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_await_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_await_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_await_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_await_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_await_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_await_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_del_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___DelStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_del_stmt", 285, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_del_stmt", 285, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_del_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_del_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_del_stmt", 284, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_del_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_del_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_del_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_del_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_del_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_del_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_del_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_del_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_try_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_a;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_i;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T2OO cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 288, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_a = cpy_r_r1;
    cpy_r_r4 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_is_star;
    if (!cpy_r_r4) goto CPyL3;
CPyL2: ;
    cpy_r_r5 = CPyStatics[282]; /* '*' */
    cpy_r_r6 = PyList_Append(cpy_r_a, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 290, CPyStatic_strconv___globals);
        goto CPyL28;
    }
CPyL3: ;
    cpy_r_r8 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_vars;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = 0;
    cpy_r_i = cpy_r_r12;
CPyL4: ;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r13) goto CPyL29;
    cpy_r_r14 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_types;
    cpy_r_r15 = CPyList_GetItem(cpy_r_r14, cpy_r_i);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 293, CPyStatic_strconv___globals);
        goto CPyL30;
    }
    if (PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Expression))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL6921;
    if (cpy_r_r15 == Py_None)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL6921;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_try_stmt", 293, CPyStatic_strconv___globals, "mypy.nodes.Expression or None", cpy_r_r15);
    goto CPyL30;
__LL6921: ;
    cpy_r_r17 = PyList_Append(cpy_r_a, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 293, CPyStatic_strconv___globals);
        goto CPyL30;
    }
    cpy_r_r19 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_vars;
    cpy_r_r20 = CPyList_GetItem(cpy_r_r19, cpy_r_i);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 294, CPyStatic_strconv___globals);
        goto CPyL30;
    }
    if (Py_TYPE(cpy_r_r20) == CPyType_nodes___NameExpr)
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL6922;
    if (cpy_r_r20 == Py_None)
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL6922;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_try_stmt", 294, CPyStatic_strconv___globals, "mypy.nodes.NameExpr or None", cpy_r_r20);
    goto CPyL30;
__LL6922: ;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_vars;
    cpy_r_r25 = CPyList_GetItem(cpy_r_r24, cpy_r_i);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 295, CPyStatic_strconv___globals);
        goto CPyL30;
    }
    if (Py_TYPE(cpy_r_r25) == CPyType_nodes___NameExpr)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL6923;
    if (cpy_r_r25 == Py_None)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL6923;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_try_stmt", 295, CPyStatic_strconv___globals, "mypy.nodes.NameExpr or None", cpy_r_r25);
    goto CPyL30;
__LL6923: ;
    cpy_r_r27 = PyList_Append(cpy_r_a, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 295, CPyStatic_strconv___globals);
        goto CPyL30;
    }
CPyL14: ;
    cpy_r_r29 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_handlers;
    cpy_r_r30 = CPyList_GetItem(cpy_r_r29, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 296, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___Block))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_try_stmt", 296, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r30);
        goto CPyL28;
    }
    cpy_r_r32 = PyList_Append(cpy_r_a, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 296, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    cpy_r_r34 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r34;
    cpy_r_i = cpy_r_r34;
    goto CPyL4;
CPyL18: ;
    cpy_r_r35 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    CPy_DECREF(cpy_r_r35);
    if (!cpy_r_r37) goto CPyL21;
    cpy_r_r38 = CPyStatics[5527]; /* 'Else' */
    cpy_r_r39 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_else_body;
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_try_stmt", 299, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r39);
        goto CPyL28;
    }
    cpy_r_r41 = ((mypy___nodes___BlockObject *)cpy_r_r40)->_body;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42.f0 = cpy_r_r38;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = PyTuple_New(2);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6924 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp6924);
    PyObject *__tmp6925 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp6925);
    cpy_r_r44 = PyList_Append(cpy_r_a, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 299, CPyStatic_strconv___globals);
        goto CPyL28;
    }
CPyL21: ;
    cpy_r_r46 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_finally_body;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_r46 != cpy_r_r47;
    CPy_DECREF(cpy_r_r46);
    if (!cpy_r_r48) goto CPyL24;
    cpy_r_r49 = CPyStatics[5531]; /* 'Finally' */
    cpy_r_r50 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_finally_body;
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_try_stmt", 301, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r50);
        goto CPyL28;
    }
    cpy_r_r52 = ((mypy___nodes___BlockObject *)cpy_r_r51)->_body;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53.f0 = cpy_r_r49;
    cpy_r_r53.f1 = cpy_r_r52;
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = PyTuple_New(2);
    if (unlikely(cpy_r_r54 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6926 = cpy_r_r53.f0;
    PyTuple_SET_ITEM(cpy_r_r54, 0, __tmp6926);
    PyObject *__tmp6927 = cpy_r_r53.f1;
    PyTuple_SET_ITEM(cpy_r_r54, 1, __tmp6927);
    cpy_r_r55 = PyList_Append(cpy_r_a, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 301, CPyStatic_strconv___globals);
        goto CPyL28;
    }
CPyL24: ;
    cpy_r_r57 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 303, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    return cpy_r_r57;
CPyL26: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL26;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL18;
CPyL30: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL26;
}

PyObject *CPyPy_strconv___StrConv___visit_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_try_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt", 287, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_try_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_try_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_try_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_try_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_try_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_try_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_try_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_i;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    tuple_T2OO cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 306, CPyStatic_strconv___globals);
        goto CPyL25;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_is_async;
    if (!cpy_r_r1) goto CPyL3;
CPyL2: ;
    cpy_r_r2 = CPyStatics[5528]; /* 'Async' */
    cpy_r_r3 = CPyStatics[163]; /* '' */
    cpy_r_r4.f0 = cpy_r_r2;
    cpy_r_r4.f1 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    cpy_r_r5 = PyTuple_New(2);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6928 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp6928);
    PyObject *__tmp6929 = cpy_r_r4.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp6929);
    cpy_r_r6 = PyList_Append(cpy_r_a, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 308, CPyStatic_strconv___globals);
        goto CPyL26;
    }
CPyL3: ;
    cpy_r_r8 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_expr;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = 0;
    cpy_r_i = cpy_r_r12;
CPyL4: ;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r13) goto CPyL27;
    cpy_r_r14 = CPyStatics[5532]; /* 'Expr' */
    cpy_r_r15 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_expr;
    cpy_r_r16 = CPyList_GetItem(cpy_r_r15, cpy_r_i);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 310, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_nodes___Expression)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_with_stmt", 310, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r16);
        goto CPyL28;
    }
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 310, CPyStatic_strconv___globals);
        goto CPyL29;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r17;
    cpy_r_r21.f0 = cpy_r_r14;
    cpy_r_r21.f1 = cpy_r_r18;
    CPy_INCREF(cpy_r_r21.f0);
    CPy_INCREF(cpy_r_r21.f1);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = PyTuple_New(2);
    if (unlikely(cpy_r_r22 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6930 = cpy_r_r21.f0;
    PyTuple_SET_ITEM(cpy_r_r22, 0, __tmp6930);
    PyObject *__tmp6931 = cpy_r_r21.f1;
    PyTuple_SET_ITEM(cpy_r_r22, 1, __tmp6931);
    cpy_r_r23 = PyList_Append(cpy_r_a, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 310, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    cpy_r_r25 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_target;
    cpy_r_r26 = CPyList_GetItem(cpy_r_r25, cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 311, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    if (PyObject_TypeCheck(cpy_r_r26, CPyType_nodes___Expression))
        cpy_r_r27 = cpy_r_r26;
    else {
        cpy_r_r27 = NULL;
    }
    if (cpy_r_r27 != NULL) goto __LL6932;
    if (cpy_r_r26 == Py_None)
        cpy_r_r27 = cpy_r_r26;
    else {
        cpy_r_r27 = NULL;
    }
    if (cpy_r_r27 != NULL) goto __LL6932;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_with_stmt", 311, CPyStatic_strconv___globals, "mypy.nodes.Expression or None", cpy_r_r26);
    goto CPyL28;
__LL6932: ;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    if (!cpy_r_r29) goto CPyL30;
    cpy_r_r30 = CPyStatics[5533]; /* 'Target' */
    cpy_r_r31 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_target;
    cpy_r_r32 = CPyList_GetItem(cpy_r_r31, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 312, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (PyObject_TypeCheck(cpy_r_r32, CPyType_nodes___Expression))
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL6933;
    if (cpy_r_r32 == Py_None)
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL6933;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_with_stmt", 312, CPyStatic_strconv___globals, "mypy.nodes.Expression or None", cpy_r_r32);
    goto CPyL26;
__LL6933: ;
    cpy_r_r34 = PyList_New(1);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 312, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    *(PyObject * *)cpy_r_r36 = cpy_r_r33;
    cpy_r_r37.f0 = cpy_r_r30;
    cpy_r_r37.f1 = cpy_r_r34;
    CPy_INCREF(cpy_r_r37.f0);
    CPy_INCREF(cpy_r_r37.f1);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6934 = cpy_r_r37.f0;
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp6934);
    PyObject *__tmp6935 = cpy_r_r37.f1;
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp6935);
    cpy_r_r39 = PyList_Append(cpy_r_a, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 312, CPyStatic_strconv___globals);
        goto CPyL26;
    }
CPyL16: ;
    cpy_r_r41 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r41;
    cpy_r_i = cpy_r_r41;
    goto CPyL4;
CPyL17: ;
    cpy_r_r42 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_r42 != cpy_r_r43;
    CPy_DECREF(cpy_r_r42);
    if (!cpy_r_r44) goto CPyL20;
    cpy_r_r45 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r45);
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_with_stmt", 314, CPyStatic_strconv___globals, "mypy.types.Type", cpy_r_r45);
        goto CPyL26;
    }
    cpy_r_r47 = PyList_Append(cpy_r_a, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 314, CPyStatic_strconv___globals);
        goto CPyL26;
    }
CPyL20: ;
    cpy_r_r49 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = PyList_New(1);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 315, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    cpy_r_r51 = (CPyPtr)&((PyListObject *)cpy_r_r50)->ob_item;
    cpy_r_r52 = *(CPyPtr *)cpy_r_r51;
    *(PyObject * *)cpy_r_r52 = cpy_r_r49;
    cpy_r_r53 = PyNumber_Add(cpy_r_a, cpy_r_r50);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 315, CPyStatic_strconv___globals);
        goto CPyL25;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_with_stmt", 315, CPyStatic_strconv___globals, "list", cpy_r_r53);
        goto CPyL25;
    }
    cpy_r_r55 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r54, cpy_r_o);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 315, CPyStatic_strconv___globals);
        goto CPyL25;
    }
    return cpy_r_r55;
CPyL25: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL26: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL25;
CPyL27: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL17;
CPyL28: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r17);
    goto CPyL25;
CPyL30: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL16;
CPyL31: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r33);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r49);
    goto CPyL25;
}

PyObject *CPyPy_strconv___StrConv___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_with_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt", 305, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_i;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_subject;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 318, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_a = cpy_r_r1;
    cpy_r_r4 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_patterns;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = 0;
    cpy_r_i = cpy_r_r8;
CPyL2: ;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r9) goto CPyL22;
    cpy_r_r10 = CPyStatics[1366]; /* 'Pattern' */
    cpy_r_r11 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_patterns;
    cpy_r_r12 = CPyList_GetItem(cpy_r_r11, cpy_r_i);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 320, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_patterns___Pattern)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_match_stmt", 320, CPyStatic_strconv___globals, "mypy.patterns.Pattern", cpy_r_r12);
        goto CPyL23;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 320, CPyStatic_strconv___globals);
        goto CPyL24;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    cpy_r_r17.f0 = cpy_r_r10;
    cpy_r_r17.f1 = cpy_r_r14;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6936 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp6936);
    PyObject *__tmp6937 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp6937);
    cpy_r_r19 = PyList_Append(cpy_r_a, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 320, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    cpy_r_r21 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_guards;
    cpy_r_r22 = CPyList_GetItemBorrow(cpy_r_r21, cpy_r_i);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 321, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    if (PyObject_TypeCheck(cpy_r_r22, CPyType_nodes___Expression))
        cpy_r_r23 = cpy_r_r22;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL6938;
    if (cpy_r_r22 == Py_None)
        cpy_r_r23 = cpy_r_r22;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL6938;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_match_stmt", 321, CPyStatic_strconv___globals, "mypy.nodes.Expression or None", cpy_r_r22);
    goto CPyL23;
__LL6938: ;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_r23 != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL14;
    cpy_r_r26 = CPyStatics[5534]; /* 'Guard' */
    cpy_r_r27 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_guards;
    cpy_r_r28 = CPyList_GetItem(cpy_r_r27, cpy_r_i);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 322, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    if (PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___Expression))
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL6939;
    if (cpy_r_r28 == Py_None)
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL6939;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_match_stmt", 322, CPyStatic_strconv___globals, "mypy.nodes.Expression or None", cpy_r_r28);
    goto CPyL23;
__LL6939: ;
    cpy_r_r30 = PyList_New(1);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 322, CPyStatic_strconv___globals);
        goto CPyL25;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    *(PyObject * *)cpy_r_r32 = cpy_r_r29;
    cpy_r_r33.f0 = cpy_r_r26;
    cpy_r_r33.f1 = cpy_r_r30;
    CPy_INCREF(cpy_r_r33.f0);
    CPy_INCREF(cpy_r_r33.f1);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6940 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp6940);
    PyObject *__tmp6941 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp6941);
    cpy_r_r35 = PyList_Append(cpy_r_a, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 322, CPyStatic_strconv___globals);
        goto CPyL23;
    }
CPyL14: ;
    cpy_r_r37 = CPyStatics[5535]; /* 'Body' */
    cpy_r_r38 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_bodies;
    cpy_r_r39 = CPyList_GetItemBorrow(cpy_r_r38, cpy_r_i);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 323, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___Block))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_match_stmt", 323, CPyStatic_strconv___globals, "mypy.nodes.Block", cpy_r_r39);
        goto CPyL23;
    }
    cpy_r_r41 = ((mypy___nodes___BlockObject *)cpy_r_r40)->_body;
    CPy_INCREF(cpy_r_r41);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r42.f0 = cpy_r_r37;
    cpy_r_r42.f1 = cpy_r_r41;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = PyTuple_New(2);
    if (unlikely(cpy_r_r43 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6942 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r43, 0, __tmp6942);
    PyObject *__tmp6943 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r43, 1, __tmp6943);
    cpy_r_r44 = PyList_Append(cpy_r_a, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 323, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_r46 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r46;
    cpy_r_i = cpy_r_r46;
    goto CPyL2;
CPyL18: ;
    cpy_r_r47 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 324, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    return cpy_r_r47;
CPyL20: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL20;
CPyL22: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r13);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r29);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL20;
}

PyObject *CPyPy_strconv___StrConv___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_match_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt", 317, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_match_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_match_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_match_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[5536]; /* 'IntExpr(' */
    cpy_r_r1 = ((mypy___nodes___IntExprObject *)cpy_r_o)->_value;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_int_expr", 331, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[72]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_int_expr", 331, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_strconv___StrConv___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_int_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_int_expr", 330, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_int_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_int_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_int_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_int_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[5537]; /* 'StrExpr(' */
    cpy_r_r1 = ((mypy___nodes___StrExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_strconv___StrConv___str_repr(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_str_expr", 334, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[72]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_str_expr", 334, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_strconv___StrConv___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_str_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_str_expr", 333, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_str_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_str_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_str_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_str_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[5538]; /* 'BytesExpr(' */
    cpy_r_r1 = ((mypy___nodes___BytesExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_strconv___StrConv___str_repr(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_bytes_expr", 337, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[72]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_bytes_expr", 337, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_strconv___StrConv___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_bytes_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_bytes_expr", 336, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_bytes_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_bytes_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_bytes_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_bytes_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_bytes_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_bytes_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_bytes_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_bytes_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "__get__", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_m) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "<lambda>", "__mypyc_lambda__0_str_repr_StrConv_obj", "__mypyc_env__", 340, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL6;
CPyL1: ;
    cpy_r_r1 = CPyStatics[5539]; /* '\\' */
    cpy_r_r2 = CPyStatics[1393]; /* 'group' */
    cpy_r_r3 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r4[2] = {cpy_r_m, cpy_r_r3};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r5, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 340, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "<lambda>", 340, CPyStatic_strconv___globals, "str", cpy_r_r6);
        goto CPyL5;
    }
    cpy_r_r8 = PyUnicode_Concat(cpy_r_r1, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 340, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"m", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_m;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_m)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_m = obj_m;
    PyObject *retval = CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj_____call__(arg___mypyc_self__, arg_m);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "<lambda>", 340, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "__get__", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_m) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "<lambda>", "__mypyc_lambda__1_str_repr_StrConv_obj", "__mypyc_env__", 341, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL10;
CPyL1: ;
    cpy_r_r1 = CPyStatics[5540]; /* '\\u%.4x' */
    cpy_r_r2 = CPyStatics[1393]; /* 'group' */
    cpy_r_r3 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r4[2] = {cpy_r_m, cpy_r_r3};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r5, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals, "str", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[5541]; /* 'ord' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r7};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyLong_Check(cpy_r_r13)))
        cpy_r_r14 = CPyTagged_FromObject(cpy_r_r13);
    else {
        CPy_TypeError("int", cpy_r_r13); cpy_r_r14 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r14);
    cpy_r_r16 = PyNumber_Remainder(cpy_r_r1, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals, "str", cpy_r_r16);
        goto CPyL9;
    }
    return cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL11: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL9;
}

PyObject *CPyPy_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"m", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_m;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_m)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_m = obj_m;
    PyObject *retval = CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj_____call__(arg___mypyc_self__, arg_m);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "<lambda>", 341, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___str_repr(PyObject *cpy_r_self, PyObject *cpy_r_s) {
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
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyDef_strconv___str_repr_StrConv_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 339, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    cpy_r_r1 = CPyStatics[5542]; /* '\\\\u[0-9a-fA-F]{4}' */
    cpy_r_r2 = CPyDef_strconv_____mypyc_lambda__0_str_repr_StrConv_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 340, CPyStatic_strconv___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___strconv_____mypyc_lambda__0_str_repr_StrConv_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 340, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyModule_re;
    cpy_r_r5 = CPyStatics[3712]; /* 'sub' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 340, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    PyObject *cpy_r_r7[3] = {cpy_r_r1, cpy_r_r2, cpy_r_s};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 3, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 340, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "str_repr", 340, CPyStatic_strconv___globals, "str", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_s = cpy_r_r10;
    cpy_r_r11 = CPyStatics[5543]; /* '[^\\x20-\\x7e]' */
    cpy_r_r12 = CPyDef_strconv_____mypyc_lambda__1_str_repr_StrConv_obj();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 341, CPyStatic_strconv___globals);
        goto CPyL15;
    }
    if (((mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *)cpy_r_r12)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *)cpy_r_r12)->___mypyc_env__);
    }
    ((mypy___strconv_____mypyc_lambda__1_str_repr_StrConv_objObject *)cpy_r_r12)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 341, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPyModule_re;
    cpy_r_r15 = CPyStatics[3712]; /* 'sub' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 341, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r17[3] = {cpy_r_r11, cpy_r_r12, cpy_r_s};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 3, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "str_repr", 341, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "str_repr", 341, CPyStatic_strconv___globals, "str", cpy_r_r19);
        goto CPyL12;
    }
    return cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
}

PyObject *CPyPy_strconv___StrConv___str_repr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:str_repr", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyUnicode_Check(obj_s)))
        arg_s = obj_s;
    else {
        CPy_TypeError("str", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___str_repr(arg_self, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "str_repr", 339, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    double cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[5544]; /* 'FloatExpr(' */
    cpy_r_r1 = ((mypy___nodes___FloatExprObject *)cpy_r_o)->_value;
    cpy_r_r2 = PyFloat_FromDouble(cpy_r_r1);
    cpy_r_r3 = PyObject_Str(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_float_expr", 344, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyStatics[72]; /* ')' */
    cpy_r_r5 = CPyStr_Build(3, cpy_r_r0, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_float_expr", 344, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_strconv___StrConv___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_float_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_float_expr", 343, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_float_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_float_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_float_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_float_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[5545]; /* 'ComplexExpr(' */
    cpy_r_r1 = ((mypy___nodes___ComplexExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_complex_expr", 347, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[72]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_complex_expr", 347, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_strconv___StrConv___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_complex_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_complex_expr", 346, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_complex_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_complex_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_complex_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_complex_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_complex_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_complex_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_complex_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_complex_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = CPyStatics[2310]; /* 'Ellipsis' */
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_strconv___StrConv___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_ellipsis(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_ellipsis", 349, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_ellipsis__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_ellipsis__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_ellipsis__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_ellipsis__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_ellipsis__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_ellipsis__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_ellipsis__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_ellipsis__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___StarExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_star_expr", 353, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_star_expr", 353, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_star_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_star_expr", 352, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_star_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_star_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_star_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_star_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_star_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_star_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_star_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_star_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_pretty;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
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
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_kind;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 357, CPyStatic_strconv___globals);
        goto CPyL19;
    }
CPyL1: ;
    cpy_r_r3 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_is_inferred_def;
    if (!cpy_r_r3) goto CPyL3;
CPyL2: ;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL4;
CPyL3: ;
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_is_special_form;
    cpy_r_r4 = cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_node;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_strconv___StrConv___pretty_name(cpy_r_self, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 356, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_pretty = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_node;
    cpy_r_r9 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL13;
    cpy_r_r13 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_node;
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_nodes___Var))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_name_expr", 359, CPyStatic_strconv___globals, "mypy.nodes.Var", cpy_r_r13);
        goto CPyL20;
    }
    cpy_r_r15 = ((mypy___nodes___VarObject *)cpy_r_r14)->_is_final;
    if (!cpy_r_r15) goto CPyL13;
CPyL8: ;
    cpy_r_r16 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r17 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_node;
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_nodes___Var))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_name_expr", 360, CPyStatic_strconv___globals, "mypy.nodes.Var", cpy_r_r17);
        goto CPyL20;
    }
    cpy_r_r19 = ((mypy___nodes___VarObject *)cpy_r_r18)->_final_value;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = PyObject_Str(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 360, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r21 = CPyStr_Build(2, cpy_r_r16, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 360, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r22 = CPyStr_Append(cpy_r_pretty, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 360, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_pretty = cpy_r_r22;
CPyL13: ;
    cpy_r_r23 = CPyDef_mypy___util___short_type(cpy_r_o);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 361, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r24 = CPyStatics[2381]; /* '(' */
    cpy_r_r25 = PyUnicode_Concat(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 361, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r26 = PyUnicode_Concat(cpy_r_r25, cpy_r_pretty);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_pretty);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 361, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_r27 = CPyStatics[72]; /* ')' */
    cpy_r_r28 = PyUnicode_Concat(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 361, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    return cpy_r_r28;
CPyL18: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_pretty);
    goto CPyL18;
}

PyObject *CPyPy_strconv___StrConv___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_name_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_name_expr", 355, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___pretty_name(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_kind, PyObject *cpy_r_fullname, char cpy_r_is_inferred_def, PyObject *cpy_r_target_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    if (cpy_r_target_node != NULL) goto CPyL48;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_target_node = cpy_r_r0;
CPyL2: ;
    CPy_INCREF(cpy_r_name);
    cpy_r_n = cpy_r_name;
    if (!cpy_r_is_inferred_def) goto CPyL5;
    cpy_r_r1 = CPyStatics[282]; /* '*' */
    cpy_r_r2 = CPyStr_Append(cpy_r_n, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 373, CPyStatic_strconv___globals);
        goto CPyL49;
    }
    cpy_r_n = cpy_r_r2;
CPyL5: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_target_node != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL12;
    CPy_INCREF(cpy_r_target_node);
    if (likely(cpy_r_target_node != Py_None))
        cpy_r_r5 = cpy_r_target_node;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "pretty_name", 369, CPyStatic_strconv___globals, "mypy.nodes.Node", cpy_r_target_node);
        goto CPyL50;
    }
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 369, CPyStatic_strconv___globals);
        goto CPyL50;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL12;
    CPy_INCREF(cpy_r_target_node);
    if (likely(cpy_r_target_node != Py_None))
        cpy_r_r9 = cpy_r_target_node;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "pretty_name", 375, CPyStatic_strconv___globals, "mypy.nodes.Node", cpy_r_target_node);
        goto CPyL50;
    }
    cpy_r_r10 = CPyDef_strconv___StrConv___format_id(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 375, CPyStatic_strconv___globals);
        goto CPyL50;
    }
    cpy_r_id = cpy_r_r10;
    goto CPyL13;
CPyL12: ;
    cpy_r_r11 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r11);
    cpy_r_id = cpy_r_r11;
CPyL13: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_target_node)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    CPy_DECREF(cpy_r_target_node);
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL19;
    cpy_r_r16 = PyObject_RichCompare(cpy_r_name, cpy_r_fullname, 2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 378, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r16))) {
        CPy_TypeError("bool", cpy_r_r16); cpy_r_r17 = 2;
    } else
        cpy_r_r17 = cpy_r_r16 == Py_True;
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 378, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (!cpy_r_r17) goto CPyL19;
    cpy_r_r18 = CPyStr_Append(cpy_r_n, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 379, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    cpy_r_n = cpy_r_r18;
    goto CPyL46;
CPyL19: ;
    cpy_r_r19 = CPyStatics[9016]; /* 1 */
    cpy_r_r20 = PyObject_RichCompare(cpy_r_kind, cpy_r_r19, 2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 380, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 380, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (cpy_r_r21) goto CPyL28;
    cpy_r_r22 = PyObject_RichCompare(cpy_r_fullname, cpy_r_name, 3);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 380, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 380, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (!cpy_r_r23) goto CPyL32;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_fullname != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL32;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r26 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "pretty_name", 367, CPyStatic_strconv___globals, "str", cpy_r_fullname);
        goto CPyL51;
    }
    cpy_r_r27 = CPyStr_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL32;
CPyL28: ;
    cpy_r_r28 = CPyStatics[5546]; /* ' [' */
    cpy_r_r29 = PyObject_Str(cpy_r_fullname);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 382, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    cpy_r_r30 = CPyStatics[208]; /* ']' */
    cpy_r_r31 = CPyStr_Build(4, cpy_r_r28, cpy_r_r29, cpy_r_id, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 382, CPyStatic_strconv___globals);
        goto CPyL52;
    }
    cpy_r_r32 = CPyStr_Append(cpy_r_n, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 382, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    cpy_r_n = cpy_r_r32;
    goto CPyL46;
CPyL32: ;
    cpy_r_r33 = CPyStatics[9015]; /* 0 */
    cpy_r_r34 = PyObject_RichCompare(cpy_r_kind, cpy_r_r33, 2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 383, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r34))) {
        CPy_TypeError("bool", cpy_r_r34); cpy_r_r35 = 2;
    } else
        cpy_r_r35 = cpy_r_r34 == Py_True;
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 383, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (!cpy_r_r35) goto CPyL38;
    cpy_r_r36 = CPyStatics[5547]; /* ' [l' */
    cpy_r_r37 = CPyStatics[208]; /* ']' */
    cpy_r_r38 = CPyStr_Build(3, cpy_r_r36, cpy_r_id, cpy_r_r37);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 385, CPyStatic_strconv___globals);
        goto CPyL52;
    }
    cpy_r_r39 = CPyStr_Append(cpy_r_n, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 385, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    cpy_r_n = cpy_r_r39;
    goto CPyL46;
CPyL38: ;
    cpy_r_r40 = CPyStatics[9018]; /* 2 */
    cpy_r_r41 = PyObject_RichCompare(cpy_r_kind, cpy_r_r40, 2);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 386, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r41))) {
        CPy_TypeError("bool", cpy_r_r41); cpy_r_r42 = 2;
    } else
        cpy_r_r42 = cpy_r_r41 == Py_True;
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 386, CPyStatic_strconv___globals);
        goto CPyL51;
    }
    if (!cpy_r_r42) goto CPyL44;
    cpy_r_r43 = CPyStatics[5548]; /* ' [m' */
    cpy_r_r44 = CPyStatics[208]; /* ']' */
    cpy_r_r45 = CPyStr_Build(3, cpy_r_r43, cpy_r_id, cpy_r_r44);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 388, CPyStatic_strconv___globals);
        goto CPyL52;
    }
    cpy_r_r46 = CPyStr_Append(cpy_r_n, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 388, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    cpy_r_n = cpy_r_r46;
    goto CPyL46;
CPyL44: ;
    cpy_r_r47 = CPyStr_Append(cpy_r_n, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "pretty_name", 390, CPyStatic_strconv___globals);
        goto CPyL47;
    }
    cpy_r_n = cpy_r_r47;
CPyL46: ;
    return cpy_r_n;
CPyL47: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL48: ;
    CPy_INCREF(cpy_r_target_node);
    goto CPyL2;
CPyL49: ;
    CPy_DecRef(cpy_r_target_node);
    goto CPyL47;
CPyL50: ;
    CPy_DecRef(cpy_r_target_node);
    CPy_DecRef(cpy_r_n);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_id);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_n);
    goto CPyL47;
}

PyObject *CPyPy_strconv___StrConv___pretty_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "kind", "fullname", "is_inferred_def", "target_node", 0};
    static CPyArg_Parser parser = {"OOOO|O:pretty_name", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_kind;
    PyObject *obj_fullname;
    PyObject *obj_is_inferred_def;
    PyObject *obj_target_node = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_kind, &obj_fullname, &obj_is_inferred_def, &obj_target_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_kind;
    if (PyLong_Check(obj_kind))
        arg_kind = obj_kind;
    else {
        arg_kind = NULL;
    }
    if (arg_kind != NULL) goto __LL6944;
    if (obj_kind == Py_None)
        arg_kind = obj_kind;
    else {
        arg_kind = NULL;
    }
    if (arg_kind != NULL) goto __LL6944;
    CPy_TypeError("int or None", obj_kind); 
    goto fail;
__LL6944: ;
    PyObject *arg_fullname;
    if (PyUnicode_Check(obj_fullname))
        arg_fullname = obj_fullname;
    else {
        arg_fullname = NULL;
    }
    if (arg_fullname != NULL) goto __LL6945;
    if (obj_fullname == Py_None)
        arg_fullname = obj_fullname;
    else {
        arg_fullname = NULL;
    }
    if (arg_fullname != NULL) goto __LL6945;
    CPy_TypeError("str or None", obj_fullname); 
    goto fail;
__LL6945: ;
    char arg_is_inferred_def;
    if (unlikely(!PyBool_Check(obj_is_inferred_def))) {
        CPy_TypeError("bool", obj_is_inferred_def); goto fail;
    } else
        arg_is_inferred_def = obj_is_inferred_def == Py_True;
    PyObject *arg_target_node;
    if (obj_target_node == NULL) {
        arg_target_node = NULL;
        goto __LL6946;
    }
    if (PyObject_TypeCheck(obj_target_node, CPyType_nodes___Node))
        arg_target_node = obj_target_node;
    else {
        arg_target_node = NULL;
    }
    if (arg_target_node != NULL) goto __LL6946;
    if (obj_target_node == Py_None)
        arg_target_node = obj_target_node;
    else {
        arg_target_node = NULL;
    }
    if (arg_target_node != NULL) goto __LL6946;
    CPy_TypeError("mypy.nodes.Node or None", obj_target_node); 
    goto fail;
__LL6946: ;
    PyObject *retval = CPyDef_strconv___StrConv___pretty_name(arg_self, arg_name, arg_kind, arg_fullname, arg_is_inferred_def, arg_target_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "pretty_name", 363, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_pretty;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___MemberExprObject *)cpy_r_o)->_kind;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___MemberExpr, 6, mypy___nodes___MemberExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_member_expr", 394, CPyStatic_strconv___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r3 = ((mypy___nodes___MemberExprObject *)cpy_r_o)->_is_inferred_def;
    cpy_r_r4 = ((mypy___nodes___MemberExprObject *)cpy_r_o)->_node;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_strconv___StrConv___pretty_name(cpy_r_self, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_member_expr", 394, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    cpy_r_pretty = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___MemberExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyList_New(2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_member_expr", 395, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = cpy_r_r9 + 8;
    *(PyObject * *)cpy_r_r10 = cpy_r_pretty;
    cpy_r_r11 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r7, cpy_r_o);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_member_expr", 395, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    return cpy_r_r11;
CPyL5: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_pretty);
    CPy_DecRef(cpy_r_r6);
    goto CPyL5;
}

PyObject *CPyPy_strconv___StrConv___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_member_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_member_expr", 393, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_yield_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___YieldExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_expr", 398, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_expr", 398, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_yield_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_yield_expr", 397, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_yield_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_yield_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_yield_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_yield_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_yield_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_yield_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_yield_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_yield_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___YieldFromExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 401, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___nodes___YieldFromExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_METHOD_TRAIT(cpy_r_r4, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r4, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 402, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_yield_from_expr", 402, CPyStatic_strconv___globals, "str", cpy_r_r5);
        goto CPyL10;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 402, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r7, cpy_r_o);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 402, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 404, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r12 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r11, cpy_r_o);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 404, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    return cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL11: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_strconv___StrConv___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_yield_from_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr", 400, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_yield_from_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_yield_from_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_yield_from_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_extra;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    tuple_T2OO cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    tuple_T2OO cpy_r_r64;
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
    CPyTagged cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T2OO cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyPtr cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 408, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r3);
        goto CPyL58;
    }
    cpy_r_r5 = CPY_GET_METHOD_TRAIT(cpy_r_r4, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r4, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 408, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 408, CPyStatic_strconv___globals, "str", cpy_r_r5);
        goto CPyL58;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 409, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    cpy_r_args = cpy_r_r7;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 410, CPyStatic_strconv___globals);
        goto CPyL59;
    }
    cpy_r_extra = cpy_r_r8;
    cpy_r_r9 = 0;
    cpy_r_i = 0;
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_arg_kinds;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = 0;
CPyL8: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL60;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_nodes___ArgKind))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 411, CPyStatic_strconv___globals, "mypy.nodes.ArgKind", cpy_r_r16);
        goto CPyL61;
    }
    cpy_r_kind = cpy_r_r17;
    cpy_r_r18 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 412, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r20 = cpy_r_kind == cpy_r_r18;
    if (!cpy_r_r20) goto CPyL15;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL19;
CPyL15: ;
    cpy_r_r22 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 412, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r24 = cpy_r_kind == cpy_r_r22;
    cpy_r_r21 = cpy_r_r24;
CPyL19: ;
    if (!cpy_r_r21) goto CPyL28;
    cpy_r_r25 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_args;
    cpy_r_r26 = CPyList_GetItem(cpy_r_r25, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 413, CPyStatic_strconv___globals);
        goto CPyL64;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_nodes___Expression)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 413, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r26);
        goto CPyL64;
    }
    cpy_r_r28 = PyList_Append(cpy_r_args, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 413, CPyStatic_strconv___globals);
        goto CPyL64;
    }
    cpy_r_r30 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL65;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 414, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r32 = cpy_r_kind == cpy_r_r30;
    CPy_DECREF(cpy_r_kind);
    if (!cpy_r_r32) goto CPyL52;
    cpy_r_r33 = CPyStatics[3769]; /* 'VarArg' */
    cpy_r_r34 = PyList_Append(cpy_r_extra, cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 415, CPyStatic_strconv___globals);
        goto CPyL66;
    } else
        goto CPyL52;
CPyL28: ;
    cpy_r_r36 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL67;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 416, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r38 = cpy_r_kind == cpy_r_r36;
    if (cpy_r_r38) {
        goto CPyL68;
    } else
        goto CPyL38;
CPyL32: ;
    cpy_r_r39 = CPyStatics[5549]; /* 'KwArgs' */
    cpy_r_r40 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_arg_names;
    cpy_r_r41 = CPyList_GetItem(cpy_r_r40, cpy_r_i);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 417, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (PyUnicode_Check(cpy_r_r41))
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL6947;
    if (cpy_r_r41 == Py_None)
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL6947;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 417, CPyStatic_strconv___globals, "str or None", cpy_r_r41);
    goto CPyL61;
__LL6947: ;
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_args;
    cpy_r_r44 = CPyList_GetItem(cpy_r_r43, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 417, CPyStatic_strconv___globals);
        goto CPyL69;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_nodes___Expression)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 417, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r44);
        goto CPyL69;
    }
    cpy_r_r46 = PyList_New(2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 417, CPyStatic_strconv___globals);
        goto CPyL70;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_r42;
    cpy_r_r49 = cpy_r_r48 + 8;
    *(PyObject * *)cpy_r_r49 = cpy_r_r45;
    cpy_r_r50.f0 = cpy_r_r39;
    cpy_r_r50.f1 = cpy_r_r46;
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r51 = PyTuple_New(2);
    if (unlikely(cpy_r_r51 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6948 = cpy_r_r50.f0;
    PyTuple_SET_ITEM(cpy_r_r51, 0, __tmp6948);
    PyObject *__tmp6949 = cpy_r_r50.f1;
    PyTuple_SET_ITEM(cpy_r_r51, 1, __tmp6949);
    cpy_r_r52 = PyList_Append(cpy_r_extra, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 417, CPyStatic_strconv___globals);
        goto CPyL66;
    } else
        goto CPyL52;
CPyL38: ;
    cpy_r_r54 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r54 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 418, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r56 = cpy_r_kind == cpy_r_r54;
    if (cpy_r_r56) {
        goto CPyL72;
    } else
        goto CPyL73;
CPyL42: ;
    cpy_r_r57 = CPyStatics[5505]; /* 'DictVarArg' */
    cpy_r_r58 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_args;
    cpy_r_r59 = CPyList_GetItem(cpy_r_r58, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 419, CPyStatic_strconv___globals);
        goto CPyL66;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_nodes___Expression)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 419, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r59);
        goto CPyL66;
    }
    cpy_r_r61 = PyList_New(1);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 419, CPyStatic_strconv___globals);
        goto CPyL74;
    }
    cpy_r_r62 = (CPyPtr)&((PyListObject *)cpy_r_r61)->ob_item;
    cpy_r_r63 = *(CPyPtr *)cpy_r_r62;
    *(PyObject * *)cpy_r_r63 = cpy_r_r60;
    cpy_r_r64.f0 = cpy_r_r57;
    cpy_r_r64.f1 = cpy_r_r61;
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = PyTuple_New(2);
    if (unlikely(cpy_r_r65 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6950 = cpy_r_r64.f0;
    PyTuple_SET_ITEM(cpy_r_r65, 0, __tmp6950);
    PyObject *__tmp6951 = cpy_r_r64.f1;
    PyTuple_SET_ITEM(cpy_r_r65, 1, __tmp6951);
    cpy_r_r66 = PyList_Append(cpy_r_extra, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 419, CPyStatic_strconv___globals);
        goto CPyL66;
    } else
        goto CPyL52;
CPyL46: ;
    cpy_r_r68 = CPyStatics[5550]; /* 'unknown kind ' */
    cpy_r_r69 = PyObject_Str(cpy_r_kind);
    CPy_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 421, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    cpy_r_r70 = CPyStr_Build(2, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 421, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    cpy_r_r71 = CPyModule_builtins;
    cpy_r_r72 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 421, CPyStatic_strconv___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r74[1] = {cpy_r_r70};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r75, 1, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 421, CPyStatic_strconv___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_r70);
    CPy_Raise(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 421, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r77 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r77;
    cpy_r_i = cpy_r_r77;
    cpy_r_r78 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r78;
    goto CPyL8;
CPyL53: ;
    cpy_r_r79 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_callee;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = CPyStatics[5506]; /* 'Args' */
    cpy_r_r81.f0 = cpy_r_r80;
    cpy_r_r81.f1 = cpy_r_args;
    CPy_INCREF(cpy_r_r81.f0);
    CPy_INCREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_args);
    cpy_r_r82 = PyList_New(2);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 422, CPyStatic_strconv___globals);
        goto CPyL76;
    }
    cpy_r_r83 = PyTuple_New(2);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6952 = cpy_r_r81.f0;
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp6952);
    PyObject *__tmp6953 = cpy_r_r81.f1;
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp6953);
    cpy_r_r84 = (CPyPtr)&((PyListObject *)cpy_r_r82)->ob_item;
    cpy_r_r85 = *(CPyPtr *)cpy_r_r84;
    *(PyObject * *)cpy_r_r85 = cpy_r_r79;
    cpy_r_r86 = cpy_r_r85 + 8;
    *(PyObject * *)cpy_r_r86 = cpy_r_r83;
    cpy_r_a = cpy_r_r82;
    cpy_r_r87 = PyNumber_Add(cpy_r_a, cpy_r_extra);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_extra);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 423, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_call_expr", 423, CPyStatic_strconv___globals, "list", cpy_r_r87);
        goto CPyL58;
    }
    cpy_r_r89 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r88, cpy_r_o);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 423, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    return cpy_r_r89;
CPyL58: ;
    cpy_r_r90 = NULL;
    return cpy_r_r90;
CPyL59: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL58;
CPyL60: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r10);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_kind);
    goto CPyL11;
CPyL63: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_kind);
    goto CPyL16;
CPyL64: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_kind);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_kind);
    goto CPyL24;
CPyL66: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r10);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_kind);
    goto CPyL29;
CPyL68: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL32;
CPyL69: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r42);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r45);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_kind);
    goto CPyL39;
CPyL72: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL42;
CPyL73: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_extra);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r10);
    goto CPyL46;
CPyL74: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r60);
    goto CPyL58;
CPyL75: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL58;
CPyL76: ;
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r81.f0);
    CPy_DecRef(cpy_r_r81.f1);
    goto CPyL58;
}

PyObject *CPyPy_strconv___StrConv___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_call_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_call_expr", 406, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___nodes___OpExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___nodes___OpExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_op_expr", 427, CPyStatic_strconv___globals, "mypy.nodes.TypeAliasExpr", cpy_r_r3);
        goto CPyL8;
    }
    cpy_r_r5 = CPyDef_nodes___TypeAliasExpr___accept(cpy_r_r4, cpy_r_self);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_op_expr", 427, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_op_expr", 427, CPyStatic_strconv___globals, "str", cpy_r_r5);
        goto CPyL8;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = ((mypy___nodes___OpExprObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypy___nodes___OpExprObject *)cpy_r_o)->_left;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___nodes___OpExprObject *)cpy_r_o)->_right;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyList_New(3);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_op_expr", 428, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_r7;
    cpy_r_r13 = cpy_r_r12 + 8;
    *(PyObject * *)cpy_r_r13 = cpy_r_r8;
    cpy_r_r14 = cpy_r_r12 + 16;
    *(PyObject * *)cpy_r_r14 = cpy_r_r9;
    cpy_r_r15 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r10, cpy_r_o);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_op_expr", 428, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL8;
}

PyObject *CPyPy_strconv___StrConv___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_op_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_op_expr", 425, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_op_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_op_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_op_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_op_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___ComparisonExprObject *)cpy_r_o)->_operators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ComparisonExprObject *)cpy_r_o)->_operands;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_comparison_expr", 431, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_comparison_expr", 431, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_comparison_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_comparison_expr", 430, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_comparison_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_comparison_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_comparison_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_comparison_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___CastExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___CastExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_cast_expr", 434, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_cast_expr", 434, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_cast_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_cast_expr", 433, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_cast_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_cast_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_cast_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_cast_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assert_type_expr", 437, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assert_type_expr", 437, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assert_type_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assert_type_expr", 436, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assert_type_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assert_type_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assert_type_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assert_type_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_reveal_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___RevealExprObject *)cpy_r_o)->_kind;
    cpy_r_r1 = cpy_r_r0 == 0;
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = ((mypy___nodes___RevealExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyList_New(1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr", 441, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r2;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r3, cpy_r_o);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr", 441, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = ((mypy___nodes___RevealExprObject *)cpy_r_o)->_local_nodes;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr", 444, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_r7;
    cpy_r_r11 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r8, cpy_r_o);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr", 444, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    return cpy_r_r11;
CPyL7: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_strconv___StrConv___visit_reveal_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_reveal_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr", 439, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_reveal_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_reveal_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_reveal_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_reveal_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_reveal_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_reveal_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_reveal_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_expr", 447, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_assignment_expr", 447, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assignment_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assignment_expr", 446, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assignment_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assignment_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assignment_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assignment_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_unary_expr", 450, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_unary_expr", 450, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_unary_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_unary_expr", 449, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_unary_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_unary_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_unary_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_unary_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_list_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___ListExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_list_expr", 453, CPyStatic_strconv___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_list_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_list_expr", 452, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_list_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_list_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_list_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_list_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_list_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_list_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_list_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_list_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_dict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((mypy___nodes___DictExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr", 456, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    PyObject *__tmp6954;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 2))) {
        __tmp6954 = NULL;
        goto __LL6955;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 0), CPyType_nodes___Expression))
        __tmp6954 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp6954 = NULL;
    }
    if (__tmp6954 != NULL) goto __LL6956;
    if (PyTuple_GET_ITEM(cpy_r_r9, 0) == Py_None)
        __tmp6954 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp6954 = NULL;
    }
    if (__tmp6954 != NULL) goto __LL6956;
    __tmp6954 = NULL;
__LL6956: ;
    if (__tmp6954 == NULL) goto __LL6955;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 1), CPyType_nodes___Expression)))
        __tmp6954 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp6954 = NULL;
    }
    if (__tmp6954 == NULL) goto __LL6955;
    __tmp6954 = cpy_r_r9;
__LL6955: ;
    if (unlikely(__tmp6954 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r9); cpy_r_r10 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6957 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp6957);
        PyObject *__tmp6958;
        if (PyObject_TypeCheck(__tmp6957, CPyType_nodes___Expression))
            __tmp6958 = __tmp6957;
        else {
            __tmp6958 = NULL;
        }
        if (__tmp6958 != NULL) goto __LL6959;
        if (__tmp6957 == Py_None)
            __tmp6958 = __tmp6957;
        else {
            __tmp6958 = NULL;
        }
        if (__tmp6958 != NULL) goto __LL6959;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp6957); 
        __tmp6958 = NULL;
__LL6959: ;
        cpy_r_r10.f0 = __tmp6958;
        PyObject *__tmp6960 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp6960);
        PyObject *__tmp6961;
        if (likely(PyObject_TypeCheck(__tmp6960, CPyType_nodes___Expression)))
            __tmp6961 = __tmp6960;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp6960); 
            __tmp6961 = NULL;
        }
        cpy_r_r10.f1 = __tmp6961;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr", 456, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_k = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    cpy_r_v = cpy_r_r12;
    cpy_r_r13 = PyList_New(2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr", 456, CPyStatic_strconv___globals);
        goto CPyL13;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    *(PyObject * *)cpy_r_r15 = cpy_r_k;
    cpy_r_r16 = cpy_r_r15 + 8;
    *(PyObject * *)cpy_r_r16 = cpy_r_v;
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r13);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr", 456, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    cpy_r_r18 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r18;
    goto CPyL2;
CPyL7: ;
    cpy_r_r19 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r3, cpy_r_o);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr", 456, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    return cpy_r_r19;
CPyL9: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_v);
    goto CPyL9;
}

PyObject *CPyPy_strconv___StrConv___visit_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_dict_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr", 455, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_dict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_dict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_dict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_dict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_dict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_dict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_dict_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_set_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___SetExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_set_expr", 459, CPyStatic_strconv___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_set_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_set_expr", 458, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_set_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_set_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_set_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_set_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_set_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_set_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_set_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_set_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___TupleExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_tuple_expr", 462, CPyStatic_strconv___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_tuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_tuple_expr", 461, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_tuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_tuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_tuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_tuple_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
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
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = ((mypy___nodes___IndexExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_index_expr", 465, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL13;
    cpy_r_r4 = ((mypy___nodes___IndexExprObject *)cpy_r_o)->_analyzed;
    CPy_INCREF(cpy_r_r4);
    if (Py_TYPE(cpy_r_r4) == CPyType_nodes___TypeApplication)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL6962;
    if (Py_TYPE(cpy_r_r4) == CPyType_nodes___TypeAliasExpr)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL6962;
    CPy_TypeErrorTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals, "union[mypy.nodes.TypeApplication, mypy.nodes.TypeAliasExpr]", cpy_r_r4);
    goto CPyL16;
__LL6962: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___TypeApplication;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___TypeApplication))
        cpy_r_r10 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals, "mypy.nodes.TypeApplication", cpy_r_r5);
        goto CPyL16;
    }
    cpy_r_r11 = CPyDef_nodes___TypeApplication___accept(cpy_r_r10, cpy_r_self);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals, "str", cpy_r_r11);
        goto CPyL16;
    }
    cpy_r_r13 = cpy_r_r12;
    goto CPyL12;
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___TypeAliasExpr))
        cpy_r_r14 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals, "mypy.nodes.TypeAliasExpr", cpy_r_r5);
        goto CPyL16;
    }
    cpy_r_r15 = CPyDef_nodes___TypeAliasExpr___accept(cpy_r_r14, cpy_r_self);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_index_expr", 466, CPyStatic_strconv___globals, "str", cpy_r_r15);
        goto CPyL16;
    }
    cpy_r_r13 = cpy_r_r16;
CPyL12: ;
    return cpy_r_r13;
CPyL13: ;
    cpy_r_r17 = ((mypy___nodes___IndexExprObject *)cpy_r_o)->_base;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypy___nodes___IndexExprObject *)cpy_r_o)->_index;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyList_New(2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_index_expr", 467, CPyStatic_strconv___globals);
        goto CPyL17;
    }
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r17;
    cpy_r_r22 = cpy_r_r21 + 8;
    *(PyObject * *)cpy_r_r22 = cpy_r_r18;
    cpy_r_r23 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r19, cpy_r_o);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_index_expr", 467, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    return cpy_r_r23;
CPyL16: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL17: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
}

PyObject *CPyPy_strconv___StrConv___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_index_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_index_expr", 464, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_index_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_index_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_index_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_index_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___SuperExprObject *)cpy_r_o)->_call;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_super_expr", 470, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_super_expr", 470, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_super_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_super_expr", 469, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_super_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_super_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_super_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_super_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___nodes___TypeApplicationObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[5551]; /* 'Types' */
    cpy_r_r2 = ((mypy___nodes___TypeApplicationObject *)cpy_r_o)->_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3.f0 = cpy_r_r1;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyList_New(2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_application", 473, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r5 = PyTuple_New(2);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6963 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp6963);
    PyObject *__tmp6964 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp6964);
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r0;
    cpy_r_r8 = cpy_r_r7 + 8;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r4, cpy_r_o);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_application", 473, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r9;
CPyL3: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3.f0);
    CPy_DecRef(cpy_r_r3.f1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_application(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_application", 472, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_application__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_application__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_application__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_application__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_a;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    cpy_r_r0 = CPyStatic_strconv___globals;
    cpy_r_r1 = CPyModule_mypy___types;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r5 = PyImport_Import(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 476, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    CPyModule_mypy___types = cpy_r_r5;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r7 = PyImport_GetModuleDict();
    cpy_r_r8 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 476, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r0, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 476, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 478, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    cpy_r_a = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_variance;
    cpy_r_r14 = cpy_r_r13 == 2;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPyStatics[5552]; /* 'Variance(COVARIANT)' */
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 480, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_r15);
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_r19 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r16);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 480, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_expr", 480, CPyStatic_strconv___globals, "list", cpy_r_r19);
        goto CPyL31;
    }
    cpy_r_a = cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_variance;
    cpy_r_r22 = cpy_r_r21 == 4;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = CPyStatics[5553]; /* 'Variance(CONTRAVARIANT)' */
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 482, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    CPy_INCREF(cpy_r_r23);
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r24);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 482, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_expr", 482, CPyStatic_strconv___globals, "list", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_a = cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_values;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = cpy_r_r32 != 0;
    if (!cpy_r_r33) goto CPyL21;
    cpy_r_r34 = CPyStatics[5554]; /* 'Values' */
    cpy_r_r35 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_values;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36.f0 = cpy_r_r34;
    cpy_r_r36.f1 = cpy_r_r35;
    CPy_INCREF(cpy_r_r36.f0);
    CPy_INCREF(cpy_r_r36.f1);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 484, CPyStatic_strconv___globals);
        goto CPyL33;
    }
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6965 = cpy_r_r36.f0;
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp6965);
    PyObject *__tmp6966 = cpy_r_r36.f1;
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp6966);
    cpy_r_r39 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r40 = *(CPyPtr *)cpy_r_r39;
    *(PyObject * *)cpy_r_r40 = cpy_r_r38;
    cpy_r_r41 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r37);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 484, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_expr", 484, CPyStatic_strconv___globals, "list", cpy_r_r41);
        goto CPyL31;
    }
    cpy_r_a = cpy_r_r42;
CPyL21: ;
    cpy_r_r43 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r45 = CPyDef_types___is_named_instance(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 485, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    if (cpy_r_r45) goto CPyL29;
    cpy_r_r46 = CPyStatics[5555]; /* 'UpperBound(' */
    cpy_r_r47 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 486, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    cpy_r_r49 = CPyStatics[72]; /* ')' */
    cpy_r_r50 = CPyStr_Build(3, cpy_r_r46, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 486, CPyStatic_strconv___globals);
        goto CPyL32;
    }
    cpy_r_r51 = PyList_New(1);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 486, CPyStatic_strconv___globals);
        goto CPyL34;
    }
    cpy_r_r52 = (CPyPtr)&((PyListObject *)cpy_r_r51)->ob_item;
    cpy_r_r53 = *(CPyPtr *)cpy_r_r52;
    *(PyObject * *)cpy_r_r53 = cpy_r_r50;
    cpy_r_r54 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r51);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 486, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_expr", 486, CPyStatic_strconv___globals, "list", cpy_r_r54);
        goto CPyL31;
    }
    cpy_r_a = cpy_r_r55;
CPyL29: ;
    cpy_r_r56 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 487, CPyStatic_strconv___globals);
        goto CPyL31;
    }
    return cpy_r_r56;
CPyL31: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL32: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r50);
    goto CPyL31;
}

PyObject *CPyPy_strconv___StrConv___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_var_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr", 475, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_var_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_var_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_var_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_paramspec_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_a;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = CPyStatic_strconv___globals;
    cpy_r_r1 = CPyModule_mypy___types;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r5 = PyImport_Import(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 490, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    CPyModule_mypy___types = cpy_r_r5;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r7 = PyImport_GetModuleDict();
    cpy_r_r8 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 490, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r0, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 490, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 492, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_o)->_variance;
    cpy_r_r14 = cpy_r_r13 == 2;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPyStatics[5552]; /* 'Variance(COVARIANT)' */
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 494, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_r15);
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_r19 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r16);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 494, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_paramspec_expr", 494, CPyStatic_strconv___globals, "list", cpy_r_r19);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_o)->_variance;
    cpy_r_r22 = cpy_r_r21 == 4;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = CPyStatics[5553]; /* 'Variance(CONTRAVARIANT)' */
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 496, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    CPy_INCREF(cpy_r_r23);
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r24);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 496, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_paramspec_expr", 496, CPyStatic_strconv___globals, "list", cpy_r_r27);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r31 = CPyDef_types___is_named_instance(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 497, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    if (cpy_r_r31) goto CPyL24;
    cpy_r_r32 = CPyStatics[5555]; /* 'UpperBound(' */
    cpy_r_r33 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 498, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r35 = CPyStatics[72]; /* ')' */
    cpy_r_r36 = CPyStr_Build(3, cpy_r_r32, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 498, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 498, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    *(PyObject * *)cpy_r_r39 = cpy_r_r36;
    cpy_r_r40 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r37);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 498, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_paramspec_expr", 498, CPyStatic_strconv___globals, "list", cpy_r_r40);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r41;
CPyL24: ;
    cpy_r_r42 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 499, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    return cpy_r_r42;
CPyL26: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL27: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r36);
    goto CPyL26;
}

PyObject *CPyPy_strconv___StrConv___visit_paramspec_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_paramspec_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr", 489, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_paramspec_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_paramspec_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_paramspec_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_paramspec_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_paramspec_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_var_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_a;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = CPyStatic_strconv___globals;
    cpy_r_r1 = CPyModule_mypy___types;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r5 = PyImport_Import(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 502, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    CPyModule_mypy___types = cpy_r_r5;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r7 = PyImport_GetModuleDict();
    cpy_r_r8 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 502, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r0, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 502, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 504, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_o)->_variance;
    cpy_r_r14 = cpy_r_r13 == 2;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPyStatics[5552]; /* 'Variance(COVARIANT)' */
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 506, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_r15);
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_r19 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r16);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 506, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 506, CPyStatic_strconv___globals, "list", cpy_r_r19);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_o)->_variance;
    cpy_r_r22 = cpy_r_r21 == 4;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = CPyStatics[5553]; /* 'Variance(CONTRAVARIANT)' */
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 508, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    CPy_INCREF(cpy_r_r23);
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r24);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 508, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 508, CPyStatic_strconv___globals, "list", cpy_r_r27);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r31 = CPyDef_types___is_named_instance(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 509, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    if (cpy_r_r31) goto CPyL24;
    cpy_r_r32 = CPyStatics[5555]; /* 'UpperBound(' */
    cpy_r_r33 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 510, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r35 = CPyStatics[72]; /* ')' */
    cpy_r_r36 = CPyStr_Build(3, cpy_r_r32, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 510, CPyStatic_strconv___globals);
        goto CPyL27;
    }
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 510, CPyStatic_strconv___globals);
        goto CPyL28;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    *(PyObject * *)cpy_r_r39 = cpy_r_r36;
    cpy_r_r40 = PyNumber_InPlaceAdd(cpy_r_a, cpy_r_r37);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 510, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 510, CPyStatic_strconv___globals, "list", cpy_r_r40);
        goto CPyL26;
    }
    cpy_r_a = cpy_r_r41;
CPyL24: ;
    cpy_r_r42 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 511, CPyStatic_strconv___globals);
        goto CPyL26;
    }
    return cpy_r_r42;
CPyL26: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL27: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r36);
    goto CPyL26;
}

PyObject *CPyPy_strconv___StrConv___visit_type_var_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_var_tuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr", 501, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_var_tuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_var_tuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_var_tuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_var_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_var_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[5556]; /* 'TypeAliasExpr(' */
    cpy_r_r1 = ((mypy___nodes___TypeAliasExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_alias_expr", 514, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[72]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_type_alias_expr", 514, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_strconv___StrConv___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_alias_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_alias_expr", 513, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_alias_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_alias_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_alias_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_alias_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = CPyStatics[5557]; /* 'NamedTupleExpr:' */
    cpy_r_r1 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr", 517, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_o)->_info;
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr", 517, CPyStatic_strconv___globals);
        goto CPyL13;
    }
CPyL2: ;
    cpy_r_r6 = CPyStatics[71]; /* ', ' */
    cpy_r_r7 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_o)->_info;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_r7)->_tuple_type;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_namedtuple_expr", "TypeInfo", "tuple_type", 517, CPyStatic_strconv___globals);
        goto CPyL14;
    }
CPyL3: ;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_o)->_info;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_r11)->_tuple_type;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "visit_namedtuple_expr", "TypeInfo", "tuple_type", 517, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r12);
CPyL5: ;
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_namedtuple_expr", 517, CPyStatic_strconv___globals, "mypy.types.TupleType", cpy_r_r12);
        goto CPyL14;
    }
    cpy_r_r14 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr", 517, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r16 = Py_None;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r15 = cpy_r_r16;
CPyL9: ;
    cpy_r_r17 = PyObject_Str(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr", 517, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    cpy_r_r18 = CPyStatics[72]; /* ')' */
    cpy_r_r19 = CPyStr_Build(7, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr", 517, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
}

PyObject *CPyPy_strconv___StrConv___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_namedtuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr", 516, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_namedtuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_namedtuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_namedtuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_enum_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[5558]; /* 'EnumCallExpr:' */
    cpy_r_r1 = ((mypy___nodes___EnumCallExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr", 520, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypy___nodes___EnumCallExprObject *)cpy_r_o)->_info;
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr", 520, CPyStatic_strconv___globals);
        goto CPyL6;
    }
CPyL2: ;
    cpy_r_r6 = CPyStatics[71]; /* ', ' */
    cpy_r_r7 = ((mypy___nodes___EnumCallExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_Str(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr", 520, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r9 = CPyStatics[72]; /* ')' */
    cpy_r_r10 = CPyStr_Build(7, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr", 520, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    return cpy_r_r10;
CPyL5: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL6: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_strconv___StrConv___visit_enum_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_enum_call_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr", 519, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_enum_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_enum_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_enum_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_enum_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_enum_call_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[5559]; /* 'TypedDictExpr:' */
    cpy_r_r1 = ((mypy___nodes___TypedDictExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_typeddict_expr", 523, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypy___nodes___TypedDictExprObject *)cpy_r_o)->_info;
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_typeddict_expr", 523, CPyStatic_strconv___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r6 = CPyStatics[72]; /* ')' */
    cpy_r_r7 = CPyStr_Build(5, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_typeddict_expr", 523, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_strconv___StrConv___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_typeddict_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_typeddict_expr", 522, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_typeddict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_typeddict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_typeddict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_typeddict_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[5560]; /* 'PromoteExpr:' */
    cpy_r_r1 = ((mypy___nodes___PromoteExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit__promote_expr", 526, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypy___nodes___PromoteExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_strconv___StrConv___stringify_type(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit__promote_expr", 526, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    cpy_r_r6 = CPyStatics[72]; /* ')' */
    cpy_r_r7 = CPyStr_Build(5, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit__promote_expr", 526, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_strconv___StrConv___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit__promote_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit__promote_expr", 525, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit__promote_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit__promote_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit__promote_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit__promote_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit__promote_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit__promote_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit__promote_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit__promote_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyStatics[5561]; /* 'NewTypeExpr:' */
    cpy_r_r1 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr", 529, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyStatics[2381]; /* '(' */
    cpy_r_r4 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyStatics[71]; /* ', ' */
    cpy_r_r6 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_old_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr", 529, CPyStatic_strconv___globals);
        goto CPyL6;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r7, cpy_r_o);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr", 529, CPyStatic_strconv___globals);
        goto CPyL7;
    }
    cpy_r_r11 = CPyStatics[72]; /* ')' */
    cpy_r_r12 = CPyStr_Build(7, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr", 529, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    return cpy_r_r12;
CPyL5: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL6: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_strconv___StrConv___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_newtype_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr", 528, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_newtype_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_newtype_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_newtype_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_strconv___StrConv___func_helper(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_lambda_expr", 532, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_lambda_expr", 533, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_lambda_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_lambda_expr", 531, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_lambda_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_lambda_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_lambda_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_lambda_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_condlists;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_condlists;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1174]; /* 'any' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr", 536, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr", 536, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr", 536, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_condlists;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r9 = cpy_r_r10;
CPyL6: ;
    cpy_r_condlists = cpy_r_r9;
    cpy_r_r11 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_left_expr;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_indices;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_sequences;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyList_New(4);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr", 537, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r11;
    cpy_r_r17 = cpy_r_r16 + 8;
    *(PyObject * *)cpy_r_r17 = cpy_r_r12;
    cpy_r_r18 = cpy_r_r16 + 16;
    *(PyObject * *)cpy_r_r18 = cpy_r_r13;
    cpy_r_r19 = cpy_r_r16 + 24;
    *(PyObject * *)cpy_r_r19 = cpy_r_condlists;
    cpy_r_r20 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r14, cpy_r_o);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr", 537, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    return cpy_r_r20;
CPyL9: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_condlists);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL9;
}

PyObject *CPyPy_strconv___StrConv___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_generator_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr", 535, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_generator_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_generator_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_generator_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_list_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___ListComprehensionObject *)cpy_r_o)->_generator;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_list_comprehension", 540, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_list_comprehension", 540, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_list_comprehension(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_list_comprehension", 539, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_list_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_list_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_list_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_list_comprehension__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_list_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_list_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_list_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_list_comprehension__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_set_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___SetComprehensionObject *)cpy_r_o)->_generator;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_set_comprehension", 543, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_set_comprehension", 543, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_set_comprehension(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_set_comprehension", 542, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_set_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_set_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_set_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_set_comprehension__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_set_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_set_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_set_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_set_comprehension__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_condlists;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_condlists;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1174]; /* 'any' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension", 546, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension", 546, CPyStatic_strconv___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension", 546, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_condlists;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r9 = cpy_r_r10;
CPyL6: ;
    cpy_r_condlists = cpy_r_r9;
    cpy_r_r11 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_key;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_indices;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_sequences;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyList_New(5);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension", 547, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    *(PyObject * *)cpy_r_r17 = cpy_r_r11;
    cpy_r_r18 = cpy_r_r17 + 8;
    *(PyObject * *)cpy_r_r18 = cpy_r_r12;
    cpy_r_r19 = cpy_r_r17 + 16;
    *(PyObject * *)cpy_r_r19 = cpy_r_r13;
    cpy_r_r20 = cpy_r_r17 + 24;
    *(PyObject * *)cpy_r_r20 = cpy_r_r14;
    cpy_r_r21 = cpy_r_r17 + 32;
    *(PyObject * *)cpy_r_r21 = cpy_r_condlists;
    cpy_r_r22 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r15, cpy_r_o);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension", 547, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    return cpy_r_r22;
CPyL9: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_condlists);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL9;
}

PyObject *CPyPy_strconv___StrConv___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_dictionary_comprehension(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension", 545, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_dictionary_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_conditional_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatics[5562]; /* 'Condition' */
    cpy_r_r1 = ((mypy___nodes___ConditionalExprObject *)cpy_r_o)->_cond;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_conditional_expr", 550, CPyStatic_strconv___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r1;
    cpy_r_r5.f0 = cpy_r_r0;
    cpy_r_r5.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r6 = ((mypy___nodes___ConditionalExprObject *)cpy_r_o)->_if_expr;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___nodes___ConditionalExprObject *)cpy_r_o)->_else_expr;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyList_New(3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_conditional_expr", 550, CPyStatic_strconv___globals);
        goto CPyL6;
    }
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6967 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp6967);
    PyObject *__tmp6968 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp6968);
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    *(PyObject * *)cpy_r_r11 = cpy_r_r9;
    cpy_r_r12 = cpy_r_r11 + 8;
    *(PyObject * *)cpy_r_r12 = cpy_r_r6;
    cpy_r_r13 = cpy_r_r11 + 16;
    *(PyObject * *)cpy_r_r13 = cpy_r_r7;
    cpy_r_r14 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r8, cpy_r_o);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_conditional_expr", 550, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    return cpy_r_r14;
CPyL4: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_strconv___StrConv___visit_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_conditional_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_conditional_expr", 549, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_conditional_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_conditional_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_conditional_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_conditional_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_conditional_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_conditional_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_conditional_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_conditional_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_slice_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___SliceExprObject *)cpy_r_o)->_begin_index;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___SliceExprObject *)cpy_r_o)->_end_index;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___SliceExprObject *)cpy_r_o)->_stride;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyList_New(3);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 553, CPyStatic_strconv___globals);
        goto CPyL12;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r0;
    cpy_r_r6 = cpy_r_r5 + 8;
    *(PyObject * *)cpy_r_r6 = cpy_r_r1;
    cpy_r_r7 = cpy_r_r5 + 16;
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_a = cpy_r_r3;
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_a, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 554, CPyStatic_strconv___globals);
        goto CPyL13;
    }
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 554, CPyStatic_strconv___globals);
        goto CPyL13;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) goto CPyL5;
    cpy_r_r12 = CPyStatics[5563]; /* '<empty>' */
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyList_SetItem(cpy_r_a, 0, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 555, CPyStatic_strconv___globals);
        goto CPyL13;
    }
CPyL5: ;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_a, 2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 556, CPyStatic_strconv___globals);
        goto CPyL13;
    }
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 556, CPyStatic_strconv___globals);
        goto CPyL13;
    }
    cpy_r_r17 = cpy_r_r15;
    if (cpy_r_r17) goto CPyL9;
    cpy_r_r18 = CPyStatics[5563]; /* '<empty>' */
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyList_SetItem(cpy_r_a, 2, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 557, CPyStatic_strconv___globals);
        goto CPyL13;
    }
CPyL9: ;
    cpy_r_r20 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 558, CPyStatic_strconv___globals);
        goto CPyL11;
    }
    return cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL11;
}

PyObject *CPyPy_strconv___StrConv___visit_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_slice_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr", 552, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_slice_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_slice_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_slice_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_slice_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_slice_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_slice_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_slice_expr__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_temp_node(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___TempNodeObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_temp_node", 561, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_temp_node", 561, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_temp_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_temp_node(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_temp_node", 560, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_temp_node__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_temp_node(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_temp_node__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_temp_node__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_temp_node__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_temp_node__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_temp_node(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_temp_node__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_temp_node__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_temp_node__ExpressionVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_as_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_pattern;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_as_pattern", 564, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r2, cpy_r_o);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_as_pattern", 564, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_as_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_as_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_as_pattern", 563, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_as_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_as_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_as_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_as_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_as_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_as_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_as_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_as_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_or_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___patterns___OrPatternObject *)cpy_r_o)->_patterns;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_or_pattern", 567, CPyStatic_strconv___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_or_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_or_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_or_pattern", 566, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_or_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_or_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_or_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_or_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_or_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_or_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_or_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_or_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_value_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___patterns___ValuePatternObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_value_pattern", 570, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_value_pattern", 570, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_value_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_value_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_value_pattern", 569, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_value_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_value_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_value_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_value_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_value_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_value_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_value_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_value_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_singleton_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___patterns___SingletonPatternObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_singleton_pattern", 573, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_singleton_pattern", 573, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_singleton_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_singleton_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_singleton_pattern", 572, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_singleton_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_singleton_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_singleton_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_singleton_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_singleton_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_singleton_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_singleton_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_singleton_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_sequence_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___patterns___SequencePatternObject *)cpy_r_o)->_patterns;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_sequence_pattern", 576, CPyStatic_strconv___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_strconv___StrConv___visit_sequence_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_sequence_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_sequence_pattern", 575, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_sequence_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_sequence_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_sequence_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_sequence_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_sequence_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_sequence_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_sequence_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_sequence_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_starred_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___patterns___StarredPatternObject *)cpy_r_o)->_capture;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_starred_pattern", 579, CPyStatic_strconv___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_r1, cpy_r_o);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_starred_pattern", 579, CPyStatic_strconv___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_strconv___StrConv___visit_starred_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_starred_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_starred_pattern", 578, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_starred_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_starred_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_starred_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_starred_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_starred_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_starred_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_starred_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_starred_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_mapping_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    tuple_T2OO cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 582, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_keys;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = 0;
    cpy_r_i = cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r6) goto CPyL19;
    cpy_r_r7 = CPyStatics[93]; /* 'Key' */
    cpy_r_r8 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_keys;
    cpy_r_r9 = CPyList_GetItem(cpy_r_r8, cpy_r_i);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 584, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_mapping_pattern", 584, CPyStatic_strconv___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 584, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14.f0 = cpy_r_r7;
    cpy_r_r14.f1 = cpy_r_r11;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = PyTuple_New(2);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6969 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp6969);
    PyObject *__tmp6970 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp6970);
    cpy_r_r16 = PyList_Append(cpy_r_a, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 584, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r18 = CPyStatics[3407]; /* 'Value' */
    cpy_r_r19 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_values;
    cpy_r_r20 = CPyList_GetItem(cpy_r_r19, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 585, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_patterns___Pattern)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_mapping_pattern", 585, CPyStatic_strconv___globals, "mypy.patterns.Pattern", cpy_r_r20);
        goto CPyL22;
    }
    cpy_r_r22 = PyList_New(1);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 585, CPyStatic_strconv___globals);
        goto CPyL23;
    }
    cpy_r_r23 = (CPyPtr)&((PyListObject *)cpy_r_r22)->ob_item;
    cpy_r_r24 = *(CPyPtr *)cpy_r_r23;
    *(PyObject * *)cpy_r_r24 = cpy_r_r21;
    cpy_r_r25.f0 = cpy_r_r18;
    cpy_r_r25.f1 = cpy_r_r22;
    CPy_INCREF(cpy_r_r25.f0);
    CPy_INCREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = PyTuple_New(2);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6971 = cpy_r_r25.f0;
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp6971);
    PyObject *__tmp6972 = cpy_r_r25.f1;
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp6972);
    cpy_r_r27 = PyList_Append(cpy_r_a, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 585, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    cpy_r_r29 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r29;
    cpy_r_i = cpy_r_r29;
    goto CPyL2;
CPyL12: ;
    cpy_r_r30 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_rest;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL16;
    cpy_r_r33 = CPyStatics[5564]; /* 'Rest' */
    cpy_r_r34 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_rest;
    CPy_INCREF(cpy_r_r34);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_mapping_pattern", 587, CPyStatic_strconv___globals, "mypy.nodes.NameExpr", cpy_r_r34);
        goto CPyL22;
    }
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 587, CPyStatic_strconv___globals);
        goto CPyL24;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_r35;
    cpy_r_r39.f0 = cpy_r_r33;
    cpy_r_r39.f1 = cpy_r_r36;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = PyTuple_New(2);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6973 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp6973);
    PyObject *__tmp6974 = cpy_r_r39.f1;
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp6974);
    cpy_r_r41 = PyList_Append(cpy_r_a, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 587, CPyStatic_strconv___globals);
        goto CPyL22;
    }
CPyL16: ;
    cpy_r_r43 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 588, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    return cpy_r_r43;
CPyL18: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL19: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r10);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r21);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r35);
    goto CPyL18;
}

PyObject *CPyPy_strconv___StrConv___visit_mapping_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_mapping_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern", 581, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_mapping_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_mapping_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_mapping_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_mapping_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_mapping_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_mapping_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_mapping_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_class_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_i;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_class_ref;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 591, CPyStatic_strconv___globals);
        goto CPyL15;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_a = cpy_r_r1;
    cpy_r_r4 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r7 > (Py_ssize_t)0;
    if (!cpy_r_r8) goto CPyL3;
    cpy_r_r9 = CPyStatics[5565]; /* 'Positionals' */
    cpy_r_r10 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11.f0 = cpy_r_r9;
    cpy_r_r11.f1 = cpy_r_r10;
    CPy_INCREF(cpy_r_r11.f0);
    CPy_INCREF(cpy_r_r11.f1);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = PyTuple_New(2);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6975 = cpy_r_r11.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp6975);
    PyObject *__tmp6976 = cpy_r_r11.f1;
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp6976);
    cpy_r_r13 = PyList_Append(cpy_r_a, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 593, CPyStatic_strconv___globals);
        goto CPyL16;
    }
CPyL3: ;
    cpy_r_r15 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_keyword_keys;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = 0;
    cpy_r_i = cpy_r_r19;
CPyL4: ;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r20) goto CPyL17;
    cpy_r_r21 = CPyStatics[5566]; /* 'Keyword' */
    cpy_r_r22 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_keyword_keys;
    cpy_r_r23 = CPyList_GetItem(cpy_r_r22, cpy_r_i);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 595, CPyStatic_strconv___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_pattern", 595, CPyStatic_strconv___globals, "str", cpy_r_r23);
        goto CPyL18;
    }
    cpy_r_r25 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_keyword_values;
    cpy_r_r26 = CPyList_GetItem(cpy_r_r25, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 595, CPyStatic_strconv___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_patterns___Pattern)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "visit_class_pattern", 595, CPyStatic_strconv___globals, "mypy.patterns.Pattern", cpy_r_r26);
        goto CPyL19;
    }
    cpy_r_r28 = PyList_New(2);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 595, CPyStatic_strconv___globals);
        goto CPyL20;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    *(PyObject * *)cpy_r_r30 = cpy_r_r24;
    cpy_r_r31 = cpy_r_r30 + 8;
    *(PyObject * *)cpy_r_r31 = cpy_r_r27;
    cpy_r_r32.f0 = cpy_r_r21;
    cpy_r_r32.f1 = cpy_r_r28;
    CPy_INCREF(cpy_r_r32.f0);
    CPy_INCREF(cpy_r_r32.f1);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r33 = PyTuple_New(2);
    if (unlikely(cpy_r_r33 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6977 = cpy_r_r32.f0;
    PyTuple_SET_ITEM(cpy_r_r33, 0, __tmp6977);
    PyObject *__tmp6978 = cpy_r_r32.f1;
    PyTuple_SET_ITEM(cpy_r_r33, 1, __tmp6978);
    cpy_r_r34 = PyList_Append(cpy_r_a, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 595, CPyStatic_strconv___globals);
        goto CPyL16;
    }
    cpy_r_r36 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r36;
    cpy_r_i = cpy_r_r36;
    goto CPyL4;
CPyL12: ;
    cpy_r_r37 = CPyDef_strconv___StrConv___dump(cpy_r_self, cpy_r_a, cpy_r_o);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 597, CPyStatic_strconv___globals);
        goto CPyL14;
    }
    return cpy_r_r37;
CPyL14: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL14;
CPyL17: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r24);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL14;
}

PyObject *CPyPy_strconv___StrConv___visit_class_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_class_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern", 590, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_class_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_class_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_class_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern__NodeVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___StrConv___visit_class_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_strconv___StrConv___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_strconv___StrConv___visit_class_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_strconv___StrConv))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___StrConv___visit_class_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "visit_class_pattern__PatternVisitor_glue", -1, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___dump_tagged(PyObject *cpy_r_nodes, PyObject *cpy_r_tag, PyObject *cpy_r_str_conv) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = CPyStatics[9789]; /* ('Type', 'TypeStrVisitor') */
    cpy_r_r1 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r2 = CPyStatic_strconv___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 612, CPyStatic_strconv___globals);
        goto CPyL55;
    }
    CPyModule_mypy___types = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 614, CPyStatic_strconv___globals);
        goto CPyL55;
    }
    cpy_r_a = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_tag != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    CPy_INCREF(cpy_r_tag);
    if (likely(cpy_r_tag != Py_None))
        cpy_r_r7 = cpy_r_tag;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 600, CPyStatic_strconv___globals, "str", cpy_r_tag);
        goto CPyL56;
    }
    cpy_r_r8 = CPyStr_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r8) goto CPyL8;
    CPy_INCREF(cpy_r_tag);
    if (likely(cpy_r_tag != Py_None))
        cpy_r_r9 = cpy_r_tag;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 616, CPyStatic_strconv___globals, "str", cpy_r_tag);
        goto CPyL56;
    }
    cpy_r_r10 = CPyStatics[2381]; /* '(' */
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 616, CPyStatic_strconv___globals);
        goto CPyL56;
    }
    cpy_r_r12 = PyList_Append(cpy_r_a, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 616, CPyStatic_strconv___globals);
        goto CPyL56;
    }
CPyL8: ;
    cpy_r_r14 = PyObject_GetIter(cpy_r_nodes);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 617, CPyStatic_strconv___globals);
        goto CPyL56;
    }
CPyL9: ;
    cpy_r_r15 = PyIter_Next(cpy_r_r14);
    if (cpy_r_r15 == NULL) goto CPyL57;
    cpy_r_n = cpy_r_r15;
    cpy_r_r16 = (PyObject *)&PyList_Type;
    cpy_r_r17 = PyObject_IsInstance(cpy_r_n, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 618, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL17;
    CPy_INCREF(cpy_r_n);
    if (likely(PyList_Check(cpy_r_n)))
        cpy_r_r20 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 619, CPyStatic_strconv___globals, "list", cpy_r_n);
        goto CPyL58;
    }
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (!cpy_r_r24) goto CPyL59;
    if (likely(PyList_Check(cpy_r_n)))
        cpy_r_r25 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 620, CPyStatic_strconv___globals, "list", cpy_r_n);
        goto CPyL60;
    }
    cpy_r_r26 = Py_None;
    cpy_r_r27 = CPyDef_strconv___dump_tagged(cpy_r_r25, cpy_r_r26, cpy_r_str_conv);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 620, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r28 = PyList_Append(cpy_r_a, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 620, CPyStatic_strconv___globals);
        goto CPyL60;
    } else
        goto CPyL9;
CPyL17: ;
    cpy_r_r30 = (PyObject *)&PyTuple_Type;
    cpy_r_r31 = PyObject_IsInstance(cpy_r_n, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 621, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL27;
    CPy_INCREF(cpy_r_n);
    if (likely(PyTuple_Check(cpy_r_n)))
        cpy_r_r34 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 622, CPyStatic_strconv___globals, "tuple", cpy_r_n);
        goto CPyL58;
    }
    cpy_r_r35 = CPySequenceTuple_GetItem(cpy_r_r34, 2);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 622, CPyStatic_strconv___globals);
        goto CPyL58;
    }
    if (likely(PyTuple_Check(cpy_r_n)))
        cpy_r_r36 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 622, CPyStatic_strconv___globals, "tuple", cpy_r_n);
        goto CPyL61;
    }
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_r36, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 622, CPyStatic_strconv___globals);
        goto CPyL61;
    }
    if (PyUnicode_Check(cpy_r_r37))
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL6979;
    if (cpy_r_r37 == Py_None)
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL6979;
    CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 622, CPyStatic_strconv___globals, "str or None", cpy_r_r37);
    goto CPyL61;
__LL6979: ;
    cpy_r_r39 = CPyDef_strconv___dump_tagged(cpy_r_r35, cpy_r_r38, cpy_r_str_conv);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 622, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_s = cpy_r_r39;
    cpy_r_r40 = CPyDef_strconv___indent(cpy_r_s, 4);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 623, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r41 = PyList_Append(cpy_r_a, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 623, CPyStatic_strconv___globals);
        goto CPyL60;
    } else
        goto CPyL9;
CPyL27: ;
    cpy_r_r43 = (PyObject *)CPyType_nodes___Node;
    cpy_r_r44 = CPy_TypeCheck(cpy_r_n, cpy_r_r43);
    if (!cpy_r_r44) goto CPyL33;
    if (likely(PyObject_TypeCheck(cpy_r_n, CPyType_nodes___Node)))
        cpy_r_r45 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 625, CPyStatic_strconv___globals, "mypy.nodes.Node", cpy_r_n);
        goto CPyL60;
    }
    cpy_r_r46 = CPY_GET_METHOD(cpy_r_r45, CPyType_nodes___Node, 4, mypy___nodes___NodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r45, cpy_r_str_conv); /* accept */
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 625, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 625, CPyStatic_strconv___globals, "str", cpy_r_r46);
        goto CPyL60;
    }
    cpy_r_r48 = CPyDef_strconv___indent(cpy_r_r47, 4);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 625, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r49 = PyList_Append(cpy_r_a, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 625, CPyStatic_strconv___globals);
        goto CPyL60;
    } else
        goto CPyL9;
CPyL33: ;
    cpy_r_r51 = (PyObject *)CPyType_types___Type;
    cpy_r_r52 = CPy_TypeCheck(cpy_r_n, cpy_r_r51);
    if (!cpy_r_r52) goto CPyL42;
    if (likely(PyObject_TypeCheck(cpy_r_n, CPyType_types___Type)))
        cpy_r_r53 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 628, CPyStatic_strconv___globals, "mypy.types.Type", cpy_r_n);
        goto CPyL60;
    }
    cpy_r_r54 = ((mypy___strconv___StrConvObject *)cpy_r_str_conv)->_id_mapper;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "dump_tagged", "StrConv", "id_mapper", 628, CPyStatic_strconv___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r54);
CPyL36: ;
    cpy_r_r55 = ((mypy___strconv___StrConvObject *)cpy_r_str_conv)->_options;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/strconv.py", "dump_tagged", "StrConv", "options", 628, CPyStatic_strconv___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r55);
CPyL37: ;
    cpy_r_r56 = CPyDef_types___TypeStrVisitor(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 628, CPyStatic_strconv___globals);
        goto CPyL62;
    }
    cpy_r_r57 = CPY_GET_METHOD(cpy_r_r53, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r53, cpy_r_r56); /* accept */
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 628, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 628, CPyStatic_strconv___globals, "str", cpy_r_r57);
        goto CPyL60;
    }
    cpy_r_r59 = CPyDef_strconv___indent(cpy_r_r58, 4);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 628, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r60 = PyList_Append(cpy_r_a, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 627, CPyStatic_strconv___globals);
        goto CPyL60;
    } else
        goto CPyL9;
CPyL42: ;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_n != cpy_r_r62;
    if (!cpy_r_r63) goto CPyL59;
    cpy_r_r64 = PyObject_Str(cpy_r_n);
    CPy_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 631, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r65 = CPyDef_strconv___indent(cpy_r_r64, 4);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 631, CPyStatic_strconv___globals);
        goto CPyL60;
    }
    cpy_r_r66 = PyList_Append(cpy_r_a, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 631, CPyStatic_strconv___globals);
        goto CPyL60;
    } else
        goto CPyL9;
CPyL46: ;
    cpy_r_r68 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 617, CPyStatic_strconv___globals);
        goto CPyL56;
    }
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_tag != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL53;
    CPy_INCREF(cpy_r_tag);
    if (likely(cpy_r_tag != Py_None))
        cpy_r_r71 = cpy_r_tag;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "dump_tagged", 600, CPyStatic_strconv___globals, "str", cpy_r_tag);
        goto CPyL56;
    }
    cpy_r_r72 = CPyStr_IsTrue(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (!cpy_r_r72) goto CPyL53;
    cpy_r_r73 = CPyList_GetItemShort(cpy_r_a, -2);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 633, CPyStatic_strconv___globals);
        goto CPyL56;
    }
    cpy_r_r74 = CPyStatics[72]; /* ')' */
    cpy_r_r75 = PyNumber_InPlaceAdd(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 633, CPyStatic_strconv___globals);
        goto CPyL56;
    }
    cpy_r_r76 = CPyList_SetItem(cpy_r_a, -2, cpy_r_r75);
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 633, CPyStatic_strconv___globals);
        goto CPyL56;
    }
CPyL53: ;
    cpy_r_r77 = CPyStatics[189]; /* '\n' */
    cpy_r_r78 = PyUnicode_Join(cpy_r_r77, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 634, CPyStatic_strconv___globals);
        goto CPyL55;
    }
    return cpy_r_r78;
CPyL55: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL56: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL55;
CPyL57: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL46;
CPyL58: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_n);
    goto CPyL55;
CPyL59: ;
    CPy_DECREF(cpy_r_n);
    goto CPyL9;
CPyL60: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r14);
    goto CPyL55;
CPyL61: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r35);
    goto CPyL55;
CPyL62: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r53);
    goto CPyL55;
CPyL63: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL55;
}

PyObject *CPyPy_strconv___dump_tagged(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"nodes", "tag", "str_conv", 0};
    static CPyArg_Parser parser = {"OOO:dump_tagged", kwlist, 0};
    PyObject *obj_nodes;
    PyObject *obj_tag;
    PyObject *obj_str_conv;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_nodes, &obj_tag, &obj_str_conv)) {
        return NULL;
    }
    PyObject *arg_nodes = obj_nodes;
    PyObject *arg_tag;
    if (PyUnicode_Check(obj_tag))
        arg_tag = obj_tag;
    else {
        arg_tag = NULL;
    }
    if (arg_tag != NULL) goto __LL6980;
    if (obj_tag == Py_None)
        arg_tag = obj_tag;
    else {
        arg_tag = NULL;
    }
    if (arg_tag != NULL) goto __LL6980;
    CPy_TypeError("str or None", obj_tag); 
    goto fail;
__LL6980: ;
    PyObject *arg_str_conv;
    if (likely(Py_TYPE(obj_str_conv) == CPyType_strconv___StrConv))
        arg_str_conv = obj_str_conv;
    else {
        CPy_TypeError("mypy.strconv.StrConv", obj_str_conv); 
        goto fail;
    }
    PyObject *retval = CPyDef_strconv___dump_tagged(arg_nodes, arg_tag, arg_str_conv);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "dump_tagged", 600, CPyStatic_strconv___globals);
    return NULL;
}

PyObject *CPyDef_strconv___indent(PyObject *cpy_r_s, CPyTagged cpy_r_n) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    cpy_r_r0 = CPyStatics[295]; /* ' ' */
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r1 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r2 = PyNumber_Multiply(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "indent", 639, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "indent", 639, CPyStatic_strconv___globals, "str", cpy_r_r2);
        goto CPyL8;
    }
    cpy_r_r4 = PyUnicode_Concat(cpy_r_r3, cpy_r_s);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "indent", 639, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    cpy_r_s = cpy_r_r4;
    cpy_r_r5 = CPyStatics[189]; /* '\n' */
    cpy_r_r6 = CPyStatics[189]; /* '\n' */
    cpy_r_r7 = CPyStatics[295]; /* ' ' */
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r9 = PyNumber_Multiply(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "indent", 640, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/strconv.py", "indent", 640, CPyStatic_strconv___globals, "str", cpy_r_r9);
        goto CPyL9;
    }
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r6, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "indent", 640, CPyStatic_strconv___globals);
        goto CPyL9;
    }
    cpy_r_r12 = PyUnicode_Replace(cpy_r_s, cpy_r_r5, cpy_r_r11, -1);
    CPy_DECREF(cpy_r_s);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "indent", 640, CPyStatic_strconv___globals);
        goto CPyL8;
    }
    cpy_r_s = cpy_r_r12;
    return cpy_r_s;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL8;
}

PyObject *CPyPy_strconv___indent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "n", 0};
    static CPyArg_Parser parser = {"OO:indent", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_n)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(PyUnicode_Check(obj_s)))
        arg_s = obj_s;
    else {
        CPy_TypeError("str", obj_s); 
        goto fail;
    }
    CPyTagged arg_n;
    if (likely(PyLong_Check(obj_n)))
        arg_n = CPyTagged_BorrowFromObject(obj_n);
    else {
        CPy_TypeError("int", obj_n); goto fail;
    }
    PyObject *retval = CPyDef_strconv___indent(arg_s, arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/strconv.py", "indent", 637, CPyStatic_strconv___globals);
    return NULL;
}

char CPyDef_strconv_____top_level__(void) {
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
    PyObject **cpy_r_r10;
    void *cpy_r_r12;
    void *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r24;
    void *cpy_r_r26;
    void *cpy_r_r28;
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
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", -1, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_strconv___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 3, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    cpy_r_r10 = (PyObject **)&CPyModule_re;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {5, 6};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9790]; /* (('os', 'os', 'os'), ('re', 're', 're')) */
    cpy_r_r16 = CPyStatic_strconv___globals;
    cpy_r_r17 = CPyStatics[5567]; /* 'mypy/strconv.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL21;
    cpy_r_r20 = CPyStatics[9791]; /* ('TYPE_CHECKING', 'Any', 'Sequence') */
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = CPyStatic_strconv___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 7, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    CPyModule_typing = cpy_r_r23;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = (PyObject **)&CPyModule_mypy___nodes;
    PyObject **cpy_r_r25[1] = {cpy_r_r24};
    cpy_r_r26 = (void *)&cpy_r_r25;
    int64_t cpy_r_r27[1] = {9};
    cpy_r_r28 = (void *)&cpy_r_r27;
    cpy_r_r29 = CPyStatics[9374]; /* (('mypy.nodes', 'mypy', 'mypy'),) */
    cpy_r_r30 = CPyStatic_strconv___globals;
    cpy_r_r31 = CPyStatics[5567]; /* 'mypy/strconv.py' */
    cpy_r_r32 = CPyStatics[17]; /* '<module>' */
    cpy_r_r33 = CPyImport_ImportMany(cpy_r_r29, cpy_r_r26, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r28);
    if (!cpy_r_r33) goto CPyL21;
    cpy_r_r34 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r35 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r36 = CPyStatic_strconv___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 10, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    CPyModule_mypy___options = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9792]; /* ('IdMapper', 'short_type') */
    cpy_r_r39 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r40 = CPyStatic_strconv___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 11, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    CPyModule_mypy___util = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9212]; /* ('NodeVisitor',) */
    cpy_r_r43 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r44 = CPyStatic_strconv___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 12, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    CPyModule_mypy___visitor = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatic_strconv___globals;
    cpy_r_r47 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 14, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r48))) {
        CPy_TypeError("bool", cpy_r_r48); cpy_r_r49 = 2;
    } else
        cpy_r_r49 = cpy_r_r48 == Py_True;
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 14, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r50 = (PyObject *)CPyType_mypy___visitor___NodeVisitor;
    cpy_r_r51 = (PyObject *)&PyUnicode_Type;
    cpy_r_r52 = PyObject_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 19, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r53 = PyTuple_Pack(1, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 19, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r54 = CPyStatics[4048]; /* 'mypy.strconv' */
    cpy_r_r55 = (PyObject *)CPyType_strconv___StrConv_template;
    cpy_r_r56 = CPyType_FromTemplate(cpy_r_r55, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 19, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    cpy_r_r57 = CPyDef_strconv___StrConv_trait_vtable_setup();
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", -1, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    cpy_r_r58 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r59 = CPyStatics[159]; /* 'options' */
    cpy_r_r60 = CPyStatics[5569]; /* 'show_ids' */
    cpy_r_r61 = CPyStatics[5570]; /* 'id_mapper' */
    cpy_r_r62 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r63 = PyTuple_Pack(4, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 19, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    cpy_r_r64 = PyObject_SetAttr(cpy_r_r56, cpy_r_r58, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 19, CPyStatic_strconv___globals);
        goto CPyL22;
    }
    CPyType_strconv___StrConv = (PyTypeObject *)cpy_r_r56;
    CPy_INCREF(CPyType_strconv___StrConv);
    cpy_r_r66 = CPyStatic_strconv___globals;
    cpy_r_r67 = CPyStatics[5571]; /* 'StrConv' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r66, cpy_r_r67, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/strconv.py", "<module>", 19, CPyStatic_strconv___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL22: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL21;
}
