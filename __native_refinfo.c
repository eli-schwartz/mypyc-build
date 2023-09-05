#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
refinfo___RefInfoVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef refinfo___RefInfoVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___refinfo___RefInfoVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___refinfo___RefInfoVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *refinfo___RefInfoVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_refinfo___RefInfoVisitor(PyObject *cpy_r_type_map);

static PyObject *
refinfo___RefInfoVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_refinfo___RefInfoVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = refinfo___RefInfoVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_refinfo___RefInfoVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
refinfo___RefInfoVisitor_traverse(mypy___refinfo___RefInfoVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_type_map);
    Py_VISIT(self->_data);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___refinfo___RefInfoVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___refinfo___RefInfoVisitorObject))));
    return 0;
}

static int
refinfo___RefInfoVisitor_clear(mypy___refinfo___RefInfoVisitorObject *self)
{
    Py_CLEAR(self->_type_map);
    Py_CLEAR(self->_data);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___refinfo___RefInfoVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___refinfo___RefInfoVisitorObject))));
    return 0;
}

static void
refinfo___RefInfoVisitor_dealloc(mypy___refinfo___RefInfoVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, refinfo___RefInfoVisitor_dealloc)
    refinfo___RefInfoVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem refinfo___RefInfoVisitor_vtable[101];
static CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_refinfo___RefInfoVisitor_trait_vtable_setup(void)
{
    CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_member_expr__NodeVisitor_glue,
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
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_trait_vtable, refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_offset_table, refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_member_expr__ExpressionVisitor_glue,
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
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_offset_table, refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
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
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_trait_vtable, refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_offset_table, refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_trait_vtable, refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_offset_table, refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem refinfo___RefInfoVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)refinfo___RefInfoVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def,
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
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_member_expr__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
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
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor_____init__,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_refinfo___RefInfoVisitor___record_ref_expr,
    };
    memcpy(refinfo___RefInfoVisitor_vtable, refinfo___RefInfoVisitor_vtable_scratch, sizeof(refinfo___RefInfoVisitor_vtable));
    return 1;
}

