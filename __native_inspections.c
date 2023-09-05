#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
inspections___SearchVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef inspections___SearchVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___inspections___SearchVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___inspections___SearchVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *inspections___SearchVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_inspections___SearchVisitor(CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column);

static PyObject *
inspections___SearchVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_inspections___SearchVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = inspections___SearchVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_inspections___SearchVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
inspections___SearchVisitor_traverse(mypy___inspections___SearchVisitorObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    if (CPyTagged_CheckLong(self->_end_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_end_line));
    }
    if (CPyTagged_CheckLong(self->_end_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_end_column));
    }
    Py_VISIT(self->_result);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___inspections___SearchVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___SearchVisitorObject))));
    return 0;
}

static int
inspections___SearchVisitor_clear(mypy___inspections___SearchVisitorObject *self)
{
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        CPyTagged __tmp = self->_column;
        self->_column = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_end_line)) {
        CPyTagged __tmp = self->_end_line;
        self->_end_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_end_column)) {
        CPyTagged __tmp = self->_end_column;
        self->_end_column = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_result);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___inspections___SearchVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___SearchVisitorObject))));
    return 0;
}

static void
inspections___SearchVisitor_dealloc(mypy___inspections___SearchVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, inspections___SearchVisitor_dealloc)
    inspections___SearchVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem inspections___SearchVisitor_vtable[177];
static CPyVTableItem inspections___SearchVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t inspections___SearchVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem inspections___SearchVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t inspections___SearchVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem inspections___SearchVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t inspections___SearchVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_inspections___SearchVisitor_trait_vtable_setup(void)
{
    CPyVTableItem inspections___SearchVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___NodeVisitor_trait_vtable, inspections___SearchVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t inspections___SearchVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___NodeVisitor_offset_table, inspections___SearchVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_offset_table, inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem inspections___SearchVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___StatementVisitor_trait_vtable, inspections___SearchVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t inspections___SearchVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___StatementVisitor_offset_table, inspections___SearchVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem inspections___SearchVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___PatternVisitor_trait_vtable, inspections___SearchVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t inspections___SearchVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchVisitor_mypy___visitor___PatternVisitor_offset_table, inspections___SearchVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(inspections___SearchVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem inspections___SearchVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)inspections___SearchVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_inspections___SearchVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_inspections___SearchVisitor___visit,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_inspections___SearchVisitor_____init__,
        (CPyVTableItem)CPyDef_inspections___SearchVisitor___visit,
    };
    memcpy(inspections___SearchVisitor_vtable, inspections___SearchVisitor_vtable_scratch, sizeof(inspections___SearchVisitor_vtable));
    return 1;
}

static PyObject *
inspections___SearchVisitor_get_line(mypy___inspections___SearchVisitorObject *self, void *closure);
static int
inspections___SearchVisitor_set_line(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
inspections___SearchVisitor_get_column(mypy___inspections___SearchVisitorObject *self, void *closure);
static int
inspections___SearchVisitor_set_column(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
inspections___SearchVisitor_get_end_line(mypy___inspections___SearchVisitorObject *self, void *closure);
static int
inspections___SearchVisitor_set_end_line(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
inspections___SearchVisitor_get_end_column(mypy___inspections___SearchVisitorObject *self, void *closure);
static int
inspections___SearchVisitor_set_end_column(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
inspections___SearchVisitor_get_result(mypy___inspections___SearchVisitorObject *self, void *closure);
static int
inspections___SearchVisitor_set_result(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef inspections___SearchVisitor_getseters[] = {
    {"line",
     (getter)inspections___SearchVisitor_get_line, (setter)inspections___SearchVisitor_set_line,
     NULL, NULL},
    {"column",
     (getter)inspections___SearchVisitor_get_column, (setter)inspections___SearchVisitor_set_column,
     NULL, NULL},
    {"end_line",
     (getter)inspections___SearchVisitor_get_end_line, (setter)inspections___SearchVisitor_set_end_line,
     NULL, NULL},
    {"end_column",
     (getter)inspections___SearchVisitor_get_end_column, (setter)inspections___SearchVisitor_set_end_column,
     NULL, NULL},
    {"result",
     (getter)inspections___SearchVisitor_get_result, (setter)inspections___SearchVisitor_set_result,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef inspections___SearchVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_inspections___SearchVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit",
     (PyCFunction)CPyPy_inspections___SearchVisitor___visit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_inspections___SearchVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SearchVisitor",
    .tp_new = inspections___SearchVisitor_new,
    .tp_dealloc = (destructor)inspections___SearchVisitor_dealloc,
    .tp_traverse = (traverseproc)inspections___SearchVisitor_traverse,
    .tp_clear = (inquiry)inspections___SearchVisitor_clear,
    .tp_getset = inspections___SearchVisitor_getseters,
    .tp_methods = inspections___SearchVisitor_methods,
    .tp_init = inspections___SearchVisitor_init,
    .tp_members = inspections___SearchVisitor_members,
    .tp_basicsize = sizeof(mypy___inspections___SearchVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___inspections___SearchVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___inspections___SearchVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_inspections___SearchVisitor_template = &CPyType_inspections___SearchVisitor_template_;

static PyObject *
inspections___SearchVisitor_setup(PyTypeObject *type)
{
    mypy___inspections___SearchVisitorObject *self;
    self = (mypy___inspections___SearchVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = inspections___SearchVisitor_vtable + 12;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    self->_end_line = CPY_INT_TAG;
    self->_end_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_inspections___SearchVisitor(CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column)
{
    PyObject *self = inspections___SearchVisitor_setup(CPyType_inspections___SearchVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_inspections___SearchVisitor_____init__(self, cpy_r_line, cpy_r_column, cpy_r_end_line, cpy_r_end_column);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
inspections___SearchVisitor_get_line(mypy___inspections___SearchVisitorObject *self, void *closure)
{
    if (unlikely(self->_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line' of 'SearchVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_line);
    return retval;
}

static int
inspections___SearchVisitor_set_line(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchVisitor' object attribute 'line' cannot be deleted");
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
inspections___SearchVisitor_get_column(mypy___inspections___SearchVisitorObject *self, void *closure)
{
    if (unlikely(self->_column == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'column' of 'SearchVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_column);
    PyObject *retval = CPyTagged_StealAsObject(self->_column);
    return retval;
}

static int
inspections___SearchVisitor_set_column(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchVisitor' object attribute 'column' cannot be deleted");
        return -1;
    }
    if (self->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_column);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_column = tmp;
    return 0;
}

static PyObject *
inspections___SearchVisitor_get_end_line(mypy___inspections___SearchVisitorObject *self, void *closure)
{
    if (unlikely(self->_end_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_line' of 'SearchVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_end_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_end_line);
    return retval;
}

static int
inspections___SearchVisitor_set_end_line(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchVisitor' object attribute 'end_line' cannot be deleted");
        return -1;
    }
    if (self->_end_line != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_end_line);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_end_line = tmp;
    return 0;
}

static PyObject *
inspections___SearchVisitor_get_end_column(mypy___inspections___SearchVisitorObject *self, void *closure)
{
    if (unlikely(self->_end_column == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_column' of 'SearchVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_end_column);
    PyObject *retval = CPyTagged_StealAsObject(self->_end_column);
    return retval;
}

static int
inspections___SearchVisitor_set_end_column(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchVisitor' object attribute 'end_column' cannot be deleted");
        return -1;
    }
    if (self->_end_column != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_end_column);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_end_column = tmp;
    return 0;
}

static PyObject *
inspections___SearchVisitor_get_result(mypy___inspections___SearchVisitorObject *self, void *closure)
{
    if (unlikely(self->_result == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'result' of 'SearchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_result);
    PyObject *retval = self->_result;
    return retval;
}

static int
inspections___SearchVisitor_set_result(mypy___inspections___SearchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchVisitor' object attribute 'result' cannot be deleted");
        return -1;
    }
    if (self->_result != NULL) {
        CPy_DECREF(self->_result);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_nodes___Expression))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2933;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2933;
    CPy_TypeError("mypy.nodes.Expression or None", value); 
    tmp = NULL;
__LL2933: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_result = tmp;
    return 0;
}

static int
inspections___SearchAllVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef inspections___SearchAllVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___inspections___SearchAllVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___inspections___SearchAllVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *inspections___SearchAllVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_inspections___SearchAllVisitor(CPyTagged cpy_r_line, CPyTagged cpy_r_column);

static PyObject *
inspections___SearchAllVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_inspections___SearchAllVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = inspections___SearchAllVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_inspections___SearchAllVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
inspections___SearchAllVisitor_traverse(mypy___inspections___SearchAllVisitorObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_result);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___inspections___SearchAllVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___SearchAllVisitorObject))));
    return 0;
}

static int
inspections___SearchAllVisitor_clear(mypy___inspections___SearchAllVisitorObject *self)
{
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        CPyTagged __tmp = self->_column;
        self->_column = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_result);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___inspections___SearchAllVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___SearchAllVisitorObject))));
    return 0;
}

static void
inspections___SearchAllVisitor_dealloc(mypy___inspections___SearchAllVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, inspections___SearchAllVisitor_dealloc)
    inspections___SearchAllVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem inspections___SearchAllVisitor_vtable[177];
static CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_inspections___SearchAllVisitor_trait_vtable_setup(void)
{
    CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_trait_vtable, inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_offset_table, inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_offset_table, inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_trait_vtable, inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_offset_table, inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_trait_vtable, inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_offset_table, inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem inspections___SearchAllVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)inspections___SearchAllVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_inspections___SearchAllVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_inspections___SearchAllVisitor___visit,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_inspections___SearchAllVisitor_____init__,
        (CPyVTableItem)CPyDef_inspections___SearchAllVisitor___visit,
    };
    memcpy(inspections___SearchAllVisitor_vtable, inspections___SearchAllVisitor_vtable_scratch, sizeof(inspections___SearchAllVisitor_vtable));
    return 1;
}

static PyObject *
inspections___SearchAllVisitor_get_line(mypy___inspections___SearchAllVisitorObject *self, void *closure);
static int
inspections___SearchAllVisitor_set_line(mypy___inspections___SearchAllVisitorObject *self, PyObject *value, void *closure);
static PyObject *
inspections___SearchAllVisitor_get_column(mypy___inspections___SearchAllVisitorObject *self, void *closure);
static int
inspections___SearchAllVisitor_set_column(mypy___inspections___SearchAllVisitorObject *self, PyObject *value, void *closure);
static PyObject *
inspections___SearchAllVisitor_get_result(mypy___inspections___SearchAllVisitorObject *self, void *closure);
static int
inspections___SearchAllVisitor_set_result(mypy___inspections___SearchAllVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef inspections___SearchAllVisitor_getseters[] = {
    {"line",
     (getter)inspections___SearchAllVisitor_get_line, (setter)inspections___SearchAllVisitor_set_line,
     NULL, NULL},
    {"column",
     (getter)inspections___SearchAllVisitor_get_column, (setter)inspections___SearchAllVisitor_set_column,
     NULL, NULL},
    {"result",
     (getter)inspections___SearchAllVisitor_get_result, (setter)inspections___SearchAllVisitor_set_result,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef inspections___SearchAllVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_inspections___SearchAllVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit",
     (PyCFunction)CPyPy_inspections___SearchAllVisitor___visit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_inspections___SearchAllVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SearchAllVisitor",
    .tp_new = inspections___SearchAllVisitor_new,
    .tp_dealloc = (destructor)inspections___SearchAllVisitor_dealloc,
    .tp_traverse = (traverseproc)inspections___SearchAllVisitor_traverse,
    .tp_clear = (inquiry)inspections___SearchAllVisitor_clear,
    .tp_getset = inspections___SearchAllVisitor_getseters,
    .tp_methods = inspections___SearchAllVisitor_methods,
    .tp_init = inspections___SearchAllVisitor_init,
    .tp_members = inspections___SearchAllVisitor_members,
    .tp_basicsize = sizeof(mypy___inspections___SearchAllVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___inspections___SearchAllVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___inspections___SearchAllVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_inspections___SearchAllVisitor_template = &CPyType_inspections___SearchAllVisitor_template_;

static PyObject *
inspections___SearchAllVisitor_setup(PyTypeObject *type)
{
    mypy___inspections___SearchAllVisitorObject *self;
    self = (mypy___inspections___SearchAllVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = inspections___SearchAllVisitor_vtable + 12;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_inspections___SearchAllVisitor(CPyTagged cpy_r_line, CPyTagged cpy_r_column)
{
    PyObject *self = inspections___SearchAllVisitor_setup(CPyType_inspections___SearchAllVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_inspections___SearchAllVisitor_____init__(self, cpy_r_line, cpy_r_column);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
inspections___SearchAllVisitor_get_line(mypy___inspections___SearchAllVisitorObject *self, void *closure)
{
    if (unlikely(self->_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line' of 'SearchAllVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_line);
    return retval;
}

static int
inspections___SearchAllVisitor_set_line(mypy___inspections___SearchAllVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchAllVisitor' object attribute 'line' cannot be deleted");
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
inspections___SearchAllVisitor_get_column(mypy___inspections___SearchAllVisitorObject *self, void *closure)
{
    if (unlikely(self->_column == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'column' of 'SearchAllVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_column);
    PyObject *retval = CPyTagged_StealAsObject(self->_column);
    return retval;
}

static int
inspections___SearchAllVisitor_set_column(mypy___inspections___SearchAllVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchAllVisitor' object attribute 'column' cannot be deleted");
        return -1;
    }
    if (self->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_column);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_column = tmp;
    return 0;
}

static PyObject *
inspections___SearchAllVisitor_get_result(mypy___inspections___SearchAllVisitorObject *self, void *closure)
{
    if (unlikely(self->_result == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'result' of 'SearchAllVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_result);
    PyObject *retval = self->_result;
    return retval;
}

static int
inspections___SearchAllVisitor_set_result(mypy___inspections___SearchAllVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SearchAllVisitor' object attribute 'result' cannot be deleted");
        return -1;
    }
    if (self->_result != NULL) {
        CPy_DECREF(self->_result);
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
    self->_result = tmp;
    return 0;
}

static int
inspections___InspectionEngine_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *inspections___InspectionEngine_setup(PyTypeObject *type);
PyObject *CPyDef_inspections___InspectionEngine(PyObject *cpy_r_fg_manager, CPyTagged cpy_r_verbosity, CPyTagged cpy_r_limit, char cpy_r_include_span, char cpy_r_include_kind, char cpy_r_include_object_attrs, char cpy_r_union_attrs, char cpy_r_force_reload);

static PyObject *
inspections___InspectionEngine_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_inspections___InspectionEngine) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = inspections___InspectionEngine_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_inspections___InspectionEngine_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
inspections___InspectionEngine_traverse(mypy___inspections___InspectionEngineObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fg_manager);
    Py_VISIT(self->_finder);
    if (CPyTagged_CheckLong(self->_verbosity)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_verbosity));
    }
    if (CPyTagged_CheckLong(self->_limit)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_limit));
    }
    Py_VISIT(self->_module);
    return 0;
}

static int
inspections___InspectionEngine_clear(mypy___inspections___InspectionEngineObject *self)
{
    Py_CLEAR(self->_fg_manager);
    Py_CLEAR(self->_finder);
    if (CPyTagged_CheckLong(self->_verbosity)) {
        CPyTagged __tmp = self->_verbosity;
        self->_verbosity = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_limit)) {
        CPyTagged __tmp = self->_limit;
        self->_limit = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_module);
    return 0;
}

static void
inspections___InspectionEngine_dealloc(mypy___inspections___InspectionEngineObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, inspections___InspectionEngine_dealloc)
    inspections___InspectionEngine_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem inspections___InspectionEngine_vtable[22];
static bool
CPyDef_inspections___InspectionEngine_trait_vtable_setup(void)
{
    CPyVTableItem inspections___InspectionEngine_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_inspections___InspectionEngine_____init__,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___parse_location,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___reload_module,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___expr_type,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___object_type,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___collect_attrs,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine____fill_from_dict,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___expr_attrs,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___format_node,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___collect_nodes,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___modules_for_nodes,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___expression_def,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___missing_type,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___missing_node,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___add_prefixes,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___run_inspection_by_exact_location,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___run_inspection_by_position,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___find_module,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___run_inspection,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___get_type,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___get_attrs,
        (CPyVTableItem)CPyDef_inspections___InspectionEngine___get_definition,
    };
    memcpy(inspections___InspectionEngine_vtable, inspections___InspectionEngine_vtable_scratch, sizeof(inspections___InspectionEngine_vtable));
    return 1;
}

static PyObject *
inspections___InspectionEngine_get_fg_manager(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_fg_manager(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_finder(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_finder(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_verbosity(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_verbosity(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_limit(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_limit(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_include_span(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_include_span(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_include_kind(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_include_kind(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_include_object_attrs(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_include_object_attrs(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_union_attrs(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_union_attrs(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_force_reload(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_force_reload(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);
static PyObject *
inspections___InspectionEngine_get_module(mypy___inspections___InspectionEngineObject *self, void *closure);
static int
inspections___InspectionEngine_set_module(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure);

static PyGetSetDef inspections___InspectionEngine_getseters[] = {
    {"fg_manager",
     (getter)inspections___InspectionEngine_get_fg_manager, (setter)inspections___InspectionEngine_set_fg_manager,
     NULL, NULL},
    {"finder",
     (getter)inspections___InspectionEngine_get_finder, (setter)inspections___InspectionEngine_set_finder,
     NULL, NULL},
    {"verbosity",
     (getter)inspections___InspectionEngine_get_verbosity, (setter)inspections___InspectionEngine_set_verbosity,
     NULL, NULL},
    {"limit",
     (getter)inspections___InspectionEngine_get_limit, (setter)inspections___InspectionEngine_set_limit,
     NULL, NULL},
    {"include_span",
     (getter)inspections___InspectionEngine_get_include_span, (setter)inspections___InspectionEngine_set_include_span,
     NULL, NULL},
    {"include_kind",
     (getter)inspections___InspectionEngine_get_include_kind, (setter)inspections___InspectionEngine_set_include_kind,
     NULL, NULL},
    {"include_object_attrs",
     (getter)inspections___InspectionEngine_get_include_object_attrs, (setter)inspections___InspectionEngine_set_include_object_attrs,
     NULL, NULL},
    {"union_attrs",
     (getter)inspections___InspectionEngine_get_union_attrs, (setter)inspections___InspectionEngine_set_union_attrs,
     NULL, NULL},
    {"force_reload",
     (getter)inspections___InspectionEngine_get_force_reload, (setter)inspections___InspectionEngine_set_force_reload,
     NULL, NULL},
    {"module",
     (getter)inspections___InspectionEngine_get_module, (setter)inspections___InspectionEngine_set_module,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef inspections___InspectionEngine_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_inspections___InspectionEngine_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_location",
     (PyCFunction)CPyPy_inspections___InspectionEngine___parse_location,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reload_module",
     (PyCFunction)CPyPy_inspections___InspectionEngine___reload_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expr_type",
     (PyCFunction)CPyPy_inspections___InspectionEngine___expr_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"object_type",
     (PyCFunction)CPyPy_inspections___InspectionEngine___object_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"collect_attrs",
     (PyCFunction)CPyPy_inspections___InspectionEngine___collect_attrs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_fill_from_dict",
     (PyCFunction)CPyPy_inspections___InspectionEngine____fill_from_dict,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expr_attrs",
     (PyCFunction)CPyPy_inspections___InspectionEngine___expr_attrs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_node",
     (PyCFunction)CPyPy_inspections___InspectionEngine___format_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"collect_nodes",
     (PyCFunction)CPyPy_inspections___InspectionEngine___collect_nodes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"modules_for_nodes",
     (PyCFunction)CPyPy_inspections___InspectionEngine___modules_for_nodes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expression_def",
     (PyCFunction)CPyPy_inspections___InspectionEngine___expression_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"missing_type",
     (PyCFunction)CPyPy_inspections___InspectionEngine___missing_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"missing_node",
     (PyCFunction)CPyPy_inspections___InspectionEngine___missing_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_prefixes",
     (PyCFunction)CPyPy_inspections___InspectionEngine___add_prefixes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"run_inspection_by_exact_location",
     (PyCFunction)CPyPy_inspections___InspectionEngine___run_inspection_by_exact_location,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"run_inspection_by_position",
     (PyCFunction)CPyPy_inspections___InspectionEngine___run_inspection_by_position,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_module",
     (PyCFunction)CPyPy_inspections___InspectionEngine___find_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"run_inspection",
     (PyCFunction)CPyPy_inspections___InspectionEngine___run_inspection,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type",
     (PyCFunction)CPyPy_inspections___InspectionEngine___get_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_attrs",
     (PyCFunction)CPyPy_inspections___InspectionEngine___get_attrs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_definition",
     (PyCFunction)CPyPy_inspections___InspectionEngine___get_definition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_inspections___InspectionEngine_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "InspectionEngine",
    .tp_new = inspections___InspectionEngine_new,
    .tp_dealloc = (destructor)inspections___InspectionEngine_dealloc,
    .tp_traverse = (traverseproc)inspections___InspectionEngine_traverse,
    .tp_clear = (inquiry)inspections___InspectionEngine_clear,
    .tp_getset = inspections___InspectionEngine_getseters,
    .tp_methods = inspections___InspectionEngine_methods,
    .tp_init = inspections___InspectionEngine_init,
    .tp_basicsize = sizeof(mypy___inspections___InspectionEngineObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_inspections___InspectionEngine_template = &CPyType_inspections___InspectionEngine_template_;

static PyObject *
inspections___InspectionEngine_setup(PyTypeObject *type)
{
    mypy___inspections___InspectionEngineObject *self;
    self = (mypy___inspections___InspectionEngineObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = inspections___InspectionEngine_vtable;
    self->_verbosity = CPY_INT_TAG;
    self->_limit = CPY_INT_TAG;
    self->_include_span = 2;
    self->_include_kind = 2;
    self->_include_object_attrs = 2;
    self->_union_attrs = 2;
    self->_force_reload = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_inspections___InspectionEngine(PyObject *cpy_r_fg_manager, CPyTagged cpy_r_verbosity, CPyTagged cpy_r_limit, char cpy_r_include_span, char cpy_r_include_kind, char cpy_r_include_object_attrs, char cpy_r_union_attrs, char cpy_r_force_reload)
{
    PyObject *self = inspections___InspectionEngine_setup(CPyType_inspections___InspectionEngine);
    if (self == NULL)
        return NULL;
    char res = CPyDef_inspections___InspectionEngine_____init__(self, cpy_r_fg_manager, cpy_r_verbosity, cpy_r_limit, cpy_r_include_span, cpy_r_include_kind, cpy_r_include_object_attrs, cpy_r_union_attrs, cpy_r_force_reload);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
inspections___InspectionEngine_get_fg_manager(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    if (unlikely(self->_fg_manager == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fg_manager' of 'InspectionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fg_manager);
    PyObject *retval = self->_fg_manager;
    return retval;
}

static int
inspections___InspectionEngine_set_fg_manager(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'fg_manager' cannot be deleted");
        return -1;
    }
    if (self->_fg_manager != NULL) {
        CPy_DECREF(self->_fg_manager);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_update___FineGrainedBuildManager))
        tmp = value;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fg_manager = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_finder(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    if (unlikely(self->_finder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'finder' of 'InspectionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_finder);
    PyObject *retval = self->_finder;
    return retval;
}

static int
inspections___InspectionEngine_set_finder(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'finder' cannot be deleted");
        return -1;
    }
    if (self->_finder != NULL) {
        CPy_DECREF(self->_finder);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_find_sources___SourceFinder))
        tmp = value;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_finder = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_verbosity(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    if (unlikely(self->_verbosity == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'verbosity' of 'InspectionEngine' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_verbosity);
    PyObject *retval = CPyTagged_StealAsObject(self->_verbosity);
    return retval;
}

static int
inspections___InspectionEngine_set_verbosity(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'verbosity' cannot be deleted");
        return -1;
    }
    if (self->_verbosity != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_verbosity);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_verbosity = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_limit(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    if (unlikely(self->_limit == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'limit' of 'InspectionEngine' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_limit);
    PyObject *retval = CPyTagged_StealAsObject(self->_limit);
    return retval;
}

static int
inspections___InspectionEngine_set_limit(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'limit' cannot be deleted");
        return -1;
    }
    if (self->_limit != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_limit);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_limit = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_include_span(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    PyObject *retval = self->_include_span ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
inspections___InspectionEngine_set_include_span(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'include_span' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_include_span = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_include_kind(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    PyObject *retval = self->_include_kind ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
inspections___InspectionEngine_set_include_kind(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'include_kind' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_include_kind = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_include_object_attrs(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    PyObject *retval = self->_include_object_attrs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
inspections___InspectionEngine_set_include_object_attrs(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'include_object_attrs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_include_object_attrs = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_union_attrs(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    PyObject *retval = self->_union_attrs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
inspections___InspectionEngine_set_union_attrs(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'union_attrs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_union_attrs = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_force_reload(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    PyObject *retval = self->_force_reload ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
inspections___InspectionEngine_set_force_reload(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'force_reload' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_force_reload = tmp;
    return 0;
}

static PyObject *
inspections___InspectionEngine_get_module(mypy___inspections___InspectionEngineObject *self, void *closure)
{
    if (unlikely(self->_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module' of 'InspectionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module);
    PyObject *retval = self->_module;
    return retval;
}

static int
inspections___InspectionEngine_set_module(mypy___inspections___InspectionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'InspectionEngine' object attribute 'module' cannot be deleted");
        return -1;
    }
    if (self->_module != NULL) {
        CPy_DECREF(self->_module);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_mypy___build___State)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2934;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2934;
    CPy_TypeError("mypy.build.State or None", value); 
    tmp = NULL;
__LL2934: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module = tmp;
    return 0;
}

static PyObject *inspections___collect_attrs_InspectionEngine_env_setup(PyTypeObject *type);
PyObject *CPyDef_inspections___collect_attrs_InspectionEngine_env(void);

static PyObject *
inspections___collect_attrs_InspectionEngine_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_inspections___collect_attrs_InspectionEngine_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return inspections___collect_attrs_InspectionEngine_env_setup(type);
}

static int
inspections___collect_attrs_InspectionEngine_env_traverse(mypy___inspections___collect_attrs_InspectionEngine_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_item_attrs);
    Py_VISIT(self->_cmp_types);
    Py_VISIT(self->_self);
    Py_VISIT(self->_instances);
    return 0;
}

static int
inspections___collect_attrs_InspectionEngine_env_clear(mypy___inspections___collect_attrs_InspectionEngine_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_item_attrs);
    Py_CLEAR(self->_cmp_types);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_instances);
    return 0;
}

static void
inspections___collect_attrs_InspectionEngine_env_dealloc(mypy___inspections___collect_attrs_InspectionEngine_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, inspections___collect_attrs_InspectionEngine_env_dealloc)
    inspections___collect_attrs_InspectionEngine_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem inspections___collect_attrs_InspectionEngine_env_vtable[1];
static bool
CPyDef_inspections___collect_attrs_InspectionEngine_env_trait_vtable_setup(void)
{
    CPyVTableItem inspections___collect_attrs_InspectionEngine_env_vtable_scratch[] = {
        NULL
    };
    memcpy(inspections___collect_attrs_InspectionEngine_env_vtable, inspections___collect_attrs_InspectionEngine_env_vtable_scratch, sizeof(inspections___collect_attrs_InspectionEngine_env_vtable));
    return 1;
}

static PyMethodDef inspections___collect_attrs_InspectionEngine_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_inspections___collect_attrs_InspectionEngine_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "collect_attrs_InspectionEngine_env",
    .tp_new = inspections___collect_attrs_InspectionEngine_env_new,
    .tp_dealloc = (destructor)inspections___collect_attrs_InspectionEngine_env_dealloc,
    .tp_traverse = (traverseproc)inspections___collect_attrs_InspectionEngine_env_traverse,
    .tp_clear = (inquiry)inspections___collect_attrs_InspectionEngine_env_clear,
    .tp_methods = inspections___collect_attrs_InspectionEngine_env_methods,
    .tp_basicsize = sizeof(mypy___inspections___collect_attrs_InspectionEngine_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_inspections___collect_attrs_InspectionEngine_env_template = &CPyType_inspections___collect_attrs_InspectionEngine_env_template_;

static PyObject *
inspections___collect_attrs_InspectionEngine_env_setup(PyTypeObject *type)
{
    mypy___inspections___collect_attrs_InspectionEngine_envObject *self;
    self = (mypy___inspections___collect_attrs_InspectionEngine_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = inspections___collect_attrs_InspectionEngine_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_inspections___collect_attrs_InspectionEngine_env(void)
{
    PyObject *self = inspections___collect_attrs_InspectionEngine_env_setup(CPyType_inspections___collect_attrs_InspectionEngine_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__inspections___item_attrs_collect_attrs_InspectionEngine_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____get__(self, instance, owner);
}
PyMemberDef inspections___item_attrs_collect_attrs_InspectionEngine_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *inspections___item_attrs_collect_attrs_InspectionEngine_obj_setup(PyTypeObject *type);
PyObject *CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj(void);

static PyObject *
inspections___item_attrs_collect_attrs_InspectionEngine_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return inspections___item_attrs_collect_attrs_InspectionEngine_obj_setup(type);
}

static int
inspections___item_attrs_collect_attrs_InspectionEngine_obj_traverse(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject))));
    return 0;
}

static int
inspections___item_attrs_collect_attrs_InspectionEngine_obj_clear(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject))));
    return 0;
}

static void
inspections___item_attrs_collect_attrs_InspectionEngine_obj_dealloc(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, inspections___item_attrs_collect_attrs_InspectionEngine_obj_dealloc)
    inspections___item_attrs_collect_attrs_InspectionEngine_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem inspections___item_attrs_collect_attrs_InspectionEngine_obj_vtable[2];
static bool
CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_trait_vtable_setup(void)
{
    CPyVTableItem inspections___item_attrs_collect_attrs_InspectionEngine_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____call__,
        (CPyVTableItem)CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____get__,
    };
    memcpy(inspections___item_attrs_collect_attrs_InspectionEngine_obj_vtable, inspections___item_attrs_collect_attrs_InspectionEngine_obj_vtable_scratch, sizeof(inspections___item_attrs_collect_attrs_InspectionEngine_obj_vtable));
    return 1;
}

static PyMethodDef inspections___item_attrs_collect_attrs_InspectionEngine_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "item_attrs_collect_attrs_InspectionEngine_obj",
    .tp_new = inspections___item_attrs_collect_attrs_InspectionEngine_obj_new,
    .tp_dealloc = (destructor)inspections___item_attrs_collect_attrs_InspectionEngine_obj_dealloc,
    .tp_traverse = (traverseproc)inspections___item_attrs_collect_attrs_InspectionEngine_obj_traverse,
    .tp_clear = (inquiry)inspections___item_attrs_collect_attrs_InspectionEngine_obj_clear,
    .tp_methods = inspections___item_attrs_collect_attrs_InspectionEngine_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__inspections___item_attrs_collect_attrs_InspectionEngine_obj,
    .tp_members = inspections___item_attrs_collect_attrs_InspectionEngine_obj_members,
    .tp_basicsize = sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject),
    .tp_weaklistoffset = sizeof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj_template = &CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj_template_;

static PyObject *
inspections___item_attrs_collect_attrs_InspectionEngine_obj_setup(PyTypeObject *type)
{
    mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *self;
    self = (mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = inspections___item_attrs_collect_attrs_InspectionEngine_obj_vtable;
    self->vectorcall = CPyPy_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj(void)
{
    PyObject *self = inspections___item_attrs_collect_attrs_InspectionEngine_obj_setup(CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__inspections___cmp_types_collect_attrs_InspectionEngine_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____get__(self, instance, owner);
}
PyMemberDef inspections___cmp_types_collect_attrs_InspectionEngine_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *inspections___cmp_types_collect_attrs_InspectionEngine_obj_setup(PyTypeObject *type);
PyObject *CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj(void);

static PyObject *
inspections___cmp_types_collect_attrs_InspectionEngine_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return inspections___cmp_types_collect_attrs_InspectionEngine_obj_setup(type);
}

static int
inspections___cmp_types_collect_attrs_InspectionEngine_obj_traverse(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject))));
    return 0;
}

static int
inspections___cmp_types_collect_attrs_InspectionEngine_obj_clear(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject))));
    return 0;
}

static void
inspections___cmp_types_collect_attrs_InspectionEngine_obj_dealloc(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, inspections___cmp_types_collect_attrs_InspectionEngine_obj_dealloc)
    inspections___cmp_types_collect_attrs_InspectionEngine_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem inspections___cmp_types_collect_attrs_InspectionEngine_obj_vtable[2];
static bool
CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_trait_vtable_setup(void)
{
    CPyVTableItem inspections___cmp_types_collect_attrs_InspectionEngine_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____call__,
        (CPyVTableItem)CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____get__,
    };
    memcpy(inspections___cmp_types_collect_attrs_InspectionEngine_obj_vtable, inspections___cmp_types_collect_attrs_InspectionEngine_obj_vtable_scratch, sizeof(inspections___cmp_types_collect_attrs_InspectionEngine_obj_vtable));
    return 1;
}

static PyMethodDef inspections___cmp_types_collect_attrs_InspectionEngine_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "cmp_types_collect_attrs_InspectionEngine_obj",
    .tp_new = inspections___cmp_types_collect_attrs_InspectionEngine_obj_new,
    .tp_dealloc = (destructor)inspections___cmp_types_collect_attrs_InspectionEngine_obj_dealloc,
    .tp_traverse = (traverseproc)inspections___cmp_types_collect_attrs_InspectionEngine_obj_traverse,
    .tp_clear = (inquiry)inspections___cmp_types_collect_attrs_InspectionEngine_obj_clear,
    .tp_methods = inspections___cmp_types_collect_attrs_InspectionEngine_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__inspections___cmp_types_collect_attrs_InspectionEngine_obj,
    .tp_members = inspections___cmp_types_collect_attrs_InspectionEngine_obj_members,
    .tp_basicsize = sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject),
    .tp_weaklistoffset = sizeof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj_template = &CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj_template_;

static PyObject *
inspections___cmp_types_collect_attrs_InspectionEngine_obj_setup(PyTypeObject *type)
{
    mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *self;
    self = (mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = inspections___cmp_types_collect_attrs_InspectionEngine_obj_vtable;
    self->vectorcall = CPyPy_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj(void)
{
    PyObject *self = inspections___cmp_types_collect_attrs_InspectionEngine_obj_setup(CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef inspectionsmodule_methods[] = {
    {"node_starts_after", (PyCFunction)CPyPy_inspections___node_starts_after, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"node_ends_before", (PyCFunction)CPyPy_inspections___node_ends_before, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expr_span", (PyCFunction)CPyPy_inspections___expr_span, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_instance_fallback", (PyCFunction)CPyPy_inspections___get_instance_fallback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_node", (PyCFunction)CPyPy_inspections___find_node, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_module_by_fullname", (PyCFunction)CPyPy_inspections___find_module_by_fullname, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_by_location", (PyCFunction)CPyPy_inspections___find_by_location, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_all_by_location", (PyCFunction)CPyPy_inspections___find_all_by_location, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef inspectionsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.inspections",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    inspectionsmodule_methods
};

PyObject *CPyInit_mypy___inspections(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___inspections_internal) {
        Py_INCREF(CPyModule_mypy___inspections_internal);
        return CPyModule_mypy___inspections_internal;
    }
    CPyModule_mypy___inspections_internal = PyModule_Create(&inspectionsmodule);
    if (unlikely(CPyModule_mypy___inspections_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___inspections_internal, "__name__");
    CPyStatic_inspections___globals = PyModule_GetDict(CPyModule_mypy___inspections_internal);
    if (unlikely(CPyStatic_inspections___globals == NULL))
        goto fail;
    CPyType_inspections___collect_attrs_InspectionEngine_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_inspections___collect_attrs_InspectionEngine_env_template, NULL, modname);
    if (unlikely(!CPyType_inspections___collect_attrs_InspectionEngine_env))
        goto fail;
    CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj_template, NULL, modname);
    if (unlikely(!CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj))
        goto fail;
    CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj_template, NULL, modname);
    if (unlikely(!CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_inspections_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___inspections_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___inspections_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_inspections___SearchVisitor);
    Py_CLEAR(CPyType_inspections___SearchAllVisitor);
    Py_CLEAR(CPyType_inspections___InspectionEngine);
    Py_CLEAR(CPyType_inspections___collect_attrs_InspectionEngine_env);
    Py_CLEAR(CPyType_inspections___item_attrs_collect_attrs_InspectionEngine_obj);
    Py_CLEAR(CPyType_inspections___cmp_types_collect_attrs_InspectionEngine_obj);
    return NULL;
}

char CPyDef_inspections___node_starts_after(PyObject *cpy_r_o, CPyTagged cpy_r_line, CPyTagged cpy_r_column) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    char cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___nodes___NodeObject *)cpy_r_o)->_line;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "node_starts_after", "Node", "line", 44, CPyStatic_inspections___globals);
        goto CPyL19;
    }
CPyL1: ;
    cpy_r_r1 = cpy_r_r0 & 1;
    cpy_r_r2 = cpy_r_r1 == 0;
    cpy_r_r3 = cpy_r_line & 1;
    cpy_r_r4 = cpy_r_r3 == 0;
    cpy_r_r5 = cpy_r_r2 & cpy_r_r4;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r0 > (Py_ssize_t)cpy_r_line;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL4;
CPyL3: ;
    cpy_r_r8 = CPyTagged_IsLt_(cpy_r_line, cpy_r_r0);
    cpy_r_r7 = cpy_r_r8;
CPyL4: ;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r9 = cpy_r_r7;
    goto CPyL18;
CPyL6: ;
    cpy_r_r10 = ((mypy___nodes___NodeObject *)cpy_r_o)->_line;
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "node_starts_after", "Node", "line", 44, CPyStatic_inspections___globals);
        goto CPyL19;
    }
CPyL7: ;
    cpy_r_r11 = cpy_r_r10 & 1;
    cpy_r_r12 = cpy_r_r11 == 0;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = cpy_r_r10 == cpy_r_line;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL9: ;
    cpy_r_r15 = CPyTagged_IsEq_(cpy_r_r10, cpy_r_line);
    cpy_r_r14 = cpy_r_r15;
CPyL10: ;
    if (cpy_r_r14) goto CPyL12;
    cpy_r_r16 = cpy_r_r14;
    goto CPyL17;
CPyL12: ;
    cpy_r_r17 = ((mypy___nodes___NodeObject *)cpy_r_o)->_column;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "node_starts_after", "Node", "column", 44, CPyStatic_inspections___globals);
        goto CPyL19;
    }
CPyL13: ;
    cpy_r_r18 = cpy_r_r17 & 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    cpy_r_r20 = cpy_r_column & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    cpy_r_r22 = cpy_r_r19 & cpy_r_r21;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r17 > (Py_ssize_t)cpy_r_column;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL16;
CPyL15: ;
    cpy_r_r25 = CPyTagged_IsLt_(cpy_r_column, cpy_r_r17);
    cpy_r_r24 = cpy_r_r25;
CPyL16: ;
    cpy_r_r16 = cpy_r_r24;
CPyL17: ;
    cpy_r_r9 = cpy_r_r16;
CPyL18: ;
    return cpy_r_r9;
CPyL19: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
}

PyObject *CPyPy_inspections___node_starts_after(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", "line", "column", 0};
    static CPyArg_Parser parser = {"OOO:node_starts_after", kwlist, 0};
    PyObject *obj_o;
    PyObject *obj_line;
    PyObject *obj_column;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_o, &obj_line, &obj_column)) {
        return NULL;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Node)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_o); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    char retval = CPyDef_inspections___node_starts_after(arg_o, arg_line, arg_column);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "node_starts_after", 43, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___node_ends_before(PyObject *cpy_r_o, CPyTagged cpy_r_line, CPyTagged cpy_r_column) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_line;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "node_ends_before", "Node", "end_line", 50, CPyStatic_inspections___globals);
        goto CPyL23;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL22;
    cpy_r_r3 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_column;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "node_ends_before", "Node", "end_column", 50, CPyStatic_inspections___globals);
        goto CPyL23;
    }
CPyL3: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL22;
    cpy_r_r6 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_line;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "node_ends_before", "Node", "end_line", 51, CPyStatic_inspections___globals);
        goto CPyL23;
    }
CPyL5: ;
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6); cpy_r_r7 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "node_ends_before", 51, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    cpy_r_r8 = cpy_r_r7 & 1;
    cpy_r_r9 = cpy_r_r8 != 0;
    if (cpy_r_r9) goto CPyL8;
    cpy_r_r10 = cpy_r_line & 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL9;
CPyL8: ;
    cpy_r_r12 = CPyTagged_IsLt_(cpy_r_r7, cpy_r_line);
    CPyTagged_DECREF(cpy_r_r7);
    if (cpy_r_r12) {
        goto CPyL21;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_line;
    CPyTagged_DECREF(cpy_r_r7);
    if (cpy_r_r13) goto CPyL21;
CPyL10: ;
    cpy_r_r14 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_line;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "node_ends_before", "Node", "end_line", 51, CPyStatic_inspections___globals);
        goto CPyL23;
    }
CPyL11: ;
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "node_ends_before", 51, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    cpy_r_r16 = cpy_r_r15 & 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (!cpy_r_r17) goto CPyL14;
    cpy_r_r18 = CPyTagged_IsEq_(cpy_r_r15, cpy_r_line);
    CPyTagged_DECREF(cpy_r_r15);
    if (cpy_r_r18) {
        goto CPyL15;
    } else
        goto CPyL22;
CPyL14: ;
    cpy_r_r19 = cpy_r_r15 == cpy_r_line;
    CPyTagged_DECREF(cpy_r_r15);
    if (!cpy_r_r19) goto CPyL22;
CPyL15: ;
    cpy_r_r20 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_column;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "node_ends_before", "Node", "end_column", 51, CPyStatic_inspections___globals);
        goto CPyL23;
    }
CPyL16: ;
    if (likely(PyLong_Check(cpy_r_r20)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r20);
    else {
        CPy_TypeError("int", cpy_r_r20); cpy_r_r21 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "node_ends_before", 51, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    cpy_r_r22 = cpy_r_r21 & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (cpy_r_r23) goto CPyL19;
    cpy_r_r24 = cpy_r_column & 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (!cpy_r_r25) goto CPyL20;
CPyL19: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_r21, cpy_r_column);
    CPyTagged_DECREF(cpy_r_r21);
    if (cpy_r_r26) {
        goto CPyL21;
    } else
        goto CPyL22;
CPyL20: ;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_column;
    CPyTagged_DECREF(cpy_r_r21);
    if (!cpy_r_r27) goto CPyL22;
CPyL21: ;
    return 1;
CPyL22: ;
    return 0;
CPyL23: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
}

PyObject *CPyPy_inspections___node_ends_before(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", "line", "column", 0};
    static CPyArg_Parser parser = {"OOO:node_ends_before", kwlist, 0};
    PyObject *obj_o;
    PyObject *obj_line;
    PyObject *obj_column;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_o, &obj_line, &obj_column)) {
        return NULL;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Node)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_o); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    char retval = CPyDef_inspections___node_ends_before(arg_o, arg_line, arg_column);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "node_ends_before", 47, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___expr_span(PyObject *cpy_r_expr) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___ContextObject *)cpy_r_expr)->_line;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "expr_span", "Expression", "line", 58, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    CPyTagged_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyTagged_Str(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_span", 58, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    cpy_r_r2 = CPyStatics[171]; /* ':' */
    cpy_r_r3 = ((mypy___nodes___ContextObject *)cpy_r_expr)->_column;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "expr_span", "Expression", "column", 58, CPyStatic_inspections___globals);
        goto CPyL11;
    }
CPyL3: ;
    cpy_r_r4 = CPyTagged_Add(cpy_r_r3, 2);
    cpy_r_r5 = CPyTagged_Str(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_span", 58, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyStatics[171]; /* ':' */
    cpy_r_r7 = ((mypy___nodes___ContextObject *)cpy_r_expr)->_end_line;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "expr_span", "Expression", "end_line", 58, CPyStatic_inspections___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = PyObject_Str(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_span", 58, CPyStatic_inspections___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyStatics[171]; /* ':' */
    cpy_r_r10 = ((mypy___nodes___ContextObject *)cpy_r_expr)->_end_column;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "expr_span", "Expression", "end_column", 58, CPyStatic_inspections___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    cpy_r_r11 = PyObject_Str(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_span", 58, CPyStatic_inspections___globals);
        goto CPyL13;
    }
    cpy_r_r12 = CPyStr_Build(7, cpy_r_r1, cpy_r_r2, cpy_r_r5, cpy_r_r6, cpy_r_r8, cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_span", 58, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    return cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
}

PyObject *CPyPy_inspections___expr_span(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:expr_span", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___expr_span(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "expr_span", 56, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___get_instance_fallback(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyPtr cpy_r_r63;
    int64_t cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyPtr cpy_r_r87;
    int64_t cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    cpy_r_r0 = (PyObject *)CPyType_types___Instance;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 64, CPyStatic_inspections___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 64, CPyStatic_inspections___globals);
        goto CPyL59;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r4;
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r8 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL9;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r12 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 66, CPyStatic_inspections___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r13 = CPyDef_typeops___tuple_fallback(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 66, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 66, CPyStatic_inspections___globals);
        goto CPyL60;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r17 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypedDictType))
        cpy_r_r21 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 68, CPyStatic_inspections___globals, "mypy.types.TypedDictType", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r22 = ((mypy___types___TypedDictTypeObject *)cpy_r_r21)->_fallback;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyList_New(1);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 68, CPyStatic_inspections___globals);
        goto CPyL61;
    }
    cpy_r_r24 = (CPyPtr)&((PyListObject *)cpy_r_r23)->ob_item;
    cpy_r_r25 = *(CPyPtr *)cpy_r_r24;
    *(PyObject * *)cpy_r_r25 = cpy_r_r22;
    return cpy_r_r23;
CPyL13: ;
    cpy_r_r26 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL15;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL16;
CPyL15: ;
    cpy_r_r31 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    cpy_r_r30 = cpy_r_r34;
CPyL16: ;
    if (!cpy_r_r30) goto CPyL21;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r35 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 70, CPyStatic_inspections___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r36 = ((mypy___types___FunctionLikeObject *)cpy_r_r35)->_fallback;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "get_instance_fallback", "FunctionLike", "fallback", 70, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r36);
CPyL19: ;
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 70, CPyStatic_inspections___globals);
        goto CPyL62;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    *(PyObject * *)cpy_r_r39 = cpy_r_r36;
    return cpy_r_r37;
CPyL21: ;
    cpy_r_r40 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___LiteralType))
        cpy_r_r44 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 72, CPyStatic_inspections___globals, "mypy.types.LiteralType", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r45 = ((mypy___types___LiteralTypeObject *)cpy_r_r44)->_fallback;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = PyList_New(1);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 72, CPyStatic_inspections___globals);
        goto CPyL63;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_r45;
    return cpy_r_r46;
CPyL25: ;
    cpy_r_r49 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r53 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 74, CPyStatic_inspections___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r54 = ((mypy___types___TypeVarTypeObject *)cpy_r_r53)->_values;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_r54)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    CPy_DECREF(cpy_r_r54);
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = cpy_r_r57 != 0;
    if (!cpy_r_r58) goto CPyL39;
    cpy_r_r59 = PyList_New(0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 75, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    cpy_r_res = cpy_r_r59;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r60 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 76, CPyStatic_inspections___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL64;
    }
    cpy_r_r61 = ((mypy___types___TypeVarTypeObject *)cpy_r_r60)->_values;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = 0;
CPyL31: ;
    cpy_r_r63 = (CPyPtr)&((PyVarObject *)cpy_r_r61)->ob_size;
    cpy_r_r64 = *(int64_t *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = (Py_ssize_t)cpy_r_r62 < (Py_ssize_t)cpy_r_r65;
    if (!cpy_r_r66) goto CPyL65;
    cpy_r_r67 = CPyList_GetItemUnsafe(cpy_r_r61, cpy_r_r62);
    if (likely(PyObject_TypeCheck(cpy_r_r67, CPyType_types___Type)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 76, CPyStatic_inspections___globals, "mypy.types.Type", cpy_r_r67);
        goto CPyL66;
    }
    cpy_r_t = cpy_r_r68;
    cpy_r_r69 = CPyDef_types___get_proper_type(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 77, CPyStatic_inspections___globals);
        goto CPyL66;
    }
    if (likely(cpy_r_r69 != Py_None))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 77, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_r69);
        goto CPyL66;
    }
    cpy_r_r71 = CPyDef_inspections___get_instance_fallback(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 77, CPyStatic_inspections___globals);
        goto CPyL66;
    }
    cpy_r_r72 = CPyList_Extend(cpy_r_res, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 77, CPyStatic_inspections___globals);
        goto CPyL66;
    } else
        goto CPyL67;
CPyL37: ;
    cpy_r_r73 = cpy_r_r62 + 2;
    cpy_r_r62 = cpy_r_r73;
    goto CPyL31;
CPyL38: ;
    return cpy_r_res;
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r74 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 79, CPyStatic_inspections___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL58;
    }
    cpy_r_r75 = ((mypy___types___TypeVarTypeObject *)cpy_r_r74)->_upper_bound;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyDef_types___get_proper_type(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 79, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    if (likely(cpy_r_r76 != Py_None))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 79, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_r76);
        goto CPyL58;
    }
    cpy_r_r78 = CPyDef_inspections___get_instance_fallback(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 79, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    return cpy_r_r78;
CPyL44: ;
    cpy_r_r79 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL56;
    cpy_r_r83 = PyList_New(0);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 81, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    cpy_r_res = cpy_r_r83;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r84 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 82, CPyStatic_inspections___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL64;
    }
    cpy_r_r85 = ((mypy___types___UnionTypeObject *)cpy_r_r84)->_items;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = 0;
CPyL48: ;
    cpy_r_r87 = (CPyPtr)&((PyVarObject *)cpy_r_r85)->ob_size;
    cpy_r_r88 = *(int64_t *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 << 1;
    cpy_r_r90 = (Py_ssize_t)cpy_r_r86 < (Py_ssize_t)cpy_r_r89;
    if (!cpy_r_r90) goto CPyL68;
    cpy_r_r91 = CPyList_GetItemUnsafe(cpy_r_r85, cpy_r_r86);
    if (likely(PyObject_TypeCheck(cpy_r_r91, CPyType_types___Type)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 82, CPyStatic_inspections___globals, "mypy.types.Type", cpy_r_r91);
        goto CPyL69;
    }
    cpy_r_t = cpy_r_r92;
    cpy_r_r93 = CPyDef_types___get_proper_type(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 83, CPyStatic_inspections___globals);
        goto CPyL69;
    }
    if (likely(cpy_r_r93 != Py_None))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_instance_fallback", 83, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_r93);
        goto CPyL69;
    }
    cpy_r_r95 = CPyDef_inspections___get_instance_fallback(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 83, CPyStatic_inspections___globals);
        goto CPyL69;
    }
    cpy_r_r96 = CPyList_Extend(cpy_r_res, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 83, CPyStatic_inspections___globals);
        goto CPyL69;
    } else
        goto CPyL70;
CPyL54: ;
    cpy_r_r97 = cpy_r_r86 + 2;
    cpy_r_r86 = cpy_r_r97;
    goto CPyL48;
CPyL55: ;
    return cpy_r_res;
CPyL56: ;
    cpy_r_r98 = PyList_New(0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 85, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    return cpy_r_r98;
CPyL58: ;
    cpy_r_r99 = NULL;
    return cpy_r_r99;
CPyL59: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL58;
CPyL61: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL58;
CPyL65: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL38;
CPyL66: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r61);
    goto CPyL58;
CPyL67: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL37;
CPyL68: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL55;
CPyL69: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r85);
    goto CPyL58;
CPyL70: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL54;
}

PyObject *CPyPy_inspections___get_instance_fallback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_instance_fallback", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___ProperType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___get_instance_fallback(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "get_instance_fallback", 61, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___find_node(PyObject *cpy_r_name, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_method;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_dec;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = CPyDef_nodes___TypeInfo___get_method(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_node", 91, CPyStatic_inspections___globals);
        goto CPyL30;
    }
    cpy_r_method = cpy_r_r0;
    cpy_r_r1 = PyObject_IsTrue(cpy_r_method);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/inspections.py", "find_node", 91, CPyStatic_inspections___globals);
        goto CPyL31;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL32;
    cpy_r_r4 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator))
        cpy_r_r8 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 94, CPyStatic_inspections___globals, "mypy.nodes.Decorator", cpy_r_method);
        goto CPyL31;
    }
    cpy_r_r9 = ((mypy___nodes___DecoratorObject *)cpy_r_r8)->_var;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_method);
    return cpy_r_r9;
CPyL6: ;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r10 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 95, CPyStatic_inspections___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL31;
    }
    cpy_r_r11 = ((mypy___nodes___FuncBaseObject *)cpy_r_r10)->_is_property;
    if (!cpy_r_r11) goto CPyL19;
CPyL8: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (cpy_r_r15) {
        goto CPyL11;
    } else
        goto CPyL33;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/inspections.py", "find_node", 96, CPyStatic_inspections___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r17 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 97, CPyStatic_inspections___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_method);
        goto CPyL31;
    }
    cpy_r_r18 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r17)->_items;
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_r18, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_node", 97, CPyStatic_inspections___globals);
        goto CPyL31;
    }
    if (Py_TYPE(cpy_r_r19) == CPyType_nodes___FuncDef)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2935;
    if (Py_TYPE(cpy_r_r19) == CPyType_nodes___Decorator)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2935;
    CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 97, CPyStatic_inspections___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r19);
    goto CPyL31;
__LL2935: ;
    CPy_DECREF(cpy_r_method);
    cpy_r_dec = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_dec)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (cpy_r_r24) {
        goto CPyL17;
    } else
        goto CPyL34;
CPyL15: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/inspections.py", "find_node", 98, CPyStatic_inspections___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_dec) == CPyType_nodes___Decorator))
        cpy_r_r26 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 99, CPyStatic_inspections___globals, "mypy.nodes.Decorator", cpy_r_dec);
        goto CPyL35;
    }
    cpy_r_r27 = ((mypy___nodes___DecoratorObject *)cpy_r_r26)->_var;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_dec);
    return cpy_r_r27;
CPyL19: ;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r28 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 100, CPyStatic_inspections___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL30;
    }
    return cpy_r_r28;
CPyL21: ;
    cpy_r_r29 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_node", 103, CPyStatic_inspections___globals);
        goto CPyL30;
    }
    cpy_r_node = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_node != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL36;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r32 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 104, CPyStatic_inspections___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL37;
    }
    cpy_r_r33 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r32)->_node;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_node);
    cpy_r_r34 = cpy_r_r33;
    goto CPyL26;