static PyObject *
refinfo___RefInfoVisitor_get_type_map(mypy___refinfo___RefInfoVisitorObject *self, void *closure);
static int
refinfo___RefInfoVisitor_set_type_map(mypy___refinfo___RefInfoVisitorObject *self, PyObject *value, void *closure);
static PyObject *
refinfo___RefInfoVisitor_get_data(mypy___refinfo___RefInfoVisitorObject *self, void *closure);
static int
refinfo___RefInfoVisitor_set_data(mypy___refinfo___RefInfoVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef refinfo___RefInfoVisitor_getseters[] = {
    {"type_map",
     (getter)refinfo___RefInfoVisitor_get_type_map, (setter)refinfo___RefInfoVisitor_set_type_map,
     NULL, NULL},
    {"data",
     (getter)refinfo___RefInfoVisitor_get_data, (setter)refinfo___RefInfoVisitor_set_data,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef refinfo___RefInfoVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_refinfo___RefInfoVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_refinfo___RefInfoVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_refinfo___RefInfoVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_refinfo___RefInfoVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_ref_expr",
     (PyCFunction)CPyPy_refinfo___RefInfoVisitor___record_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_refinfo___RefInfoVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RefInfoVisitor",
    .tp_new = refinfo___RefInfoVisitor_new,
    .tp_dealloc = (destructor)refinfo___RefInfoVisitor_dealloc,
    .tp_traverse = (traverseproc)refinfo___RefInfoVisitor_traverse,
    .tp_clear = (inquiry)refinfo___RefInfoVisitor_clear,
    .tp_getset = refinfo___RefInfoVisitor_getseters,
    .tp_methods = refinfo___RefInfoVisitor_methods,
    .tp_init = refinfo___RefInfoVisitor_init,
    .tp_members = refinfo___RefInfoVisitor_members,
    .tp_basicsize = sizeof(mypy___refinfo___RefInfoVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___refinfo___RefInfoVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___refinfo___RefInfoVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_refinfo___RefInfoVisitor_template = &CPyType_refinfo___RefInfoVisitor_template_;

static PyObject *
refinfo___RefInfoVisitor_setup(PyTypeObject *type)
{
    mypy___refinfo___RefInfoVisitorObject *self;
    self = (mypy___refinfo___RefInfoVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = refinfo___RefInfoVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_refinfo___RefInfoVisitor(PyObject *cpy_r_type_map)
{
    PyObject *self = refinfo___RefInfoVisitor_setup(CPyType_refinfo___RefInfoVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_refinfo___RefInfoVisitor_____init__(self, cpy_r_type_map);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
refinfo___RefInfoVisitor_get_type_map(mypy___refinfo___RefInfoVisitorObject *self, void *closure)
{
    if (unlikely(self->_type_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_map' of 'RefInfoVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_map);
    PyObject *retval = self->_type_map;
    return retval;
}

static int
refinfo___RefInfoVisitor_set_type_map(mypy___refinfo___RefInfoVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RefInfoVisitor' object attribute 'type_map' cannot be deleted");
        return -1;
    }
    if (self->_type_map != NULL) {
        CPy_DECREF(self->_type_map);
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
    self->_type_map = tmp;
    return 0;
}

static PyObject *
refinfo___RefInfoVisitor_get_data(mypy___refinfo___RefInfoVisitorObject *self, void *closure)
{
    if (unlikely(self->_data == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'data' of 'RefInfoVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_data);
    PyObject *retval = self->_data;
    return retval;
}

static int
refinfo___RefInfoVisitor_set_data(mypy___refinfo___RefInfoVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RefInfoVisitor' object attribute 'data' cannot be deleted");
        return -1;
    }
    if (self->_data != NULL) {
        CPy_DECREF(self->_data);
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
    self->_data = tmp;
    return 0;
}
static PyMethodDef refinfomodule_methods[] = {
    {"type_fullname", (PyCFunction)CPyPy_refinfo___type_fullname, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_undocumented_ref_info_json", (PyCFunction)CPyPy_refinfo___get_undocumented_ref_info_json, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef refinfomodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.refinfo",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    refinfomodule_methods
};

PyObject *CPyInit_mypy___refinfo(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___refinfo_internal) {
        Py_INCREF(CPyModule_mypy___refinfo_internal);
        return CPyModule_mypy___refinfo_internal;
    }
    CPyModule_mypy___refinfo_internal = PyModule_Create(&refinfomodule);
    if (unlikely(CPyModule_mypy___refinfo_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___refinfo_internal, "__name__");
    CPyStatic_refinfo___globals = PyModule_GetDict(CPyModule_mypy___refinfo_internal);
    if (unlikely(CPyStatic_refinfo___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_refinfo_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___refinfo_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___refinfo_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_refinfo___RefInfoVisitor);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_type_map) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor_____init__(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "__init__", 31, CPyStatic_refinfo___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_type_map);
    if (((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_type_map != NULL) {
        CPy_DECREF(((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_type_map);
    }
    ((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_type_map = cpy_r_type_map;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/refinfo.py", "__init__", 32, CPyStatic_refinfo___globals);
        goto CPyL5;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "__init__", 33, CPyStatic_refinfo___globals);
        goto CPyL5;
    }
    if (((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_data != NULL) {
        CPy_DECREF(((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_data);
    }
    ((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_data = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/refinfo.py", "__init__", 33, CPyStatic_refinfo___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_refinfo___RefInfoVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type_map", 0};
    PyObject *obj_type_map;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_type_map)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor_____init__(arg_self, arg_type_map);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "__init__", 30, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_name_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "visit_name_expr", 36, CPyStatic_refinfo___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r1 = CPyDef_refinfo___RefInfoVisitor___record_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "visit_name_expr", 37, CPyStatic_refinfo___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor___visit_name_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_name_expr", 35, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___RefInfoVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___RefInfoVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___RefInfoVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___RefInfoVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_member_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "visit_member_expr", 40, CPyStatic_refinfo___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_refinfo___RefInfoVisitor___record_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "visit_member_expr", 41, CPyStatic_refinfo___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor___visit_member_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_member_expr", 39, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor___visit_member_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_member_expr__TraverserVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___RefInfoVisitor___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___RefInfoVisitor___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___RefInfoVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___RefInfoVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_func) {
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_expanded;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_expanded;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely((Py_TYPE(cpy_r_r11) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r11) == CPyType_nodes___LambdaExpr)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "visit_func_def", 45, CPyStatic_refinfo___globals, "mypy.nodes.FuncItem", cpy_r_r11);
        goto CPyL12;
    }
    cpy_r_item = cpy_r_r12;
    cpy_r_r13 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___FuncDef))
        cpy_r_r17 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "visit_func_def", 47, CPyStatic_refinfo___globals, "mypy.nodes.FuncDef", cpy_r_item);
        goto CPyL12;
    }
    cpy_r_r18 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "visit_func_def", 47, CPyStatic_refinfo___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r19 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r19;
    goto CPyL2;
CPyL8: ;
    cpy_r_r20 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_func);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "visit_func_def", 49, CPyStatic_refinfo___globals);
        goto CPyL10;
    }
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL11: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL7;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor___visit_func_def(arg_self, arg_func);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_func_def", 43, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___RefInfoVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___RefInfoVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___RefInfoVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___RefInfoVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo___RefInfoVisitor___record_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
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
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_tfn;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fullname = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_kind;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[9015]; /* 0 */
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 3);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 53, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 53, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 53, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
CPyL4: ;
    cpy_r_r7 = PySequence_Contains(cpy_r_r6, cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 53, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    cpy_r_r9 = cpy_r_r7;
    if (cpy_r_r9) {
        goto CPyL48;
    } else
        goto CPyL8;
CPyL6: ;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 54, CPyStatic_refinfo___globals);
        goto CPyL46;
    }
CPyL7: ;
    cpy_r_fullname = cpy_r_r10;
    goto CPyL40;
CPyL8: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL40;
    cpy_r_r15 = ((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/refinfo.py", "record_ref_expr", "RefInfoVisitor", "type_map", 56, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r15);
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r16 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 56, CPyStatic_refinfo___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL49;
    }
    cpy_r_r17 = ((mypy___nodes___MemberExprObject *)cpy_r_r16)->_expr;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDict_GetWithNone(cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 56, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    if (PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type))
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL4970;
    if (cpy_r_r18 == Py_None)
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL4970;
    CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 56, CPyStatic_refinfo___globals, "mypy.types.Type or None", cpy_r_r18);
    goto CPyL47;
__LL4970: ;
    cpy_r_typ = cpy_r_r19;
    cpy_r_r20 = Py_None;
    CPy_INCREF(cpy_r_r20);
    cpy_r_sym = cpy_r_r20;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r21 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 58, CPyStatic_refinfo___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL50;
    }
    cpy_r_r22 = ((mypy___nodes___MemberExprObject *)cpy_r_r21)->_expr;
    cpy_r_r23 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL16;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL17;
CPyL16: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    cpy_r_r27 = cpy_r_r31;
CPyL17: ;
    if (!cpy_r_r27) goto CPyL19;
    cpy_r_r32 = cpy_r_r27;
    goto CPyL20;
CPyL19: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    cpy_r_r32 = cpy_r_r36;
CPyL20: ;
    if (cpy_r_r32) {
        goto CPyL51;
    } else
        goto CPyL24;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r37 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 59, CPyStatic_refinfo___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL52;
    }
    cpy_r_r38 = ((mypy___nodes___MemberExprObject *)cpy_r_r37)->_expr;
    if (likely((Py_TYPE(cpy_r_r38) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r38) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r38) == CPyType_nodes___RefExpr)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 59, CPyStatic_refinfo___globals, "mypy.nodes.RefExpr", cpy_r_r38);
        goto CPyL52;
    }
    cpy_r_r40 = ((mypy___nodes___RefExprObject *)cpy_r_r39)->_node;
    CPy_INCREF(cpy_r_r40);
    cpy_r_sym = cpy_r_r40;
CPyL24: ;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_typ != cpy_r_r41;
    if (!cpy_r_r42) goto CPyL53;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r43 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 61, CPyStatic_refinfo___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL54;
    }
    cpy_r_r44 = CPyDef_refinfo___type_fullname(cpy_r_r43, cpy_r_sym);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_sym);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 61, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    cpy_r_tfn = cpy_r_r44;
    cpy_r_r45 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r46 = cpy_r_tfn != cpy_r_r45;
    if (!cpy_r_r46) goto CPyL55;
    CPy_INCREF(cpy_r_tfn);
    if (likely(cpy_r_tfn != Py_None))
        cpy_r_r47 = cpy_r_tfn;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 61, CPyStatic_refinfo___globals, "str", cpy_r_tfn);
        goto CPyL56;
    }
    cpy_r_r48 = CPyStr_IsTrue(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (cpy_r_r48) {
        goto CPyL57;
    } else
        goto CPyL55;
CPyL30: ;
    if (likely(cpy_r_tfn != Py_None))
        cpy_r_r49 = cpy_r_tfn;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 63, CPyStatic_refinfo___globals, "str", cpy_r_tfn);
        goto CPyL46;
    }
    cpy_r_r50 = CPyStatics[224]; /* '.' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r51 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 63, CPyStatic_refinfo___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL58;
    }
    cpy_r_r52 = ((mypy___nodes___MemberExprObject *)cpy_r_r51)->_name;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyStr_Build(3, cpy_r_r49, cpy_r_r50, cpy_r_r52);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 63, CPyStatic_refinfo___globals);
        goto CPyL46;
    }
    cpy_r_fullname = cpy_r_r53;
CPyL34: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_fullname != cpy_r_r54;
    if (!cpy_r_r55) goto CPyL59;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r56 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 52, CPyStatic_refinfo___globals, "str", cpy_r_fullname);
        goto CPyL47;
    }
    cpy_r_r57 = CPyStr_IsTrue(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (cpy_r_r57) {
        goto CPyL40;
    } else
        goto CPyL59;
CPyL37: ;
    cpy_r_r58 = CPyStatics[4659]; /* '*.' */
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r59 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 65, CPyStatic_refinfo___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL46;
    }
    cpy_r_r60 = ((mypy___nodes___MemberExprObject *)cpy_r_r59)->_name;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = CPyStr_Build(2, cpy_r_r58, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 65, CPyStatic_refinfo___globals);
        goto CPyL46;
    }
    cpy_r_fullname = cpy_r_r61;