CPyL25: ;
    cpy_r_r35 = Py_None;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r34 = cpy_r_r35;
CPyL26: ;
    cpy_r_v = cpy_r_r34;
    cpy_r_r36 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_nodes___Var))
        cpy_r_r40 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_node", 106, CPyStatic_inspections___globals, "mypy.nodes.Var", cpy_r_v);
        goto CPyL30;
    }
    return cpy_r_r40;
CPyL29: ;
    cpy_r_r41 = Py_None;
    CPy_INCREF(cpy_r_r41);
    return cpy_r_r41;
CPyL30: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL31: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL30;
CPyL32: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL21;
CPyL33: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL9;
CPyL34: ;
    CPy_DECREF(cpy_r_dec);
    goto CPyL15;
CPyL35: ;
    CPy_DecRef(cpy_r_dec);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL25;
CPyL37: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL30;
CPyL38: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL29;
}

PyObject *CPyPy_inspections___find_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "info", 0};
    static CPyArg_Parser parser = {"OO:find_node", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_info)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___find_node(arg_name, arg_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "find_node", 88, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___find_module_by_fullname(PyObject *cpy_r_fullname, PyObject *cpy_r_modules) {
    PyObject *cpy_r_head;
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_tail;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPy_INCREF(cpy_r_fullname);
    cpy_r_head = cpy_r_fullname;
    cpy_r_r0 = PyDict_Contains(cpy_r_modules, cpy_r_head);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 118, CPyStatic_inspections___globals);
        goto CPyL21;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_modules, cpy_r_head);
    CPy_DECREF(cpy_r_head);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 119, CPyStatic_inspections___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_mypy___build___State))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module_by_fullname", 119, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_r3);
        goto CPyL20;
    }
    return cpy_r_r4;
CPyL5: ;
    if (!1) goto CPyL22;
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = PySequence_Contains(cpy_r_head, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 121, CPyStatic_inspections___globals);
        goto CPyL21;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r9 = cpy_r_r8 ^ 1;
    if (cpy_r_r9) {
        goto CPyL23;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = CPyStatics[224]; /* '.' */
    cpy_r_r12 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r13 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r14[3] = {cpy_r_head, cpy_r_r11, cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r15, 9223372036854775810ULL, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 123, CPyStatic_inspections___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_head);
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module_by_fullname", 123, CPyStatic_inspections___globals, "list", cpy_r_r17);
        goto CPyL20;
    }
    cpy_r_r19 = CPySequence_CheckUnpackCount(cpy_r_r18, 2);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 123, CPyStatic_inspections___globals);
        goto CPyL24;
    }
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_r18, 0);
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r18, 2);
    CPy_DECREF(cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r23 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module_by_fullname", 123, CPyStatic_inspections___globals, "str", cpy_r_r21);
        goto CPyL25;
    }
    cpy_r_head = cpy_r_r23;
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r24 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module_by_fullname", 123, CPyStatic_inspections___globals, "str", cpy_r_r22);
        goto CPyL21;
    }
    cpy_r_tail = cpy_r_r24;
    CPy_DECREF(cpy_r_tail);
    cpy_r_r25 = CPyDict_GetWithNone(cpy_r_modules, cpy_r_head);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 124, CPyStatic_inspections___globals);
        goto CPyL21;
    }
    if (Py_TYPE(cpy_r_r25) == CPyType_mypy___build___State)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL2936;
    if (cpy_r_r25 == Py_None)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL2936;
    CPy_TypeErrorTraceback("mypy/inspections.py", "find_module_by_fullname", 124, CPyStatic_inspections___globals, "mypy.build.State or None", cpy_r_r25);
    goto CPyL21;
__LL2936: ;
    cpy_r_mod = cpy_r_r26;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_mod != cpy_r_r27;
    if (cpy_r_r28) {
        goto CPyL26;
    } else
        goto CPyL27;
CPyL17: ;
    if (likely(cpy_r_mod != Py_None))
        cpy_r_r29 = cpy_r_mod;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module_by_fullname", 126, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_mod);
        goto CPyL20;
    }
    return cpy_r_r29;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL21: ;
    CPy_DecRef(cpy_r_head);
    goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL19;
CPyL23: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL8;
CPyL24: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL20;
CPyL26: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL17;
CPyL27: ;
    CPy_DECREF(cpy_r_mod);
    goto CPyL5;
}

PyObject *CPyPy_inspections___find_module_by_fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fullname", "modules", 0};
    static CPyArg_Parser parser = {"OO:find_module_by_fullname", kwlist, 0};
    PyObject *obj_fullname;
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fullname, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___find_module_by_fullname(arg_fullname, arg_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "find_module_by_fullname", 110, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___SearchVisitor_____init__(PyObject *cpy_r_self, CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    CPyTagged_INCREF(cpy_r_line);
    if (((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_line = cpy_r_line;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 133, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    CPyTagged_INCREF(cpy_r_column);
    if (((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_column);
    }
    ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_column = cpy_r_column;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 134, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    CPyTagged_INCREF(cpy_r_end_line);
    if (((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_line);
    }
    ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_line = cpy_r_end_line;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 135, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    CPyTagged_INCREF(cpy_r_end_column);
    if (((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_column != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_column);
    }
    ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_column = cpy_r_end_column;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 136, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    if (((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result != NULL) {
        CPy_DECREF(((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result);
    }
    ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 137, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_inspections___SearchVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "column", "end_line", "end_column", 0};
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_end_line;
    PyObject *obj_end_column;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_line, &obj_column, &obj_end_line, &obj_end_column)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___SearchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.SearchVisitor", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    CPyTagged arg_end_line;
    if (likely(PyLong_Check(obj_end_line)))
        arg_end_line = CPyTagged_BorrowFromObject(obj_end_line);
    else {
        CPy_TypeError("int", obj_end_line); goto fail;
    }
    CPyTagged arg_end_column;
    if (likely(PyLong_Check(obj_end_column)))
        arg_end_column = CPyTagged_BorrowFromObject(obj_end_column);
    else {
        CPy_TypeError("int", obj_end_column); goto fail;
    }
    char retval = CPyDef_inspections___SearchVisitor_____init__(arg_self, arg_line, arg_column, arg_end_line, arg_end_column);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "__init__", 132, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___SearchVisitor___visit(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "line", 140, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    CPyTagged_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_column;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "column", 140, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyTagged_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_inspections___node_starts_after(cpy_r_o, cpy_r_r0, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 140, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (!cpy_r_r2) goto CPyL5;
    return 0;
CPyL5: ;
    cpy_r_r3 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_line;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "end_line", 142, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    CPyTagged_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_column;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "end_column", 142, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    CPyTagged_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = CPyDef_inspections___node_ends_before(cpy_r_o, cpy_r_r3, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 142, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (!cpy_r_r5) goto CPyL10;
    return 0;
CPyL10: ;
    cpy_r_r6 = ((mypy___nodes___NodeObject *)cpy_r_o)->_line;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "Node", "line", 145, CPyStatic_inspections___globals);
        goto CPyL35;
    }
CPyL11: ;
    cpy_r_r7 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "line", 145, CPyStatic_inspections___globals);
        goto CPyL35;
    }
CPyL12: ;
    cpy_r_r8 = cpy_r_r6 & 1;
    cpy_r_r9 = cpy_r_r8 != 0;
    if (!cpy_r_r9) goto CPyL14;
    cpy_r_r10 = CPyTagged_IsEq_(cpy_r_r6, cpy_r_r7);
    if (cpy_r_r10) {
        goto CPyL15;
    } else
        goto CPyL33;
CPyL14: ;
    cpy_r_r11 = cpy_r_r6 == cpy_r_r7;
    if (!cpy_r_r11) goto CPyL33;
CPyL15: ;
    cpy_r_r12 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_line;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "Node", "end_line", 146, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r12);
CPyL16: ;
    cpy_r_r13 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_line;
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "end_line", 146, CPyStatic_inspections___globals);
        goto CPyL38;
    }
    CPyTagged_INCREF(cpy_r_r13);
CPyL17: ;
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r15 = PyObject_RichCompare(cpy_r_r12, cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 146, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 146, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (!cpy_r_r16) goto CPyL33;
    cpy_r_r17 = ((mypy___nodes___NodeObject *)cpy_r_o)->_column;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "Node", "column", 147, CPyStatic_inspections___globals);
        goto CPyL35;
    }
CPyL21: ;
    cpy_r_r18 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_column;
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "column", 147, CPyStatic_inspections___globals);
        goto CPyL35;
    }
CPyL22: ;
    cpy_r_r19 = cpy_r_r17 & 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL24;
    cpy_r_r21 = CPyTagged_IsEq_(cpy_r_r17, cpy_r_r18);
    if (cpy_r_r21) {
        goto CPyL25;
    } else
        goto CPyL33;
CPyL24: ;
    cpy_r_r22 = cpy_r_r17 == cpy_r_r18;
    if (!cpy_r_r22) goto CPyL33;
CPyL25: ;
    cpy_r_r23 = ((mypy___nodes___NodeObject *)cpy_r_o)->_end_column;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "Node", "end_column", 148, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r23);
CPyL26: ;
    cpy_r_r24 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_end_column;
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "end_column", 148, CPyStatic_inspections___globals);
        goto CPyL39;
    }
    CPyTagged_INCREF(cpy_r_r24);
CPyL27: ;
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r26 = PyObject_RichCompare(cpy_r_r23, cpy_r_r25, 2);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 148, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r26))) {
        CPy_TypeError("bool", cpy_r_r26); cpy_r_r27 = 2;
    } else
        cpy_r_r27 = cpy_r_r26 == Py_True;
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 148, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (!cpy_r_r27) goto CPyL33;
    cpy_r_r28 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r29 = CPy_TypeCheck(cpy_r_o, cpy_r_r28);
    if (!cpy_r_r29) goto CPyL33;
    CPy_INCREF(cpy_r_o);
    if (likely(PyObject_TypeCheck(cpy_r_o, CPyType_nodes___Expression)))
        cpy_r_r30 = cpy_r_o;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "visit", 151, CPyStatic_inspections___globals, "mypy.nodes.Expression", cpy_r_o);
        goto CPyL35;
    }
    if (((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result != NULL) {
        CPy_DECREF(((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result);
    }
    ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 151, CPyStatic_inspections___globals);
        goto CPyL35;
    }
CPyL33: ;
    cpy_r_r32 = ((mypy___inspections___SearchVisitorObject *)cpy_r_self)->_result;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchVisitor", "result", 152, CPyStatic_inspections___globals);
        goto CPyL35;
    }
CPyL34: ;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_r32 == cpy_r_r33;
    return cpy_r_r34;
CPyL35: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL35;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL35;
}

PyObject *CPyPy_inspections___SearchVisitor___visit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___SearchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.SearchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Node)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_o); 
        goto fail;
    }
    char retval = CPyDef_inspections___SearchVisitor___visit(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "visit", 139, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___find_by_location(PyObject *cpy_r_tree, CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column) {
    int64_t cpy_r_r0;
    char cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = cpy_r_end_line & 1;
    cpy_r_r1 = cpy_r_r0 != 0;
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = cpy_r_line & 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (!cpy_r_r3) goto CPyL3;
CPyL2: ;
    cpy_r_r4 = CPyTagged_IsLt_(cpy_r_end_line, cpy_r_line);
    if (cpy_r_r4) {
        goto CPyL4;
    } else
        goto CPyL8;
CPyL3: ;
    cpy_r_r5 = (Py_ssize_t)cpy_r_end_line < (Py_ssize_t)cpy_r_line;
    if (!cpy_r_r5) goto CPyL8;
CPyL4: ;
    cpy_r_r6 = CPyStatics[2642]; /* '"end_line" must not be before "line"' */
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 160, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 160, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 160, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r13 = cpy_r_end_line & 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPyTagged_IsEq_(cpy_r_end_line, cpy_r_line);
    if (cpy_r_r15) {
        goto CPyL11;
    } else
        goto CPyL19;
CPyL10: ;
    cpy_r_r16 = cpy_r_end_line == cpy_r_line;
    if (!cpy_r_r16) goto CPyL19;
CPyL11: ;
    cpy_r_r17 = cpy_r_end_column & 1;
    cpy_r_r18 = cpy_r_r17 != 0;
    if (cpy_r_r18) goto CPyL13;
    cpy_r_r19 = cpy_r_column & 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL14;
CPyL13: ;
    cpy_r_r21 = CPyTagged_IsLt_(cpy_r_column, cpy_r_end_column);
    if (cpy_r_r21) {
        goto CPyL19;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r22 = (Py_ssize_t)cpy_r_end_column <= (Py_ssize_t)cpy_r_column;
    if (!cpy_r_r22) goto CPyL19;
CPyL15: ;
    cpy_r_r23 = CPyStatics[2643]; /* '"end_column" must be after "column"' */
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 162, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 162, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    CPy_Raise(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 162, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r30 = CPyDef_inspections___SearchVisitor(cpy_r_line, cpy_r_column, cpy_r_end_line, cpy_r_end_column);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 163, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    cpy_r_visitor = cpy_r_r30;
    cpy_r_r31 = CPyDef_nodes___MypyFile___accept(cpy_r_tree, cpy_r_visitor);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 164, CPyStatic_inspections___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL21: ;
    cpy_r_r32 = ((mypy___inspections___SearchVisitorObject *)cpy_r_visitor)->_result;
    if (unlikely(cpy_r_r32 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'result' of 'SearchVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r32);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_by_location", 165, CPyStatic_inspections___globals);
        goto CPyL23;
    }
CPyL22: ;
    return cpy_r_r32;
CPyL23: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL24: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL21;
}

PyObject *CPyPy_inspections___find_by_location(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tree", "line", "column", "end_line", "end_column", 0};
    static CPyArg_Parser parser = {"OOOOO:find_by_location", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_end_line;
    PyObject *obj_end_column;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_line, &obj_column, &obj_end_line, &obj_end_column)) {
        return NULL;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    CPyTagged arg_end_line;
    if (likely(PyLong_Check(obj_end_line)))
        arg_end_line = CPyTagged_BorrowFromObject(obj_end_line);
    else {
        CPy_TypeError("int", obj_end_line); goto fail;
    }
    CPyTagged arg_end_column;
    if (likely(PyLong_Check(obj_end_column)))
        arg_end_column = CPyTagged_BorrowFromObject(obj_end_column);
    else {
        CPy_TypeError("int", obj_end_column); goto fail;
    }
    PyObject *retval = CPyDef_inspections___find_by_location(arg_tree, arg_line, arg_column, arg_end_line, arg_end_column);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "find_by_location", 155, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___SearchAllVisitor_____init__(PyObject *cpy_r_self, CPyTagged cpy_r_line, CPyTagged cpy_r_column) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPyTagged_INCREF(cpy_r_line);
    if (((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_line);
    }
    ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_line = cpy_r_line;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 172, CPyStatic_inspections___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_column);
    if (((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_column);
    }
    ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_column = cpy_r_column;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 173, CPyStatic_inspections___globals);
        goto CPyL5;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 174, CPyStatic_inspections___globals);
        goto CPyL5;
    }
    if (((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_result != NULL) {
        CPy_DECREF(((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_result);
    }
    ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_result = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 174, CPyStatic_inspections___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_inspections___SearchAllVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "column", 0};
    PyObject *obj_line;
    PyObject *obj_column;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_line, &obj_column)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___SearchAllVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.SearchAllVisitor", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    char retval = CPyDef_inspections___SearchAllVisitor_____init__(arg_self, arg_line, arg_column);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "__init__", 171, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___SearchAllVisitor___visit(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchAllVisitor", "line", 177, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    CPyTagged_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_column;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchAllVisitor", "column", 177, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    CPyTagged_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_inspections___node_starts_after(cpy_r_o, cpy_r_r0, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 177, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    if (!cpy_r_r2) goto CPyL5;
    return 0;
CPyL5: ;
    cpy_r_r3 = ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_line;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchAllVisitor", "line", 179, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    CPyTagged_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_column;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchAllVisitor", "column", 179, CPyStatic_inspections___globals);
        goto CPyL17;
    }
    CPyTagged_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = CPyDef_inspections___node_ends_before(cpy_r_o, cpy_r_r3, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 179, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    if (!cpy_r_r5) goto CPyL10;
    return 0;
CPyL10: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r7 = CPy_TypeCheck(cpy_r_o, cpy_r_r6);
    if (!cpy_r_r7) goto CPyL14;
    cpy_r_r8 = ((mypy___inspections___SearchAllVisitorObject *)cpy_r_self)->_result;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "visit", "SearchAllVisitor", "result", 182, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r8);
CPyL12: ;
    CPy_INCREF(cpy_r_o);
    if (likely(PyObject_TypeCheck(cpy_r_o, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_o;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "visit", 182, CPyStatic_inspections___globals, "mypy.nodes.Expression", cpy_r_o);
        goto CPyL18;
    }
    cpy_r_r10 = PyList_Append(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/inspections.py", "visit", 182, CPyStatic_inspections___globals);
        goto CPyL15;
    }
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL16: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
}

PyObject *CPyPy_inspections___SearchAllVisitor___visit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___SearchAllVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.SearchAllVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Node)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_o); 
        goto fail;
    }
    char retval = CPyDef_inspections___SearchAllVisitor___visit(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "visit", 176, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___find_all_by_location(PyObject *cpy_r_tree, CPyTagged cpy_r_line, CPyTagged cpy_r_column) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_inspections___SearchAllVisitor(cpy_r_line, cpy_r_column);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 188, CPyStatic_inspections___globals);
        goto CPyL7;
    }
    cpy_r_visitor = cpy_r_r0;
    cpy_r_r1 = CPyDef_nodes___MypyFile___accept(cpy_r_tree, cpy_r_visitor);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 189, CPyStatic_inspections___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL2: ;
    cpy_r_r2 = ((mypy___inspections___SearchAllVisitorObject *)cpy_r_visitor)->_result;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'result' of 'SearchAllVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 190, CPyStatic_inspections___globals);
        goto CPyL7;
    }
CPyL3: ;
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 190, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 190, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r9 = PySequence_List(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 190, CPyStatic_inspections___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_inspections___find_all_by_location(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tree", "line", "column", 0};
    static CPyArg_Parser parser = {"OOO:find_all_by_location", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_line;
    PyObject *obj_column;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_line, &obj_column)) {
        return NULL;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    PyObject *retval = CPyDef_inspections___find_all_by_location(arg_tree, arg_line, arg_column);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "find_all_by_location", 186, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___InspectionEngine_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fg_manager, CPyTagged cpy_r_verbosity, CPyTagged cpy_r_limit, char cpy_r_include_span, char cpy_r_include_kind, char cpy_r_include_object_attrs, char cpy_r_union_attrs, char cpy_r_force_reload) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_verbosity != CPY_INT_TAG) goto CPyL17;
    cpy_r_verbosity = 0;
CPyL2: ;
    if (cpy_r_limit != CPY_INT_TAG) goto CPyL18;
    cpy_r_limit = 0;
CPyL4: ;
    if (cpy_r_include_span != 2) goto CPyL6;
    cpy_r_include_span = 0;
CPyL6: ;
    if (cpy_r_include_kind != 2) goto CPyL8;
    cpy_r_include_kind = 0;
CPyL8: ;
    if (cpy_r_include_object_attrs != 2) goto CPyL10;
    cpy_r_include_object_attrs = 0;
CPyL10: ;
    if (cpy_r_union_attrs != 2) goto CPyL12;
    cpy_r_union_attrs = 0;
CPyL12: ;
    if (cpy_r_force_reload != 2) goto CPyL14;
    cpy_r_force_reload = 0;
CPyL14: ;
    CPy_INCREF(cpy_r_fg_manager);
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager = cpy_r_fg_manager;
    cpy_r_r0 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r0)->_manager;
    cpy_r_r2 = ((mypy___build___BuildManagerObject *)cpy_r_r1)->_fscache;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r4 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r3)->_manager;
    cpy_r_r5 = ((mypy___build___BuildManagerObject *)cpy_r_r4)->_options;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_find_sources___SourceFinder(cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "__init__", 209, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_finder = cpy_r_r6;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_verbosity = cpy_r_verbosity;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_limit = cpy_r_limit;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_include_span = cpy_r_include_span;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_include_kind = cpy_r_include_kind;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_include_object_attrs = cpy_r_include_object_attrs;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_union_attrs = cpy_r_union_attrs;
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_force_reload = cpy_r_force_reload;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_module = cpy_r_r7;
    return 1;
CPyL16: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL17: ;
    CPyTagged_INCREF(cpy_r_verbosity);
    goto CPyL2;
CPyL18: ;
    CPyTagged_INCREF(cpy_r_limit);
    goto CPyL4;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_verbosity);
    CPyTagged_DecRef(cpy_r_limit);
    goto CPyL16;
}

PyObject *CPyPy_inspections___InspectionEngine_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fg_manager", "verbosity", "limit", "include_span", "include_kind", "include_object_attrs", "union_attrs", "force_reload", 0};
    PyObject *obj_fg_manager;
    PyObject *obj_verbosity = NULL;
    PyObject *obj_limit = NULL;
    PyObject *obj_include_span = NULL;
    PyObject *obj_include_kind = NULL;
    PyObject *obj_include_object_attrs = NULL;
    PyObject *obj_union_attrs = NULL;
    PyObject *obj_force_reload = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|$OOOOOOO", "__init__", kwlist, &obj_fg_manager, &obj_verbosity, &obj_limit, &obj_include_span, &obj_include_kind, &obj_include_object_attrs, &obj_union_attrs, &obj_force_reload)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_fg_manager;
    if (likely(Py_TYPE(obj_fg_manager) == CPyType_update___FineGrainedBuildManager))
        arg_fg_manager = obj_fg_manager;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_fg_manager); 
        goto fail;
    }
    CPyTagged arg_verbosity;
    if (obj_verbosity == NULL) {
        arg_verbosity = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_verbosity)))
        arg_verbosity = CPyTagged_BorrowFromObject(obj_verbosity);
    else {
        CPy_TypeError("int", obj_verbosity); goto fail;
    }
    CPyTagged arg_limit;
    if (obj_limit == NULL) {
        arg_limit = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_limit)))
        arg_limit = CPyTagged_BorrowFromObject(obj_limit);
    else {
        CPy_TypeError("int", obj_limit); goto fail;
    }
    char arg_include_span;
    if (obj_include_span == NULL) {
        arg_include_span = 2;
    } else if (unlikely(!PyBool_Check(obj_include_span))) {
        CPy_TypeError("bool", obj_include_span); goto fail;
    } else
        arg_include_span = obj_include_span == Py_True;
    char arg_include_kind;
    if (obj_include_kind == NULL) {
        arg_include_kind = 2;
    } else if (unlikely(!PyBool_Check(obj_include_kind))) {
        CPy_TypeError("bool", obj_include_kind); goto fail;
    } else
        arg_include_kind = obj_include_kind == Py_True;
    char arg_include_object_attrs;
    if (obj_include_object_attrs == NULL) {
        arg_include_object_attrs = 2;
    } else if (unlikely(!PyBool_Check(obj_include_object_attrs))) {
        CPy_TypeError("bool", obj_include_object_attrs); goto fail;
    } else
        arg_include_object_attrs = obj_include_object_attrs == Py_True;
    char arg_union_attrs;
    if (obj_union_attrs == NULL) {
        arg_union_attrs = 2;
    } else if (unlikely(!PyBool_Check(obj_union_attrs))) {
        CPy_TypeError("bool", obj_union_attrs); goto fail;
    } else
        arg_union_attrs = obj_union_attrs == Py_True;
    char arg_force_reload;
    if (obj_force_reload == NULL) {
        arg_force_reload = 2;
    } else if (unlikely(!PyBool_Check(obj_force_reload))) {
        CPy_TypeError("bool", obj_force_reload); goto fail;
    } else
        arg_force_reload = obj_force_reload == Py_True;
    char retval = CPyDef_inspections___InspectionEngine_____init__(arg_self, arg_fg_manager, arg_verbosity, arg_limit, arg_include_span, arg_include_kind, arg_include_object_attrs, arg_union_attrs, arg_force_reload);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "__init__", 196, CPyStatic_inspections___globals);
    return NULL;
}

tuple_T2OO CPyDef_inspections___InspectionEngine___parse_location(PyObject *cpy_r_self, PyObject *cpy_r_location) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_parts;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_rest;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    tuple_T2OO cpy_r_r59;
    tuple_T2OO cpy_r_r60;
    cpy_r_r0 = CPyStatics[171]; /* ':' */
    cpy_r_r1 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r2[2] = {cpy_r_location, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 223, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 223, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    cpy_r_r6 = cpy_r_r5 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    if (!cpy_r_r7) goto CPyL4;
    cpy_r_r8 = cpy_r_r5 != 4;
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r9 = cpy_r_r8;
    goto CPyL5;
CPyL4: ;
    cpy_r_r10 = CPyTagged_IsEq_(cpy_r_r5, 4);
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r11 = cpy_r_r10 ^ 1;
    cpy_r_r9 = cpy_r_r11;
CPyL5: ;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r12 = cpy_r_r9;
    goto CPyL13;
CPyL7: ;
    cpy_r_r13 = CPyStatics[171]; /* ':' */
    cpy_r_r14 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r15[2] = {cpy_r_location, cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 223, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    if (likely(PyLong_Check(cpy_r_r17)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_r17);
    else {
        CPy_TypeError("int", cpy_r_r17); cpy_r_r18 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 223, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    cpy_r_r19 = cpy_r_r18 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = cpy_r_r18 != 8;
    CPyTagged_DECREF(cpy_r_r18);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL12;
CPyL11: ;
    cpy_r_r23 = CPyTagged_IsEq_(cpy_r_r18, 8);
    CPyTagged_DECREF(cpy_r_r18);
    cpy_r_r24 = cpy_r_r23 ^ 1;
    cpy_r_r22 = cpy_r_r24;
CPyL12: ;
    cpy_r_r12 = cpy_r_r22;
CPyL13: ;
    if (!cpy_r_r12) goto CPyL18;
    cpy_r_r25 = CPyStatics[2644]; /* 'Format should be file:line:column[:end_line:end_column]' */
    cpy_r_r26 = CPyModule_builtins;
    cpy_r_r27 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 224, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 224, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    CPy_Raise(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 224, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r32 = CPyStatics[171]; /* ':' */
    cpy_r_r33 = PyUnicode_Split(cpy_r_location, cpy_r_r32, -1);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 225, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    cpy_r_parts = cpy_r_r33;
    cpy_r_r34 = PyObject_GetIter(cpy_r_parts);
    CPy_DECREF(cpy_r_parts);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 226, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    cpy_r_r35 = PyIter_Next(cpy_r_r34);
    if (cpy_r_r35 == NULL) {
        goto CPyL38;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 226, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL23: ;
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "parse_location", 226, CPyStatic_inspections___globals, "str", cpy_r_r35);
        goto CPyL39;
    }
    cpy_r_module = cpy_r_r37;
    cpy_r_r38 = PySequence_List(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 226, CPyStatic_inspections___globals);
        goto CPyL40;
    }
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r38)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r41;
    if (cpy_r_r42) {
        goto CPyL28;
    } else
        goto CPyL41;
CPyL26: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 226, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_rest = cpy_r_r38;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_rest)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = PyList_New(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 227, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r47 = 0;
CPyL30: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_rest)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL43;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_rest, cpy_r_r47);
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "parse_location", 227, CPyStatic_inspections___globals, "str", cpy_r_r52);
        goto CPyL44;
    }
    cpy_r_p = cpy_r_r53;
    cpy_r_r54 = CPyLong_FromStr(cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 227, CPyStatic_inspections___globals);
        goto CPyL44;
    }
    if (likely(PyLong_Check(cpy_r_r54)))
        cpy_r_r55 = CPyTagged_FromObject(cpy_r_r54);
    else {
        CPy_TypeError("int", cpy_r_r54); cpy_r_r55 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 227, CPyStatic_inspections___globals);
        goto CPyL44;
    }
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r57 = CPyList_SetItemUnsafe(cpy_r_r46, cpy_r_r47, cpy_r_r56);
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/inspections.py", "parse_location", 227, CPyStatic_inspections___globals);
        goto CPyL44;
    }
    cpy_r_r58 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r58;
    goto CPyL30;
CPyL36: ;
    cpy_r_r59.f0 = cpy_r_module;
    cpy_r_r59.f1 = cpy_r_r46;
    CPy_INCREF(cpy_r_r59.f0);
    CPy_INCREF(cpy_r_r59.f1);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r46);
    return cpy_r_r59;
CPyL37: ;
    tuple_T2OO __tmp2937 = { NULL, NULL };
    cpy_r_r60 = __tmp2937;
    return cpy_r_r60;
CPyL38: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL21;
CPyL39: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_module);
    goto CPyL37;
CPyL41: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r38);
    goto CPyL26;
CPyL42: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_rest);
    goto CPyL37;
CPyL43: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r46);
    goto CPyL37;
}

PyObject *CPyPy_inspections___InspectionEngine___parse_location(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"location", 0};
    static CPyArg_Parser parser = {"O:parse_location", kwlist, 0};
    PyObject *obj_location;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_location)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_location;
    if (likely(PyUnicode_Check(obj_location)))
        arg_location = obj_location;
    else {
        CPy_TypeError("str", obj_location); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_inspections___InspectionEngine___parse_location(arg_self, arg_location);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2938 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2938);
    PyObject *__tmp2939 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2939);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "parse_location", 222, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___InspectionEngine___reload_module(PyObject *cpy_r_self, PyObject *cpy_r_state) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_old;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T3OOO cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r0)->_manager;
    cpy_r_r2 = ((mypy___build___BuildManagerObject *)cpy_r_r1)->_options;
    cpy_r_r3 = ((mypy___options___OptionsObject *)cpy_r_r2)->_export_types;
    cpy_r_old = cpy_r_r3;
    cpy_r_r4 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r5 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r4)->_manager;
    cpy_r_r6 = ((mypy___build___BuildManagerObject *)cpy_r_r5)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r6)->_export_types = 1;
    cpy_r_r8 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_update___FineGrainedBuildManager___flush_cache(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "reload_module", 234, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    cpy_r_r10 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (cpy_r_r12) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/inspections.py", "reload_module", 235, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r14 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "reload_module", "State", "id", 236, CPyStatic_inspections___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r15);
CPyL6: ;
    cpy_r_r16 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "reload_module", 236, CPyStatic_inspections___globals, "str", cpy_r_r16);
        goto CPyL22;
    }
    cpy_r_r18.f0 = cpy_r_r15;
    cpy_r_r18.f1 = cpy_r_r17;
    CPy_INCREF(cpy_r_r18.f0);
    CPy_INCREF(cpy_r_r18.f1);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = PyList_New(1);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "reload_module", 236, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    cpy_r_r20 = PyTuple_New(2);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2940 = cpy_r_r18.f0;
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp2940);
    PyObject *__tmp2941 = cpy_r_r18.f1;
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp2941);
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    *(PyObject * *)cpy_r_r22 = cpy_r_r20;
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "reload_module", 236, CPyStatic_inspections___globals);
        goto CPyL24;
    }
    cpy_r_r24 = 2;
    cpy_r_r25 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r14, cpy_r_r19, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "reload_module", 236, CPyStatic_inspections___globals);
        goto CPyL11;
    } else
        goto CPyL25;
CPyL10: ;
    tuple_T3OOO __tmp2942 = { NULL, NULL, NULL };
    cpy_r_r26 = __tmp2942;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL12;
CPyL11: ;
    cpy_r_r28 = CPy_CatchError();
    cpy_r_r27 = cpy_r_r28;
CPyL12: ;
    cpy_r_r29 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r30 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r29)->_manager;
    cpy_r_r31 = ((mypy___build___BuildManagerObject *)cpy_r_r30)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r31)->_export_types = cpy_r_old;
    if (cpy_r_r27.f0 == NULL) goto CPyL19;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL26;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    if (cpy_r_r27.f0 == NULL) goto CPyL17;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
CPyL17: ;
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL20;
    CPy_Unreachable();
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL21: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL11;
CPyL22: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL11;
CPyL23: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    goto CPyL11;
CPyL24: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r19);
    goto CPyL11;
CPyL25: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL10;
CPyL26: ;
    CPy_XDECREF(cpy_r_r27.f0);
    CPy_XDECREF(cpy_r_r27.f1);
    CPy_XDECREF(cpy_r_r27.f2);
    goto CPyL14;
}

PyObject *CPyPy_inspections___InspectionEngine___reload_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state", 0};
    static CPyArg_Parser parser = {"O:reload_module", kwlist, 0};
    PyObject *obj_state;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_state)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    char retval = CPyDef_inspections___InspectionEngine___reload_module(arg_self, arg_state);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "reload_module", 229, CPyStatic_inspections___globals);
    return NULL;
}

tuple_T2OC CPyDef_inspections___InspectionEngine___expr_type(PyObject *cpy_r_self, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_expr_type;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OC cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_type_str;
    PyObject *cpy_r_r16;
    tuple_T2OC cpy_r_r17;
    tuple_T2OC cpy_r_r18;
    cpy_r_r0 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r0)->_manager;
    cpy_r_r2 = ((mypy___build___BuildManagerObject *)cpy_r_r1)->_all_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_GetWithNone(cpy_r_r2, cpy_r_expression);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_type", 246, CPyStatic_inspections___globals);
        goto CPyL9;
    }
    if (PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type))
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL2943;
    if (cpy_r_r3 == Py_None)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL2943;
    CPy_TypeErrorTraceback("mypy/inspections.py", "expr_type", 246, CPyStatic_inspections___globals, "mypy.types.Type or None", cpy_r_r3);
    goto CPyL9;
__LL2943: ;
    cpy_r_expr_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_expr_type == cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL10;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r7 = CPyDef_inspections___InspectionEngine___missing_type(cpy_r_self, cpy_r_expression);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_type", 248, CPyStatic_inspections___globals);
        goto CPyL9;
    }
    cpy_r_r8.f0 = cpy_r_r7;
    cpy_r_r8.f1 = 0;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r7);
    return cpy_r_r8;
CPyL5: ;
    if (likely(cpy_r_expr_type != Py_None))
        cpy_r_r9 = cpy_r_expr_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_type", 251, CPyStatic_inspections___globals, "mypy.types.Type", cpy_r_expr_type);
        goto CPyL9;
    }
    cpy_r_r10 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r11 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r10)->_manager;
    cpy_r_r12 = ((mypy___build___BuildManagerObject *)cpy_r_r11)->_options;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_verbosity;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_messages___format_type(cpy_r_r9, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_type", 250, CPyStatic_inspections___globals);
        goto CPyL9;
    }
    cpy_r_type_str = cpy_r_r15;
    cpy_r_r16 = CPyDef_inspections___InspectionEngine___add_prefixes(cpy_r_self, cpy_r_type_str, cpy_r_expression);
    CPy_DECREF(cpy_r_type_str);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_type", 253, CPyStatic_inspections___globals);
        goto CPyL9;
    }
    cpy_r_r17.f0 = cpy_r_r16;
    cpy_r_r17.f1 = 1;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_DECREF(cpy_r_r16);
    return cpy_r_r17;
CPyL9: ;
    tuple_T2OC __tmp2944 = { NULL, 2 };
    cpy_r_r18 = __tmp2944;
    return cpy_r_r18;
CPyL10: ;
    CPy_DECREF(cpy_r_expr_type);
    goto CPyL3;
}

PyObject *CPyPy_inspections___InspectionEngine___expr_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expression", 0};
    static CPyArg_Parser parser = {"O:expr_type", kwlist, 0};
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    tuple_T2OC retval = CPyDef_inspections___InspectionEngine___expr_type(arg_self, arg_expression);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2945 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2945);
    PyObject *__tmp2946 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp2946);
    PyTuple_SET_ITEM(retbox, 1, __tmp2946);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "expr_type", 240, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___object_type(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_builtins;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_object_node;
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
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r0)->_graph;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "object_type", 256, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_mypy___build___State))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "object_type", 256, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_r3);
        goto CPyL19;
    }
    cpy_r_r5 = ((mypy___build___StateObject *)cpy_r_r4)->_tree;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_builtins = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_builtins != cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL5;
    } else
        goto CPyL20;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/inspections.py", "object_type", 257, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL5: ;
    if (likely(cpy_r_builtins != Py_None))
        cpy_r_r9 = cpy_r_builtins;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "object_type", 258, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_builtins);
        goto CPyL21;
    }
    cpy_r_r10 = ((mypy___nodes___MypyFileObject *)cpy_r_r9)->_names;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "object_type", "MypyFile", "names", 258, CPyStatic_inspections___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    CPy_DECREF(cpy_r_builtins);
    cpy_r_r11 = CPyStatics[2314]; /* 'object' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "object_type", 258, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___SymbolTableNode))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "object_type", 258, CPyStatic_inspections___globals, "mypy.nodes.SymbolTableNode", cpy_r_r12);
        goto CPyL19;
    }
    cpy_r_r14 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r13)->_node;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_object_node = cpy_r_r14;
    cpy_r_r15 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_object_node)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL12;
CPyL11: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_object_node)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    cpy_r_r19 = cpy_r_r23;
CPyL12: ;
    if (cpy_r_r19) {
        goto CPyL15;
    } else
        goto CPyL22;
CPyL13: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/inspections.py", "object_type", 259, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL15: ;
    if (likely((Py_TYPE(cpy_r_object_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_object_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r25 = cpy_r_object_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "object_type", 260, CPyStatic_inspections___globals, "mypy.nodes.TypeInfo", cpy_r_object_node);
        goto CPyL19;
    }
    cpy_r_r26 = PyList_New(0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "object_type", 260, CPyStatic_inspections___globals);
        goto CPyL23;
    }
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = NULL;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_types___Instance(cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "object_type", 260, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    return cpy_r_r31;
CPyL19: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL20: ;
    CPy_DECREF(cpy_r_builtins);
    goto CPyL3;
CPyL21: ;
    CPy_DecRef(cpy_r_builtins);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_object_node);
    goto CPyL13;
CPyL23: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL19;
}

PyObject *CPyPy_inspections___InspectionEngine___object_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":object_type", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___object_type(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "object_type", 255, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "__get__", -1, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_attr_dict) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_item_attrs;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_attrs;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T3CIO cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "item_attrs", "item_attrs_collect_attrs_InspectionEngine_obj", "__mypyc_env__", 265, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_item_attrs;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'item_attrs' of 'collect_attrs_InspectionEngine_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", -1, CPyStatic_inspections___globals);
        goto CPyL15;
    }
CPyL2: ;
    cpy_r_item_attrs = cpy_r_r1;
    CPy_DECREF(cpy_r_item_attrs);
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 266, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    cpy_r_attrs = cpy_r_r2;
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_attr_dict);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetKeysIter(cpy_r_attr_dict);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 267, CPyStatic_inspections___globals);
        goto CPyL16;
    }
CPyL4: ;
    cpy_r_r7 = CPyDict_NextKey(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL17;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r7.f2);
    if (likely((Py_TYPE(cpy_r_r10) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r10) == CPyType_nodes___TypeInfo)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "item_attrs", 267, CPyStatic_inspections___globals, "mypy.nodes.TypeInfo", cpy_r_r10);
        goto CPyL18;
    }
    cpy_r_base = cpy_r_r11;
    cpy_r_r12 = CPyDict_GetItem(cpy_r_attr_dict, cpy_r_base);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 268, CPyStatic_inspections___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "item_attrs", 268, CPyStatic_inspections___globals, "list", cpy_r_r12);
        goto CPyL18;
    }
    cpy_r_r14 = PySet_New(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 268, CPyStatic_inspections___globals);
        goto CPyL18;
    }
    cpy_r_r15 = PyNumber_InPlaceOr(cpy_r_attrs, cpy_r_r14);
    CPy_DECREF(cpy_r_attrs);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 268, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    if (likely(PySet_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "item_attrs", 268, CPyStatic_inspections___globals, "set", cpy_r_r15);
        goto CPyL19;
    }
    cpy_r_attrs = cpy_r_r16;
    cpy_r_r17 = CPyDict_CheckSize(cpy_r_attr_dict, cpy_r_r5);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 267, CPyStatic_inspections___globals);
        goto CPyL18;
    } else
        goto CPyL4;
CPyL13: ;
    cpy_r_r18 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/inspections.py", "item_attrs", 267, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    return cpy_r_attrs;
CPyL15: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL16: ;
    CPy_DecRef(cpy_r_attrs);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
}

PyObject *CPyPy_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"attr_dict", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_attr_dict;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_attr_dict)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_attr_dict;
    if (likely(PyDict_Check(obj_attr_dict)))
        arg_attr_dict = obj_attr_dict;
    else {
        CPy_TypeError("dict", obj_attr_dict); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj_____call__(arg___mypyc_self__, arg_attr_dict);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "item_attrs", 265, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "__get__", -1, CPyStatic_inspections___globals);
    return NULL;
}

CPyTagged CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x, PyObject *cpy_r_y) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cmp_types;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    cpy_r_r0 = ((mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "cmp_types", "cmp_types_collect_attrs_InspectionEngine_obj", "__mypyc_env__", 271, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_cmp_types;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'cmp_types' of 'collect_attrs_InspectionEngine_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "cmp_types", -1, CPyStatic_inspections___globals);
        goto CPyL11;
    }
CPyL2: ;
    cpy_r_cmp_types = cpy_r_r1;
    CPy_DECREF(cpy_r_cmp_types);
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_y)->_mro;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "cmp_types", "TypeInfo", "mro", 272, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = PySequence_Contains(cpy_r_r2, cpy_r_x);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/inspections.py", "cmp_types", 272, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL6;
    return 2;
CPyL6: ;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_x)->_mro;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "cmp_types", "TypeInfo", "mro", 274, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = PySequence_Contains(cpy_r_r6, cpy_r_y);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/inspections.py", "cmp_types", 274, CPyStatic_inspections___globals);
        goto CPyL11;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL10;
    return -2;
CPyL10: ;
    return 0;
CPyL11: ;
    cpy_r_r10 = CPY_INT_TAG;
    return cpy_r_r10;
}

PyObject *CPyPy_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely((Py_TYPE(obj_x) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_x) == CPyType_nodes___TypeInfo)))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_x); 
        goto fail;
    }
    PyObject *arg_y;
    if (likely((Py_TYPE(obj_y) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_y) == CPyType_nodes___TypeInfo)))
        arg_y = obj_y;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_y); 
        goto fail;
    }
    CPyTagged retval = CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj_____call__(arg___mypyc_self__, arg_x, arg_y);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "cmp_types", 271, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___collect_attrs(PyObject *cpy_r_self, PyObject *cpy_r_instances) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_all_attrs;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_instance;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_attrs;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_mro;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_intersection;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
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
    PyObject *cpy_r_combined_attrs;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    tuple_T3CIO cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_name;
    char cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    CPyTagged cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject **cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_sorted_bases;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r136;
    CPyPtr cpy_r_r137;
    int64_t cpy_r_r138;
    CPyTagged cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyPtr cpy_r_r145;
    int64_t cpy_r_r146;
    CPyTagged cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    cpy_r_r0 = CPyDef_inspections___collect_attrs_InspectionEngine_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 262, CPyStatic_inspections___globals);
        goto CPyL93;
    }
    cpy_r_r1 = CPyDef_inspections___item_attrs_collect_attrs_InspectionEngine_obj();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 265, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((mypy___inspections___item_attrs_collect_attrs_InspectionEngine_objObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 265, CPyStatic_inspections___globals);
        goto CPyL95;
    }
    if (((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_item_attrs != NULL) {
        CPy_DECREF(((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_item_attrs);
    }
    ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_item_attrs = cpy_r_r1;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 265, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_r4 = CPyDef_inspections___cmp_types_collect_attrs_InspectionEngine_obj();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 271, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *)cpy_r_r4)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *)cpy_r_r4)->___mypyc_env__);
    }
    ((mypy___inspections___cmp_types_collect_attrs_InspectionEngine_objObject *)cpy_r_r4)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 271, CPyStatic_inspections___globals);
        goto CPyL96;
    }
    if (((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_cmp_types != NULL) {
        CPy_DECREF(((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_cmp_types);
    }
    ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_cmp_types = cpy_r_r4;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 271, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_instances)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (cpy_r_r10) {
        goto CPyL10;
    } else
        goto CPyL97;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 279, CPyStatic_inspections___globals);
        goto CPyL93;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 280, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_all_attrs = cpy_r_r12;
    cpy_r_r13 = 0;
CPyL12: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_instances)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL31;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_instances, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___Instance))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 281, CPyStatic_inspections___globals, "mypy.types.Instance", cpy_r_r18);
        goto CPyL98;
    }
    cpy_r_instance = cpy_r_r19;
    cpy_r_r20 = PyDict_New();
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 282, CPyStatic_inspections___globals);
        goto CPyL99;
    }
    cpy_r_attrs = cpy_r_r20;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r22 = ((mypy___nodes___TypeInfoObject *)cpy_r_r21)->_mro;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "collect_attrs", "TypeInfo", "mro", 283, CPyStatic_inspections___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r22);
CPyL16: ;
    CPy_DECREF(cpy_r_instance);
    cpy_r_mro = cpy_r_r22;
    cpy_r_r23 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_include_object_attrs;
    if (cpy_r_r23) goto CPyL20;
CPyL17: ;
    cpy_r_r24 = CPyList_GetSlice(cpy_r_mro, 0, -2);
    CPy_DECREF(cpy_r_mro);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 285, CPyStatic_inspections___globals);
        goto CPyL101;
    }
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 285, CPyStatic_inspections___globals, "list", cpy_r_r24);
        goto CPyL101;
    }
    cpy_r_mro = cpy_r_r25;
CPyL20: ;
    cpy_r_r26 = 0;
CPyL21: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_mro)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL102;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_mro, cpy_r_r26);
    if (likely((Py_TYPE(cpy_r_r31) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r31) == CPyType_nodes___TypeInfo)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 286, CPyStatic_inspections___globals, "mypy.nodes.TypeInfo", cpy_r_r31);
        goto CPyL103;
    }
    cpy_r_base = cpy_r_r32;
    cpy_r_r33 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_names;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "collect_attrs", "TypeInfo", "names", 287, CPyStatic_inspections___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r33);
CPyL24: ;
    cpy_r_r34 = CPyModule_builtins;
    cpy_r_r35 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 287, CPyStatic_inspections___globals);
        goto CPyL105;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r33};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 287, CPyStatic_inspections___globals);
        goto CPyL105;
    }
    CPy_DECREF(cpy_r_r33);
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 287, CPyStatic_inspections___globals, "list", cpy_r_r39);
        goto CPyL104;
    }
    cpy_r_r41 = CPyDict_SetItem(cpy_r_attrs, cpy_r_base, cpy_r_r40);
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 287, CPyStatic_inspections___globals);
        goto CPyL103;
    }
    cpy_r_r43 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r43;
    goto CPyL21;
CPyL29: ;
    cpy_r_r44 = PyList_Append(cpy_r_all_attrs, cpy_r_attrs);
    CPy_DECREF(cpy_r_attrs);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 288, CPyStatic_inspections___globals);
        goto CPyL98;
    }
    cpy_r_r46 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r46;
    goto CPyL12;
CPyL31: ;
    cpy_r_r47 = CPyList_GetItemShort(cpy_r_all_attrs, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 291, CPyStatic_inspections___globals);
        goto CPyL98;
    }
    if (likely(PyDict_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 291, CPyStatic_inspections___globals, "dict", cpy_r_r47);
        goto CPyL98;
    }
    cpy_r_r49 = ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_item_attrs;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "collect_attrs", "collect_attrs_InspectionEngine_env", "item_attrs", 291, CPyStatic_inspections___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r49);
CPyL34: ;
    PyObject *cpy_r_r50[1] = {cpy_r_r48};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 291, CPyStatic_inspections___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_r48);
    if (likely(PySet_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 291, CPyStatic_inspections___globals, "set", cpy_r_r52);
        goto CPyL98;
    }
    cpy_r_intersection = cpy_r_r53;
    cpy_r_r54 = CPyList_GetSlice(cpy_r_all_attrs, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 292, CPyStatic_inspections___globals);
        goto CPyL107;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 292, CPyStatic_inspections___globals, "list", cpy_r_r54);
        goto CPyL107;
    }
    cpy_r_r56 = 0;
CPyL39: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL108;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_r55, cpy_r_r56);
    if (likely(PyDict_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 292, CPyStatic_inspections___globals, "dict", cpy_r_r61);
        goto CPyL109;
    }
    cpy_r_item = cpy_r_r62;
    cpy_r_r63 = ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_item_attrs;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "collect_attrs", "collect_attrs_InspectionEngine_env", "item_attrs", 293, CPyStatic_inspections___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r63);
CPyL42: ;
    PyObject *cpy_r_r64[1] = {cpy_r_item};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 293, CPyStatic_inspections___globals);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_item);
    if (likely(PySet_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 293, CPyStatic_inspections___globals, "set", cpy_r_r66);
        goto CPyL109;
    }
    cpy_r_r68 = PyNumber_InPlaceAnd(cpy_r_intersection, cpy_r_r67);
    CPy_DECREF(cpy_r_intersection);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 293, CPyStatic_inspections___globals);
        goto CPyL111;
    }
    if (likely(PySet_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 293, CPyStatic_inspections___globals, "set", cpy_r_r68);
        goto CPyL111;
    }
    cpy_r_intersection = cpy_r_r69;
    cpy_r_r70 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r70;
    goto CPyL39;
CPyL48: ;
    cpy_r_r71 = (PyObject *)&PyList_Type;
    cpy_r_r72 = CPyStatic_inspections___globals;
    cpy_r_r73 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 297, CPyStatic_inspections___globals);
        goto CPyL107;
    }
    PyObject *cpy_r_r75[1] = {cpy_r_r71};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 1, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 297, CPyStatic_inspections___globals);
        goto CPyL107;
    }
    if (likely(PyDict_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 297, CPyStatic_inspections___globals, "dict", cpy_r_r77);
        goto CPyL107;
    }
    cpy_r_combined_attrs = cpy_r_r78;
    cpy_r_r79 = 0;
CPyL52: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_all_attrs)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL112;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_all_attrs, cpy_r_r79);
    if (likely(PyDict_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 298, CPyStatic_inspections___globals, "dict", cpy_r_r84);
        goto CPyL113;
    }
    cpy_r_item = cpy_r_r85;
    cpy_r_r86 = 0;
    cpy_r_r87 = PyDict_Size(cpy_r_item);
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = CPyDict_GetKeysIter(cpy_r_item);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 299, CPyStatic_inspections___globals);
        goto CPyL114;
    }
CPyL55: ;
    cpy_r_r90 = CPyDict_NextKey(cpy_r_r89, cpy_r_r86);
    cpy_r_r91 = cpy_r_r90.f1;
    cpy_r_r86 = cpy_r_r91;
    cpy_r_r92 = cpy_r_r90.f0;
    if (!cpy_r_r92) goto CPyL115;
    cpy_r_r93 = cpy_r_r90.f2;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r90.f2);
    if (likely((Py_TYPE(cpy_r_r93) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r93) == CPyType_nodes___TypeInfo)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 299, CPyStatic_inspections___globals, "mypy.nodes.TypeInfo", cpy_r_r93);
        goto CPyL116;
    }
    cpy_r_base = cpy_r_r94;
    cpy_r_r95 = PyDict_Contains(cpy_r_combined_attrs, cpy_r_base);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 300, CPyStatic_inspections___globals);
        goto CPyL117;
    }
    cpy_r_r97 = cpy_r_r95;
    if (cpy_r_r97) goto CPyL118;
    cpy_r_r98 = CPyDict_GetItem(cpy_r_item, cpy_r_base);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 302, CPyStatic_inspections___globals);
        goto CPyL117;
    }
    if (likely(PyList_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 302, CPyStatic_inspections___globals, "list", cpy_r_r98);
        goto CPyL117;
    }
    cpy_r_r100 = 0;
CPyL62: ;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_r99)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = (Py_ssize_t)cpy_r_r100 < (Py_ssize_t)cpy_r_r103;
    if (!cpy_r_r104) goto CPyL119;
    cpy_r_r105 = CPyList_GetItemUnsafe(cpy_r_r99, cpy_r_r100);
    if (likely(PyUnicode_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 302, CPyStatic_inspections___globals, "str", cpy_r_r105);
        goto CPyL120;
    }
    cpy_r_name = cpy_r_r106;
    cpy_r_r107 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_union_attrs;
    if (cpy_r_r107) goto CPyL67;
CPyL65: ;
    cpy_r_r108 = PySet_Contains(cpy_r_intersection, cpy_r_name);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 303, CPyStatic_inspections___globals);
        goto CPyL121;
    }
    cpy_r_r110 = cpy_r_r108;
    if (!cpy_r_r110) goto CPyL122;
CPyL67: ;
    cpy_r_r111 = CPyDict_GetItem(cpy_r_combined_attrs, cpy_r_base);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 304, CPyStatic_inspections___globals);
        goto CPyL121;
    }
    if (likely(PyList_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 304, CPyStatic_inspections___globals, "list", cpy_r_r111);
        goto CPyL121;
    }
    cpy_r_r113 = PyList_Append(cpy_r_r112, cpy_r_name);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_name);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 304, CPyStatic_inspections___globals);
        goto CPyL120;
    }
CPyL70: ;
    cpy_r_r115 = cpy_r_r100 + 2;
    cpy_r_r100 = cpy_r_r115;
    goto CPyL62;
CPyL71: ;
    cpy_r_r116 = CPyDict_CheckSize(cpy_r_item, cpy_r_r88);
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 299, CPyStatic_inspections___globals);
        goto CPyL116;
    } else
        goto CPyL55;
CPyL72: ;
    cpy_r_r117 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 299, CPyStatic_inspections___globals);
        goto CPyL113;
    }
    cpy_r_r118 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r118;
    goto CPyL52;
CPyL74: ;
    cpy_r_r119 = CPyDict_KeysView(cpy_r_combined_attrs);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals);
        goto CPyL123;
    }
    cpy_r_r120 = ((mypy___inspections___collect_attrs_InspectionEngine_envObject *)cpy_r_r0)->_cmp_types;
    if (unlikely(cpy_r_r120 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'cmp_types' of 'collect_attrs_InspectionEngine_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r120);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals);
        goto CPyL124;
    }
CPyL76: ;
    cpy_r_r121 = CPyStatic_inspections___globals;
    cpy_r_r122 = CPyStatics[2645]; /* 'cmp_to_key' */
    cpy_r_r123 = CPyDict_GetItem(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals);
        goto CPyL125;
    }
    PyObject *cpy_r_r124[1] = {cpy_r_r120};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r123, cpy_r_r125, 1, 0);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals);
        goto CPyL125;
    }
    CPy_DECREF(cpy_r_r120);
    cpy_r_r127 = CPyModule_builtins;
    cpy_r_r128 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r129 = CPyObject_GetAttr(cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals);
        goto CPyL126;
    }
    PyObject *cpy_r_r130[2] = {cpy_r_r119, cpy_r_r126};
    cpy_r_r131 = (PyObject **)&cpy_r_r130;
    cpy_r_r132 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r129, cpy_r_r131, 1, cpy_r_r132);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals);
        goto CPyL126;
    }
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r126);
    if (likely(PyList_Check(cpy_r_r133)))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 307, CPyStatic_inspections___globals, "list", cpy_r_r133);
        goto CPyL127;
    }
    cpy_r_sorted_bases = cpy_r_r134;
    cpy_r_r135 = PyDict_New();
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 308, CPyStatic_inspections___globals);
        goto CPyL128;
    }
    cpy_r_result = cpy_r_r135;
    cpy_r_r136 = 0;