CPyL40: ;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_fullname != cpy_r_r62;
    if (!cpy_r_r63) goto CPyL60;
    cpy_r_r64 = ((mypy___refinfo___RefInfoVisitorObject *)cpy_r_self)->_data;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypy/refinfo.py", "record_ref_expr", "RefInfoVisitor", "data", 67, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r64);
CPyL42: ;
    cpy_r_r65 = CPyStatics[2272]; /* 'line' */
    cpy_r_r66 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[2273]; /* 'column' */
    cpy_r_r68 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_column;
    CPyTagged_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[1629]; /* 'target' */
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r70 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "record_ref_expr", 67, CPyStatic_refinfo___globals, "str", cpy_r_fullname);
        goto CPyL61;
    }
    cpy_r_r71 = CPyTagged_StealAsObject(cpy_r_r66);
    cpy_r_r72 = CPyTagged_StealAsObject(cpy_r_r68);
    cpy_r_r73 = CPyDict_Build(3, cpy_r_r65, cpy_r_r71, cpy_r_r67, cpy_r_r72, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 67, CPyStatic_refinfo___globals);
        goto CPyL62;
    }
    cpy_r_r74 = PyList_Append(cpy_r_r64, cpy_r_r73);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 67, CPyStatic_refinfo___globals);
        goto CPyL46;
    }