CPyL83: ;
    cpy_r_r137 = (CPyPtr)&((PyVarObject *)cpy_r_sorted_bases)->ob_size;
    cpy_r_r138 = *(int64_t *)cpy_r_r137;
    cpy_r_r139 = cpy_r_r138 << 1;
    cpy_r_r140 = (Py_ssize_t)cpy_r_r136 < (Py_ssize_t)cpy_r_r139;
    if (!cpy_r_r140) goto CPyL129;
    cpy_r_r141 = CPyList_GetItemUnsafe(cpy_r_sorted_bases, cpy_r_r136);
    if (likely((Py_TYPE(cpy_r_r141) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r141) == CPyType_nodes___TypeInfo)))
        cpy_r_r142 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 309, CPyStatic_inspections___globals, "mypy.nodes.TypeInfo", cpy_r_r141);
        goto CPyL130;
    }
    cpy_r_base = cpy_r_r142;
    cpy_r_r143 = CPyDict_GetItem(cpy_r_combined_attrs, cpy_r_base);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 310, CPyStatic_inspections___globals);
        goto CPyL131;
    }
    if (likely(PyList_Check(cpy_r_r143)))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 310, CPyStatic_inspections___globals, "list", cpy_r_r143);
        goto CPyL131;
    }
    cpy_r_r145 = (CPyPtr)&((PyVarObject *)cpy_r_r144)->ob_size;
    cpy_r_r146 = *(int64_t *)cpy_r_r145;
    CPy_DECREF(cpy_r_r144);
    cpy_r_r147 = cpy_r_r146 << 1;
    cpy_r_r148 = cpy_r_r147 != 0;
    if (!cpy_r_r148) goto CPyL132;
    cpy_r_r149 = CPyDict_GetItem(cpy_r_combined_attrs, cpy_r_base);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 313, CPyStatic_inspections___globals);
        goto CPyL131;
    }
    if (likely(PyList_Check(cpy_r_r149)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_attrs", 313, CPyStatic_inspections___globals, "list", cpy_r_r149);
        goto CPyL131;
    }
    cpy_r_r151 = CPyDict_SetItem(cpy_r_result, cpy_r_base, cpy_r_r150);
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 313, CPyStatic_inspections___globals);
        goto CPyL130;
    }
CPyL91: ;
    cpy_r_r153 = cpy_r_r136 + 2;
    cpy_r_r136 = cpy_r_r153;
    goto CPyL83;
CPyL92: ;
    return cpy_r_result;
CPyL93: ;
    cpy_r_r154 = NULL;
    return cpy_r_r154;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL93;
CPyL95: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL93;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL93;
CPyL97: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    goto CPyL93;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_instance);
    goto CPyL93;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_attrs);
    goto CPyL93;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_attrs);
    goto CPyL93;
CPyL102: ;
    CPy_DECREF(cpy_r_mro);
    goto CPyL29;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_mro);
    goto CPyL93;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_mro);
    CPy_DecRef(cpy_r_base);
    goto CPyL93;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_mro);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r33);
    goto CPyL93;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_r48);
    goto CPyL93;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_intersection);
    goto CPyL93;
CPyL108: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL48;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_r55);
    goto CPyL93;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_item);
    goto CPyL93;
CPyL111: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_r55);
    goto CPyL93;
CPyL112: ;
    CPy_DECREF(cpy_r_all_attrs);
    CPy_DECREF(cpy_r_intersection);
    goto CPyL74;
CPyL113: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_combined_attrs);
    goto CPyL93;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_combined_attrs);
    goto CPyL93;
CPyL115: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r90.f2);
    goto CPyL72;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r89);
    goto CPyL93;
CPyL117: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r89);
    goto CPyL93;
CPyL118: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL71;
CPyL119: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_r99);
    goto CPyL71;
CPyL120: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r99);
    goto CPyL93;
CPyL121: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_intersection);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_name);
    goto CPyL93;
CPyL122: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL70;
CPyL123: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_combined_attrs);
    goto CPyL93;
CPyL124: ;
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r119);
    goto CPyL93;
CPyL125: ;
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    goto CPyL93;
CPyL126: ;
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r126);
    goto CPyL93;
CPyL127: ;
    CPy_DecRef(cpy_r_combined_attrs);
    goto CPyL93;
CPyL128: ;
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_sorted_bases);
    goto CPyL93;
CPyL129: ;
    CPy_DECREF(cpy_r_combined_attrs);
    CPy_DECREF(cpy_r_sorted_bases);
    goto CPyL92;
CPyL130: ;
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_sorted_bases);
    CPy_DecRef(cpy_r_result);
    goto CPyL93;
CPyL131: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_combined_attrs);
    CPy_DecRef(cpy_r_sorted_bases);
    CPy_DecRef(cpy_r_result);
    goto CPyL93;
CPyL132: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL91;
}

PyObject *CPyPy_inspections___InspectionEngine___collect_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"instances", 0};
    static CPyArg_Parser parser = {"O:collect_attrs", kwlist, 0};
    PyObject *obj_instances;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_instances)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_instances;
    if (likely(PyList_Check(obj_instances)))
        arg_instances = obj_instances;
    else {
        CPy_TypeError("list", obj_instances); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___collect_attrs(arg_self, arg_instances);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "collect_attrs", 262, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections___InspectionEngine____fill_from_dict(PyObject *cpy_r_self, PyObject *cpy_r_attrs_strs, PyObject *cpy_r_attrs_dict) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3CIO cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_base;
    CPyTagged cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_cls_name;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_attrs;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_attrs_dict);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetKeysIter(cpy_r_attrs_dict);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 319, CPyStatic_inspections___globals);
        goto CPyL25;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextKey(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL26;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r4.f2);
    if (likely((Py_TYPE(cpy_r_r7) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r7) == CPyType_nodes___TypeInfo)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "_fill_from_dict", 319, CPyStatic_inspections___globals, "mypy.nodes.TypeInfo", cpy_r_r7);
        goto CPyL27;
    }
    cpy_r_base = cpy_r_r8;
    cpy_r_r9 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_verbosity;
    cpy_r_r10 = cpy_r_r9 & 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL5;
    cpy_r_r12 = CPyTagged_IsLt_(cpy_r_r9, 2);
    if (cpy_r_r12) {
        goto CPyL6;
    } else
        goto CPyL8;
CPyL5: ;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)2;
    if (!cpy_r_r13) goto CPyL8;
CPyL6: ;
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 320, CPyStatic_inspections___globals);
        goto CPyL28;
    }
CPyL7: ;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL10;
CPyL8: ;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 320, CPyStatic_inspections___globals);
        goto CPyL28;
    }
CPyL9: ;
    cpy_r_r15 = cpy_r_r16;
CPyL10: ;
    cpy_r_cls_name = cpy_r_r15;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_attrs_dict, cpy_r_base);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 321, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "_fill_from_dict", 321, CPyStatic_inspections___globals, "list", cpy_r_r17);
        goto CPyL29;
    }
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = PyList_New(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 321, CPyStatic_inspections___globals);
        goto CPyL30;
    }
    cpy_r_r22 = 0;
CPyL14: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL31;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r22);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "_fill_from_dict", 321, CPyStatic_inspections___globals, "str", cpy_r_r27);
        goto CPyL32;
    }
    cpy_r_attr = cpy_r_r28;
    cpy_r_r29 = CPyStatics[178]; /* '"' */
    cpy_r_r30 = CPyStatics[178]; /* '"' */
    cpy_r_r31 = CPyStr_Build(3, cpy_r_r29, cpy_r_attr, cpy_r_r30);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 321, CPyStatic_inspections___globals);
        goto CPyL32;
    }
    cpy_r_r32 = CPyList_SetItemUnsafe(cpy_r_r21, cpy_r_r22, cpy_r_r31);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 321, CPyStatic_inspections___globals);
        goto CPyL32;
    }
    cpy_r_r33 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r33;
    goto CPyL14;
CPyL19: ;
    cpy_r_attrs = cpy_r_r21;
    cpy_r_r34 = CPyStatics[178]; /* '"' */
    cpy_r_r35 = CPyStatics[2646]; /* '": [' */
    cpy_r_r36 = CPyStatics[71]; /* ', ' */
    cpy_r_r37 = PyUnicode_Join(cpy_r_r36, cpy_r_attrs);
    CPy_DECREF(cpy_r_attrs);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 322, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    cpy_r_r38 = CPyStatics[208]; /* ']' */
    cpy_r_r39 = CPyStr_Build(5, cpy_r_r34, cpy_r_cls_name, cpy_r_r35, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_cls_name);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 322, CPyStatic_inspections___globals);
        goto CPyL27;
    }
    cpy_r_r40 = PyList_Append(cpy_r_attrs_strs, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 322, CPyStatic_inspections___globals);
        goto CPyL27;
    }
    cpy_r_r42 = CPyDict_CheckSize(cpy_r_attrs_dict, cpy_r_r2);
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 319, CPyStatic_inspections___globals);
        goto CPyL27;
    } else
        goto CPyL1;
CPyL23: ;
    cpy_r_r43 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 319, CPyStatic_inspections___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL26: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_base);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_cls_name);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_cls_name);
    CPy_DecRef(cpy_r_r18);
    goto CPyL25;
CPyL31: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL19;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_cls_name);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL25;
}

PyObject *CPyPy_inspections___InspectionEngine____fill_from_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"attrs_strs", "attrs_dict", 0};
    static CPyArg_Parser parser = {"OO:_fill_from_dict", kwlist, 0};
    PyObject *obj_attrs_strs;
    PyObject *obj_attrs_dict;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_attrs_strs, &obj_attrs_dict)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_attrs_strs;
    if (likely(PyList_Check(obj_attrs_strs)))
        arg_attrs_strs = obj_attrs_strs;
    else {
        CPy_TypeError("list", obj_attrs_strs); 
        goto fail;
    }
    PyObject *arg_attrs_dict;
    if (likely(PyDict_Check(obj_attrs_dict)))
        arg_attrs_dict = obj_attrs_dict;
    else {
        CPy_TypeError("dict", obj_attrs_dict); 
        goto fail;
    }
    char retval = CPyDef_inspections___InspectionEngine____fill_from_dict(arg_self, arg_attrs_strs, arg_attrs_dict);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "_fill_from_dict", 316, CPyStatic_inspections___globals);
    return NULL;
}

tuple_T2OC CPyDef_inspections___InspectionEngine___expr_attrs(PyObject *cpy_r_self, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_expr_type;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OC cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_instances;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_attrs_dict;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_mod_dict;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyPtr cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_template;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_class_dict;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_base_attrs;
    int64_t cpy_r_r100;
    CPyTagged cpy_r_r101;
    char cpy_r_r102;
    CPyTagged cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    tuple_T3CIO cpy_r_r107;
    CPyTagged cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    tuple_T2OC cpy_r_r131;
    tuple_T2OC cpy_r_r132;
    cpy_r_r0 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r0)->_manager;
    cpy_r_r2 = ((mypy___build___BuildManagerObject *)cpy_r_r1)->_all_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_GetWithNone(cpy_r_r2, cpy_r_expression);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 332, CPyStatic_inspections___globals);
        goto CPyL79;
    }
    if (PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type))
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL2947;
    if (cpy_r_r3 == Py_None)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL2947;
    CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 332, CPyStatic_inspections___globals, "mypy.types.Type or None", cpy_r_r3);
    goto CPyL79;
__LL2947: ;
    cpy_r_expr_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_expr_type == cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL80;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r7 = CPyDef_inspections___InspectionEngine___missing_type(cpy_r_self, cpy_r_expression);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 334, CPyStatic_inspections___globals);
        goto CPyL79;
    }
    cpy_r_r8.f0 = cpy_r_r7;
    cpy_r_r8.f1 = 0;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r7);
    return cpy_r_r8;
CPyL5: ;
    if (likely(cpy_r_expr_type != Py_None))
        cpy_r_r9 = cpy_r_expr_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 336, CPyStatic_inspections___globals, "mypy.types.Type", cpy_r_expr_type);
        goto CPyL79;
    }
    cpy_r_r10 = CPyDef_types___get_proper_type(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 336, CPyStatic_inspections___globals);
        goto CPyL79;
    }
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 336, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_r10);
        goto CPyL79;
    }
    cpy_r_expr_type = cpy_r_r11;
    CPy_INCREF(cpy_r_expr_type);
    if (likely(PyObject_TypeCheck(cpy_r_expr_type, CPyType_types___ProperType)))
        cpy_r_r12 = cpy_r_expr_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 337, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_expr_type);
        goto CPyL81;
    }
    cpy_r_r13 = CPyDef_inspections___get_instance_fallback(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 337, CPyStatic_inspections___globals);
        goto CPyL81;
    }
    cpy_r_instances = cpy_r_r13;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_instances)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (cpy_r_r17) {
        goto CPyL14;
    } else
        goto CPyL82;
CPyL11: ;
    cpy_r_r18 = CPyDef_inspections___InspectionEngine___object_type(cpy_r_self);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 340, CPyStatic_inspections___globals);
        goto CPyL81;
    }
    cpy_r_r19 = PyList_New(1);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 340, CPyStatic_inspections___globals);
        goto CPyL83;
    }
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r18;
    cpy_r_instances = cpy_r_r19;
CPyL14: ;
    cpy_r_r22 = CPyDef_inspections___InspectionEngine___collect_attrs(cpy_r_self, cpy_r_instances);
    CPy_DECREF(cpy_r_instances);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 342, CPyStatic_inspections___globals);
        goto CPyL81;
    }
    cpy_r_attrs_dict = cpy_r_r22;
    cpy_r_r23 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL17;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL18;
CPyL17: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    cpy_r_r27 = cpy_r_r31;
CPyL18: ;
    if (!cpy_r_r27) goto CPyL20;
    cpy_r_r32 = cpy_r_r27;
    goto CPyL21;
CPyL20: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    cpy_r_r32 = cpy_r_r36;
CPyL21: ;
    if (!cpy_r_r32) goto CPyL44;
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r37 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 345, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL84;
    }
    cpy_r_r38 = ((mypy___nodes___RefExprObject *)cpy_r_r37)->_node;
    cpy_r_r39 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_r38)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL44;
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r43 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 346, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL84;
    }
    cpy_r_r44 = ((mypy___nodes___RefExprObject *)cpy_r_r43)->_node;
    CPy_INCREF(cpy_r_r44);
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_nodes___MypyFile))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 346, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_r44);
        goto CPyL84;
    }
    cpy_r_node = cpy_r_r45;
    cpy_r_r46 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_names;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/inspections.py", "expr_attrs", "MypyFile", "names", 347, CPyStatic_inspections___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r46);
CPyL27: ;
    cpy_r_r47 = CPyModule_builtins;
    cpy_r_r48 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 347, CPyStatic_inspections___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_r46};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 347, CPyStatic_inspections___globals);
        goto CPyL86;
    }
    CPy_DECREF(cpy_r_r46);
    if (likely(PyList_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 347, CPyStatic_inspections___globals, "list", cpy_r_r52);
        goto CPyL85;
    }
    cpy_r_names = cpy_r_r53;
    cpy_r_r54 = CPyStatics[875]; /* '__builtins__' */
    cpy_r_r55 = PySequence_Contains(cpy_r_names, cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 348, CPyStatic_inspections___globals);
        goto CPyL87;
    }
    cpy_r_r57 = cpy_r_r55;
    if (!cpy_r_r57) goto CPyL33;
    cpy_r_r58 = CPyStatics[875]; /* '__builtins__' */
    cpy_r_r59 = CPyList_Remove(cpy_r_names, cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 350, CPyStatic_inspections___globals);
        goto CPyL87;
    }
CPyL33: ;
    cpy_r_r61 = CPyStatics[2647]; /* '"<' */
    cpy_r_r62 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals);
        goto CPyL88;
    }
CPyL34: ;
    cpy_r_r63 = CPyStatics[2648]; /* '>"' */
    cpy_r_r64 = CPyStr_Build(3, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals);
        goto CPyL88;
    }
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = PyList_New(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals);
        goto CPyL89;
    }
    cpy_r_r68 = 0;
CPyL37: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL90;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r68);
    if (likely(PyUnicode_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals, "str", cpy_r_r73);
        goto CPyL91;
    }
    cpy_r_name = cpy_r_r74;
    cpy_r_r75 = CPyStatics[178]; /* '"' */
    cpy_r_r76 = CPyStatics[178]; /* '"' */
    cpy_r_r77 = CPyStr_Build(3, cpy_r_r75, cpy_r_name, cpy_r_r76);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals);
        goto CPyL91;
    }
    cpy_r_r78 = CPyList_SetItemUnsafe(cpy_r_r67, cpy_r_r68, cpy_r_r77);
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals);
        goto CPyL91;
    }
    cpy_r_r79 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r79;
    goto CPyL37;
CPyL42: ;
    cpy_r_r80 = CPyDict_Build(1, cpy_r_r64, cpy_r_r67);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 351, CPyStatic_inspections___globals);
        goto CPyL84;
    }
    cpy_r_mod_dict = cpy_r_r80;
    goto CPyL46;
CPyL44: ;
    cpy_r_r81 = PyDict_New();
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 353, CPyStatic_inspections___globals);
        goto CPyL84;
    }
    cpy_r_mod_dict = cpy_r_r81;
CPyL46: ;
    cpy_r_r82 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r83 = (CPyPtr)&((PyObject *)cpy_r_expr_type)->ob_type;
    cpy_r_r84 = *(PyObject * *)cpy_r_r83;
    cpy_r_r85 = cpy_r_r84 == cpy_r_r82;
    if (!cpy_r_r85) goto CPyL48;
    cpy_r_r86 = cpy_r_r85;
    goto CPyL49;
CPyL48: ;
    cpy_r_r87 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_expr_type)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    cpy_r_r86 = cpy_r_r90;
CPyL49: ;
    if (!cpy_r_r86) goto CPyL92;
    CPy_INCREF(cpy_r_expr_type);
    if (likely((Py_TYPE(cpy_r_expr_type) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_expr_type) == CPyType_types___Overloaded)))
        cpy_r_r91 = cpy_r_expr_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 357, CPyStatic_inspections___globals, "mypy.types.FunctionLike", cpy_r_expr_type);
        goto CPyL93;
    }
    cpy_r_r92 = CPY_GET_METHOD(cpy_r_r91, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r91); /* is_type_obj */
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 357, CPyStatic_inspections___globals);
        goto CPyL93;
    }
    if (!cpy_r_r92) goto CPyL92;
    if (likely((Py_TYPE(cpy_r_expr_type) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_expr_type) == CPyType_types___Overloaded)))
        cpy_r_r93 = cpy_r_expr_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 358, CPyStatic_inspections___globals, "mypy.types.FunctionLike", cpy_r_expr_type);
        goto CPyL94;
    }
    cpy_r_r94 = CPY_GET_METHOD(cpy_r_r93, CPyType_types___FunctionLike, 17, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *))(cpy_r_r93); /* type_object */
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 358, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_r95 = CPyDef_typevars___fill_typevars_with_any(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 358, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_template = cpy_r_r95;
    cpy_r_r96 = CPyDef_inspections___get_instance_fallback(cpy_r_template);
    CPy_DECREF(cpy_r_template);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 359, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_r97 = CPyDef_inspections___InspectionEngine___collect_attrs(cpy_r_self, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 359, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_class_dict = cpy_r_r97;
    goto CPyL61;
CPyL59: ;
    cpy_r_r98 = PyDict_New();
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 361, CPyStatic_inspections___globals);
        goto CPyL94;
    }
    cpy_r_class_dict = cpy_r_r98;
CPyL61: ;
    cpy_r_r99 = PyList_New(0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 364, CPyStatic_inspections___globals);
        goto CPyL95;
    }
    cpy_r_base_attrs = cpy_r_r99;
    cpy_r_r100 = PyDict_Size(cpy_r_mod_dict);
    cpy_r_r101 = cpy_r_r100 << 1;
    cpy_r_r102 = cpy_r_r101 != 0;
    if (!cpy_r_r102) goto CPyL96;
    cpy_r_r103 = 0;
    cpy_r_r104 = PyDict_Size(cpy_r_mod_dict);
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = CPyDict_GetKeysIter(cpy_r_mod_dict);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 366, CPyStatic_inspections___globals);
        goto CPyL97;
    }
CPyL64: ;
    cpy_r_r107 = CPyDict_NextKey(cpy_r_r106, cpy_r_r103);
    cpy_r_r108 = cpy_r_r107.f1;
    cpy_r_r103 = cpy_r_r108;
    cpy_r_r109 = cpy_r_r107.f0;
    if (!cpy_r_r109) goto CPyL98;
    cpy_r_r110 = cpy_r_r107.f2;
    CPy_INCREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r107.f2);
    if (likely(PyUnicode_Check(cpy_r_r110)))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 366, CPyStatic_inspections___globals, "str", cpy_r_r110);
        goto CPyL99;
    }
    cpy_r_mod = cpy_r_r111;
    cpy_r_r112 = CPyStatics[1517]; /* ': [' */
    cpy_r_r113 = CPyStatics[71]; /* ', ' */
    cpy_r_r114 = CPyDict_GetItem(cpy_r_mod_dict, cpy_r_mod);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 367, CPyStatic_inspections___globals);
        goto CPyL100;
    }
    if (likely(PyList_Check(cpy_r_r114)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expr_attrs", 367, CPyStatic_inspections___globals, "list", cpy_r_r114);
        goto CPyL100;
    }
    cpy_r_r116 = PyUnicode_Join(cpy_r_r113, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 367, CPyStatic_inspections___globals);
        goto CPyL100;
    }
    cpy_r_r117 = CPyStatics[208]; /* ']' */
    cpy_r_r118 = CPyStr_Build(4, cpy_r_mod, cpy_r_r112, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 367, CPyStatic_inspections___globals);
        goto CPyL99;
    }
    cpy_r_r119 = PyList_Append(cpy_r_base_attrs, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 367, CPyStatic_inspections___globals);
        goto CPyL99;
    }
    cpy_r_r121 = CPyDict_CheckSize(cpy_r_mod_dict, cpy_r_r105);
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 366, CPyStatic_inspections___globals);
        goto CPyL99;
    } else
        goto CPyL64;
CPyL72: ;
    cpy_r_r122 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 366, CPyStatic_inspections___globals);
        goto CPyL101;
    }
CPyL73: ;
    cpy_r_r123 = CPyDef_inspections___InspectionEngine____fill_from_dict(cpy_r_self, cpy_r_base_attrs, cpy_r_class_dict);
    CPy_DECREF(cpy_r_class_dict);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 368, CPyStatic_inspections___globals);
        goto CPyL102;
    }
    cpy_r_r124 = CPyDef_inspections___InspectionEngine____fill_from_dict(cpy_r_self, cpy_r_base_attrs, cpy_r_attrs_dict);
    CPy_DECREF(cpy_r_attrs_dict);
    if (unlikely(cpy_r_r124 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 369, CPyStatic_inspections___globals);
        goto CPyL103;
    }
    cpy_r_r125 = CPyStatics[1405]; /* '{' */
    cpy_r_r126 = CPyStatics[71]; /* ', ' */
    cpy_r_r127 = PyUnicode_Join(cpy_r_r126, cpy_r_base_attrs);
    CPy_DECREF(cpy_r_base_attrs);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 370, CPyStatic_inspections___globals);
        goto CPyL79;
    }
    cpy_r_r128 = CPyStatics[1406]; /* '}' */
    cpy_r_r129 = CPyStr_Build(3, cpy_r_r125, cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 370, CPyStatic_inspections___globals);
        goto CPyL79;
    }
    cpy_r_r130 = CPyDef_inspections___InspectionEngine___add_prefixes(cpy_r_self, cpy_r_r129, cpy_r_expression);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 370, CPyStatic_inspections___globals);
        goto CPyL79;
    }
    cpy_r_r131.f0 = cpy_r_r130;
    cpy_r_r131.f1 = 1;
    CPy_INCREF(cpy_r_r131.f0);
    CPy_DECREF(cpy_r_r130);
    return cpy_r_r131;
CPyL79: ;
    tuple_T2OC __tmp2948 = { NULL, 2 };
    cpy_r_r132 = __tmp2948;
    return cpy_r_r132;
CPyL80: ;
    CPy_DECREF(cpy_r_expr_type);
    goto CPyL3;
CPyL81: ;
    CPy_DecRef(cpy_r_expr_type);
    goto CPyL79;
CPyL82: ;
    CPy_DECREF(cpy_r_instances);
    goto CPyL11;
CPyL83: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_r18);
    goto CPyL79;
CPyL84: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    goto CPyL79;
CPyL85: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_node);
    goto CPyL79;
CPyL86: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r46);
    goto CPyL79;
CPyL87: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_names);
    goto CPyL79;
CPyL88: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_names);
    goto CPyL79;
CPyL89: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r64);
    goto CPyL79;
CPyL90: ;
    CPy_DECREF(cpy_r_names);
    goto CPyL42;
CPyL91: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL79;
CPyL92: ;
    CPy_DECREF(cpy_r_expr_type);
    goto CPyL59;
CPyL93: ;
    CPy_DecRef(cpy_r_expr_type);
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_mod_dict);
    goto CPyL79;
CPyL94: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_mod_dict);
    goto CPyL79;
CPyL95: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_class_dict);
    goto CPyL79;
CPyL96: ;
    CPy_DECREF(cpy_r_mod_dict);
    goto CPyL73;
CPyL97: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_class_dict);
    CPy_DecRef(cpy_r_base_attrs);
    goto CPyL79;
CPyL98: ;
    CPy_DECREF(cpy_r_mod_dict);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r107.f2);
    goto CPyL72;
CPyL99: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_class_dict);
    CPy_DecRef(cpy_r_base_attrs);
    CPy_DecRef(cpy_r_r106);
    goto CPyL79;
CPyL100: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_class_dict);
    CPy_DecRef(cpy_r_base_attrs);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_mod);
    goto CPyL79;
CPyL101: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_class_dict);
    CPy_DecRef(cpy_r_base_attrs);
    goto CPyL79;
CPyL102: ;
    CPy_DecRef(cpy_r_attrs_dict);
    CPy_DecRef(cpy_r_base_attrs);
    goto CPyL79;
CPyL103: ;
    CPy_DecRef(cpy_r_base_attrs);
    goto CPyL79;
}

PyObject *CPyPy_inspections___InspectionEngine___expr_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expression", 0};
    static CPyArg_Parser parser = {"O:expr_attrs", kwlist, 0};
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    tuple_T2OC retval = CPyDef_inspections___InspectionEngine___expr_attrs(arg_self, arg_expression);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2949 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2949);
    PyObject *__tmp2950 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp2950);
    PyTuple_SET_ITEM(retbox, 1, __tmp2950);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "expr_attrs", 324, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___format_node(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
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
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
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
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_module)->_path;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_Str(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r2 = CPyStatics[171]; /* ':' */
    cpy_r_r3 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL3;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL4;
CPyL3: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    cpy_r_r7 = cpy_r_r11;
CPyL4: ;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r12 = cpy_r_r7;
    goto CPyL7;
CPyL6: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL7: ;
    if (!cpy_r_r12) goto CPyL10;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r17 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals, "mypy.nodes.FuncBase", cpy_r_node);
        goto CPyL43;
    }
    cpy_r_r18 = ((mypy___nodes___FuncBaseObject *)cpy_r_r17)->_line;
    CPyTagged_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18;
    goto CPyL13;
CPyL10: ;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___SymbolNode)))
        cpy_r_r20 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL43;
    }
    cpy_r_r21 = ((mypy___nodes___ContextObject *)cpy_r_r20)->_line;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'SymbolNode' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r21);
    }
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL43;
    }
CPyL12: ;
    cpy_r_r19 = cpy_r_r21;
CPyL13: ;
    cpy_r_r22 = CPyTagged_Str(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL43;
    }
    cpy_r_r23 = CPyStatics[171]; /* ':' */
    cpy_r_r24 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL16;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL17;
CPyL16: ;
    cpy_r_r29 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    cpy_r_r28 = cpy_r_r32;
CPyL17: ;
    if (!cpy_r_r28) goto CPyL19;
    cpy_r_r33 = cpy_r_r28;
    goto CPyL20;
CPyL19: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    cpy_r_r33 = cpy_r_r37;
CPyL20: ;
    if (!cpy_r_r33) goto CPyL23;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r38 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals, "mypy.nodes.FuncBase", cpy_r_node);
        goto CPyL44;
    }
    cpy_r_r39 = ((mypy___nodes___FuncBaseObject *)cpy_r_r38)->_column;
    CPyTagged_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39;
    goto CPyL26;
CPyL23: ;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___SymbolNode)))
        cpy_r_r41 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL44;
    }
    cpy_r_r42 = ((mypy___nodes___ContextObject *)cpy_r_r41)->_column;
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'column' of 'SymbolNode' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r42);
    }
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL44;
    }
CPyL25: ;
    cpy_r_r40 = cpy_r_r42;
CPyL26: ;
    cpy_r_r43 = CPyTagged_Add(cpy_r_r40, 2);
    CPyTagged_DECREF(cpy_r_r40);
    cpy_r_r44 = CPyTagged_Str(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL44;
    }
    cpy_r_r45 = CPyStatics[171]; /* ':' */
    cpy_r_r46 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL29;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL30;
CPyL29: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    cpy_r_r50 = cpy_r_r54;
CPyL30: ;
    if (!cpy_r_r50) goto CPyL32;
    cpy_r_r55 = cpy_r_r50;
    goto CPyL33;
CPyL32: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL33: ;
    if (!cpy_r_r55) goto CPyL37;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r60 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals, "mypy.nodes.FuncBase", cpy_r_node);
        goto CPyL45;
    }
    cpy_r_r61 = CPY_GET_ATTR(cpy_r_r60, CPyType_nodes___FuncBase, 6, mypy___nodes___FuncBaseObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL45;
    }
CPyL36: ;
    cpy_r_r62 = cpy_r_r61;
    goto CPyL40;
CPyL37: ;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___SymbolNode)))
        cpy_r_r63 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL45;
    }
    cpy_r_r64 = CPY_GET_ATTR_TRAIT(cpy_r_r63, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL45;
    }
CPyL39: ;
    cpy_r_r62 = cpy_r_r64;
CPyL40: ;
    cpy_r_r65 = CPyStr_Build(7, cpy_r_r1, cpy_r_r2, cpy_r_r22, cpy_r_r23, cpy_r_r44, cpy_r_r45, cpy_r_r62);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "format_node", 373, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    return cpy_r_r65;
CPyL42: ;
    cpy_r_r66 = NULL;
    return cpy_r_r66;
CPyL43: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r22);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r44);
    goto CPyL42;
}

PyObject *CPyPy_inspections___InspectionEngine___format_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "node", 0};
    static CPyArg_Parser parser = {"OO:format_node", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(Py_TYPE(obj_module) == CPyType_mypy___build___State))
        arg_module = obj_module;
    else {
        CPy_TypeError("mypy.build.State", obj_module); 
        goto fail;
    }
    PyObject *arg_node;
    if ((Py_TYPE(obj_node) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL2951;
    if (PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL2951;
    CPy_TypeError("union[mypy.nodes.FuncBase, mypy.nodes.SymbolNode]", obj_node); 
    goto fail;
__LL2951: ;
    PyObject *retval = CPyDef_inspections___InspectionEngine___format_node(arg_self, arg_module, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "format_node", 372, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___collect_nodes(PyObject *cpy_r_self, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
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
    PyObject *cpy_r_base_type;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_instances;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_nodes;
    CPyTagged cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_instance;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    CPyPtr cpy_r_r89;
    PyObject *cpy_r_r90;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_expression)->_node;
    CPy_INCREF(cpy_r_r0);
    cpy_r_node = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_node == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL59;
    } else
        goto CPyL54;
CPyL1: ;
    cpy_r_r3 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr))
        cpy_r_r7 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 384, CPyStatic_inspections___globals, "mypy.nodes.MemberExpr", cpy_r_expression);
        goto CPyL58;
    }
    cpy_r_r8 = ((mypy___nodes___MemberExprObject *)cpy_r_r7)->_kind;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 == cpy_r_r9;
    if (!cpy_r_r10) goto CPyL52;
    cpy_r_r11 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r12 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r11)->_manager;
    cpy_r_r13 = ((mypy___build___BuildManagerObject *)cpy_r_r12)->_all_types;
    CPy_INCREF(cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr))
        cpy_r_r14 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 385, CPyStatic_inspections___globals, "mypy.nodes.MemberExpr", cpy_r_expression);
        goto CPyL60;
    }
    cpy_r_r15 = ((mypy___nodes___MemberExprObject *)cpy_r_r14)->_expr;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyDict_GetWithNone(cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 385, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    if (PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type))
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL2952;
    if (cpy_r_r16 == Py_None)
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL2952;
    CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 385, CPyStatic_inspections___globals, "mypy.types.Type or None", cpy_r_r16);
    goto CPyL58;
__LL2952: ;
    cpy_r_base_type = cpy_r_r17;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_base_type == cpy_r_r18;
    if (cpy_r_r19) {
        goto CPyL61;
    } else
        goto CPyL10;
CPyL8: ;
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 387, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    return cpy_r_r20;
CPyL10: ;
    if (likely(cpy_r_base_type != Py_None))
        cpy_r_r21 = cpy_r_base_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 390, CPyStatic_inspections___globals, "mypy.types.Type", cpy_r_base_type);
        goto CPyL58;
    }
    cpy_r_r22 = CPyDef_types___get_proper_type(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 390, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 390, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_r22);
        goto CPyL58;
    }
    cpy_r_base_type = cpy_r_r23;
    CPy_INCREF(cpy_r_base_type);
    if (likely(PyObject_TypeCheck(cpy_r_base_type, CPyType_types___ProperType)))
        cpy_r_r24 = cpy_r_base_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 391, CPyStatic_inspections___globals, "mypy.types.ProperType", cpy_r_base_type);
        goto CPyL62;
    }
    cpy_r_r25 = CPyDef_inspections___get_instance_fallback(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 391, CPyStatic_inspections___globals);
        goto CPyL62;
    }
    cpy_r_instances = cpy_r_r25;
    cpy_r_r26 = PyList_New(0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 392, CPyStatic_inspections___globals);
        goto CPyL63;
    }
    cpy_r_nodes = cpy_r_r26;
    cpy_r_r27 = 0;
CPyL17: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_instances)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL64;
    cpy_r_r32 = CPyList_GetItemUnsafe(cpy_r_instances, cpy_r_r27);
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_types___Instance))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 393, CPyStatic_inspections___globals, "mypy.types.Instance", cpy_r_r32);
        goto CPyL65;
    }
    cpy_r_instance = cpy_r_r33;
    if (likely(Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr))
        cpy_r_r34 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 394, CPyStatic_inspections___globals, "mypy.nodes.MemberExpr", cpy_r_expression);
        goto CPyL66;
    }
    cpy_r_r35 = ((mypy___nodes___MemberExprObject *)cpy_r_r34)->_name;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_instance);
    cpy_r_r37 = CPyDef_inspections___find_node(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 394, CPyStatic_inspections___globals);
        goto CPyL65;
    }
    cpy_r_node = cpy_r_r37;
    CPy_INCREF(cpy_r_node);
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r38 = cpy_r_node;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL2953;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___Var)
        cpy_r_r38 = cpy_r_node;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL2953;
    if (cpy_r_node == Py_None)
        cpy_r_r38 = cpy_r_node;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL2953;
    CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 395, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Var, None]", cpy_r_node);
    goto CPyL67;
__LL2953: ;
    cpy_r_r39 = PyObject_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 395, CPyStatic_inspections___globals);
        goto CPyL67;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL68;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r42 = cpy_r_node;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL2954;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___Var)
        cpy_r_r42 = cpy_r_node;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL2954;
    CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 396, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Var]", cpy_r_node);
    goto CPyL65;
__LL2954: ;
    cpy_r_r43 = PyList_Append(cpy_r_nodes, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 396, CPyStatic_inspections___globals);
        goto CPyL65;
    }
CPyL26: ;
    cpy_r_r45 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r45;
    goto CPyL17;
CPyL27: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = cpy_r_r48 != 0;
    if (cpy_r_r49) goto CPyL69;
    cpy_r_r50 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_base_type)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL30;
    cpy_r_r54 = cpy_r_r53;
    goto CPyL31;
CPyL30: ;
    cpy_r_r55 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_base_type)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    cpy_r_r54 = cpy_r_r58;
CPyL31: ;
    if (!cpy_r_r54) goto CPyL70;
    CPy_INCREF(cpy_r_base_type);
    if (likely((Py_TYPE(cpy_r_base_type) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_base_type) == CPyType_types___Overloaded)))
        cpy_r_r59 = cpy_r_base_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 399, CPyStatic_inspections___globals, "mypy.types.FunctionLike", cpy_r_base_type);
        goto CPyL71;
    }
    cpy_r_r60 = CPY_GET_METHOD(cpy_r_r59, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r59); /* is_type_obj */
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 399, CPyStatic_inspections___globals);
        goto CPyL71;
    }
    if (!cpy_r_r60) goto CPyL70;
    if (likely((Py_TYPE(cpy_r_base_type) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_base_type) == CPyType_types___Overloaded)))
        cpy_r_r61 = cpy_r_base_type;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 401, CPyStatic_inspections___globals, "mypy.types.FunctionLike", cpy_r_base_type);
        goto CPyL72;
    }
    cpy_r_r62 = CPY_GET_METHOD(cpy_r_r61, CPyType_types___FunctionLike, 17, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *))(cpy_r_r61); /* type_object */
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 401, CPyStatic_inspections___globals);
        goto CPyL72;
    }
    cpy_r_r63 = CPyDef_typevars___fill_typevars_with_any(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 401, CPyStatic_inspections___globals);
        goto CPyL72;
    }
    cpy_r_r64 = CPyDef_inspections___get_instance_fallback(cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 400, CPyStatic_inspections___globals);
        goto CPyL72;
    }
    cpy_r_instances = cpy_r_r64;
    cpy_r_r65 = 0;
CPyL40: ;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_instances)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = (Py_ssize_t)cpy_r_r65 < (Py_ssize_t)cpy_r_r68;
    if (!cpy_r_r69) goto CPyL73;
    cpy_r_r70 = CPyList_GetItemUnsafe(cpy_r_instances, cpy_r_r65);
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_types___Instance))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 403, CPyStatic_inspections___globals, "mypy.types.Instance", cpy_r_r70);
        goto CPyL74;
    }
    cpy_r_instance = cpy_r_r71;
    if (likely(Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr))
        cpy_r_r72 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 404, CPyStatic_inspections___globals, "mypy.nodes.MemberExpr", cpy_r_expression);
        goto CPyL75;
    }
    cpy_r_r73 = ((mypy___nodes___MemberExprObject *)cpy_r_r72)->_name;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r74);
    CPy_DECREF(cpy_r_instance);
    cpy_r_r75 = CPyDef_inspections___find_node(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 404, CPyStatic_inspections___globals);
        goto CPyL74;
    }
    cpy_r_node = cpy_r_r75;
    CPy_INCREF(cpy_r_node);
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r76 = cpy_r_node;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL2955;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___Var)
        cpy_r_r76 = cpy_r_node;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL2955;
    if (cpy_r_node == Py_None)
        cpy_r_r76 = cpy_r_node;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL2955;
    CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 405, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Var, None]", cpy_r_node);
    goto CPyL76;
__LL2955: ;
    cpy_r_r77 = PyObject_IsTrue(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 405, CPyStatic_inspections___globals);
        goto CPyL76;
    }
    cpy_r_r79 = cpy_r_r77;
    if (!cpy_r_r79) goto CPyL77;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r80 = cpy_r_node;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL2956;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___Var)
        cpy_r_r80 = cpy_r_node;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL2956;
    CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 406, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Var]", cpy_r_node);
    goto CPyL74;
__LL2956: ;
    cpy_r_r81 = PyList_Append(cpy_r_nodes, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 406, CPyStatic_inspections___globals);
        goto CPyL74;
    }
CPyL49: ;
    cpy_r_r83 = cpy_r_r65 + 2;
    cpy_r_r65 = cpy_r_r83;
    goto CPyL40;
CPyL50: ;
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 409, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    return cpy_r_r84;
CPyL52: ;
    cpy_r_r85 = PyList_New(0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 411, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    return cpy_r_r85;
CPyL54: ;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r86 = cpy_r_node;
    else {
        cpy_r_r86 = NULL;
    }
    if (cpy_r_r86 != NULL) goto __LL2957;
    if (PyObject_TypeCheck(cpy_r_node, CPyType_nodes___SymbolNode))
        cpy_r_r86 = cpy_r_node;
    else {
        cpy_r_r86 = NULL;
    }
    if (cpy_r_r86 != NULL) goto __LL2957;
    CPy_TypeErrorTraceback("mypy/inspections.py", "collect_nodes", 414, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.SymbolNode]", cpy_r_node);
    goto CPyL58;
__LL2957: ;
    cpy_r_r87 = PyList_New(1);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 414, CPyStatic_inspections___globals);
        goto CPyL78;
    }
    cpy_r_r88 = (CPyPtr)&((PyListObject *)cpy_r_r87)->ob_item;
    cpy_r_r89 = *(CPyPtr *)cpy_r_r88;
    *(PyObject * *)cpy_r_r89 = cpy_r_r86;
    cpy_r_nodes = cpy_r_r87;
CPyL57: ;
    return cpy_r_nodes;
CPyL58: ;
    cpy_r_r90 = NULL;
    return cpy_r_r90;
CPyL59: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL1;
CPyL60: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL58;
CPyL61: ;
    CPy_DECREF(cpy_r_base_type);
    goto CPyL8;
CPyL62: ;
    CPy_DecRef(cpy_r_base_type);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_base_type);
    CPy_DecRef(cpy_r_instances);
    goto CPyL58;
CPyL64: ;
    CPy_DECREF(cpy_r_instances);
    goto CPyL27;
CPyL65: ;
    CPy_DecRef(cpy_r_base_type);
    CPy_DecRef(cpy_r_instances);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_base_type);
    CPy_DecRef(cpy_r_instances);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_instance);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_base_type);
    CPy_DecRef(cpy_r_instances);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL58;
CPyL68: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL26;
CPyL69: ;
    CPy_DECREF(cpy_r_base_type);
    goto CPyL57;
CPyL70: ;
    CPy_DECREF(cpy_r_base_type);
    CPy_DECREF(cpy_r_nodes);
    goto CPyL50;
CPyL71: ;
    CPy_DecRef(cpy_r_base_type);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL58;
CPyL72: ;
    CPy_DecRef(cpy_r_nodes);
    goto CPyL58;
CPyL73: ;
    CPy_DECREF(cpy_r_instances);
    goto CPyL57;
CPyL74: ;
    CPy_DecRef(cpy_r_instances);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL58;
CPyL75: ;
    CPy_DecRef(cpy_r_instances);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_instance);
    goto CPyL58;
CPyL76: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_instances);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL58;
CPyL77: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL49;
CPyL78: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL58;
}

PyObject *CPyPy_inspections___InspectionEngine___collect_nodes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expression", 0};
    static CPyArg_Parser parser = {"O:collect_nodes", kwlist, 0};
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely((Py_TYPE(obj_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expression) == CPyType_nodes___RefExpr)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expression); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___collect_nodes(arg_self, arg_expression);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "collect_nodes", 375, CPyStatic_inspections___globals);
    return NULL;
}

tuple_T2OC CPyDef_inspections___InspectionEngine___modules_for_nodes(PyObject *cpy_r_self, PyObject *cpy_r_nodes, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_modules;
    char cpy_r_reload_needed;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    tuple_T2OC cpy_r_r67;
    tuple_T2OC cpy_r_r68;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 425, CPyStatic_inspections___globals);
        goto CPyL44;
    }
    cpy_r_modules = cpy_r_r0;
    cpy_r_reload_needed = 0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL43;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r1);
    if ((Py_TYPE(cpy_r_r6) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL2958;
    if (PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___SymbolNode))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL2958;
    CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 427, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.SymbolNode]", cpy_r_r6);
    goto CPyL45;
__LL2958: ;
    cpy_r_node = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL7;
CPyL6: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL7: ;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r17 = cpy_r_r12;
    goto CPyL10;
CPyL9: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL10: ;
    if (!cpy_r_r17) goto CPyL14;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r22 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 428, CPyStatic_inspections___globals, "mypy.nodes.FuncBase", cpy_r_node);
        goto CPyL46;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___FuncBase, 7, mypy___nodes___FuncBaseObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 428, CPyStatic_inspections___globals);
        goto CPyL46;
    }
CPyL13: ;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL17;
CPyL14: ;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___SymbolNode)))
        cpy_r_r25 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 428, CPyStatic_inspections___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL46;
    }
    cpy_r_r26 = CPY_GET_ATTR_TRAIT(cpy_r_r25, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 428, CPyStatic_inspections___globals);
        goto CPyL46;
    }
CPyL16: ;
    cpy_r_r24 = cpy_r_r26;
CPyL17: ;
    cpy_r_r27 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r28 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r27)->_graph;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_inspections___find_module_by_fullname(cpy_r_r24, cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 428, CPyStatic_inspections___globals);
        goto CPyL46;
    }
    cpy_r_module = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_module != cpy_r_r30;
    if (cpy_r_r31) {
        goto CPyL25;
    } else
        goto CPyL47;
CPyL19: ;
    cpy_r_r32 = ((mypy___nodes___RefExprObject *)cpy_r_expression)->_kind;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9015]; /* 0 */
    cpy_r_r34 = PyObject_RichCompare(cpy_r_r32, cpy_r_r33, 2);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 430, CPyStatic_inspections___globals);
        goto CPyL46;
    }
    if (unlikely(!PyBool_Check(cpy_r_r34))) {
        CPy_TypeError("bool", cpy_r_r34); cpy_r_r35 = 2;
    } else
        cpy_r_r35 = cpy_r_r34 == Py_True;
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 430, CPyStatic_inspections___globals);
        goto CPyL46;
    }
    if (!cpy_r_r35) goto CPyL48;
    cpy_r_r36 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_r36 != cpy_r_r37;
    CPy_DECREF(cpy_r_r36);
    if (!cpy_r_r38) goto CPyL48;
    cpy_r_r39 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r39);
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 431, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_r39);
        goto CPyL46;
    }
    cpy_r_module = cpy_r_r40;
CPyL25: ;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r41 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 434, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_module);
        goto CPyL49;
    }
    cpy_r_r42 = CPyDict_SetItem(cpy_r_modules, cpy_r_node, cpy_r_r41);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 434, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_module != Py_None))
        cpy_r_r44 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 435, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_module);
        goto CPyL50;
    }
    cpy_r_r45 = ((mypy___build___StateObject *)cpy_r_r44)->_tree;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = cpy_r_r45 != cpy_r_r46;
    CPy_DECREF(cpy_r_r45);
    if (!cpy_r_r47) goto CPyL33;
    if (likely(cpy_r_module != Py_None))
        cpy_r_r48 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 435, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_module);
        goto CPyL50;
    }
    cpy_r_r49 = ((mypy___build___StateObject *)cpy_r_r48)->_tree;
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 435, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_r49);
        goto CPyL50;
    }
    cpy_r_r51 = ((mypy___nodes___MypyFileObject *)cpy_r_r50)->_is_cache_skeleton;
    if (cpy_r_r51) goto CPyL33;
CPyL32: ;
    cpy_r_r52 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_force_reload;
    if (!cpy_r_r52) goto CPyL51;
CPyL33: ;
    if (likely(cpy_r_module != Py_None))
        cpy_r_r53 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 436, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_module);
        goto CPyL50;
    }
    cpy_r_r54 = ((mypy___build___StateObject *)cpy_r_r53)->_tree;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = PyObject_Not(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 436, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    cpy_r_r57 = cpy_r_r55;
    if (!cpy_r_r57) goto CPyL37;
    cpy_r_r58 = cpy_r_r57;
    goto CPyL40;
CPyL37: ;
    if (likely(cpy_r_module != Py_None))
        cpy_r_r59 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 436, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_module);
        goto CPyL50;
    }
    cpy_r_r60 = ((mypy___build___StateObject *)cpy_r_r59)->_tree;
    if (likely(cpy_r_r60 != Py_None))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 436, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_r60);
        goto CPyL50;
    }
    cpy_r_r62 = ((mypy___nodes___MypyFileObject *)cpy_r_r61)->_is_cache_skeleton;
    cpy_r_r58 = cpy_r_r62;
CPyL40: ;
    cpy_r_r63 = cpy_r_reload_needed | cpy_r_r58;
    cpy_r_reload_needed = cpy_r_r63;
    if (likely(cpy_r_module != Py_None))
        cpy_r_r64 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "modules_for_nodes", 437, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_module);
        goto CPyL45;
    }
    cpy_r_r65 = CPyDef_inspections___InspectionEngine___reload_module(cpy_r_self, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 437, CPyStatic_inspections___globals);
        goto CPyL45;
    }
CPyL42: ;
    cpy_r_r66 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r66;
    goto CPyL2;
CPyL43: ;
    cpy_r_r67.f0 = cpy_r_modules;
    cpy_r_r67.f1 = cpy_r_reload_needed;
    CPy_INCREF(cpy_r_r67.f0);
    CPy_DECREF(cpy_r_modules);
    return cpy_r_r67;
CPyL44: ;
    tuple_T2OC __tmp2959 = { NULL, 2 };
    cpy_r_r68 = __tmp2959;
    return cpy_r_r68;
CPyL45: ;
    CPy_DecRef(cpy_r_modules);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_node);
    goto CPyL44;
CPyL47: ;
    CPy_DECREF(cpy_r_module);
    goto CPyL19;
CPyL48: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL42;
CPyL49: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_module);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    goto CPyL44;
CPyL51: ;
    CPy_DECREF(cpy_r_module);
    goto CPyL42;
}

PyObject *CPyPy_inspections___InspectionEngine___modules_for_nodes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"nodes", "expression", 0};
    static CPyArg_Parser parser = {"OO:modules_for_nodes", kwlist, 0};
    PyObject *obj_nodes;
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_nodes, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_nodes;
    if (likely(PyList_Check(obj_nodes)))
        arg_nodes = obj_nodes;
    else {
        CPy_TypeError("list", obj_nodes); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely((Py_TYPE(obj_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expression) == CPyType_nodes___RefExpr)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expression); 
        goto fail;
    }
    tuple_T2OC retval = CPyDef_inspections___InspectionEngine___modules_for_nodes(arg_self, arg_nodes, arg_expression);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2960 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2960);
    PyObject *__tmp2961 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp2961);
    PyTuple_SET_ITEM(retbox, 1, __tmp2961);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "modules_for_nodes", 417, CPyStatic_inspections___globals);
    return NULL;
}

tuple_T2OC CPyDef_inspections___InspectionEngine___expression_def(PyObject *cpy_r_self, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
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
    PyObject *cpy_r_r14;
    tuple_T2OC cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_nodes;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OC cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T2OC cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_modules;
    char cpy_r_r28;
    char cpy_r_reload_needed;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2OC cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T3CIO cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T2OC cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T2OC cpy_r_r65;
    tuple_T2OC cpy_r_r66;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expression)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (cpy_r_r9) goto CPyL8;
    cpy_r_r14 = CPyStatics[163]; /* '' */
    cpy_r_r15.f0 = cpy_r_r14;
    cpy_r_r15.f1 = 1;
    CPy_INCREF(cpy_r_r15.f0);
    return cpy_r_r15;
CPyL8: ;
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r16 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 450, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL42;
    }
    cpy_r_r17 = CPyDef_inspections___InspectionEngine___collect_nodes(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 450, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_nodes = cpy_r_r17;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r20 != 0;
    if (cpy_r_r21) {
        goto CPyL14;
    } else
        goto CPyL43;
CPyL11: ;
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r22 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 453, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL42;
    }
    cpy_r_r23 = CPyDef_inspections___InspectionEngine___missing_node(cpy_r_self, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 453, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r24.f0 = cpy_r_r23;
    cpy_r_r24.f1 = 0;
    CPy_INCREF(cpy_r_r24.f0);
    CPy_DECREF(cpy_r_r23);
    return cpy_r_r24;
CPyL14: ;
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r25 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 455, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL44;
    }
    cpy_r_r26 = CPyDef_inspections___InspectionEngine___modules_for_nodes(cpy_r_self, cpy_r_nodes, cpy_r_r25);
    CPy_DECREF(cpy_r_nodes);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 455, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r27 = cpy_r_r26.f0;
    CPy_INCREF(cpy_r_r27);
    cpy_r_modules = cpy_r_r27;
    cpy_r_r28 = cpy_r_r26.f1;
    CPy_DECREF(cpy_r_r26.f0);
    cpy_r_reload_needed = cpy_r_r28;
    if (cpy_r_reload_needed) {
        goto CPyL45;
    } else
        goto CPyL24;
CPyL17: ;
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r29 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 459, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL42;
    }
    cpy_r_r30 = CPyDef_inspections___InspectionEngine___collect_nodes(cpy_r_self, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 459, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_nodes = cpy_r_r30;
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r31 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 460, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL44;
    }
    cpy_r_r32 = CPyDef_inspections___InspectionEngine___modules_for_nodes(cpy_r_self, cpy_r_nodes, cpy_r_r31);
    CPy_DECREF(cpy_r_nodes);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 460, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r33 = cpy_r_r32.f0;
    CPy_INCREF(cpy_r_r33);
    cpy_r_modules = cpy_r_r33;
    cpy_r_r34 = cpy_r_r32.f1;
    CPy_DECREF(cpy_r_r32.f0);
    cpy_r_reload_needed = cpy_r_r34;
    cpy_r_r35 = cpy_r_reload_needed ^ 1;
    if (cpy_r_r35) {
        goto CPyL24;
    } else
        goto CPyL46;
CPyL22: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 461, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 463, CPyStatic_inspections___globals);
        goto CPyL47;
    }
    cpy_r_result = cpy_r_r37;
    cpy_r_r38 = 0;
    cpy_r_r39 = PyDict_Size(cpy_r_modules);
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = CPyDict_GetKeysIter(cpy_r_modules);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 464, CPyStatic_inspections___globals);
        goto CPyL48;
    }