CPyL45: ;
    return 1;
CPyL46: ;
    cpy_r_r76 = 2;
    return cpy_r_r76;
CPyL47: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL46;
CPyL48: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL6;
CPyL49: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r15);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_sym);
    goto CPyL46;
CPyL51: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL21;
CPyL52: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_typ);
    goto CPyL46;
CPyL53: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_sym);
    goto CPyL34;
CPyL54: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_sym);
    goto CPyL46;
CPyL55: ;
    CPy_DECREF(cpy_r_tfn);
    goto CPyL34;
CPyL56: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_tfn);
    goto CPyL46;
CPyL57: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL30;
CPyL58: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL46;
CPyL59: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL37;
CPyL60: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL45;
CPyL61: ;
    CPy_DecRef(cpy_r_r64);
    CPyTagged_DecRef(cpy_r_r66);
    CPyTagged_DecRef(cpy_r_r68);
    goto CPyL46;
CPyL62: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL46;
}

PyObject *CPyPy_refinfo___RefInfoVisitor___record_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:record_ref_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_refinfo___RefInfoVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.refinfo.RefInfoVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_refinfo___RefInfoVisitor___record_ref_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "record_ref_expr", 51, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___type_fullname(PyObject *cpy_r_typ, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
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
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
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
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    if (cpy_r_node != NULL) goto CPyL41;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_node = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 71, CPyStatic_refinfo___globals);
        goto CPyL42;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 71, CPyStatic_refinfo___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL42;
    }
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___Instance;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) {
        goto CPyL43;
    } else
        goto CPyL8;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 73, CPyStatic_refinfo___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL44;
    }
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_r8, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 73, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
CPyL7: ;
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (cpy_r_r13) {
        goto CPyL45;
    } else
        goto CPyL12;
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r14 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 75, CPyStatic_refinfo___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL44;
    }
    cpy_r_r15 = ((mypy___types___TypeTypeObject *)cpy_r_r14)->_item;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_refinfo___type_fullname(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 75, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL15;
CPyL14: ;
    cpy_r_r23 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL15: ;
    if (!cpy_r_r22) goto CPyL46;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r27 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 76, CPyStatic_refinfo___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL47;
    }
    cpy_r_r28 = CPY_GET_METHOD(cpy_r_r27, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r27); /* is_type_obj */
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 76, CPyStatic_refinfo___globals);
        goto CPyL47;
    }
    if (!cpy_r_r28) goto CPyL46;
    cpy_r_r29 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL21;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL22;
CPyL21: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    cpy_r_r33 = cpy_r_r37;
CPyL22: ;
    if (cpy_r_r33) {
        goto CPyL48;
    } else
        goto CPyL49;
CPyL23: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r38 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 78, CPyStatic_refinfo___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL40;
    }
    cpy_r_r39 = CPY_GET_ATTR(cpy_r_r38, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 78, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
CPyL25: ;
    return cpy_r_r39;
CPyL26: ;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r40 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 79, CPyStatic_refinfo___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL44;
    }
    cpy_r_r41 = ((mypy___types___FunctionLikeObject *)cpy_r_r40)->_fallback;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/refinfo.py", "type_fullname", "FunctionLike", "fallback", 79, CPyStatic_refinfo___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r41);
CPyL28: ;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_refinfo___type_fullname(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 79, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
    return cpy_r_r43;
CPyL30: ;
    cpy_r_r44 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r48 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 81, CPyStatic_refinfo___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL40;
    }
    cpy_r_r49 = CPyDef_typeops___tuple_fallback(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 81, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_refinfo___type_fullname(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 81, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
    return cpy_r_r51;
CPyL35: ;
    cpy_r_r52 = (PyObject *)CPyType_types___TypeVarLikeType;
    cpy_r_r53 = CPy_TypeCheck(cpy_r_typ, cpy_r_r52);
    if (!cpy_r_r53) goto CPyL50;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___TypeVarLikeType)))
        cpy_r_r54 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/refinfo.py", "type_fullname", 83, CPyStatic_refinfo___globals, "mypy.types.TypeVarLikeType", cpy_r_typ);
        goto CPyL44;
    }
    cpy_r_r55 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_r54)->_upper_bound;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r56 = NULL;
    cpy_r_r57 = CPyDef_refinfo___type_fullname(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 83, CPyStatic_refinfo___globals);
        goto CPyL40;
    }
    return cpy_r_r57;
CPyL39: ;
    cpy_r_r58 = Py_None;
    CPy_INCREF(cpy_r_r58);
    return cpy_r_r58;
CPyL40: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL41: ;
    CPy_INCREF(cpy_r_node);
    goto CPyL2;
CPyL42: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL5;
CPyL44: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL40;
CPyL45: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL9;
CPyL46: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL30;
CPyL47: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_node);
    goto CPyL40;
CPyL48: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL23;
CPyL49: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL26;
CPyL50: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL39;
}