CPyL26: ;
    cpy_r_r42 = CPyDict_NextKey(cpy_r_r41, cpy_r_r38);
    cpy_r_r43 = cpy_r_r42.f1;
    cpy_r_r38 = cpy_r_r43;
    cpy_r_r44 = cpy_r_r42.f0;
    if (!cpy_r_r44) goto CPyL49;
    cpy_r_r45 = cpy_r_r42.f2;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r42.f2);
    if ((Py_TYPE(cpy_r_r45) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r45) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r45) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL2962;
    if (PyObject_TypeCheck(cpy_r_r45, CPyType_nodes___SymbolNode))
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL2962;
    CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 464, CPyStatic_inspections___globals, "union[mypy.nodes.FuncBase, mypy.nodes.SymbolNode]", cpy_r_r45);
    goto CPyL50;
__LL2962: ;
    cpy_r_node = cpy_r_r46;
    cpy_r_r47 = CPyDict_GetItem(cpy_r_modules, cpy_r_node);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 465, CPyStatic_inspections___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_mypy___build___State))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 465, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_r47);
        goto CPyL51;
    }
    cpy_r_r49 = CPyDef_inspections___InspectionEngine___format_node(cpy_r_self, cpy_r_r48, cpy_r_node);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 465, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    cpy_r_r50 = PyList_Append(cpy_r_result, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 465, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    cpy_r_r52 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r40);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 464, CPyStatic_inspections___globals);
        goto CPyL50;
    } else
        goto CPyL26;
CPyL33: ;
    cpy_r_r53 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 464, CPyStatic_inspections___globals);
        goto CPyL52;
    }
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (cpy_r_r57) {
        goto CPyL38;
    } else
        goto CPyL53;
CPyL35: ;
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r58 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 468, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL42;
    }
    cpy_r_r59 = CPyDef_inspections___InspectionEngine___missing_node(cpy_r_self, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 468, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r60.f0 = cpy_r_r59;
    cpy_r_r60.f1 = 0;
    CPy_INCREF(cpy_r_r60.f0);
    CPy_DECREF(cpy_r_r59);
    return cpy_r_r60;
CPyL38: ;
    cpy_r_r61 = CPyStatics[71]; /* ', ' */
    cpy_r_r62 = PyUnicode_Join(cpy_r_r61, cpy_r_result);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 470, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_expression);
    if (likely((Py_TYPE(cpy_r_expression) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expression) == CPyType_nodes___RefExpr)))
        cpy_r_r63 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "expression_def", 470, CPyStatic_inspections___globals, "mypy.nodes.RefExpr", cpy_r_expression);
        goto CPyL54;
    }
    cpy_r_r64 = CPyDef_inspections___InspectionEngine___add_prefixes(cpy_r_self, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "expression_def", 470, CPyStatic_inspections___globals);
        goto CPyL42;
    }
    cpy_r_r65.f0 = cpy_r_r64;
    cpy_r_r65.f1 = 1;
    CPy_INCREF(cpy_r_r65.f0);
    CPy_DECREF(cpy_r_r64);
    return cpy_r_r65;
CPyL42: ;
    tuple_T2OC __tmp2963 = { NULL, 2 };
    cpy_r_r66 = __tmp2963;
    return cpy_r_r66;
CPyL43: ;
    CPy_DECREF(cpy_r_nodes);
    goto CPyL11;
CPyL44: ;
    CPy_DecRef(cpy_r_nodes);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_modules);
    goto CPyL17;
CPyL46: ;
    CPy_DECREF(cpy_r_modules);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_modules);
    goto CPyL42;
CPyL48: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_result);
    goto CPyL42;
CPyL49: ;
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42.f2);
    goto CPyL33;
CPyL50: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r41);
    goto CPyL42;
CPyL51: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_node);
    goto CPyL42;
CPyL52: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL42;
CPyL53: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL35;
CPyL54: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL42;
}

PyObject *CPyPy_inspections___InspectionEngine___expression_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expression", 0};
    static CPyArg_Parser parser = {"O:expression_def", kwlist, 0};
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    tuple_T2OC retval = CPyDef_inspections___InspectionEngine___expression_def(arg_self, arg_expression);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2964 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2964);
    PyObject *__tmp2965 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp2965);
    PyTuple_SET_ITEM(retbox, 1, __tmp2965);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "expression_def", 440, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___missing_type(PyObject *cpy_r_self, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_alt_suggestion;
    char cpy_r_r1;
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
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_alt_suggestion = cpy_r_r0;
    cpy_r_r1 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_force_reload;
    if (cpy_r_r1) {
        goto CPyL2;
    } else
        goto CPyL7;
CPyL1: ;
    cpy_r_r2 = CPyStatics[2649]; /* ' or try --force-reload' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_alt_suggestion = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[2650]; /* 'No known type available for "' */
    cpy_r_r4 = PyObject_Type(cpy_r_expression);
    cpy_r_r5 = CPyStatics[197]; /* '__name__' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "missing_type", 477, CPyStatic_inspections___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "missing_type", 477, CPyStatic_inspections___globals, "str", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_r8 = CPyStatics[2651]; /* '" (maybe unreachable' */
    cpy_r_r9 = CPyStatics[72]; /* ')' */
    cpy_r_r10 = CPyStr_Build(5, cpy_r_r3, cpy_r_r7, cpy_r_r8, cpy_r_alt_suggestion, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_alt_suggestion);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "missing_type", 477, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL7: ;
    CPy_DECREF(cpy_r_alt_suggestion);
    goto CPyL1;
CPyL8: ;
    CPy_DecRef(cpy_r_alt_suggestion);
    goto CPyL6;
}

PyObject *CPyPy_inspections___InspectionEngine___missing_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expression", 0};
    static CPyArg_Parser parser = {"O:missing_type", kwlist, 0};
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___missing_type(arg_self, arg_expression);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "missing_type", 472, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___missing_node(PyObject *cpy_r_self, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[2652]; /* 'Cannot find definition for "' */
    cpy_r_r1 = PyObject_Type(cpy_r_expression);
    cpy_r_r2 = CPyStatics[197]; /* '__name__' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "missing_node", 483, CPyStatic_inspections___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "missing_node", 483, CPyStatic_inspections___globals, "str", cpy_r_r3);
        goto CPyL5;
    }
    cpy_r_r5 = CPyStatics[2653]; /* '" at ' */
    cpy_r_r6 = CPyDef_inspections___expr_span(cpy_r_expression);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "missing_node", 483, CPyStatic_inspections___globals);
        goto CPyL6;
    }
    cpy_r_r7 = CPyStr_Build(4, cpy_r_r0, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "missing_node", 483, CPyStatic_inspections___globals);
        goto CPyL5;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_inspections___InspectionEngine___missing_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expression", 0};
    static CPyArg_Parser parser = {"O:missing_node", kwlist, 0};
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___missing_node(arg_self, arg_expression);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "missing_node", 481, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___add_prefixes(PyObject *cpy_r_self, PyObject *cpy_r_result, PyObject *cpy_r_expression) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_prefixes;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 488, CPyStatic_inspections___globals);
        goto CPyL17;
    }
    cpy_r_prefixes = cpy_r_r0;
    cpy_r_r1 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_include_kind;
    if (!cpy_r_r1) goto CPyL7;
CPyL2: ;
    cpy_r_r2 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r3 = PyObject_Type(cpy_r_expression);
    cpy_r_r4 = CPyStatics[197]; /* '__name__' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 490, CPyStatic_inspections___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "add_prefixes", 490, CPyStatic_inspections___globals, "str", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = CPyStatics[163]; /* '' */
    cpy_r_r8 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r9[3] = {cpy_r_r2, cpy_r_r6, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 490, CPyStatic_inspections___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r6);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "add_prefixes", 490, CPyStatic_inspections___globals, "str", cpy_r_r11);
        goto CPyL18;
    }
    cpy_r_r13 = PyList_Append(cpy_r_prefixes, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 490, CPyStatic_inspections___globals);
        goto CPyL18;
    }
CPyL7: ;
    cpy_r_r15 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_include_span;
    if (!cpy_r_r15) goto CPyL10;
CPyL8: ;
    cpy_r_r16 = CPyDef_inspections___expr_span(cpy_r_expression);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 492, CPyStatic_inspections___globals);
        goto CPyL18;
    }
    cpy_r_r17 = PyList_Append(cpy_r_prefixes, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 492, CPyStatic_inspections___globals);
        goto CPyL18;
    }
CPyL10: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_prefixes)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (!cpy_r_r22) goto CPyL20;
    cpy_r_r23 = CPyStatics[171]; /* ':' */
    cpy_r_r24 = PyUnicode_Join(cpy_r_r23, cpy_r_prefixes);
    CPy_DECREF(cpy_r_prefixes);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 494, CPyStatic_inspections___globals);
        goto CPyL17;
    }
    cpy_r_r25 = CPyStatics[2654]; /* ' -> ' */
    cpy_r_r26 = PyUnicode_Concat(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 494, CPyStatic_inspections___globals);
        goto CPyL17;
    }
    cpy_r_prefix = cpy_r_r26;
    goto CPyL15;
CPyL14: ;
    cpy_r_r27 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r27);
    cpy_r_prefix = cpy_r_r27;
CPyL15: ;
    cpy_r_r28 = PyUnicode_Concat(cpy_r_prefix, cpy_r_result);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 497, CPyStatic_inspections___globals);
        goto CPyL17;
    }
    return cpy_r_r28;
CPyL17: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL18: ;
    CPy_DecRef(cpy_r_prefixes);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_prefixes);
    CPy_DecRef(cpy_r_r6);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_prefixes);
    goto CPyL14;
}

PyObject *CPyPy_inspections___InspectionEngine___add_prefixes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"result", "expression", 0};
    static CPyArg_Parser parser = {"OO:add_prefixes", kwlist, 0};
    PyObject *obj_result;
    PyObject *obj_expression;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_result, &obj_expression)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_result;
    if (likely(PyUnicode_Check(obj_result)))
        arg_result = obj_result;
    else {
        CPy_TypeError("str", obj_result); 
        goto fail;
    }
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___add_prefixes(arg_self, arg_result, arg_expression);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "add_prefixes", 487, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___run_inspection_by_exact_location(PyObject *cpy_r_self, PyObject *cpy_r_tree, CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column, PyObject *cpy_r_method) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_expression;
    tuple_T3OOO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_span;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T2OC cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_inspection_str;
    char cpy_r_r36;
    char cpy_r_success;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = CPyTagged_Subtract(cpy_r_column, 2);
    cpy_r_r1 = CPyDef_inspections___find_by_location(cpy_r_tree, cpy_r_line, cpy_r_r0, cpy_r_end_line, cpy_r_end_column);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 513, CPyStatic_inspections___globals);
        goto CPyL3;
    }
    cpy_r_expression = cpy_r_r1;
    goto CPyL12;
CPyL3: ;
    cpy_r_r2 = CPy_CatchError();
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 514, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    cpy_r_r6 = CPy_ExceptionMatches(cpy_r_r5);
    CPy_DecRef(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r7;
    cpy_r_r8 = CPyStatics[401]; /* 'error' */
    cpy_r_r9 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 515, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyDict_Build(1, cpy_r_r8, cpy_r_r9);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 515, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    CPy_RestoreExcInfo(cpy_r_r2);
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    return cpy_r_r10;
CPyL8: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL10;
    } else
        goto CPyL30;
CPyL9: ;
    CPy_Unreachable();
CPyL10: ;
    CPy_RestoreExcInfo(cpy_r_r2);
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    cpy_r_r11 = CPy_KeepPropagating();
    if (!cpy_r_r11) goto CPyL29;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_expression == cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL31;
    } else
        goto CPyL21;
CPyL13: ;
    cpy_r_r14 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 518, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    cpy_r_r15 = CPyStatics[171]; /* ':' */
    cpy_r_r16 = CPyTagged_Str(cpy_r_column);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 518, CPyStatic_inspections___globals);
        goto CPyL32;
    }
    cpy_r_r17 = CPyStatics[171]; /* ':' */
    cpy_r_r18 = CPyTagged_Str(cpy_r_end_line);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 518, CPyStatic_inspections___globals);
        goto CPyL33;
    }
    cpy_r_r19 = CPyStatics[171]; /* ':' */
    cpy_r_r20 = CPyTagged_Str(cpy_r_end_column);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 518, CPyStatic_inspections___globals);
        goto CPyL34;
    }
    cpy_r_r21 = CPyStr_Build(7, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 518, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    cpy_r_span = cpy_r_r21;
    cpy_r_r22 = CPyStatics[1730]; /* 'out' */
    cpy_r_r23 = CPyStatics[2655]; /* "Can't find expression at span " */
    cpy_r_r24 = CPyStr_Build(2, cpy_r_r23, cpy_r_span);
    CPy_DECREF(cpy_r_span);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 519, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    cpy_r_r25 = CPyStatics[1731]; /* 'err' */
    cpy_r_r26 = CPyStatics[163]; /* '' */
    cpy_r_r27 = CPyStatics[1701]; /* 'status' */
    cpy_r_r28 = CPyStatics[9016]; /* 1 */
    cpy_r_r29 = CPyDict_Build(3, cpy_r_r22, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 519, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    return cpy_r_r29;
CPyL21: ;
    if (likely(cpy_r_expression != Py_None))
        cpy_r_r30 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 521, CPyStatic_inspections___globals, "mypy.nodes.Expression", cpy_r_expression);
        goto CPyL29;
    }
    PyObject *cpy_r_r31[1] = {cpy_r_r30};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_method, cpy_r_r32, 1, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 521, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r30);
    PyObject *__tmp2966;
    if (unlikely(!(PyTuple_Check(cpy_r_r33) && PyTuple_GET_SIZE(cpy_r_r33) == 2))) {
        __tmp2966 = NULL;
        goto __LL2967;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r33, 0))))
        __tmp2966 = PyTuple_GET_ITEM(cpy_r_r33, 0);
    else {
        __tmp2966 = NULL;
    }
    if (__tmp2966 == NULL) goto __LL2967;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r33, 1))))
        __tmp2966 = PyTuple_GET_ITEM(cpy_r_r33, 1);
    else {
        __tmp2966 = NULL;
    }
    if (__tmp2966 == NULL) goto __LL2967;
    __tmp2966 = cpy_r_r33;
__LL2967: ;
    if (unlikely(__tmp2966 == NULL)) {
        CPy_TypeError("tuple[str, bool]", cpy_r_r33); cpy_r_r34 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp2968 = PyTuple_GET_ITEM(cpy_r_r33, 0);
        CPy_INCREF(__tmp2968);
        PyObject *__tmp2969;
        if (likely(PyUnicode_Check(__tmp2968)))
            __tmp2969 = __tmp2968;
        else {
            CPy_TypeError("str", __tmp2968); 
            __tmp2969 = NULL;
        }
        cpy_r_r34.f0 = __tmp2969;
        PyObject *__tmp2970 = PyTuple_GET_ITEM(cpy_r_r33, 1);
        char __tmp2971;
        if (unlikely(!PyBool_Check(__tmp2970))) {
            CPy_TypeError("bool", __tmp2970); __tmp2971 = 2;
        } else
            __tmp2971 = __tmp2970 == Py_True;
        cpy_r_r34.f1 = __tmp2971;
    }
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 521, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    cpy_r_r35 = cpy_r_r34.f0;
    CPy_INCREF(cpy_r_r35);
    cpy_r_inspection_str = cpy_r_r35;
    cpy_r_r36 = cpy_r_r34.f1;
    CPy_DECREF(cpy_r_r34.f0);
    cpy_r_success = cpy_r_r36;
    cpy_r_r37 = CPyStatics[1730]; /* 'out' */
    cpy_r_r38 = CPyStatics[1731]; /* 'err' */
    cpy_r_r39 = CPyStatics[163]; /* '' */
    cpy_r_r40 = CPyStatics[1701]; /* 'status' */
    if (!cpy_r_success) goto CPyL26;
    cpy_r_r41 = 0;
    goto CPyL27;
CPyL26: ;
    cpy_r_r41 = 2;
CPyL27: ;
    cpy_r_r42 = CPyTagged_StealAsObject(cpy_r_r41);
    cpy_r_r43 = CPyDict_Build(3, cpy_r_r37, cpy_r_inspection_str, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r42);
    CPy_DECREF(cpy_r_inspection_str);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 522, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    return cpy_r_r43;
CPyL29: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL30: ;
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    goto CPyL9;
CPyL31: ;
    CPy_DECREF(cpy_r_expression);
    goto CPyL13;
CPyL32: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL29;
}

PyObject *CPyPy_inspections___InspectionEngine___run_inspection_by_exact_location(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tree", "line", "column", "end_line", "end_column", "method", 0};
    static CPyArg_Parser parser = {"OOOOOO:run_inspection_by_exact_location", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_end_line;
    PyObject *obj_end_column;
    PyObject *obj_method;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_line, &obj_column, &obj_end_line, &obj_end_column, &obj_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    CPyTagged arg_end_line;
    if (likely(PyLong_Check(obj_end_line)))
        arg_end_line = CPyTagged_BorrowFromObject(obj_end_line);
    else {
        CPy_TypeError("int", obj_end_line); goto fail;
    }
    CPyTagged arg_end_column;
    if (likely(PyLong_Check(obj_end_column)))
        arg_end_column = CPyTagged_BorrowFromObject(obj_end_column);
    else {
        CPy_TypeError("int", obj_end_column); goto fail;
    }
    PyObject *arg_method = obj_method;
    PyObject *retval = CPyDef_inspections___InspectionEngine___run_inspection_by_exact_location(arg_self, arg_tree, arg_line, arg_column, arg_end_line, arg_end_column, arg_method);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_exact_location", 499, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___run_inspection_by_position(PyObject *cpy_r_self, PyObject *cpy_r_tree, CPyTagged cpy_r_line, CPyTagged cpy_r_column, PyObject *cpy_r_method) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_expressions;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_position;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_inspection_strs;
    CPyTagged cpy_r_status;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_expression;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OC cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_inspection_str;
    char cpy_r_r31;
    char cpy_r_success;
    char cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
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
    cpy_r_r0 = CPyTagged_Subtract(cpy_r_column, 2);
    cpy_r_r1 = CPyDef_inspections___find_all_by_location(cpy_r_tree, cpy_r_line, cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 535, CPyStatic_inspections___globals);
        goto CPyL26;
    }
    cpy_r_expressions = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_expressions)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL8;
    } else
        goto CPyL27;
CPyL2: ;
    cpy_r_r6 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 537, CPyStatic_inspections___globals);
        goto CPyL26;
    }
    cpy_r_r7 = CPyStatics[171]; /* ':' */
    cpy_r_r8 = CPyTagged_Str(cpy_r_column);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 537, CPyStatic_inspections___globals);
        goto CPyL28;
    }
    cpy_r_r9 = CPyStr_Build(3, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 537, CPyStatic_inspections___globals);
        goto CPyL26;
    }
    cpy_r_position = cpy_r_r9;
    cpy_r_r10 = CPyStatics[1730]; /* 'out' */
    cpy_r_r11 = CPyStatics[2656]; /* "Can't find any expressions at position " */
    cpy_r_r12 = CPyStr_Build(2, cpy_r_r11, cpy_r_position);
    CPy_DECREF(cpy_r_position);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 539, CPyStatic_inspections___globals);
        goto CPyL26;
    }
    cpy_r_r13 = CPyStatics[1731]; /* 'err' */
    cpy_r_r14 = CPyStatics[163]; /* '' */
    cpy_r_r15 = CPyStatics[1701]; /* 'status' */
    cpy_r_r16 = CPyStatics[9016]; /* 1 */
    cpy_r_r17 = CPyDict_Build(3, cpy_r_r10, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 538, CPyStatic_inspections___globals);
        goto CPyL26;
    }
    return cpy_r_r17;
CPyL8: ;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 544, CPyStatic_inspections___globals);
        goto CPyL29;
    }
    cpy_r_inspection_strs = cpy_r_r18;
    cpy_r_status = 0;
    cpy_r_r19 = 0;
CPyL10: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_expressions)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL30;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_expressions, cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_nodes___Expression)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection_by_position", 546, CPyStatic_inspections___globals, "mypy.nodes.Expression", cpy_r_r24);
        goto CPyL31;
    }
    cpy_r_expression = cpy_r_r25;
    PyObject *cpy_r_r26[1] = {cpy_r_expression};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_method, cpy_r_r27, 1, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 547, CPyStatic_inspections___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_expression);
    PyObject *__tmp2972;
    if (unlikely(!(PyTuple_Check(cpy_r_r28) && PyTuple_GET_SIZE(cpy_r_r28) == 2))) {
        __tmp2972 = NULL;
        goto __LL2973;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r28, 0))))
        __tmp2972 = PyTuple_GET_ITEM(cpy_r_r28, 0);
    else {
        __tmp2972 = NULL;
    }
    if (__tmp2972 == NULL) goto __LL2973;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r28, 1))))
        __tmp2972 = PyTuple_GET_ITEM(cpy_r_r28, 1);
    else {
        __tmp2972 = NULL;
    }
    if (__tmp2972 == NULL) goto __LL2973;
    __tmp2972 = cpy_r_r28;
__LL2973: ;
    if (unlikely(__tmp2972 == NULL)) {
        CPy_TypeError("tuple[str, bool]", cpy_r_r28); cpy_r_r29 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp2974 = PyTuple_GET_ITEM(cpy_r_r28, 0);
        CPy_INCREF(__tmp2974);
        PyObject *__tmp2975;
        if (likely(PyUnicode_Check(__tmp2974)))
            __tmp2975 = __tmp2974;
        else {
            CPy_TypeError("str", __tmp2974); 
            __tmp2975 = NULL;
        }
        cpy_r_r29.f0 = __tmp2975;
        PyObject *__tmp2976 = PyTuple_GET_ITEM(cpy_r_r28, 1);
        char __tmp2977;
        if (unlikely(!PyBool_Check(__tmp2976))) {
            CPy_TypeError("bool", __tmp2976); __tmp2977 = 2;
        } else
            __tmp2977 = __tmp2976 == Py_True;
        cpy_r_r29.f1 = __tmp2977;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 547, CPyStatic_inspections___globals);
        goto CPyL31;
    }
    cpy_r_r30 = cpy_r_r29.f0;
    CPy_INCREF(cpy_r_r30);
    cpy_r_inspection_str = cpy_r_r30;
    cpy_r_r31 = cpy_r_r29.f1;
    CPy_DECREF(cpy_r_r29.f0);
    cpy_r_success = cpy_r_r31;
    if (cpy_r_success) {
        goto CPyL16;
    } else
        goto CPyL33;
CPyL15: ;
    cpy_r_status = 2;
CPyL16: ;
    cpy_r_r32 = CPyStr_IsTrue(cpy_r_inspection_str);
    if (!cpy_r_r32) goto CPyL34;
    cpy_r_r33 = PyList_Append(cpy_r_inspection_strs, cpy_r_inspection_str);
    CPy_DECREF(cpy_r_inspection_str);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 551, CPyStatic_inspections___globals);
        goto CPyL31;
    }
CPyL18: ;
    cpy_r_r35 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r35;
    goto CPyL10;
CPyL19: ;
    cpy_r_r36 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_limit;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = cpy_r_r36 != 0;
    CPyTagged_DECREF(cpy_r_r36);
    if (!cpy_r_r37) goto CPyL23;
    cpy_r_r38 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_limit;
    CPyTagged_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyList_GetSlice(cpy_r_inspection_strs, 0, cpy_r_r38);
    CPy_DECREF(cpy_r_inspection_strs);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 553, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection_by_position", 553, CPyStatic_inspections___globals, "list", cpy_r_r39);
        goto CPyL35;
    }
    cpy_r_inspection_strs = cpy_r_r40;
CPyL23: ;
    cpy_r_r41 = CPyStatics[1730]; /* 'out' */
    cpy_r_r42 = CPyStatics[189]; /* '\n' */
    cpy_r_r43 = PyUnicode_Join(cpy_r_r42, cpy_r_inspection_strs);
    CPy_DECREF(cpy_r_inspection_strs);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 554, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    cpy_r_r44 = CPyStatics[1731]; /* 'err' */
    cpy_r_r45 = CPyStatics[163]; /* '' */
    cpy_r_r46 = CPyStatics[1701]; /* 'status' */
    cpy_r_r47 = CPyTagged_StealAsObject(cpy_r_status);
    cpy_r_r48 = CPyDict_Build(3, cpy_r_r41, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 554, CPyStatic_inspections___globals);
        goto CPyL26;
    }
    return cpy_r_r48;
CPyL26: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL27: ;
    CPy_DECREF(cpy_r_expressions);
    goto CPyL2;
CPyL28: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_expressions);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_expressions);
    goto CPyL19;
CPyL31: ;
    CPy_DecRef(cpy_r_expressions);
    CPy_DecRef(cpy_r_inspection_strs);
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_expressions);
    CPy_DecRef(cpy_r_inspection_strs);
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_expression);
    goto CPyL26;
CPyL33: ;
    CPyTagged_DECREF(cpy_r_status);
    goto CPyL15;
CPyL34: ;
    CPy_DECREF(cpy_r_inspection_str);
    goto CPyL18;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL26;
}

PyObject *CPyPy_inspections___InspectionEngine___run_inspection_by_position(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tree", "line", "column", "method", 0};
    static CPyArg_Parser parser = {"OOOO:run_inspection_by_position", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_method;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_line, &obj_column, &obj_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    PyObject *arg_method = obj_method;
    PyObject *retval = CPyDef_inspections___InspectionEngine___run_inspection_by_position(arg_self, arg_tree, arg_line, arg_column, arg_method);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "run_inspection_by_position", 524, CPyStatic_inspections___globals);
    return NULL;
}

tuple_T2OO CPyDef_inspections___InspectionEngine___find_module(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_ext;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2CO cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    tuple_T2OO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r30;
    PyObject *cpy_r__;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T2CO cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_state;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
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
    tuple_T2OO cpy_r_r59;
    tuple_T2OO cpy_r_r60;
    cpy_r_r0 = 0;
    cpy_r_r1 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 561, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module", 561, CPyStatic_inspections___globals, "str", cpy_r_r8);
        goto CPyL35;
    }
    cpy_r_ext = cpy_r_r9;
    cpy_r_r10 = CPyStr_Endswith(cpy_r_file, cpy_r_ext);
    CPy_DECREF(cpy_r_ext);
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r0 = 1;
    goto CPyL9;