PyObject *CPyPy_refinfo___type_fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "node", 0};
    static CPyArg_Parser parser = {"O|O:type_fullname", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_node = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_node)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_node;
    if (obj_node == NULL) {
        arg_node = NULL;
        goto __LL4971;
    }
    if (PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL4971;
    if (obj_node == Py_None)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL4971;
    CPy_TypeError("mypy.nodes.SymbolNode or None", obj_node); 
    goto fail;
__LL4971: ;
    PyObject *retval = CPyDef_refinfo___type_fullname(arg_typ, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "type_fullname", 70, CPyStatic_refinfo___globals);
    return NULL;
}

PyObject *CPyDef_refinfo___get_undocumented_ref_info_json(PyObject *cpy_r_tree, PyObject *cpy_r_type_map) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_refinfo___RefInfoVisitor(cpy_r_type_map);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "get_undocumented_ref_info_json", 90, CPyStatic_refinfo___globals);
        goto CPyL4;
    }
    cpy_r_visitor = cpy_r_r0;
    cpy_r_r1 = CPyDef_nodes___MypyFile___accept(cpy_r_tree, cpy_r_visitor);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "get_undocumented_ref_info_json", 91, CPyStatic_refinfo___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL2: ;
    cpy_r_r2 = ((mypy___refinfo___RefInfoVisitorObject *)cpy_r_visitor)->_data;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'data' of 'RefInfoVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "get_undocumented_ref_info_json", 92, CPyStatic_refinfo___globals);
        goto CPyL4;
    }
CPyL3: ;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL5: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL4;
CPyL6: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_refinfo___get_undocumented_ref_info_json(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tree", "type_map", 0};
    static CPyArg_Parser parser = {"OO:get_undocumented_ref_info_json", kwlist, 0};
    PyObject *obj_tree;
    PyObject *obj_type_map;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tree, &obj_type_map)) {
        return NULL;
    }
    PyObject *arg_tree;
    if (likely(Py_TYPE(obj_tree) == CPyType_nodes___MypyFile))
        arg_tree = obj_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_tree); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    PyObject *retval = CPyDef_refinfo___get_undocumented_ref_info_json(arg_tree, arg_type_map);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/refinfo.py", "get_undocumented_ref_info_json", 87, CPyStatic_refinfo___globals);
    return NULL;
}

char CPyDef_refinfo_____top_level__(void) {
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
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", -1, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_refinfo___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 3, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9639]; /* ('LDEF', 'Expression', 'FuncDef', 'MemberExpr',
                                    'MypyFile', 'NameExpr', 'RefExpr', 'SymbolNode',
                                    'TypeInfo') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_refinfo___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 5, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r14 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r15 = CPyStatic_refinfo___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 16, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    CPyModule_mypy___traverser = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9437]; /* ('tuple_fallback',) */
    cpy_r_r18 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r19 = CPyStatic_refinfo___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 17, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typeops = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9640]; /* ('FunctionLike', 'Instance', 'TupleType', 'Type',
                                     'TypeType', 'TypeVarLikeType', 'get_proper_type') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_refinfo___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 18, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r26 = PyTuple_Pack(1, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 29, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    cpy_r_r27 = CPyStatics[499]; /* 'mypy.refinfo' */
    cpy_r_r28 = (PyObject *)CPyType_refinfo___RefInfoVisitor_template;
    cpy_r_r29 = CPyType_FromTemplate(cpy_r_r28, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 29, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    cpy_r_r30 = CPyDef_refinfo___RefInfoVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", -1, CPyStatic_refinfo___globals);
        goto CPyL16;
    }
    cpy_r_r31 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r32 = CPyStatics[4340]; /* 'type_map' */
    cpy_r_r33 = CPyStatics[671]; /* 'data' */
    cpy_r_r34 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r35 = PyTuple_Pack(3, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 29, CPyStatic_refinfo___globals);
        goto CPyL16;
    }
    cpy_r_r36 = PyObject_SetAttr(cpy_r_r29, cpy_r_r31, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 29, CPyStatic_refinfo___globals);
        goto CPyL16;
    }
    CPyType_refinfo___RefInfoVisitor = (PyTypeObject *)cpy_r_r29;
    CPy_INCREF(CPyType_refinfo___RefInfoVisitor);
    cpy_r_r38 = CPyStatic_refinfo___globals;
    cpy_r_r39 = CPyStatics[4660]; /* 'RefInfoVisitor' */
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/refinfo.py", "<module>", 29, CPyStatic_refinfo___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL16: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL15;
}