CPyL8: ;
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL4;
CPyL9: ;
    if (cpy_r_r0) goto CPyL12;
    cpy_r_r12 = CPyStatics[401]; /* 'error' */
    cpy_r_r13 = CPyStatics[2657]; /* 'Source file is not a Python file' */
    cpy_r_r14 = CPyDict_Build(1, cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 562, CPyStatic_inspections___globals);
        goto CPyL35;
    }
    cpy_r_r15.f0 = 1;
    cpy_r_r15.f1 = cpy_r_r14;
    CPy_INCREF(cpy_r_r15.f1);
    CPy_DECREF(cpy_r_r15.f1);
    cpy_r_r16 = Py_None;
    cpy_r_r17.f0 = cpy_r_r16;
    cpy_r_r17.f1 = cpy_r_r14;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_r14);
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_finder;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyModule_os;
    cpy_r_r20 = CPyStatics[142]; /* 'path' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 565, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r22 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 565, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_file};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 565, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "find_module", 565, CPyStatic_inspections___globals, "str", cpy_r_r26);
        goto CPyL36;
    }
    cpy_r_r28 = CPyDef_find_sources___SourceFinder___crawl_up(cpy_r_r18, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r28.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 565, CPyStatic_inspections___globals);
        goto CPyL18;
    }
    cpy_r_r29 = cpy_r_r28.f0;
    CPy_INCREF(cpy_r_r29);
    cpy_r_module = cpy_r_r29;
    cpy_r_r30 = cpy_r_r28.f1;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r28.f0);
    CPy_DECREF(cpy_r_r28.f1);
    cpy_r__ = cpy_r_r30;
    CPy_DECREF(cpy_r__);
    goto CPyL26;
CPyL18: ;
    cpy_r_r31 = CPy_CatchError();
    cpy_r_r32 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    cpy_r_r33 = CPy_ExceptionMatches(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL22;
    cpy_r_r34 = CPyStatics[401]; /* 'error' */
    cpy_r_r35 = CPyStatics[2658]; /* 'Invalid source file name: ' */
    cpy_r_r36 = PyUnicode_Concat(cpy_r_r35, cpy_r_file);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 567, CPyStatic_inspections___globals);
        goto CPyL24;
    }
    cpy_r_r37 = CPyDict_Build(1, cpy_r_r34, cpy_r_r36);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 567, CPyStatic_inspections___globals);
        goto CPyL24;
    }
    cpy_r_r38.f0 = 1;
    cpy_r_r38.f1 = cpy_r_r37;
    CPy_INCREF(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f1);
    cpy_r_r39 = Py_None;
    cpy_r_r40.f0 = cpy_r_r39;
    cpy_r_r40.f1 = cpy_r_r37;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r37);
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    return cpy_r_r40;
CPyL22: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL37;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    cpy_r_r41 = CPy_KeepPropagating();
    if (!cpy_r_r41) goto CPyL35;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r42 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_fg_manager;
    cpy_r_r43 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r42)->_graph;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyDict_GetWithNone(cpy_r_r43, cpy_r_module);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 569, CPyStatic_inspections___globals);
        goto CPyL38;
    }
    if (Py_TYPE(cpy_r_r44) == CPyType_mypy___build___State)
        cpy_r_r45 = cpy_r_r44;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL2978;
    if (cpy_r_r44 == Py_None)
        cpy_r_r45 = cpy_r_r44;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL2978;
    CPy_TypeErrorTraceback("mypy/inspections.py", "find_module", 569, CPyStatic_inspections___globals, "mypy.build.State or None", cpy_r_r44);
    goto CPyL38;
__LL2978: ;
    cpy_r_state = cpy_r_r45;
    CPy_INCREF(cpy_r_state);
    CPy_DECREF(((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_module);
    ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_module = cpy_r_state;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_state == cpy_r_r47;
    if (!cpy_r_r48) goto CPyL39;
    cpy_r_r49 = CPyStatics[1730]; /* 'out' */
    cpy_r_r50 = CPyStatics[2659]; /* 'Unknown module: ' */
    cpy_r_r51 = CPyStr_Build(2, cpy_r_r50, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 573, CPyStatic_inspections___globals);
        goto CPyL40;
    }
    cpy_r_r52 = CPyStatics[1731]; /* 'err' */
    cpy_r_r53 = CPyStatics[163]; /* '' */
    cpy_r_r54 = CPyStatics[1701]; /* 'status' */
    cpy_r_r55 = CPyStatics[9016]; /* 1 */
    cpy_r_r56 = CPyDict_Build(3, cpy_r_r49, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 573, CPyStatic_inspections___globals);
        goto CPyL40;
    }
    cpy_r_r57 = cpy_r_r56;
    goto CPyL34;
CPyL32: ;
    cpy_r_r58 = PyDict_New();
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "find_module", 573, CPyStatic_inspections___globals);
        goto CPyL40;
    }
    cpy_r_r57 = cpy_r_r58;
CPyL34: ;
    cpy_r_r59.f0 = cpy_r_state;
    cpy_r_r59.f1 = cpy_r_r57;
    CPy_INCREF(cpy_r_r59.f0);
    CPy_INCREF(cpy_r_r59.f1);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_r57);
    return cpy_r_r59;
CPyL35: ;
    tuple_T2OO __tmp2979 = { NULL, NULL };
    cpy_r_r60 = __tmp2979;
    return cpy_r_r60;
CPyL36: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL23;
CPyL38: ;
    CPy_DecRef(cpy_r_module);
    goto CPyL35;
CPyL39: ;
    CPy_DECREF(cpy_r_module);
    goto CPyL32;
CPyL40: ;
    CPy_DecRef(cpy_r_state);
    goto CPyL35;
}

PyObject *CPyPy_inspections___InspectionEngine___find_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:find_module", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_inspections___InspectionEngine___find_module(arg_self, arg_file);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2980 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2980);
    PyObject *__tmp2981 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2981);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "find_module", 556, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___run_inspection(PyObject *cpy_r_self, PyObject *cpy_r_location, PyObject *cpy_r_method) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_pos;
    tuple_T3OOO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_err_dict;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_line;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_column;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_end_line;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_end_column;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = CPyDef_inspections___InspectionEngine___parse_location(cpy_r_self, cpy_r_location);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 584, CPyStatic_inspections___globals);
        goto CPyL3;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_file = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    cpy_r_pos = cpy_r_r2;
    goto CPyL12;
CPyL3: ;
    cpy_r_r3 = CPy_CatchError();
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 585, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPy_ExceptionMatches(cpy_r_r6);
    CPy_DecRef(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r8;
    cpy_r_r9 = CPyStatics[401]; /* 'error' */
    cpy_r_r10 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 586, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    cpy_r_r11 = CPyDict_Build(1, cpy_r_r9, cpy_r_r10);
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 586, CPyStatic_inspections___globals);
        goto CPyL10;
    }
    CPy_RestoreExcInfo(cpy_r_r3);
    CPy_DecRef(cpy_r_r3.f0);
    CPy_DecRef(cpy_r_r3.f1);
    CPy_DecRef(cpy_r_r3.f2);
    return cpy_r_r11;
CPyL8: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL10;
    } else
        goto CPyL51;
CPyL9: ;
    CPy_Unreachable();
CPyL10: ;
    CPy_RestoreExcInfo(cpy_r_r3);
    CPy_DecRef(cpy_r_r3.f0);
    CPy_DecRef(cpy_r_r3.f1);
    CPy_DecRef(cpy_r_r3.f2);
    cpy_r_r12 = CPy_KeepPropagating();
    if (!cpy_r_r12) goto CPyL50;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r13 = CPyDef_inspections___InspectionEngine___find_module(cpy_r_self, cpy_r_file);
    CPy_DECREF(cpy_r_file);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 588, CPyStatic_inspections___globals);
        goto CPyL52;
    }
    cpy_r_r14 = cpy_r_r13.f0;
    CPy_INCREF(cpy_r_r14);
    cpy_r_state = cpy_r_r14;
    cpy_r_r15 = cpy_r_r13.f1;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13.f0);
    CPy_DECREF(cpy_r_r13.f1);
    cpy_r_err_dict = cpy_r_r15;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_state == cpy_r_r16;
    if (cpy_r_r17) {
        goto CPyL53;
    } else
        goto CPyL54;
CPyL14: ;
    cpy_r_r18 = PyDict_Size(cpy_r_err_dict);
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (cpy_r_r20) {
        goto CPyL17;
    } else
        goto CPyL55;
CPyL15: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 590, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL17: ;
    return cpy_r_err_dict;
CPyL18: ;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r22 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 594, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_state);
        goto CPyL56;
    }
    cpy_r_r23 = ((mypy___build___StateObject *)cpy_r_r22)->_tree;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_r23 != cpy_r_r24;
    CPy_DECREF(cpy_r_r23);
    if (!cpy_r_r25) goto CPyL24;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r26 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 594, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_state);
        goto CPyL56;
    }
    cpy_r_r27 = ((mypy___build___StateObject *)cpy_r_r26)->_tree;
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 594, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_r27);
        goto CPyL56;
    }
    cpy_r_r29 = ((mypy___nodes___MypyFileObject *)cpy_r_r28)->_is_cache_skeleton;
    if (cpy_r_r29) goto CPyL24;
CPyL23: ;
    cpy_r_r30 = ((mypy___inspections___InspectionEngineObject *)cpy_r_self)->_force_reload;
    if (!cpy_r_r30) goto CPyL26;
CPyL24: ;
    CPy_INCREF(cpy_r_state);
    if (likely(cpy_r_state != Py_None))
        cpy_r_r31 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 595, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_state);
        goto CPyL56;
    }
    cpy_r_r32 = CPyDef_inspections___InspectionEngine___reload_module(cpy_r_self, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 595, CPyStatic_inspections___globals);
        goto CPyL56;
    }
CPyL26: ;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r33 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 596, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_state);
        goto CPyL56;
    }
    cpy_r_r34 = ((mypy___build___StateObject *)cpy_r_r33)->_tree;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_r34 != cpy_r_r35;
    if (cpy_r_r36) {
        goto CPyL30;
    } else
        goto CPyL57;
CPyL28: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 596, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_pos)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = cpy_r_r40 == 8;
    if (!cpy_r_r41) goto CPyL40;
    cpy_r_r42 = CPySequence_CheckUnpackCount(cpy_r_pos, 4);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 600, CPyStatic_inspections___globals);
        goto CPyL56;
    }
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_pos, 0);
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_pos, 2);
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_pos, 4);
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_pos, 6);
    CPy_DECREF(cpy_r_pos);
    if (likely(PyLong_Check(cpy_r_r44)))
        cpy_r_r48 = CPyTagged_FromObject(cpy_r_r44);
    else {
        CPy_TypeError("int", cpy_r_r44); cpy_r_r48 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 600, CPyStatic_inspections___globals);
        goto CPyL58;
    }
    cpy_r_line = cpy_r_r48;
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r49 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r49 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 600, CPyStatic_inspections___globals);
        goto CPyL59;
    }
    cpy_r_column = cpy_r_r49;
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r50 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r50 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 600, CPyStatic_inspections___globals);
        goto CPyL60;
    }
    cpy_r_end_line = cpy_r_r50;
    if (likely(PyLong_Check(cpy_r_r47)))
        cpy_r_r51 = CPyTagged_FromObject(cpy_r_r47);
    else {
        CPy_TypeError("int", cpy_r_r47); cpy_r_r51 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 600, CPyStatic_inspections___globals);
        goto CPyL61;
    }
    cpy_r_end_column = cpy_r_r51;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r52 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 602, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_state);
        goto CPyL62;
    }
    cpy_r_r53 = ((mypy___build___StateObject *)cpy_r_r52)->_tree;
    CPy_INCREF(cpy_r_r53);
    if (likely(cpy_r_r53 != Py_None))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 602, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_r53);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_state);
    cpy_r_r55 = CPyDef_inspections___InspectionEngine___run_inspection_by_exact_location(cpy_r_self, cpy_r_r54, cpy_r_line, cpy_r_column, cpy_r_end_line, cpy_r_end_column, cpy_r_method);
    CPy_DECREF(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    CPyTagged_DECREF(cpy_r_end_line);
    CPyTagged_DECREF(cpy_r_end_column);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 601, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    return cpy_r_r55;
CPyL40: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_pos)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = cpy_r_r58 == 4;
    if (cpy_r_r59) {
        goto CPyL43;
    } else
        goto CPyL63;
CPyL41: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 604, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r61 = CPySequence_CheckUnpackCount(cpy_r_pos, 2);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 606, CPyStatic_inspections___globals);
        goto CPyL56;
    }
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_pos, 0);
    cpy_r_r64 = CPyList_GetItemUnsafe(cpy_r_pos, 2);
    CPy_DECREF(cpy_r_pos);
    if (likely(PyLong_Check(cpy_r_r63)))
        cpy_r_r65 = CPyTagged_FromObject(cpy_r_r63);
    else {
        CPy_TypeError("int", cpy_r_r63); cpy_r_r65 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 606, CPyStatic_inspections___globals);
        goto CPyL64;
    }
    cpy_r_line = cpy_r_r65;
    if (likely(PyLong_Check(cpy_r_r64)))
        cpy_r_r66 = CPyTagged_FromObject(cpy_r_r64);
    else {
        CPy_TypeError("int", cpy_r_r64); cpy_r_r66 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 606, CPyStatic_inspections___globals);
        goto CPyL65;
    }
    cpy_r_column = cpy_r_r66;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r67 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 607, CPyStatic_inspections___globals, "mypy.build.State", cpy_r_state);
        goto CPyL66;
    }
    cpy_r_r68 = ((mypy___build___StateObject *)cpy_r_r67)->_tree;
    CPy_INCREF(cpy_r_r68);
    if (likely(cpy_r_r68 != Py_None))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "run_inspection", 607, CPyStatic_inspections___globals, "mypy.nodes.MypyFile", cpy_r_r68);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_state);
    cpy_r_r70 = CPyDef_inspections___InspectionEngine___run_inspection_by_position(cpy_r_self, cpy_r_r69, cpy_r_line, cpy_r_column, cpy_r_method);
    CPy_DECREF(cpy_r_r69);
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "run_inspection", 607, CPyStatic_inspections___globals);
        goto CPyL50;
    }
    return cpy_r_r70;
CPyL50: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL51: ;
    CPy_DecRef(cpy_r_r3.f0);
    CPy_DecRef(cpy_r_r3.f1);
    CPy_DecRef(cpy_r_r3.f2);
    goto CPyL9;
CPyL52: ;
    CPy_DecRef(cpy_r_pos);
    goto CPyL50;
CPyL53: ;
    CPy_DECREF(cpy_r_pos);
    CPy_DECREF(cpy_r_state);
    goto CPyL14;
CPyL54: ;
    CPy_DECREF(cpy_r_err_dict);
    goto CPyL18;
CPyL55: ;
    CPy_DECREF(cpy_r_err_dict);
    goto CPyL15;
CPyL56: ;
    CPy_DecRef(cpy_r_pos);
    CPy_DecRef(cpy_r_state);
    goto CPyL50;
CPyL57: ;
    CPy_DECREF(cpy_r_pos);
    CPy_DECREF(cpy_r_state);
    goto CPyL28;
CPyL58: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL50;
CPyL59: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r47);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_state);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_state);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    goto CPyL50;
CPyL63: ;
    CPy_DECREF(cpy_r_pos);
    CPy_DECREF(cpy_r_state);
    goto CPyL41;
CPyL64: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r64);
    goto CPyL50;
CPyL65: ;
    CPy_DecRef(cpy_r_state);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL50;
CPyL66: ;
    CPy_DecRef(cpy_r_state);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL50;
}

PyObject *CPyPy_inspections___InspectionEngine___run_inspection(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"location", "method", 0};
    static CPyArg_Parser parser = {"OO:run_inspection", kwlist, 0};
    PyObject *obj_location;
    PyObject *obj_method;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_location, &obj_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_location;
    if (likely(PyUnicode_Check(obj_location)))
        arg_location = obj_location;
    else {
        CPy_TypeError("str", obj_location); 
        goto fail;
    }
    PyObject *arg_method = obj_method;
    PyObject *retval = CPyDef_inspections___InspectionEngine___run_inspection(arg_self, arg_location, arg_method);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "run_inspection", 576, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___get_type(PyObject *cpy_r_self, PyObject *cpy_r_location) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[2660]; /* 'expr_type' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_type", 611, CPyStatic_inspections___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_inspections___InspectionEngine___run_inspection(cpy_r_self, cpy_r_location, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_type", 611, CPyStatic_inspections___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_inspections___InspectionEngine___get_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"location", 0};
    static CPyArg_Parser parser = {"O:get_type", kwlist, 0};
    PyObject *obj_location;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_location)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_location;
    if (likely(PyUnicode_Check(obj_location)))
        arg_location = obj_location;
    else {
        CPy_TypeError("str", obj_location); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___get_type(arg_self, arg_location);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "get_type", 609, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___get_attrs(PyObject *cpy_r_self, PyObject *cpy_r_location) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[2661]; /* 'expr_attrs' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_attrs", 615, CPyStatic_inspections___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_inspections___InspectionEngine___run_inspection(cpy_r_self, cpy_r_location, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_attrs", 615, CPyStatic_inspections___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_inspections___InspectionEngine___get_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"location", 0};
    static CPyArg_Parser parser = {"O:get_attrs", kwlist, 0};
    PyObject *obj_location;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_location)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_location;
    if (likely(PyUnicode_Check(obj_location)))
        arg_location = obj_location;
    else {
        CPy_TypeError("str", obj_location); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___get_attrs(arg_self, arg_location);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "get_attrs", 613, CPyStatic_inspections___globals);
    return NULL;
}

PyObject *CPyDef_inspections___InspectionEngine___get_definition(PyObject *cpy_r_self, PyObject *cpy_r_location) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r__;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = CPyStatics[2662]; /* 'expression_def' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 619, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    cpy_r_r2 = CPyDef_inspections___InspectionEngine___run_inspection(cpy_r_self, cpy_r_location, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 619, CPyStatic_inspections___globals);
        goto CPyL15;
    }
    cpy_r_result = cpy_r_r2;
    cpy_r_r3 = CPyStatics[1730]; /* 'out' */
    cpy_r_r4 = PyDict_Contains(cpy_r_result, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 620, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL14;
    cpy_r_r7 = CPyStatics[1730]; /* 'out' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_result, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 620, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 620, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) goto CPyL14;
    cpy_r_r12 = CPyStatics[171]; /* ':' */
    cpy_r_r13 = CPyStatics[369]; /* 'split' */
    cpy_r_r14 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r15[3] = {cpy_r_location, cpy_r_r12, cpy_r_r14};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r16, 9223372036854775810ULL, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 622, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_definition", 622, CPyStatic_inspections___globals, "list", cpy_r_r18);
        goto CPyL16;
    }
    cpy_r_r20 = CPySequence_CheckUnpackCount(cpy_r_r19, 2);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 622, CPyStatic_inspections___globals);
        goto CPyL17;
    }
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r19, 0);
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r19, 2);
    CPy_DECREF(cpy_r_r19);
    cpy_r__ = cpy_r_r22;
    CPy_DECREF(cpy_r__);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/inspections.py", "get_definition", 622, CPyStatic_inspections___globals, "str", cpy_r_r23);
        goto CPyL16;
    }
    cpy_r_location = cpy_r_r24;
    cpy_r_r25 = CPyStatics[2663]; /* 'No name or member expressions at ' */
    cpy_r_r26 = CPyStr_Build(2, cpy_r_r25, cpy_r_location);
    CPy_DECREF(cpy_r_location);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 623, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    cpy_r_r27 = CPyStatics[1730]; /* 'out' */
    cpy_r_r28 = CPyDict_SetItem(cpy_r_result, cpy_r_r27, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 623, CPyStatic_inspections___globals);
        goto CPyL16;
    }
    cpy_r_r30 = CPyStatics[1701]; /* 'status' */
    cpy_r_r31 = CPyStatics[9016]; /* 1 */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_result, cpy_r_r30, cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/inspections.py", "get_definition", 624, CPyStatic_inspections___globals);
        goto CPyL16;
    }
CPyL14: ;
    return cpy_r_result;
CPyL15: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL16: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r19);
    goto CPyL15;
}

PyObject *CPyPy_inspections___InspectionEngine___get_definition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"location", 0};
    static CPyArg_Parser parser = {"O:get_definition", kwlist, 0};
    PyObject *obj_location;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_location)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_inspections___InspectionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.inspections.InspectionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_location;
    if (likely(PyUnicode_Check(obj_location)))
        arg_location = obj_location;
    else {
        CPy_TypeError("str", obj_location); 
        goto fail;
    }
    PyObject *retval = CPyDef_inspections___InspectionEngine___get_definition(arg_self, arg_location);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/inspections.py", "get_definition", 617, CPyStatic_inspections___globals);
    return NULL;
}

char CPyDef_inspections_____top_level__(void) {
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
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
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
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
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
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", -1, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_inspections___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 1, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9300]; /* (('os', 'os', 'os'),) */
    cpy_r_r15 = CPyStatic_inspections___globals;
    cpy_r_r16 = CPyStatics[2664]; /* 'mypy/inspections.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL36;
    cpy_r_r19 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r20 = CPyStatics[76]; /* 'collections' */
    cpy_r_r21 = CPyStatic_inspections___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 4, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_collections = cpy_r_r22;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9428]; /* ('cmp_to_key',) */
    cpy_r_r24 = CPyStatics[2546]; /* 'functools' */
    cpy_r_r25 = CPyStatic_inspections___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 5, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_functools = cpy_r_r26;
    CPy_INCREF(CPyModule_functools);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9429]; /* ('Callable',) */
    cpy_r_r28 = CPyStatics[21]; /* 'typing' */
    cpy_r_r29 = CPyStatic_inspections___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 6, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9430]; /* ('State',) */
    cpy_r_r32 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r33 = CPyStatic_inspections___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 8, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___build = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9431]; /* ('InvalidSourceList', 'SourceFinder') */
    cpy_r_r36 = CPyStatics[1991]; /* 'mypy.find_sources' */
    cpy_r_r37 = CPyStatic_inspections___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 9, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___find_sources = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___find_sources);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9432]; /* ('format_type',) */
    cpy_r_r40 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r41 = CPyStatic_inspections___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 10, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___messages = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9433]; /* ('PYTHON_EXTENSIONS',) */
    cpy_r_r44 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r45 = CPyStatic_inspections___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 11, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___modulefinder = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___modulefinder);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9434]; /* ('LDEF', 'Decorator', 'Expression', 'FuncBase',
                                     'MemberExpr', 'MypyFile', 'Node', 'OverloadedFuncDef',
                                     'RefExpr', 'SymbolNode', 'TypeInfo', 'Var') */
    cpy_r_r48 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r49 = CPyStatic_inspections___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 12, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___nodes = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9435]; /* ('FineGrainedBuildManager',) */
    cpy_r_r52 = CPyStatics[1999]; /* 'mypy.server.update' */
    cpy_r_r53 = CPyStatic_inspections___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 26, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___server___update = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___server___update);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9436]; /* ('ExtendedTraverserVisitor',) */
    cpy_r_r56 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r57 = CPyStatic_inspections___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 27, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___traverser = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9437]; /* ('tuple_fallback',) */
    cpy_r_r60 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r61 = CPyStatic_inspections___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 28, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___typeops = cpy_r_r62;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[9438]; /* ('FunctionLike', 'Instance', 'LiteralType', 'ProperType',
                                     'TupleType', 'TypedDictType', 'TypeVarType',
                                     'UnionType', 'get_proper_type') */
    cpy_r_r64 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r65 = CPyStatic_inspections___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 29, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___types = cpy_r_r66;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[9094]; /* ('fill_typevars_with_any',) */
    cpy_r_r68 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r69 = CPyStatic_inspections___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 40, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    CPyModule_mypy___typevars = cpy_r_r70;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = (PyObject *)CPyType_traverser___ExtendedTraverserVisitor;
    cpy_r_r72 = PyTuple_Pack(1, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 129, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r73 = CPyStatics[1995]; /* 'mypy.inspections' */
    cpy_r_r74 = (PyObject *)CPyType_inspections___SearchVisitor_template;
    cpy_r_r75 = CPyType_FromTemplate(cpy_r_r74, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 129, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r76 = CPyDef_inspections___SearchVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", -1, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    cpy_r_r77 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r78 = CPyStatics[2272]; /* 'line' */
    cpy_r_r79 = CPyStatics[2273]; /* 'column' */
    cpy_r_r80 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r81 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r82 = CPyStatics[2666]; /* 'result' */
    cpy_r_r83 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r84 = PyTuple_Pack(6, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 129, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    cpy_r_r85 = PyObject_SetAttr(cpy_r_r75, cpy_r_r77, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 129, CPyStatic_inspections___globals);
        goto CPyL37;
    }
    CPyType_inspections___SearchVisitor = (PyTypeObject *)cpy_r_r75;
    CPy_INCREF(CPyType_inspections___SearchVisitor);
    cpy_r_r87 = CPyStatic_inspections___globals;
    cpy_r_r88 = CPyStatics[2667]; /* 'SearchVisitor' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 129, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r91 = (PyObject *)CPyType_traverser___ExtendedTraverserVisitor;
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 168, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r93 = CPyStatics[1995]; /* 'mypy.inspections' */
    cpy_r_r94 = (PyObject *)CPyType_inspections___SearchAllVisitor_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 168, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r96 = CPyDef_inspections___SearchAllVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", -1, CPyStatic_inspections___globals);
        goto CPyL38;
    }
    cpy_r_r97 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[2272]; /* 'line' */
    cpy_r_r99 = CPyStatics[2273]; /* 'column' */
    cpy_r_r100 = CPyStatics[2666]; /* 'result' */
    cpy_r_r101 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r102 = PyTuple_Pack(4, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 168, CPyStatic_inspections___globals);
        goto CPyL38;
    }
    cpy_r_r103 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 168, CPyStatic_inspections___globals);
        goto CPyL38;
    }
    CPyType_inspections___SearchAllVisitor = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_inspections___SearchAllVisitor);
    cpy_r_r105 = CPyStatic_inspections___globals;
    cpy_r_r106 = CPyStatics[2668]; /* 'SearchAllVisitor' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r105, cpy_r_r106, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 168, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r109 = NULL;
    cpy_r_r110 = CPyStatics[1995]; /* 'mypy.inspections' */
    cpy_r_r111 = (PyObject *)CPyType_inspections___InspectionEngine_template;
    cpy_r_r112 = CPyType_FromTemplate(cpy_r_r111, cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 193, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    cpy_r_r113 = CPyDef_inspections___InspectionEngine_trait_vtable_setup();
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", -1, CPyStatic_inspections___globals);
        goto CPyL39;
    }
    cpy_r_r114 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r115 = CPyStatics[2669]; /* 'fg_manager' */
    cpy_r_r116 = CPyStatics[2670]; /* 'finder' */
    cpy_r_r117 = CPyStatics[1729]; /* 'verbosity' */
    cpy_r_r118 = CPyStatics[1723]; /* 'limit' */
    cpy_r_r119 = CPyStatics[1724]; /* 'include_span' */
    cpy_r_r120 = CPyStatics[1725]; /* 'include_kind' */
    cpy_r_r121 = CPyStatics[1726]; /* 'include_object_attrs' */
    cpy_r_r122 = CPyStatics[1727]; /* 'union_attrs' */
    cpy_r_r123 = CPyStatics[1728]; /* 'force_reload' */
    cpy_r_r124 = CPyStatics[408]; /* 'module' */
    cpy_r_r125 = PyTuple_Pack(10, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 193, CPyStatic_inspections___globals);
        goto CPyL39;
    }
    cpy_r_r126 = PyObject_SetAttr(cpy_r_r112, cpy_r_r114, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 193, CPyStatic_inspections___globals);
        goto CPyL39;
    }
    CPyType_inspections___InspectionEngine = (PyTypeObject *)cpy_r_r112;
    CPy_INCREF(CPyType_inspections___InspectionEngine);
    cpy_r_r128 = CPyStatic_inspections___globals;
    cpy_r_r129 = CPyStatics[1994]; /* 'InspectionEngine' */
    cpy_r_r130 = CPyDict_SetItem(cpy_r_r128, cpy_r_r129, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/inspections.py", "<module>", 193, CPyStatic_inspections___globals);
        goto CPyL36;
    }
    return 1;
CPyL36: ;
    cpy_r_r132 = 2;
    return cpy_r_r132;
CPyL37: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_r112);
    goto CPyL36;
}
