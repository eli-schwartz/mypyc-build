#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
treetransform___TransformVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef treetransform___TransformVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___treetransform___TransformVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___treetransform___TransformVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *treetransform___TransformVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_treetransform___TransformVisitor(void);

static PyObject *
treetransform___TransformVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_treetransform___TransformVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = treetransform___TransformVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_treetransform___TransformVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
treetransform___TransformVisitor_traverse(mypy___treetransform___TransformVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_var_map);
    Py_VISIT(self->_func_placeholder_map);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___treetransform___TransformVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___treetransform___TransformVisitorObject))));
    return 0;
}

static int
treetransform___TransformVisitor_clear(mypy___treetransform___TransformVisitorObject *self)
{
    Py_CLEAR(self->_var_map);
    Py_CLEAR(self->_func_placeholder_map);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___treetransform___TransformVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___treetransform___TransformVisitorObject))));
    return 0;
}

static void
treetransform___TransformVisitor_dealloc(mypy___treetransform___TransformVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, treetransform___TransformVisitor_dealloc)
    treetransform___TransformVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem treetransform___TransformVisitor_vtable[118];
static CPyVTableItem treetransform___TransformVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t treetransform___TransformVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem treetransform___TransformVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t treetransform___TransformVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem treetransform___TransformVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t treetransform___TransformVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_treetransform___TransformVisitor_trait_vtable_setup(void)
{
    CPyVTableItem treetransform___TransformVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit__promote_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_temp_node__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___NodeVisitor_trait_vtable, treetransform___TransformVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t treetransform___TransformVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___NodeVisitor_offset_table, treetransform___TransformVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_temp_node__ExpressionVisitor_glue,
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_offset_table, treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem treetransform___TransformVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___StatementVisitor_trait_vtable, treetransform___TransformVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t treetransform___TransformVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___StatementVisitor_offset_table, treetransform___TransformVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem treetransform___TransformVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___PatternVisitor_trait_vtable, treetransform___TransformVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t treetransform___TransformVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___TransformVisitor_mypy___visitor___PatternVisitor_offset_table, treetransform___TransformVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(treetransform___TransformVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem treetransform___TransformVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)treetransform___TransformVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor_____init__,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___copy_argument,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___copy_function_attributes,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_block,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_var,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___duplicate_assignment,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___duplicate_name,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___copy_ref,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___duplicate_generator,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___node,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___mypyfile,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___block,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_block,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___statements,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___expressions,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_expressions,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___blocks,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___names,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_names,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___type,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_type,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___types,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
    };
    memcpy(treetransform___TransformVisitor_vtable, treetransform___TransformVisitor_vtable_scratch, sizeof(treetransform___TransformVisitor_vtable));
    return 1;
}

static PyObject *
treetransform___TransformVisitor_get_test_only(mypy___treetransform___TransformVisitorObject *self, void *closure);
static int
treetransform___TransformVisitor_set_test_only(mypy___treetransform___TransformVisitorObject *self, PyObject *value, void *closure);
static PyObject *
treetransform___TransformVisitor_get_var_map(mypy___treetransform___TransformVisitorObject *self, void *closure);
static int
treetransform___TransformVisitor_set_var_map(mypy___treetransform___TransformVisitorObject *self, PyObject *value, void *closure);
static PyObject *
treetransform___TransformVisitor_get_func_placeholder_map(mypy___treetransform___TransformVisitorObject *self, void *closure);
static int
treetransform___TransformVisitor_set_func_placeholder_map(mypy___treetransform___TransformVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef treetransform___TransformVisitor_getseters[] = {
    {"test_only",
     (getter)treetransform___TransformVisitor_get_test_only, (setter)treetransform___TransformVisitor_set_test_only,
     NULL, NULL},
    {"var_map",
     (getter)treetransform___TransformVisitor_get_var_map, (setter)treetransform___TransformVisitor_set_var_map,
     NULL, NULL},
    {"func_placeholder_map",
     (getter)treetransform___TransformVisitor_get_func_placeholder_map, (setter)treetransform___TransformVisitor_set_func_placeholder_map,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef treetransform___TransformVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_treetransform___TransformVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy_argument",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___copy_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy_function_attributes",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___copy_function_attributes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded_func_def",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_overloaded_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_global_decl",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_global_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_nonlocal_decl",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_nonlocal_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_expression_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_expression_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"duplicate_assignment",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___duplicate_assignment,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_operator_assignment_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_operator_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_while_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_while_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_return_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_assert_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_del_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_del_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_if_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_if_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_break_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_break_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_continue_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_continue_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_pass_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_pass_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_raise_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_try_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_try_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_as_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_as_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_or_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_or_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_value_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_value_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_singleton_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_singleton_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_sequence_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_sequence_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_starred_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_starred_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mapping_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_mapping_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_class_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"duplicate_name",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___duplicate_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy_ref",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___copy_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_yield_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_reveal_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_reveal_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_list_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dict_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_dict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_set_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_comprehension",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_list_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_comprehension",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_set_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"duplicate_generator",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___duplicate_generator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_slice_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_slice_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_conditional_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_conditional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_paramspec_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_paramspec_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_type_var_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_enum_call_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_enum_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_temp_node",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___visit_temp_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"node",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"mypyfile",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___mypyfile,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"stmt",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pattern",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"optional_expr",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___optional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"block",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"optional_block",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___optional_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"statements",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___statements,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expressions",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___expressions,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"optional_expressions",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___optional_expressions,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"blocks",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___blocks,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"names",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___names,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"optional_names",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___optional_names,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"type",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"optional_type",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___optional_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"types",
     (PyCFunction)CPyPy_treetransform___TransformVisitor___types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_treetransform___TransformVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TransformVisitor",
    .tp_new = treetransform___TransformVisitor_new,
    .tp_dealloc = (destructor)treetransform___TransformVisitor_dealloc,
    .tp_traverse = (traverseproc)treetransform___TransformVisitor_traverse,
    .tp_clear = (inquiry)treetransform___TransformVisitor_clear,
    .tp_getset = treetransform___TransformVisitor_getseters,
    .tp_methods = treetransform___TransformVisitor_methods,
    .tp_init = treetransform___TransformVisitor_init,
    .tp_members = treetransform___TransformVisitor_members,
    .tp_basicsize = sizeof(mypy___treetransform___TransformVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___treetransform___TransformVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___treetransform___TransformVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_treetransform___TransformVisitor_template = &CPyType_treetransform___TransformVisitor_template_;

static PyObject *
treetransform___TransformVisitor_setup(PyTypeObject *type)
{
    mypy___treetransform___TransformVisitorObject *self;
    self = (mypy___treetransform___TransformVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = treetransform___TransformVisitor_vtable + 12;
    self->_test_only = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_treetransform___TransformVisitor(void)
{
    PyObject *self = treetransform___TransformVisitor_setup(CPyType_treetransform___TransformVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_treetransform___TransformVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
treetransform___TransformVisitor_get_test_only(mypy___treetransform___TransformVisitorObject *self, void *closure)
{
    if (unlikely(self->_test_only == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'test_only' of 'TransformVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_test_only ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
treetransform___TransformVisitor_set_test_only(mypy___treetransform___TransformVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TransformVisitor' object attribute 'test_only' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_test_only = tmp;
    return 0;
}

static PyObject *
treetransform___TransformVisitor_get_var_map(mypy___treetransform___TransformVisitorObject *self, void *closure)
{
    if (unlikely(self->_var_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'var_map' of 'TransformVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_var_map);
    PyObject *retval = self->_var_map;
    return retval;
}

static int
treetransform___TransformVisitor_set_var_map(mypy___treetransform___TransformVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TransformVisitor' object attribute 'var_map' cannot be deleted");
        return -1;
    }
    if (self->_var_map != NULL) {
        CPy_DECREF(self->_var_map);
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
    self->_var_map = tmp;
    return 0;
}

static PyObject *
treetransform___TransformVisitor_get_func_placeholder_map(mypy___treetransform___TransformVisitorObject *self, void *closure)
{
    if (unlikely(self->_func_placeholder_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'func_placeholder_map' of 'TransformVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_func_placeholder_map);
    PyObject *retval = self->_func_placeholder_map;
    return retval;
}

static int
treetransform___TransformVisitor_set_func_placeholder_map(mypy___treetransform___TransformVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TransformVisitor' object attribute 'func_placeholder_map' cannot be deleted");
        return -1;
    }
    if (self->_func_placeholder_map != NULL) {
        CPy_DECREF(self->_func_placeholder_map);
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
    self->_func_placeholder_map = tmp;
    return 0;
}

static int
treetransform___FuncMapInitializer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef treetransform___FuncMapInitializer_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___treetransform___FuncMapInitializerObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___treetransform___FuncMapInitializerObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *treetransform___FuncMapInitializer_setup(PyTypeObject *type);
PyObject *CPyDef_treetransform___FuncMapInitializer(PyObject *cpy_r_transformer);

static PyObject *
treetransform___FuncMapInitializer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_treetransform___FuncMapInitializer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = treetransform___FuncMapInitializer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_treetransform___FuncMapInitializer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
treetransform___FuncMapInitializer_traverse(mypy___treetransform___FuncMapInitializerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_transformer);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___treetransform___FuncMapInitializerObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___treetransform___FuncMapInitializerObject))));
    return 0;
}

static int
treetransform___FuncMapInitializer_clear(mypy___treetransform___FuncMapInitializerObject *self)
{
    Py_CLEAR(self->_transformer);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___treetransform___FuncMapInitializerObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___treetransform___FuncMapInitializerObject))));
    return 0;
}

static void
treetransform___FuncMapInitializer_dealloc(mypy___treetransform___FuncMapInitializerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, treetransform___FuncMapInitializer_dealloc)
    treetransform___FuncMapInitializer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem treetransform___FuncMapInitializer_vtable[98];
static CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_treetransform___FuncMapInitializer_trait_vtable_setup(void)
{
    CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_treetransform___FuncMapInitializer___visit_func_def__NodeVisitor_glue,
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
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_trait_vtable, treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_trait_vtable));
    size_t treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_offset_table, treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_trait_vtable, treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_offset_table, treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___FuncMapInitializer___visit_func_def__StatementVisitor_glue,
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
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_trait_vtable, treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_trait_vtable));
    size_t treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_offset_table, treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_trait_vtable, treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_trait_vtable));
    size_t treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_offset_table, treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem treetransform___FuncMapInitializer_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)treetransform___FuncMapInitializer_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_treetransform___FuncMapInitializer_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_treetransform___FuncMapInitializer___visit_func_def__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_treetransform___FuncMapInitializer_____init__,
        (CPyVTableItem)CPyDef_treetransform___FuncMapInitializer___visit_func_def,
    };
    memcpy(treetransform___FuncMapInitializer_vtable, treetransform___FuncMapInitializer_vtable_scratch, sizeof(treetransform___FuncMapInitializer_vtable));
    return 1;
}

static PyObject *
treetransform___FuncMapInitializer_get_transformer(mypy___treetransform___FuncMapInitializerObject *self, void *closure);
static int
treetransform___FuncMapInitializer_set_transformer(mypy___treetransform___FuncMapInitializerObject *self, PyObject *value, void *closure);

static PyGetSetDef treetransform___FuncMapInitializer_getseters[] = {
    {"transformer",
     (getter)treetransform___FuncMapInitializer_get_transformer, (setter)treetransform___FuncMapInitializer_set_transformer,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef treetransform___FuncMapInitializer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_treetransform___FuncMapInitializer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_treetransform___FuncMapInitializer___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_treetransform___FuncMapInitializer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FuncMapInitializer",
    .tp_new = treetransform___FuncMapInitializer_new,
    .tp_dealloc = (destructor)treetransform___FuncMapInitializer_dealloc,
    .tp_traverse = (traverseproc)treetransform___FuncMapInitializer_traverse,
    .tp_clear = (inquiry)treetransform___FuncMapInitializer_clear,
    .tp_getset = treetransform___FuncMapInitializer_getseters,
    .tp_methods = treetransform___FuncMapInitializer_methods,
    .tp_init = treetransform___FuncMapInitializer_init,
    .tp_members = treetransform___FuncMapInitializer_members,
    .tp_basicsize = sizeof(mypy___treetransform___FuncMapInitializerObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___treetransform___FuncMapInitializerObject),
    .tp_weaklistoffset = sizeof(mypy___treetransform___FuncMapInitializerObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_treetransform___FuncMapInitializer_template = &CPyType_treetransform___FuncMapInitializer_template_;

static PyObject *
treetransform___FuncMapInitializer_setup(PyTypeObject *type)
{
    mypy___treetransform___FuncMapInitializerObject *self;
    self = (mypy___treetransform___FuncMapInitializerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = treetransform___FuncMapInitializer_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_treetransform___FuncMapInitializer(PyObject *cpy_r_transformer)
{
    PyObject *self = treetransform___FuncMapInitializer_setup(CPyType_treetransform___FuncMapInitializer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_treetransform___FuncMapInitializer_____init__(self, cpy_r_transformer);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
treetransform___FuncMapInitializer_get_transformer(mypy___treetransform___FuncMapInitializerObject *self, void *closure)
{
    if (unlikely(self->_transformer == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'transformer' of 'FuncMapInitializer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_transformer);
    PyObject *retval = self->_transformer;
    return retval;
}

static int
treetransform___FuncMapInitializer_set_transformer(mypy___treetransform___FuncMapInitializerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncMapInitializer' object attribute 'transformer' cannot be deleted");
        return -1;
    }
    if (self->_transformer != NULL) {
        CPy_DECREF(self->_transformer);
    }
    PyObject *tmp;
    if (likely((Py_TYPE(value) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(value) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(value) == CPyType_treetransform___TransformVisitor)))
        tmp = value;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_transformer = tmp;
    return 0;
}
static PyMethodDef treetransformmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef treetransformmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.treetransform",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    treetransformmodule_methods
};

PyObject *CPyInit_mypy___treetransform(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___treetransform_internal) {
        Py_INCREF(CPyModule_mypy___treetransform_internal);
        return CPyModule_mypy___treetransform_internal;
    }
    CPyModule_mypy___treetransform_internal = PyModule_Create(&treetransformmodule);
    if (unlikely(CPyModule_mypy___treetransform_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___treetransform_internal, "__name__");
    CPyStatic_treetransform___globals = PyModule_GetDict(CPyModule_mypy___treetransform_internal);
    if (unlikely(CPyStatic_treetransform___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_treetransform_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___treetransform_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___treetransform_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_treetransform___TransformVisitor);
    Py_CLEAR(CPyType_treetransform___FuncMapInitializer);
    return NULL;
}

char CPyDef_treetransform___TransformVisitor_____init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_test_only = 0;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/treetransform.py", "__init__", 135, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "__init__", 138, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    if (((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_var_map != NULL) {
        CPy_DECREF(((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_var_map);
    }
    ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_var_map = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/treetransform.py", "__init__", 138, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "__init__", 143, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    if (((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_func_placeholder_map != NULL) {
        CPy_DECREF(((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_func_placeholder_map);
    }
    ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_func_placeholder_map = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/treetransform.py", "__init__", 143, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_treetransform___TransformVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_treetransform___TransformVisitor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "__init__", 132, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T4CIOO cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_codes;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_ignored_lines;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_test_only;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_mypy_file", "TransformVisitor", "test_only", 146, CPyStatic_treetransform___globals);
        goto CPyL23;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_AssertionError, "This visitor should not be used for whole files.");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 146, CPyStatic_treetransform___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL23;
    }
    cpy_r_r3 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_ignored_lines;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = PyDict_Size(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = CPyDict_GetItemsIter(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL24;
    }
CPyL6: ;
    cpy_r_r8 = CPyDict_NextItem(cpy_r_r7, cpy_r_r4);
    cpy_r_r9 = cpy_r_r8.f1;
    cpy_r_r4 = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f0;
    if (!cpy_r_r10) goto CPyL25;
    cpy_r_r11 = cpy_r_r8.f2;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = cpy_r_r8.f3;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r8.f2);
    CPy_DECREF(cpy_r_r8.f3);
    if (likely(PyLong_Check(cpy_r_r11)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r11);
    else {
        CPy_TypeError("int", cpy_r_r11); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r14 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals, "list", cpy_r_r12);
        goto CPyL27;
    }
    cpy_r_line = cpy_r_r13;
    cpy_r_codes = cpy_r_r14;
    cpy_r_r15 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r16[1] = {cpy_r_codes};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_codes);
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals, "list", cpy_r_r18);
        goto CPyL29;
    }
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r21 = CPyDict_SetItem(cpy_r_r2, cpy_r_r20, cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL30;
    }
    cpy_r_r23 = CPyDict_CheckSize(cpy_r_r3, cpy_r_r6);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL30;
    } else
        goto CPyL6;
CPyL13: ;
    cpy_r_r24 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 148, CPyStatic_treetransform___globals);
        goto CPyL31;
    }
    cpy_r_ignored_lines = cpy_r_r2;
    cpy_r_r25 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_defs;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_treetransform___TransformVisitor___statements(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 149, CPyStatic_treetransform___globals);
        goto CPyL32;
    }
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 149, CPyStatic_treetransform___globals);
        goto CPyL33;
    }
    cpy_r_r28 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_is_bom;
    cpy_r_r29 = CPyDef_nodes___MypyFile(cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_ignored_lines);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_ignored_lines);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 149, CPyStatic_treetransform___globals);
        goto CPyL23;
    }
    cpy_r_new = cpy_r_r29;
    cpy_r_r30 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->__fullname;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_mypy_file", "MypyFile", "_fullname", 150, CPyStatic_treetransform___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r30);
CPyL18: ;
    if (((mypy___nodes___MypyFileObject *)cpy_r_new)->__fullname != NULL) {
        CPy_DECREF(((mypy___nodes___MypyFileObject *)cpy_r_new)->__fullname);
    }
    ((mypy___nodes___MypyFileObject *)cpy_r_new)->__fullname = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 150, CPyStatic_treetransform___globals);
        goto CPyL34;
    }
    cpy_r_r32 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_path;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(((mypy___nodes___MypyFileObject *)cpy_r_new)->_path);
    ((mypy___nodes___MypyFileObject *)cpy_r_new)->_path = cpy_r_r32;
    cpy_r_r34 = (PyObject *)CPyType_nodes___SymbolTable;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r34, 0, 0, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 152, CPyStatic_treetransform___globals);
        goto CPyL34;
    }
    if (likely(PyDict_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_mypy_file", 152, CPyStatic_treetransform___globals, "dict", cpy_r_r35);
        goto CPyL34;
    }
    if (((mypy___nodes___MypyFileObject *)cpy_r_new)->_names != NULL) {
        CPy_DECREF(((mypy___nodes___MypyFileObject *)cpy_r_new)->_names);
    }
    ((mypy___nodes___MypyFileObject *)cpy_r_new)->_names = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 152, CPyStatic_treetransform___globals);
        goto CPyL34;
    }
    return cpy_r_new;
CPyL23: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL24: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8.f2);
    CPy_DECREF(cpy_r_r8.f3);
    goto CPyL13;
CPyL26: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r12);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r13);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_codes);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_ignored_lines);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_r26);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL23;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___MypyFile))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_mypy_file(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file", 145, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___ImportObject *)cpy_r_node)->_ids;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_import", 156, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_import", 156, CPyStatic_treetransform___globals, "list", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyDef_nodes___Import(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_import", 156, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Import))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import", 155, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_id;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_relative;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r4[1] = {cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_import_from", 159, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_import_from", 159, CPyStatic_treetransform___globals, "list", cpy_r_r6);
        goto CPyL6;
    }
    cpy_r_r8 = CPyDef_nodes___ImportFrom(cpy_r_r0, cpy_r_r1, cpy_r_r7);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_import_from", 159, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import_from(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import_from", 158, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___ImportAllObject *)cpy_r_node)->_id;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ImportAllObject *)cpy_r_node)->_relative;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_nodes___ImportAll(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_import_all", 162, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import_all(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import_all", 161, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___copy_argument(PyObject *cpy_r_self, PyObject *cpy_r_argument) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___ArgumentObject *)cpy_r_argument)->_variable;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___visit_var(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_argument", 166, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___ArgumentObject *)cpy_r_argument)->_type_annotation;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___nodes___ArgumentObject *)cpy_r_argument)->_initializer;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___nodes___ArgumentObject *)cpy_r_argument)->_kind;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_nodes___Argument(cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_argument", 165, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_arg = cpy_r_r6;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_nodes___Argument___set_line(cpy_r_arg, cpy_r_argument, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_argument", 173, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_arg;
CPyL4: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL5: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___copy_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"argument", 0};
    static CPyArg_Parser parser = {"O:copy_argument", kwlist, 0};
    PyObject *obj_argument;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_argument)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_argument;
    if (likely(Py_TYPE(obj_argument) == CPyType_nodes___Argument))
        arg_argument = obj_argument;
    else {
        CPy_TypeError("mypy.nodes.Argument", obj_argument); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___copy_argument(arg_self, arg_argument);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "copy_argument", 164, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_init;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_new;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_result;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_r0 = CPyDef_treetransform___FuncMapInitializer(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 187, CPyStatic_treetransform___globals);
        goto CPyL37;
    }
    cpy_r_init = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_body;
    cpy_r_r2 = ((mypy___nodes___BlockObject *)cpy_r_r1)->_body;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL38;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Statement)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_func_def", 188, CPyStatic_treetransform___globals, "mypy.nodes.Statement", cpy_r_r8);
        goto CPyL39;
    }
    cpy_r_stmt = cpy_r_r9;
    cpy_r_r10 = CPY_GET_METHOD_TRAIT(cpy_r_stmt, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_stmt, cpy_r_init); /* accept */
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 189, CPyStatic_treetransform___globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL5: ;
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 192, CPyStatic_treetransform___globals);
        goto CPyL37;
    }
CPyL7: ;
    cpy_r_r13 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_arguments;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncDef", "arguments", 193, CPyStatic_treetransform___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r13);
CPyL8: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = PyList_New(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 193, CPyStatic_treetransform___globals);
        goto CPyL42;
    }
    cpy_r_r17 = 0;
CPyL10: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL43;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r17);
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___Argument))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_func_def", 193, CPyStatic_treetransform___globals, "mypy.nodes.Argument", cpy_r_r22);
        goto CPyL44;
    }
    cpy_r_arg = cpy_r_r23;
    cpy_r_r24 = CPyDef_treetransform___TransformVisitor___copy_argument(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 193, CPyStatic_treetransform___globals);
        goto CPyL44;
    }
    cpy_r_r25 = CPyList_SetItemUnsafe(cpy_r_r16, cpy_r_r17, cpy_r_r24);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 193, CPyStatic_treetransform___globals);
        goto CPyL44;
    }
    cpy_r_r26 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r26;
    goto CPyL10;
CPyL15: ;
    cpy_r_r27 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 194, CPyStatic_treetransform___globals);
        goto CPyL45;
    }
    cpy_r_r29 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 195, CPyStatic_treetransform___globals);
        goto CPyL46;
    }
    if ((Py_TYPE(cpy_r_r30) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r30) == CPyType_types___Overloaded))
        cpy_r_r31 = cpy_r_r30;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL7537;
    if (cpy_r_r30 == Py_None)
        cpy_r_r31 = cpy_r_r30;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL7537;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_func_def", 195, CPyStatic_treetransform___globals, "mypy.types.FunctionLike or None", cpy_r_r30);
    goto CPyL46;
__LL7537: ;
    cpy_r_r32 = CPyDef_nodes___FuncDef(cpy_r_r12, cpy_r_r16, cpy_r_r28, cpy_r_r31);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 191, CPyStatic_treetransform___globals);
        goto CPyL37;
    }
    cpy_r_new = cpy_r_r32;
    cpy_r_r33 = CPyDef_treetransform___TransformVisitor___copy_function_attributes(cpy_r_self, cpy_r_new, cpy_r_node);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 198, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    cpy_r_r34 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->__fullname;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_new)->__fullname);
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->__fullname = cpy_r_r34;
    cpy_r_r36 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_decorated;
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncDef", "is_decorated", 201, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
CPyL21: ;
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_is_decorated = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 201, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    cpy_r_r38 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_conditional;
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncDef", "is_conditional", 202, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
CPyL23: ;
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_is_conditional = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 202, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    cpy_r_r40 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_abstract_status;
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncDef", "abstract_status", 203, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    CPyTagged_INCREF(cpy_r_r40);
CPyL25: ;
    if (((mypy___nodes___FuncDefObject *)cpy_r_new)->_abstract_status != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_new)->_abstract_status);
    }
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_abstract_status = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 203, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    cpy_r_r42 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_static;
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_is_static = cpy_r_r42;
    cpy_r_r44 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_class;
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_is_class = cpy_r_r44;
    cpy_r_r46 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_property;
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_is_property = cpy_r_r46;
    cpy_r_r48 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_final;
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_is_final = cpy_r_r48;
    cpy_r_r50 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_original_def;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncDef", "original_def", 208, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r50);
CPyL27: ;
    if (((mypy___nodes___FuncDefObject *)cpy_r_new)->_original_def != NULL) {
        CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_new)->_original_def);
    }
    ((mypy___nodes___FuncDefObject *)cpy_r_new)->_original_def = cpy_r_r50;
    cpy_r_r51 = 1;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 208, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    cpy_r_r52 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_func_placeholder_map;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "TransformVisitor", "func_placeholder_map", 210, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r52);
CPyL29: ;
    cpy_r_r53 = PyDict_Contains(cpy_r_r52, cpy_r_node);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 210, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    cpy_r_r55 = cpy_r_r53;
    if (!cpy_r_r55) goto CPyL36;
    cpy_r_r56 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_func_placeholder_map;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "TransformVisitor", "func_placeholder_map", 215, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r56);
CPyL32: ;
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r56, cpy_r_node);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 215, CPyStatic_treetransform___globals);
        goto CPyL47;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_nodes___FuncDef))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_func_def", 215, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_r57);
        goto CPyL47;
    }
    cpy_r_result = cpy_r_r58;
    cpy_r_r59 = 2;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_mypy___util___replace_object_state(cpy_r_result, cpy_r_new, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_new);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 216, CPyStatic_treetransform___globals);
        goto CPyL48;
    }
    return cpy_r_result;
CPyL36: ;
    return cpy_r_new;
CPyL37: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL38: ;
    CPy_DECREF(cpy_r_init);
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
CPyL39: ;
    CPy_DecRef(cpy_r_init);
    CPy_DecRef(cpy_r_r2);
    goto CPyL37;
CPyL40: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
CPyL41: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL37;
CPyL43: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL15;
CPyL44: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r16);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r28);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL37;
CPyL48: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL37;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_func_def(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 177, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_new;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___LambdaExprObject *)cpy_r_node)->_arguments;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_lambda_expr", "LambdaExpr", "arguments", 223, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 223, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___Argument))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_lambda_expr", 223, CPyStatic_treetransform___globals, "mypy.nodes.Argument", cpy_r_r9);
        goto CPyL17;
    }
    cpy_r_arg = cpy_r_r10;
    cpy_r_r11 = CPyDef_treetransform___TransformVisitor___copy_argument(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 223, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 223, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL3;
CPyL8: ;
    cpy_r_r14 = ((mypy___nodes___LambdaExprObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 224, CPyStatic_treetransform___globals);
        goto CPyL18;
    }
    cpy_r_r16 = ((mypy___nodes___LambdaExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 225, CPyStatic_treetransform___globals);
        goto CPyL19;
    }
    if ((Py_TYPE(cpy_r_r17) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r17) == CPyType_types___Overloaded))
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL7538;
    if (cpy_r_r17 == Py_None)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL7538;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_lambda_expr", 225, CPyStatic_treetransform___globals, "mypy.types.FunctionLike or None", cpy_r_r17);
    goto CPyL19;
__LL7538: ;
    cpy_r_r19 = CPyDef_nodes___LambdaExpr(cpy_r_r3, cpy_r_r15, cpy_r_r18);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 222, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_new = cpy_r_r19;
    cpy_r_r20 = CPyDef_treetransform___TransformVisitor___copy_function_attributes(cpy_r_self, cpy_r_new, cpy_r_node);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 227, CPyStatic_treetransform___globals);
        goto CPyL20;
    }
    return cpy_r_new;
CPyL14: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r15);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL14;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___LambdaExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_lambda_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr", 221, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_lambda_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

char CPyDef_treetransform___TransformVisitor___copy_function_attributes(PyObject *cpy_r_self, PyObject *cpy_r_new, PyObject *cpy_r_original) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
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
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_info;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___FuncItemObject *)cpy_r_new)->_info);
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_info = cpy_r_r0;
    cpy_r_r2 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_min_args;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/treetransform.py", "copy_function_attributes", "FuncItem", "min_args", 232, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_r2);
CPyL1: ;
    if (((mypy___nodes___FuncItemObject *)cpy_r_new)->_min_args != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___FuncItemObject *)cpy_r_new)->_min_args);
    }
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_min_args = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_function_attributes", 232, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_max_pos;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/treetransform.py", "copy_function_attributes", "FuncItem", "max_pos", 233, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_r4);
CPyL3: ;
    if (((mypy___nodes___FuncItemObject *)cpy_r_new)->_max_pos != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___FuncItemObject *)cpy_r_new)->_max_pos);
    }
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_max_pos = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_function_attributes", 233, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r6 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_is_overload;
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_is_overload = cpy_r_r6;
    cpy_r_r8 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_is_generator;
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_is_generator = cpy_r_r8;
    cpy_r_r10 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_is_coroutine;
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_is_coroutine = cpy_r_r10;
    cpy_r_r12 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_is_async_generator;
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_is_async_generator = cpy_r_r12;
    cpy_r_r14 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_is_awaitable_coroutine;
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_is_awaitable_coroutine = cpy_r_r14;
    cpy_r_r16 = ((mypy___nodes___FuncItemObject *)cpy_r_original)->_line;
    CPyTagged_INCREF(cpy_r_r16);
    CPyTagged_DECREF(((mypy___nodes___FuncItemObject *)cpy_r_new)->_line);
    ((mypy___nodes___FuncItemObject *)cpy_r_new)->_line = cpy_r_r16;
    return 1;
CPyL5: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy_treetransform___TransformVisitor___copy_function_attributes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"new", "original", 0};
    static CPyArg_Parser parser = {"OO:copy_function_attributes", kwlist, 0};
    PyObject *obj_new;
    PyObject *obj_original;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_new, &obj_original)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_new;
    if (likely((Py_TYPE(obj_new) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_new) == CPyType_nodes___LambdaExpr)))
        arg_new = obj_new;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_new); 
        goto fail;
    }
    PyObject *arg_original;
    if (likely((Py_TYPE(obj_original) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_original) == CPyType_nodes___LambdaExpr)))
        arg_original = obj_original;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_original); 
        goto fail;
    }
    char retval = CPyDef_treetransform___TransformVisitor___copy_function_attributes(arg_self, arg_new, arg_original);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "copy_function_attributes", 230, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_items;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_newitem;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_olditem;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_new_type;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals);
        goto CPyL50;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL51;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___FuncDef)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL7539;
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___Decorator)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL7539;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r9);
    goto CPyL52;
__LL7539: ;
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___FuncDef))
        cpy_r_r15 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_item);
        goto CPyL52;
    }
    cpy_r_r16 = CPyDef_nodes___FuncDef___accept(cpy_r_r15, cpy_r_self);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_nodes___Node)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r16);
        goto CPyL52;
    }
    cpy_r_r18 = cpy_r_r17;
    goto CPyL13;
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___Decorator))
        cpy_r_r19 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals, "mypy.nodes.Decorator", cpy_r_item);
        goto CPyL52;
    }
    cpy_r_r20 = CPyDef_nodes___Decorator___accept(cpy_r_r19, cpy_r_self);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals);
        goto CPyL52;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_nodes___Node)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r20);
        goto CPyL52;
    }
    cpy_r_r18 = cpy_r_r21;
CPyL13: ;
    if (Py_TYPE(cpy_r_r18) == CPyType_nodes___FuncDef)
        cpy_r_r22 = cpy_r_r18;
    else {
        cpy_r_r22 = NULL;
    }
    if (cpy_r_r22 != NULL) goto __LL7540;
    if (Py_TYPE(cpy_r_r18) == CPyType_nodes___Decorator)
        cpy_r_r22 = cpy_r_r18;
    else {
        cpy_r_r22 = NULL;
    }
    if (cpy_r_r22 != NULL) goto __LL7540;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r18);
    goto CPyL52;
__LL7540: ;
    cpy_r_r23 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r22);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 242, CPyStatic_treetransform___globals);
        goto CPyL52;
    }
    cpy_r_r24 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r24;
    goto CPyL2;
CPyL16: ;
    cpy_r_items = cpy_r_r3;
    cpy_r_r25 = 0;
    cpy_r_r26 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = 0;
CPyL17: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL53;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL53;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r25);
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___FuncDef)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL7541;
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___Decorator)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL7541;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 243, CPyStatic_treetransform___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r36);
    goto CPyL54;
__LL7541: ;
    cpy_r_newitem = cpy_r_r37;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r26, cpy_r_r27);
    if (Py_TYPE(cpy_r_r38) == CPyType_nodes___FuncDef)
        cpy_r_r39 = cpy_r_r38;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL7542;
    if (Py_TYPE(cpy_r_r38) == CPyType_nodes___Decorator)
        cpy_r_r39 = cpy_r_r38;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL7542;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 243, CPyStatic_treetransform___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r38);
    goto CPyL55;
__LL7542: ;
    cpy_r_olditem = cpy_r_r39;
    cpy_r_r40 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_olditem)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_olditem) == CPyType_nodes___FuncDef))
        cpy_r_r44 = cpy_r_olditem;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 244, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_olditem);
        goto CPyL55;
    }
    cpy_r_r45 = ((mypy___nodes___FuncDefObject *)cpy_r_r44)->_line;
    CPyTagged_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45;
    goto CPyL26;
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_olditem) == CPyType_nodes___Decorator))
        cpy_r_r47 = cpy_r_olditem;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 244, CPyStatic_treetransform___globals, "mypy.nodes.Decorator", cpy_r_olditem);
        goto CPyL55;
    }
    cpy_r_r48 = ((mypy___nodes___DecoratorObject *)cpy_r_r47)->_line;
    CPyTagged_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r46 = cpy_r_r48;
CPyL26: ;
    cpy_r_r49 = CPyStatics[2272]; /* 'line' */
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_r46);
    cpy_r_r51 = PyObject_SetAttr(cpy_r_newitem, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_newitem);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 244, CPyStatic_treetransform___globals);
        goto CPyL54;
    }
    cpy_r_r53 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r53;
    cpy_r_r54 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r54;
    goto CPyL17;
CPyL28: ;
    cpy_r_r55 = CPyDef_nodes___OverloadedFuncDef(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 245, CPyStatic_treetransform___globals);
        goto CPyL49;
    }
    cpy_r_new = cpy_r_r55;
    cpy_r_r56 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->__fullname;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->__fullname);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->__fullname = cpy_r_r56;
    cpy_r_r58 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 247, CPyStatic_treetransform___globals);
        goto CPyL56;
    }
    cpy_r_new_type = cpy_r_r59;
    cpy_r_r60 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r61 = CPy_TypeCheck(cpy_r_new_type, cpy_r_r60);
    if (cpy_r_r61) {
        goto CPyL33;
    } else
        goto CPyL57;
CPyL31: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 248, CPyStatic_treetransform___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL33: ;
    if (likely(PyObject_TypeCheck(cpy_r_new_type, CPyType_types___ProperType)))
        cpy_r_r63 = cpy_r_new_type;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 249, CPyStatic_treetransform___globals, "mypy.types.ProperType", cpy_r_new_type);
        goto CPyL56;
    }
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_type);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_type = cpy_r_r63;
    cpy_r_r65 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_info);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_info = cpy_r_r65;
    cpy_r_r67 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_is_static;
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_is_static = cpy_r_r67;
    cpy_r_r69 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_is_class;
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_is_class = cpy_r_r69;
    cpy_r_r71 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_is_property;
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_is_property = cpy_r_r71;
    cpy_r_r73 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_is_final;
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_is_final = cpy_r_r73;
    cpy_r_r75 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_impl;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 255, CPyStatic_treetransform___globals);
        goto CPyL56;
    }
    cpy_r_r78 = cpy_r_r76;
    if (!cpy_r_r78) goto CPyL48;
    cpy_r_r79 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_node)->_impl;
    CPy_INCREF(cpy_r_r79);
    if (Py_TYPE(cpy_r_r79) == CPyType_nodes___FuncDef)
        cpy_r_r80 = cpy_r_r79;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL7543;
    if (Py_TYPE(cpy_r_r79) == CPyType_nodes___Decorator)
        cpy_r_r80 = cpy_r_r79;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL7543;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r79);
    goto CPyL56;
__LL7543: ;
    cpy_r_r81 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_r80)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    if (!cpy_r_r84) goto CPyL42;
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_nodes___FuncDef))
        cpy_r_r85 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_r80);
        goto CPyL56;
    }
    cpy_r_r86 = CPyDef_nodes___FuncDef___accept(cpy_r_r85, cpy_r_self);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals);
        goto CPyL56;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_nodes___Node)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r86);
        goto CPyL56;
    }
    cpy_r_r88 = cpy_r_r87;
    goto CPyL46;
CPyL42: ;
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_nodes___Decorator))
        cpy_r_r89 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals, "mypy.nodes.Decorator", cpy_r_r80);
        goto CPyL56;
    }
    cpy_r_r90 = CPyDef_nodes___Decorator___accept(cpy_r_r89, cpy_r_self);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals);
        goto CPyL56;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r90, CPyType_nodes___Node)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r90);
        goto CPyL56;
    }
    cpy_r_r88 = cpy_r_r91;
CPyL46: ;
    if (Py_TYPE(cpy_r_r88) == CPyType_nodes___FuncDef)
        cpy_r_r92 = cpy_r_r88;
    else {
        cpy_r_r92 = NULL;
    }
    if (cpy_r_r92 != NULL) goto __LL7544;
    if (Py_TYPE(cpy_r_r88) == CPyType_nodes___Decorator)
        cpy_r_r92 = cpy_r_r88;
    else {
        cpy_r_r92 = NULL;
    }
    if (cpy_r_r92 != NULL) goto __LL7544;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 256, CPyStatic_treetransform___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r88);
    goto CPyL56;
__LL7544: ;
    CPy_DECREF(((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_impl);
    ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_new)->_impl = cpy_r_r92;
CPyL48: ;
    return cpy_r_new;
CPyL49: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL49;
CPyL51: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL16;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL49;
CPyL53: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL28;
CPyL54: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r26);
    goto CPyL49;
CPyL55: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_newitem);
    goto CPyL49;
CPyL56: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL49;
CPyL57: ;
    CPy_DECREF(cpy_r_new);
    CPy_DECREF(cpy_r_new_type);
    goto CPyL31;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def", 241, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_overloaded_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_overloaded_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_overloaded_func_def__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_new;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_defs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 262, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_type_vars;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_base_type_exprs;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 264, CPyStatic_treetransform___globals);
        goto CPyL16;
    }
    cpy_r_r6 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_metaclass;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 265, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_nodes___ClassDef(cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 260, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_new = cpy_r_r9;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 267, CPyStatic_treetransform___globals);
        goto CPyL18;
    }
CPyL5: ;
    cpy_r_r11 = CPY_SET_ATTR(cpy_r_new, CPyType_nodes___ClassDef, 7, cpy_r_r10, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 267, CPyStatic_treetransform___globals);
        goto CPyL18;
    }
    cpy_r_r12 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_new)->_info);
    ((mypy___nodes___ClassDefObject *)cpy_r_new)->_info = cpy_r_r12;
    cpy_r_r14 = ((mypy___nodes___ClassDefObject *)cpy_r_node)->_decorators;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = PyList_New(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 269, CPyStatic_treetransform___globals);
        goto CPyL19;
    }
    cpy_r_r18 = 0;
CPyL8: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL20;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_nodes___Expression)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_class_def", 269, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r23);
        goto CPyL21;
    }
    cpy_r_decorator = cpy_r_r24;
    cpy_r_r25 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_decorator);
    CPy_DECREF(cpy_r_decorator);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 269, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    cpy_r_r26 = CPyList_SetItemUnsafe(cpy_r_r17, cpy_r_r18, cpy_r_r25);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 269, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    cpy_r_r27 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r27;
    goto CPyL8;
CPyL13: ;
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_new)->_decorators);
    ((mypy___nodes___ClassDefObject *)cpy_r_new)->_decorators = cpy_r_r17;
    return cpy_r_new;
CPyL14: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r14);
    goto CPyL14;
CPyL20: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL13;
CPyL21: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ClassDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_class_def(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_class_def", 259, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_global_decl(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___GlobalDeclObject *)cpy_r_node)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_global_decl", 273, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_global_decl", 273, CPyStatic_treetransform___globals, "list", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyDef_nodes___GlobalDecl(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_global_decl", 273, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_global_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___GlobalDecl))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_global_decl(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_global_decl", 272, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_global_decl__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_global_decl__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_global_decl__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_global_decl__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_global_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_global_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_global_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_global_decl__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___NonlocalDeclObject *)cpy_r_node)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_nonlocal_decl", 276, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_nonlocal_decl", 276, CPyStatic_treetransform___globals, "list", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyDef_nodes___NonlocalDecl(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_nonlocal_decl", 276, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_nonlocal_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NonlocalDecl))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_nonlocal_decl", 275, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_nonlocal_decl__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_nonlocal_decl__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_nonlocal_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_nonlocal_decl__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___statements(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_block", 279, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___Block(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_block", 279, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Block))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_block(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_block", 278, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_new;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_func;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___visit_func_def(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_decorator", 283, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_func = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_func;
    cpy_r_r3 = ((mypy___nodes___FuncDefObject *)cpy_r_r2)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    CPyTagged_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_line);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_line = cpy_r_r3;
    cpy_r_r5 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_decorators;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_decorator", 285, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r7 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_var;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_treetransform___TransformVisitor___visit_var(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_decorator", 285, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r9 = CPyDef_nodes___Decorator(cpy_r_func, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_decorator", 285, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_new = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_is_overload;
    ((mypy___nodes___DecoratorObject *)cpy_r_new)->_is_overload = cpy_r_r10;
    return cpy_r_new;
CPyL5: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL6: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r6);
    goto CPyL5;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Decorator))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_decorator(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_decorator", 281, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_new;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_var_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_var", "TransformVisitor", "var_map", 291, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 291, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_var_map;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_var", "TransformVisitor", "var_map", 292, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_node);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 292, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___Var))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_var", 292, CPyStatic_treetransform___globals, "mypy.nodes.Var", cpy_r_r5);
        goto CPyL14;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 293, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_r8 = ((mypy___nodes___VarObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 293, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDef_nodes___Var(cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 293, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_new = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___VarObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    CPyTagged_DECREF(((mypy___nodes___VarObject *)cpy_r_new)->_line);
    ((mypy___nodes___VarObject *)cpy_r_new)->_line = cpy_r_r11;
    cpy_r_r13 = ((mypy___nodes___VarObject *)cpy_r_node)->__fullname;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_new)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_new)->__fullname = cpy_r_r13;
    cpy_r_r15 = ((mypy___nodes___VarObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_new)->_info);
    ((mypy___nodes___VarObject *)cpy_r_new)->_info = cpy_r_r15;
    cpy_r_r17 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_self;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_self = cpy_r_r17;
    cpy_r_r19 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_ready;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_ready = cpy_r_r19;
    cpy_r_r21 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_initialized_in_class;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_initialized_in_class = cpy_r_r21;
    cpy_r_r23 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_staticmethod;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_staticmethod = cpy_r_r23;
    cpy_r_r25 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_classmethod;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_classmethod = cpy_r_r25;
    cpy_r_r27 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_property;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_property = cpy_r_r27;
    cpy_r_r29 = ((mypy___nodes___VarObject *)cpy_r_node)->_is_final;
    ((mypy___nodes___VarObject *)cpy_r_new)->_is_final = cpy_r_r29;
    cpy_r_r31 = ((mypy___nodes___VarObject *)cpy_r_node)->_final_value;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_new)->_final_value);
    ((mypy___nodes___VarObject *)cpy_r_new)->_final_value = cpy_r_r31;
    cpy_r_r33 = ((mypy___nodes___VarObject *)cpy_r_node)->_final_unset_in_class;
    ((mypy___nodes___VarObject *)cpy_r_new)->_final_unset_in_class = cpy_r_r33;
    cpy_r_r35 = ((mypy___nodes___VarObject *)cpy_r_node)->_final_set_in_init;
    ((mypy___nodes___VarObject *)cpy_r_new)->_final_set_in_init = cpy_r_r35;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_nodes___Context___set_line(cpy_r_new, cpy_r_node, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 307, CPyStatic_treetransform___globals);
        goto CPyL16;
    }
    cpy_r_r41 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_var_map;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_var", "TransformVisitor", "var_map", 308, CPyStatic_treetransform___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r41);
CPyL12: ;
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r41, cpy_r_node, cpy_r_new);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_var", 308, CPyStatic_treetransform___globals);
        goto CPyL16;
    }
    return cpy_r_new;
CPyL14: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL15: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL14;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Var))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_var(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_var", 289, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_var__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_var(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_var__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_var__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_var__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_expression_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_expression_stmt", 312, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___ExpressionStmt(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_expression_stmt", 312, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ExpressionStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_expression_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_expression_stmt", 311, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_expression_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_expression_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_expression_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_expression_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_expression_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_expression_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___duplicate_assignment(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_stmt", 315, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssignmentStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assignment_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_stmt", 314, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___duplicate_assignment(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_new;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_lvalues;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_assignment", 319, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r2 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_rvalue;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_assignment", 320, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r4 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_assignment", 321, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_nodes___AssignmentStmt(cpy_r_r1, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_assignment", 318, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_new = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    CPyTagged_DECREF(((mypy___nodes___AssignmentStmtObject *)cpy_r_new)->_line);
    ((mypy___nodes___AssignmentStmtObject *)cpy_r_new)->_line = cpy_r_r8;
    cpy_r_r10 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_is_final_def;
    ((mypy___nodes___AssignmentStmtObject *)cpy_r_new)->_is_final_def = cpy_r_r10;
    cpy_r_r12 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_assignment", 325, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    CPy_DECREF(((mypy___nodes___AssignmentStmtObject *)cpy_r_new)->_type);
    ((mypy___nodes___AssignmentStmtObject *)cpy_r_new)->_type = cpy_r_r13;
    return cpy_r_new;
CPyL6: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL6;
}

PyObject *CPyPy_treetransform___TransformVisitor___duplicate_assignment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:duplicate_assignment", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssignmentStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___duplicate_assignment(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "duplicate_assignment", 317, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_node)->_op;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_node)->_lvalue;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_operator_assignment_stmt", 331, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r3 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_node)->_rvalue;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_operator_assignment_stmt", 331, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r5 = CPyDef_nodes___OperatorAssignmentStmt(cpy_r_r0, cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_operator_assignment_stmt", 331, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_operator_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___OperatorAssignmentStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_operator_assignment_stmt", 328, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_operator_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_operator_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_operator_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_while_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___WhileStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt", 335, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___nodes___WhileStmtObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt", 335, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r4 = ((mypy___nodes___WhileStmtObject *)cpy_r_node)->_else_body;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___optional_block(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt", 335, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_nodes___WhileStmt(cpy_r_r1, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt", 334, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_while_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___WhileStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_while_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt", 333, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_while_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_while_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_while_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_while_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_while_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_new;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_index;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 340, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 341, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r4 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 342, CPyStatic_treetransform___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_else_body;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_treetransform___TransformVisitor___optional_block(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 343, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    cpy_r_r8 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_unanalyzed_index_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 344, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r10 = CPyDef_nodes___ForStmt(cpy_r_r1, cpy_r_r3, cpy_r_r5, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 339, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_new = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_is_async;
    ((mypy___nodes___ForStmtObject *)cpy_r_new)->_is_async = cpy_r_r11;
    cpy_r_r13 = ((mypy___nodes___ForStmtObject *)cpy_r_node)->_index_type;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 347, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    CPy_DECREF(((mypy___nodes___ForStmtObject *)cpy_r_new)->_index_type);
    ((mypy___nodes___ForStmtObject *)cpy_r_new)->_index_type = cpy_r_r14;
    return cpy_r_new;
CPyL8: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ForStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_for_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt", 338, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_return_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___ReturnStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_return_stmt", 351, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___ReturnStmt(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_return_stmt", 351, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ReturnStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_return_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_return_stmt", 350, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_return_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_return_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_return_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_return_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_return_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_return_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_return_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_return_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assert_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___AssertStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assert_stmt", 354, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___AssertStmtObject *)cpy_r_node)->_msg;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assert_stmt", 354, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_nodes___AssertStmt(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assert_stmt", 354, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assert_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssertStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assert_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assert_stmt", 353, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assert_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assert_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assert_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assert_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assert_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assert_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assert_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assert_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_del_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___DelStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_del_stmt", 357, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___DelStmt(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_del_stmt", 357, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_del_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___DelStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_del_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_del_stmt", 356, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_del_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_del_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_del_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_del_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_del_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_del_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_del_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_del_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_if_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___IfStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt", 361, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___nodes___IfStmtObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___blocks(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt", 362, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r4 = ((mypy___nodes___IfStmtObject *)cpy_r_node)->_else_body;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___optional_block(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt", 363, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_nodes___IfStmt(cpy_r_r1, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt", 360, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_if_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___IfStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_if_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt", 359, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_if_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_if_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_if_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_if_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_if_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_if_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_if_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_break_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___BreakStmt(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_break_stmt", 367, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___BreakStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_break_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_break_stmt", 366, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_break_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_break_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_break_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_break_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_continue_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___ContinueStmt(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_continue_stmt", 370, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ContinueStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_continue_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_continue_stmt", 369, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_continue_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_continue_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_continue_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_continue_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_pass_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___PassStmt(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_pass_stmt", 373, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_pass_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___PassStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_pass_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_pass_stmt", 372, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_pass_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_pass_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_pass_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_pass_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_pass_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_pass_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_pass_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_pass_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PassStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PassStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_pass_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_pass_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_raise_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___RaiseStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_raise_stmt", 376, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___RaiseStmtObject *)cpy_r_node)->_from_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_raise_stmt", 376, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_nodes___RaiseStmt(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_raise_stmt", 376, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_raise_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___RaiseStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_raise_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_raise_stmt", 375, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_raise_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_raise_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_raise_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_raise_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_raise_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_raise_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_raise_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_raise_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_try_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_new;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 380, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_vars;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___optional_names(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 381, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r4 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_types;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___optional_expressions(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 382, CPyStatic_treetransform___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_handlers;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_treetransform___TransformVisitor___blocks(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 383, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    cpy_r_r8 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_else_body;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_treetransform___TransformVisitor___optional_block(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 384, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r10 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_finally_body;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_treetransform___TransformVisitor___optional_block(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 385, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    cpy_r_r12 = CPyDef_nodes___TryStmt(cpy_r_r1, cpy_r_r3, cpy_r_r5, cpy_r_r7, cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 379, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_new = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___TryStmtObject *)cpy_r_node)->_is_star;
    ((mypy___nodes___TryStmtObject *)cpy_r_new)->_is_star = cpy_r_r13;
    return cpy_r_new;
CPyL8: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TryStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_try_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt", 378, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_try_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_try_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_try_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_try_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_try_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_new;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = ((mypy___nodes___WithStmtObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 392, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    cpy_r_r2 = ((mypy___nodes___WithStmtObject *)cpy_r_node)->_target;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___optional_expressions(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 393, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_r4 = ((mypy___nodes___WithStmtObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 394, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r6 = ((mypy___nodes___WithStmtObject *)cpy_r_node)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 395, CPyStatic_treetransform___globals);
        goto CPyL16;
    }
    cpy_r_r8 = CPyDef_nodes___WithStmt(cpy_r_r1, cpy_r_r3, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 391, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    cpy_r_new = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___WithStmtObject *)cpy_r_node)->_is_async;
    ((mypy___nodes___WithStmtObject *)cpy_r_new)->_is_async = cpy_r_r9;
    cpy_r_r11 = ((mypy___nodes___WithStmtObject *)cpy_r_node)->_analyzed_types;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = PyList_New(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 398, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r15 = 0;
CPyL7: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_types___Type)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_with_stmt", 398, CPyStatic_treetransform___globals, "mypy.types.Type", cpy_r_r20);
        goto CPyL19;
    }
    cpy_r_typ = cpy_r_r21;
    cpy_r_r22 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_typ); /* type */
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 398, CPyStatic_treetransform___globals);
        goto CPyL19;
    }
    cpy_r_r23 = CPyList_SetItemUnsafe(cpy_r_r14, cpy_r_r15, cpy_r_r22);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 398, CPyStatic_treetransform___globals);
        goto CPyL19;
    }
    cpy_r_r24 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r24;
    goto CPyL7;
CPyL12: ;
    CPy_DECREF(((mypy___nodes___WithStmtObject *)cpy_r_new)->_analyzed_types);
    ((mypy___nodes___WithStmtObject *)cpy_r_new)->_analyzed_types = cpy_r_r14;
    return cpy_r_new;
CPyL13: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL18: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL13;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___WithStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_with_stmt(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt", 390, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_as_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
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
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypy___patterns___AsPatternObject *)cpy_r_p)->_pattern;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___patterns___AsPatternObject *)cpy_r_p)->_pattern;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_as_pattern", 403, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r3);
        goto CPyL12;
    }
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_as_pattern", 403, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = ((mypy___patterns___AsPatternObject *)cpy_r_p)->_name;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = ((mypy___patterns___AsPatternObject *)cpy_r_p)->_name;
    CPy_INCREF(cpy_r_r11);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_as_pattern", 404, CPyStatic_treetransform___globals, "mypy.nodes.NameExpr", cpy_r_r11);
        goto CPyL13;
    }
    cpy_r_r13 = CPyDef_treetransform___TransformVisitor___duplicate_name(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_as_pattern", 404, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL9: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = CPyDef_patterns___AsPattern(cpy_r_r6, cpy_r_r14);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_as_pattern", 402, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    return cpy_r_r16;
CPyL12: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL13: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_as_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___AsPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_as_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_as_pattern", 401, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_as_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_as_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_as_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_as_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_as_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_as_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_as_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_as_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_or_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_pat;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___patterns___OrPatternObject *)cpy_r_p)->_patterns;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern", 408, CPyStatic_treetransform___globals);
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
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_patterns___Pattern)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_or_pattern", 408, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_pat = cpy_r_r10;
    cpy_r_r11 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_pat);
    CPy_DECREF(cpy_r_pat);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern", 408, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern", 408, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_r14 = CPyDef_patterns___OrPattern(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern", 408, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
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
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_or_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___OrPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_or_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern", 407, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_or_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_or_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_or_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_or_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_or_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_or_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_or_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_value_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___patterns___ValuePatternObject *)cpy_r_p)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_value_pattern", 411, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_patterns___ValuePattern(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_value_pattern", 411, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_value_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___ValuePattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_value_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_value_pattern", 410, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_value_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_value_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_value_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_value_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_value_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_value_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_value_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_value_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_singleton_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___patterns___SingletonPatternObject *)cpy_r_p)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_patterns___SingletonPattern(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_singleton_pattern", 414, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_singleton_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___SingletonPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_singleton_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_singleton_pattern", 413, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_singleton_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_singleton_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_singleton_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_singleton_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_sequence_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_pat;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___patterns___SequencePatternObject *)cpy_r_p)->_patterns;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern", 417, CPyStatic_treetransform___globals);
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
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_patterns___Pattern)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_sequence_pattern", 417, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_pat = cpy_r_r10;
    cpy_r_r11 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_pat);
    CPy_DECREF(cpy_r_pat);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern", 417, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern", 417, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_r14 = CPyDef_patterns___SequencePattern(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern", 417, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
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
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_sequence_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___SequencePattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_sequence_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern", 416, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_sequence_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_sequence_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_sequence_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_starred_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
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
    cpy_r_r0 = ((mypy___patterns___StarredPatternObject *)cpy_r_p)->_capture;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___patterns___StarredPatternObject *)cpy_r_p)->_capture;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_starred_pattern", 420, CPyStatic_treetransform___globals, "mypy.nodes.NameExpr", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___duplicate_name(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_starred_pattern", 420, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = CPyDef_patterns___StarredPattern(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_starred_pattern", 420, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_starred_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___StarredPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_starred_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_starred_pattern", 419, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_starred_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_starred_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_starred_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_starred_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_starred_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_starred_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_starred_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_starred_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_mapping_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_pat;
    PyObject *cpy_r_r25;
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = ((mypy___patterns___MappingPatternObject *)cpy_r_p)->_keys;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 424, CPyStatic_treetransform___globals);
        goto CPyL22;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL23;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_mapping_pattern", 424, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL24;
    }
    cpy_r_expr = cpy_r_r10;
    cpy_r_r11 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_expr);
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 424, CPyStatic_treetransform___globals);
        goto CPyL24;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 424, CPyStatic_treetransform___globals);
        goto CPyL24;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_r14 = ((mypy___patterns___MappingPatternObject *)cpy_r_p)->_values;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = PyList_New(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 425, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r18 = 0;
CPyL9: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL26;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_patterns___Pattern)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_mapping_pattern", 425, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_pat = cpy_r_r24;
    cpy_r_r25 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_pat);
    CPy_DECREF(cpy_r_pat);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 425, CPyStatic_treetransform___globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPyList_SetItemUnsafe(cpy_r_r17, cpy_r_r18, cpy_r_r25);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 425, CPyStatic_treetransform___globals);
        goto CPyL27;
    }
    cpy_r_r27 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r27;
    goto CPyL9;
CPyL14: ;
    cpy_r_r28 = ((mypy___patterns___MappingPatternObject *)cpy_r_p)->_rest;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_r28 != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL18;
    cpy_r_r31 = ((mypy___patterns___MappingPatternObject *)cpy_r_p)->_rest;
    CPy_INCREF(cpy_r_r31);
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_mapping_pattern", 426, CPyStatic_treetransform___globals, "mypy.nodes.NameExpr", cpy_r_r31);
        goto CPyL28;
    }
    cpy_r_r33 = CPyDef_treetransform___TransformVisitor___duplicate_name(cpy_r_self, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 426, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    cpy_r_r34 = cpy_r_r33;
    goto CPyL19;
CPyL18: ;
    cpy_r_r35 = Py_None;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r34 = cpy_r_r35;
CPyL19: ;
    cpy_r_r36 = CPyDef_patterns___MappingPattern(cpy_r_r3, cpy_r_r17, cpy_r_r34);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 423, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    return cpy_r_r36;
CPyL21: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
CPyL26: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL14;
CPyL27: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r17);
    goto CPyL21;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_mapping_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___MappingPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_mapping_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern", 422, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_mapping_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_mapping_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_mapping_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_class_pattern(PyObject *cpy_r_self, PyObject *cpy_r_p) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_class_ref;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_pat;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_pat_2;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = ((mypy___patterns___ClassPatternObject *)cpy_r_p)->_class_ref;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_nodes___RefExpr, 8, mypy___nodes___RefExprObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 430, CPyStatic_treetransform___globals);
        goto CPyL29;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_nodes___Node)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_class_pattern", 430, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r1);
        goto CPyL29;
    }
    cpy_r_class_ref = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_class_ref)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL5;
CPyL4: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_class_ref)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    cpy_r_r7 = cpy_r_r11;
CPyL5: ;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r12 = cpy_r_r7;
    goto CPyL8;
CPyL7: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_class_ref)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL8: ;
    if (cpy_r_r12) {
        goto CPyL11;
    } else
        goto CPyL30;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 431, CPyStatic_treetransform___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL11: ;
    if (likely((Py_TYPE(cpy_r_class_ref) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_class_ref) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_class_ref) == CPyType_nodes___RefExpr)))
        cpy_r_r18 = cpy_r_class_ref;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_class_pattern", 433, CPyStatic_treetransform___globals, "mypy.nodes.RefExpr", cpy_r_class_ref);
        goto CPyL29;
    }
    cpy_r_r19 = ((mypy___patterns___ClassPatternObject *)cpy_r_p)->_positionals;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = PyList_New(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 434, CPyStatic_treetransform___globals);
        goto CPyL31;
    }
    cpy_r_r23 = 0;
CPyL14: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL32;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r23);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_patterns___Pattern)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_class_pattern", 434, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r28);
        goto CPyL33;
    }
    cpy_r_pat = cpy_r_r29;
    cpy_r_r30 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_pat);
    CPy_DECREF(cpy_r_pat);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 434, CPyStatic_treetransform___globals);
        goto CPyL33;
    }
    cpy_r_r31 = CPyList_SetItemUnsafe(cpy_r_r22, cpy_r_r23, cpy_r_r30);
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 434, CPyStatic_treetransform___globals);
        goto CPyL33;
    }
    cpy_r_r32 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r32;
    goto CPyL14;
CPyL19: ;
    cpy_r_r33 = ((mypy___patterns___ClassPatternObject *)cpy_r_p)->_keyword_keys;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = PySequence_List(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 435, CPyStatic_treetransform___globals);
        goto CPyL34;
    }
    cpy_r_r35 = ((mypy___patterns___ClassPatternObject *)cpy_r_p)->_keyword_values;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = PyList_New(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 436, CPyStatic_treetransform___globals);
        goto CPyL35;
    }
    cpy_r_r39 = 0;
CPyL22: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL36;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r39);
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_patterns___Pattern)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_class_pattern", 436, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r44);
        goto CPyL37;
    }
    cpy_r_pat_2 = cpy_r_r45;
    cpy_r_r46 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_pat_2);
    CPy_DECREF(cpy_r_pat_2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 436, CPyStatic_treetransform___globals);
        goto CPyL37;
    }
    cpy_r_r47 = CPyList_SetItemUnsafe(cpy_r_r38, cpy_r_r39, cpy_r_r46);
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 436, CPyStatic_treetransform___globals);
        goto CPyL37;
    }
    cpy_r_r48 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r48;
    goto CPyL22;
CPyL27: ;
    cpy_r_r49 = CPyDef_patterns___ClassPattern(cpy_r_r18, cpy_r_r22, cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 432, CPyStatic_treetransform___globals);
        goto CPyL29;
    }
    return cpy_r_r49;
CPyL29: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL30: ;
    CPy_DECREF(cpy_r_class_ref);
    goto CPyL9;
CPyL31: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL29;
CPyL32: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL19;
CPyL33: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r22);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    goto CPyL29;
CPyL36: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL27;
CPyL37: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL29;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_class_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern", kwlist, 0};
    PyObject *obj_p;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_p)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(Py_TYPE(obj_p) == CPyType_patterns___ClassPattern))
        arg_p = obj_p;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_p); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_class_pattern(arg_self, arg_p);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern", 429, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_class_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_class_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_class_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_class_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_class_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_class_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_class_pattern__PatternVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_subject;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 441, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r2 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_patterns;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 442, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    cpy_r_r6 = 0;
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL14;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_patterns___Pattern)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_match_stmt", 442, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_p = cpy_r_r12;
    cpy_r_r13 = CPyDef_treetransform___TransformVisitor___pattern(cpy_r_self, cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 442, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 442, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r15 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    cpy_r_r16 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_guards;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_treetransform___TransformVisitor___optional_expressions(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 443, CPyStatic_treetransform___globals);
        goto CPyL16;
    }
    cpy_r_r18 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_bodies;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_treetransform___TransformVisitor___blocks(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 444, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r20 = CPyDef_nodes___MatchStmt(cpy_r_r1, cpy_r_r5, cpy_r_r17, cpy_r_r19);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 440, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    return cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r17);
    goto CPyL12;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_match_stmt(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt", 439, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_match_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___StarExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___StarExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_star_expr", 448, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___StarExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_star_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_star_expr", 447, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_star_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_star_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_star_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_star_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_star_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_star_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_star_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_star_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___IntExprObject *)cpy_r_node)->_value;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___IntExpr(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_int_expr", 451, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___IntExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_int_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_int_expr", 450, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_int_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_int_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_int_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_int_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___StrExprObject *)cpy_r_node)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___StrExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_str_expr", 454, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___StrExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_str_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_str_expr", 453, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_str_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_str_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_str_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_str_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___BytesExprObject *)cpy_r_node)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___BytesExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_bytes_expr", 457, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___BytesExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_bytes_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_bytes_expr", 456, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_bytes_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_bytes_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_bytes_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_bytes_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_bytes_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_bytes_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_bytes_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_bytes_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    double cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___FloatExprObject *)cpy_r_node)->_value;
    cpy_r_r1 = CPyDef_nodes___FloatExpr(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_float_expr", 460, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FloatExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_float_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_float_expr", 459, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_float_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_float_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_float_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_float_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___ComplexExprObject *)cpy_r_node)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___ComplexExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_complex_expr", 463, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ComplexExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_complex_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_complex_expr", 462, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_complex_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_complex_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_complex_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_complex_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_complex_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_complex_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_complex_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_complex_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___EllipsisExpr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_ellipsis", 466, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___EllipsisExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_ellipsis(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_ellipsis", 465, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_ellipsis__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_ellipsis__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_ellipsis__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_ellipsis__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_ellipsis__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_ellipsis__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_ellipsis__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_ellipsis__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___duplicate_name(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_name_expr", 469, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NameExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_name_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_name_expr", 468, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___duplicate_name(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_node)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___NameExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_name", 474, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = CPyDef_treetransform___TransformVisitor___copy_ref(cpy_r_self, cpy_r_new, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_name", 475, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r3 = ((mypy___nodes___NameExprObject *)cpy_r_node)->_is_special_form;
    ((mypy___nodes___NameExprObject *)cpy_r_new)->_is_special_form = cpy_r_r3;
    return cpy_r_new;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL3;
}

PyObject *CPyPy_treetransform___TransformVisitor___duplicate_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:duplicate_name", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NameExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___duplicate_name(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "duplicate_name", 471, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_member;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_member_expr", 480, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r2 = ((mypy___nodes___MemberExprObject *)cpy_r_node)->_name;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_nodes___MemberExpr(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_member_expr", 480, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_member = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___MemberExprObject *)cpy_r_node)->_def_var;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = ((mypy___nodes___MemberExprObject *)cpy_r_node)->_def_var;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_member_expr", 484, CPyStatic_treetransform___globals, "mypy.nodes.Var", cpy_r_r7);
        goto CPyL8;
    }
    CPy_DECREF(((mypy___nodes___MemberExprObject *)cpy_r_member)->_def_var);
    ((mypy___nodes___MemberExprObject *)cpy_r_member)->_def_var = cpy_r_r8;
CPyL5: ;
    cpy_r_r10 = CPyDef_treetransform___TransformVisitor___copy_ref(cpy_r_self, cpy_r_member, cpy_r_node);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_member_expr", 485, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    return cpy_r_member;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_member);
    goto CPyL7;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___MemberExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_member_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_member_expr", 479, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

char CPyDef_treetransform___TransformVisitor___copy_ref(PyObject *cpy_r_self, PyObject *cpy_r_new, PyObject *cpy_r_original) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_original)->_kind;
    CPy_INCREF(cpy_r_r0);
    CPy_DECREF(((mypy___nodes___RefExprObject *)cpy_r_new)->_kind);
    ((mypy___nodes___RefExprObject *)cpy_r_new)->_kind = cpy_r_r0;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_original, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 490, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
CPyL1: ;
    cpy_r_r3 = CPY_SET_ATTR(cpy_r_new, CPyType_nodes___RefExpr, 7, cpy_r_r2, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 490, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    cpy_r_r4 = ((mypy___nodes___RefExprObject *)cpy_r_original)->_node;
    CPy_INCREF(cpy_r_r4);
    cpy_r_target = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___nodes___RefExprObject *)cpy_r_original)->_kind;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[9016]; /* 1 */
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r9, cpy_r_r10, 3);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 495, CPyStatic_treetransform___globals);
        goto CPyL22;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 495, CPyStatic_treetransform___globals);
        goto CPyL22;
    }
    if (!cpy_r_r12) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_nodes___Var))
        cpy_r_r13 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "copy_ref", 496, CPyStatic_treetransform___globals, "mypy.nodes.Var", cpy_r_target);
        goto CPyL21;
    }
    cpy_r_r14 = CPyDef_treetransform___TransformVisitor___visit_var(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 496, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    cpy_r_target = cpy_r_r14;
    goto CPyL20;
CPyL9: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_nodes___Decorator))
        cpy_r_r19 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "copy_ref", 498, CPyStatic_treetransform___globals, "mypy.nodes.Decorator", cpy_r_target);
        goto CPyL22;
    }
    cpy_r_r20 = ((mypy___nodes___DecoratorObject *)cpy_r_r19)->_var;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_target);
    cpy_r_r21 = CPyDef_treetransform___TransformVisitor___visit_var(cpy_r_self, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 498, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    cpy_r_target = cpy_r_r21;
    goto CPyL20;
CPyL13: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL20;
    cpy_r_r26 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_self)->_func_placeholder_map;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "copy_ref", "TransformVisitor", "func_placeholder_map", 501, CPyStatic_treetransform___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r26);
CPyL15: ;
    CPy_INCREF(cpy_r_target);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_nodes___FuncDef))
        cpy_r_r27 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "copy_ref", 501, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_target);
        goto CPyL23;
    }
    if (likely(Py_TYPE(cpy_r_target) == CPyType_nodes___FuncDef))
        cpy_r_r28 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "copy_ref", 501, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_target);
        goto CPyL24;
    }
    cpy_r_r29 = CPyDict_Get(cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 501, CPyStatic_treetransform___globals);
        goto CPyL21;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_nodes___FuncDef))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "copy_ref", 501, CPyStatic_treetransform___globals, "mypy.nodes.FuncDef", cpy_r_r29);
        goto CPyL21;
    }
    cpy_r_target = cpy_r_r30;
CPyL20: ;
    CPy_DECREF(((mypy___nodes___RefExprObject *)cpy_r_new)->_node);
    ((mypy___nodes___RefExprObject *)cpy_r_new)->_node = cpy_r_target;
    cpy_r_r32 = ((mypy___nodes___RefExprObject *)cpy_r_original)->_is_new_def;
    ((mypy___nodes___RefExprObject *)cpy_r_new)->_is_new_def = cpy_r_r32;
    cpy_r_r34 = ((mypy___nodes___RefExprObject *)cpy_r_original)->_is_inferred_def;
    ((mypy___nodes___RefExprObject *)cpy_r_new)->_is_inferred_def = cpy_r_r34;
    return 1;
CPyL21: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL22: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r26);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL21;
}

PyObject *CPyPy_treetransform___TransformVisitor___copy_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"new", "original", 0};
    static CPyArg_Parser parser = {"OO:copy_ref", kwlist, 0};
    PyObject *obj_new;
    PyObject *obj_original;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_new, &obj_original)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_new;
    if (likely((Py_TYPE(obj_new) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_new) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_new) == CPyType_nodes___RefExpr)))
        arg_new = obj_new;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_new); 
        goto fail;
    }
    PyObject *arg_original;
    if (likely((Py_TYPE(obj_original) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_original) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_original) == CPyType_nodes___RefExpr)))
        arg_original = obj_original;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_original); 
        goto fail;
    }
    char retval = CPyDef_treetransform___TransformVisitor___copy_ref(arg_self, arg_new, arg_original);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "copy_ref", 488, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___YieldFromExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_yield_from_expr", 507, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___YieldFromExpr(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_yield_from_expr", 507, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___YieldFromExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_yield_from_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_yield_from_expr", 506, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_yield_from_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_yield_from_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_yield_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___YieldExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_yield_expr", 510, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___YieldExpr(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_yield_expr", 510, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___YieldExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_yield_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_yield_expr", 509, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_yield_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_yield_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_yield_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_yield_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_yield_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_yield_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_yield_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_yield_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___AwaitExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_await_expr", 513, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___AwaitExpr(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_await_expr", 513, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AwaitExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_await_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_await_expr", 512, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_await_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_await_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_await_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_await_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_await_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_await_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_await_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_await_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_callee;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 517, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r2 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 518, CPyStatic_treetransform___globals);
        goto CPyL10;
    }
    cpy_r_r4 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_arg_kinds;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r6[1] = {cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 519, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_call_expr", 519, CPyStatic_treetransform___globals, "list", cpy_r_r8);
        goto CPyL12;
    }
    cpy_r_r10 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_arg_names;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 520, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_call_expr", 520, CPyStatic_treetransform___globals, "list", cpy_r_r14);
        goto CPyL14;
    }
    cpy_r_r16 = ((mypy___nodes___CallExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 521, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r18 = CPyDef_nodes___CallExpr(cpy_r_r1, cpy_r_r3, cpy_r_r9, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 516, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    return cpy_r_r18;
CPyL9: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r15);
    goto CPyL9;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___CallExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_call_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr", 515, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___OpExprObject *)cpy_r_node)->_op;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___OpExprObject *)cpy_r_node)->_left;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr", 527, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r3 = ((mypy___nodes___OpExprObject *)cpy_r_node)->_right;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr", 528, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r5 = ((mypy___nodes___OpExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr", 529, CPyStatic_treetransform___globals);
        goto CPyL10;
    }
    if (Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeAliasExpr)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL7545;
    if (cpy_r_r6 == Py_None)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL7545;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_op_expr", 529, CPyStatic_treetransform___globals, "mypy.nodes.TypeAliasExpr or None", cpy_r_r6);
    goto CPyL10;
__LL7545: ;
    cpy_r_r8 = CPyDef_nodes___OpExpr(cpy_r_r0, cpy_r_r2, cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr", 525, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_new = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___OpExprObject *)cpy_r_node)->_method_type;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr", 531, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    CPy_DECREF(((mypy___nodes___OpExprObject *)cpy_r_new)->_method_type);
    ((mypy___nodes___OpExprObject *)cpy_r_new)->_method_type = cpy_r_r10;
    return cpy_r_new;
CPyL7: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL7;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___OpExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_op_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr", 524, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_op_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_op_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_op_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypy___nodes___ComparisonExprObject *)cpy_r_node)->_operators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ComparisonExprObject *)cpy_r_node)->_operands;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr", 535, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    cpy_r_r3 = CPyDef_nodes___ComparisonExpr(cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr", 535, CPyStatic_treetransform___globals);
        goto CPyL10;
    }
    cpy_r_new = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___ComparisonExprObject *)cpy_r_node)->_method_types;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = PyList_New(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr", 536, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r8 = 0;
CPyL4: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL13;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r8);
    if (PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type))
        cpy_r_r14 = cpy_r_r13;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL7546;
    if (cpy_r_r13 == Py_None)
        cpy_r_r14 = cpy_r_r13;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL7546;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_comparison_expr", 536, CPyStatic_treetransform___globals, "mypy.types.Type or None", cpy_r_r13);
    goto CPyL14;
__LL7546: ;
    cpy_r_t = cpy_r_r14;
    cpy_r_r15 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr", 536, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_r16 = CPyList_SetItemUnsafe(cpy_r_r7, cpy_r_r8, cpy_r_r15);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr", 536, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r17;
    goto CPyL4;
CPyL9: ;
    CPy_DECREF(((mypy___nodes___ComparisonExprObject *)cpy_r_new)->_method_types);
    ((mypy___nodes___ComparisonExprObject *)cpy_r_new)->_method_types = cpy_r_r7;
    return cpy_r_new;
CPyL10: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL10;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ComparisonExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_comparison_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr", 534, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_comparison_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_comparison_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_comparison_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___CastExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_cast_expr", 540, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___CastExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* type */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_cast_expr", 540, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_nodes___CastExpr(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_cast_expr", 540, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___CastExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_cast_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_cast_expr", 539, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_cast_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_cast_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assert_type_expr", 543, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* type */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assert_type_expr", 543, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_nodes___AssertTypeExpr(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assert_type_expr", 543, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssertTypeExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assert_type_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assert_type_expr", 542, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assert_type_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_reveal_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___RevealExprObject *)cpy_r_node)->_kind;
    cpy_r_r1 = cpy_r_r0 == 0;
    if (!cpy_r_r1) goto CPyL8;
    cpy_r_r2 = ((mypy___nodes___RevealExprObject *)cpy_r_node)->_expr;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (cpy_r_r4) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_reveal_expr", 547, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = ((mypy___nodes___RevealExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_reveal_expr", 548, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_r8 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_reveal_expr", 548, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_nodes___RevealExpr(0, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_reveal_expr", 548, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL8: ;
    CPy_INCREF(cpy_r_node);
    return cpy_r_node;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_reveal_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___RevealExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_reveal_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_reveal_expr", 545, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_reveal_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_reveal_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_reveal_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_reveal_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_reveal_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_reveal_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_reveal_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_reveal_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = ((mypy___nodes___SuperExprObject *)cpy_r_node)->_call;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_super_expr", 554, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_call = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_call)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL8;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_super_expr", 555, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = ((mypy___nodes___SuperExprObject *)cpy_r_node)->_name;
    CPy_INCREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_call) == CPyType_nodes___CallExpr))
        cpy_r_r8 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_super_expr", 556, CPyStatic_treetransform___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL9;
    }
    cpy_r_r9 = CPyDef_nodes___SuperExpr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_super_expr", 556, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_new = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___SuperExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(((mypy___nodes___SuperExprObject *)cpy_r_new)->_info);
    ((mypy___nodes___SuperExprObject *)cpy_r_new)->_info = cpy_r_r10;
    return cpy_r_new;
CPyL7: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL8: ;
    CPy_DECREF(cpy_r_call);
    goto CPyL2;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___SuperExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_super_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_super_expr", 553, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_super_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_super_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_super_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_super_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___AssignmentExprObject *)cpy_r_node)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_expr", 561, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___AssignmentExprObject *)cpy_r_node)->_value;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_expr", 561, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_nodes___AssignmentExpr(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_expr", 561, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___AssignmentExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assignment_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_expr", 560, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assignment_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assignment_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assignment_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___UnaryExprObject *)cpy_r_node)->_op;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___UnaryExprObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_unary_expr", 564, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDef_nodes___UnaryExpr(cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_unary_expr", 564, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_new = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___UnaryExprObject *)cpy_r_node)->_method_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___optional_type(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_unary_expr", 565, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    CPy_DECREF(((mypy___nodes___UnaryExprObject *)cpy_r_new)->_method_type);
    ((mypy___nodes___UnaryExprObject *)cpy_r_new)->_method_type = cpy_r_r5;
    return cpy_r_new;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___UnaryExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_unary_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_unary_expr", 563, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_unary_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_unary_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_unary_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_unary_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_list_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___ListExprObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_list_expr", 569, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___ListExpr(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_list_expr", 569, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ListExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_list_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_list_expr", 568, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_list_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_list_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_list_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_list_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_list_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_list_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_list_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_list_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_dict_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
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
    PyObject *cpy_r_key;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = ((mypy___nodes___DictExprObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 573, CPyStatic_treetransform___globals);
        goto CPyL15;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    PyObject *__tmp7547;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 2))) {
        __tmp7547 = NULL;
        goto __LL7548;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 0), CPyType_nodes___Expression))
        __tmp7547 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp7547 = NULL;
    }
    if (__tmp7547 != NULL) goto __LL7549;
    if (PyTuple_GET_ITEM(cpy_r_r9, 0) == Py_None)
        __tmp7547 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp7547 = NULL;
    }
    if (__tmp7547 != NULL) goto __LL7549;
    __tmp7547 = NULL;
__LL7549: ;
    if (__tmp7547 == NULL) goto __LL7548;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 1), CPyType_nodes___Expression)))
        __tmp7547 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp7547 = NULL;
    }
    if (__tmp7547 == NULL) goto __LL7548;
    __tmp7547 = cpy_r_r9;
__LL7548: ;
    if (unlikely(__tmp7547 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r9); cpy_r_r10 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7550 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp7550);
        PyObject *__tmp7551;
        if (PyObject_TypeCheck(__tmp7550, CPyType_nodes___Expression))
            __tmp7551 = __tmp7550;
        else {
            __tmp7551 = NULL;
        }
        if (__tmp7551 != NULL) goto __LL7552;
        if (__tmp7550 == Py_None)
            __tmp7551 = __tmp7550;
        else {
            __tmp7551 = NULL;
        }
        if (__tmp7551 != NULL) goto __LL7552;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp7550); 
        __tmp7551 = NULL;
__LL7552: ;
        cpy_r_r10.f0 = __tmp7551;
        PyObject *__tmp7553 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp7553);
        PyObject *__tmp7554;
        if (likely(PyObject_TypeCheck(__tmp7553, CPyType_nodes___Expression)))
            __tmp7554 = __tmp7553;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp7553); 
            __tmp7554 = NULL;
        }
        cpy_r_r10.f1 = __tmp7554;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 573, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_key = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    cpy_r_value = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_key != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL18;
    if (likely(cpy_r_key != Py_None))
        cpy_r_r15 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_dict_expr", 573, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_key);
        goto CPyL19;
    }
    cpy_r_r16 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 573, CPyStatic_treetransform___globals);
        goto CPyL19;
    }
    cpy_r_r17 = cpy_r_r16;
    goto CPyL9;
CPyL8: ;
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r17 = cpy_r_r18;
CPyL9: ;
    cpy_r_r19 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 573, CPyStatic_treetransform___globals);
        goto CPyL20;
    }
    cpy_r_r20.f0 = cpy_r_r17;
    cpy_r_r20.f1 = cpy_r_r19;
    CPy_INCREF(cpy_r_r20.f0);
    CPy_INCREF(cpy_r_r20.f1);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7555 = cpy_r_r20.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp7555);
    PyObject *__tmp7556 = cpy_r_r20.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp7556);
    cpy_r_r22 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r21);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 573, CPyStatic_treetransform___globals);
        goto CPyL17;
    }
    cpy_r_r23 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r23;
    goto CPyL2;
CPyL12: ;
    cpy_r_r24 = CPyDef_nodes___DictExpr(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 572, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    return cpy_r_r24;
CPyL14: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_value);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___DictExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_dict_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr", 571, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_dict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_dict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_dict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_dict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_dict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_dict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_dict_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___TupleExprObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_tuple_expr", 577, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___TupleExpr(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_tuple_expr", 577, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TupleExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_tuple_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_tuple_expr", 576, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_tuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_tuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_tuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_tuple_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_set_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___SetExprObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expressions(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_set_expr", 580, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___SetExpr(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_set_expr", 580, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___SetExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_set_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_set_expr", 579, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_set_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_set_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_set_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_set_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_set_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_set_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_set_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_set_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
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
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_base;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 583, CPyStatic_treetransform___globals);
        goto CPyL26;
    }
    cpy_r_r2 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_index;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 583, CPyStatic_treetransform___globals);
        goto CPyL27;
    }
    cpy_r_r4 = CPyDef_nodes___IndexExpr(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 583, CPyStatic_treetransform___globals);
        goto CPyL26;
    }
    cpy_r_new = cpy_r_r4;
    cpy_r_r5 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_method_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_method_type;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 585, CPyStatic_treetransform___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL28;
    }
    cpy_r_r10 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r9); /* type */
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 585, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    CPy_DECREF(((mypy___nodes___IndexExprObject *)cpy_r_new)->_method_type);
    ((mypy___nodes___IndexExprObject *)cpy_r_new)->_method_type = cpy_r_r10;
CPyL7: ;
    cpy_r_r12 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PyObject_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 586, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL25;
    cpy_r_r16 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed;
    cpy_r_r17 = (PyObject *)CPyType_nodes___TypeApplication;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_r16)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___TypeApplication))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 588, CPyStatic_treetransform___globals, "mypy.nodes.TypeApplication", cpy_r_r21);
        goto CPyL28;
    }
    cpy_r_r23 = CPyDef_treetransform___TransformVisitor___visit_type_application(cpy_r_self, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 588, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    CPy_DECREF(((mypy___nodes___IndexExprObject *)cpy_r_new)->_analyzed);
    ((mypy___nodes___IndexExprObject *)cpy_r_new)->_analyzed = cpy_r_r23;
    goto CPyL16;
CPyL13: ;
    cpy_r_r25 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_nodes___TypeAliasExpr))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 590, CPyStatic_treetransform___globals, "mypy.nodes.TypeAliasExpr", cpy_r_r25);
        goto CPyL28;
    }
    cpy_r_r27 = CPyDef_treetransform___TransformVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 590, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    CPy_DECREF(((mypy___nodes___IndexExprObject *)cpy_r_new)->_analyzed);
    ((mypy___nodes___IndexExprObject *)cpy_r_new)->_analyzed = cpy_r_r27;
CPyL16: ;
    cpy_r_r29 = ((mypy___nodes___IndexExprObject *)cpy_r_new)->_analyzed;
    CPy_INCREF(cpy_r_r29);
    if (Py_TYPE(cpy_r_r29) == CPyType_nodes___TypeApplication)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL7557;
    if (Py_TYPE(cpy_r_r29) == CPyType_nodes___TypeAliasExpr)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL7557;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 591, CPyStatic_treetransform___globals, "union[mypy.nodes.TypeApplication, mypy.nodes.TypeAliasExpr]", cpy_r_r29);
    goto CPyL28;
__LL7557: ;
    cpy_r_r31 = ((mypy___nodes___IndexExprObject *)cpy_r_node)->_analyzed;
    CPy_INCREF(cpy_r_r31);
    if (Py_TYPE(cpy_r_r31) == CPyType_nodes___TypeApplication)
        cpy_r_r32 = cpy_r_r31;
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 != NULL) goto __LL7558;
    if (Py_TYPE(cpy_r_r31) == CPyType_nodes___TypeAliasExpr)
        cpy_r_r32 = cpy_r_r31;
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 != NULL) goto __LL7558;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 591, CPyStatic_treetransform___globals, "union[mypy.nodes.TypeApplication, mypy.nodes.TypeAliasExpr]", cpy_r_r31);
    goto CPyL29;
__LL7558: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___TypeApplication;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___TypeApplication))
        cpy_r_r37 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 591, CPyStatic_treetransform___globals, "mypy.nodes.TypeApplication", cpy_r_r30);
        goto CPyL30;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_nodes___Context___set_line(cpy_r_r37, cpy_r_r32, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 591, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    cpy_r_r42 = cpy_r_r41;
    goto CPyL25;
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___TypeAliasExpr))
        cpy_r_r43 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_index_expr", 591, CPyStatic_treetransform___globals, "mypy.nodes.TypeAliasExpr", cpy_r_r30);
        goto CPyL30;
    }
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_nodes___Context___set_line(cpy_r_r43, cpy_r_r32, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 591, CPyStatic_treetransform___globals);
        goto CPyL28;
    }
    cpy_r_r42 = cpy_r_r47;
CPyL25: ;
    return cpy_r_new;
CPyL26: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL27: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r30);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r32);
    goto CPyL26;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___IndexExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_index_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr", 582, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_index_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_index_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_index_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___TypeApplicationObject *)cpy_r_node)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_application", 595, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___TypeApplicationObject *)cpy_r_node)->_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___types(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_application", 595, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_nodes___TypeApplication(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_application", 595, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypeApplication))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_application(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_application", 594, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_application__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_application__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_application__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_application__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_list_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_generator;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___nodes___ListComprehensionObject *)cpy_r_node)->_generator;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___duplicate_generator(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_list_comprehension", 598, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_generator = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___ListComprehensionObject *)cpy_r_node)->_generator;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_nodes___Context___set_line(cpy_r_generator, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_list_comprehension", 599, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r7 = CPyDef_nodes___ListComprehension(cpy_r_generator);
    CPy_DECREF(cpy_r_generator);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_list_comprehension", 600, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_generator);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ListComprehension))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_list_comprehension(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_list_comprehension", 597, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_list_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_list_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_list_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_list_comprehension__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_list_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_list_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_list_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_list_comprehension__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_set_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_generator;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___nodes___SetComprehensionObject *)cpy_r_node)->_generator;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___duplicate_generator(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_set_comprehension", 603, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    cpy_r_generator = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___SetComprehensionObject *)cpy_r_node)->_generator;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_nodes___Context___set_line(cpy_r_generator, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_set_comprehension", 604, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r7 = CPyDef_nodes___SetComprehension(cpy_r_generator);
    CPy_DECREF(cpy_r_generator);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_set_comprehension", 605, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_generator);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___SetComprehension))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_set_comprehension(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_set_comprehension", 602, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_set_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_set_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_set_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_set_comprehension__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_set_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_set_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_set_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_set_comprehension__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
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
    PyObject *cpy_r_s;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_conditions;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    cpy_r_r0 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_node)->_key;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 611, CPyStatic_treetransform___globals);
        goto CPyL31;
    }
    cpy_r_r2 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_node)->_value;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 612, CPyStatic_treetransform___globals);
        goto CPyL32;
    }
    cpy_r_r4 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_node)->_indices;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = PyList_New(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 613, CPyStatic_treetransform___globals);
        goto CPyL33;
    }
    cpy_r_r8 = 0;
CPyL4: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL34;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r8);
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 613, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL35;
    }
    cpy_r_index = cpy_r_r14;
    cpy_r_r15 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_index);
    CPy_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 613, CPyStatic_treetransform___globals);
        goto CPyL35;
    }
    cpy_r_r16 = CPyList_SetItemUnsafe(cpy_r_r7, cpy_r_r8, cpy_r_r15);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 613, CPyStatic_treetransform___globals);
        goto CPyL35;
    }
    cpy_r_r17 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r17;
    goto CPyL4;
CPyL9: ;
    cpy_r_r18 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_node)->_sequences;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = PyList_New(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 614, CPyStatic_treetransform___globals);
        goto CPyL36;
    }
    cpy_r_r22 = 0;
CPyL11: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL37;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Expression)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 614, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r27);
        goto CPyL38;
    }
    cpy_r_s = cpy_r_r28;
    cpy_r_r29 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 614, CPyStatic_treetransform___globals);
        goto CPyL38;
    }
    cpy_r_r30 = CPyList_SetItemUnsafe(cpy_r_r21, cpy_r_r22, cpy_r_r29);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 614, CPyStatic_treetransform___globals);
        goto CPyL38;
    }
    cpy_r_r31 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r31;
    goto CPyL11;
CPyL16: ;
    cpy_r_r32 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_node)->_condlists;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = PyList_New(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals);
        goto CPyL39;
    }
    cpy_r_r36 = 0;
CPyL18: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL40;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r36);
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals, "list", cpy_r_r41);
        goto CPyL41;
    }
    cpy_r_conditions = cpy_r_r42;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_conditions)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = PyList_New(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals);
        goto CPyL42;
    }
    cpy_r_r46 = 0;
CPyL22: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_conditions)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL43;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_conditions, cpy_r_r46);
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_nodes___Expression)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r51);
        goto CPyL44;
    }
    cpy_r_cond = cpy_r_r52;
    cpy_r_r53 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_cond);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals);
        goto CPyL44;
    }
    cpy_r_r54 = CPyList_SetItemUnsafe(cpy_r_r45, cpy_r_r46, cpy_r_r53);
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals);
        goto CPyL44;
    }
    cpy_r_r55 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r55;
    goto CPyL22;
CPyL27: ;
    cpy_r_r56 = CPyList_SetItemUnsafe(cpy_r_r35, cpy_r_r36, cpy_r_r45);
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 615, CPyStatic_treetransform___globals);
        goto CPyL41;
    }
    cpy_r_r57 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r57;
    goto CPyL18;
CPyL29: ;
    cpy_r_r58 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_node)->_is_async;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDef_nodes___DictionaryComprehension(cpy_r_r1, cpy_r_r3, cpy_r_r7, cpy_r_r21, cpy_r_r35, cpy_r_r58);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 610, CPyStatic_treetransform___globals);
        goto CPyL31;
    }
    return cpy_r_r59;
CPyL31: ;
    cpy_r_r60 = NULL;
    return cpy_r_r60;
CPyL32: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL9;
CPyL35: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    goto CPyL31;
CPyL37: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL16;
CPyL38: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r32);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL29;
CPyL41: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_conditions);
    goto CPyL31;
CPyL43: ;
    CPy_DECREF(cpy_r_conditions);
    goto CPyL27;
CPyL44: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_conditions);
    CPy_DecRef(cpy_r_r45);
    goto CPyL31;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___DictionaryComprehension))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension", 607, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___duplicate_generator(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_generator_expr", 620, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___GeneratorExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_generator_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_generator_expr", 619, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_generator_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_generator_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_generator_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_generator_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___duplicate_generator(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_conditions;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = ((mypy___nodes___GeneratorExprObject *)cpy_r_node)->_left_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 624, CPyStatic_treetransform___globals);
        goto CPyL30;
    }
    cpy_r_r2 = ((mypy___nodes___GeneratorExprObject *)cpy_r_node)->_indices;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 625, CPyStatic_treetransform___globals);
        goto CPyL31;
    }
    cpy_r_r6 = 0;
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL32;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_nodes___Expression)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "duplicate_generator", 625, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r11);
        goto CPyL33;
    }
    cpy_r_index = cpy_r_r12;
    cpy_r_r13 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_index);
    CPy_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 625, CPyStatic_treetransform___globals);
        goto CPyL33;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 625, CPyStatic_treetransform___globals);
        goto CPyL33;
    }
    cpy_r_r15 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    cpy_r_r16 = ((mypy___nodes___GeneratorExprObject *)cpy_r_node)->_sequences;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = PyList_New(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 626, CPyStatic_treetransform___globals);
        goto CPyL34;
    }
    cpy_r_r20 = 0;
CPyL10: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL35;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_nodes___Expression)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "duplicate_generator", 626, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r25);
        goto CPyL36;
    }
    cpy_r_s = cpy_r_r26;
    cpy_r_r27 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 626, CPyStatic_treetransform___globals);
        goto CPyL36;
    }
    cpy_r_r28 = CPyList_SetItemUnsafe(cpy_r_r19, cpy_r_r20, cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 626, CPyStatic_treetransform___globals);
        goto CPyL36;
    }
    cpy_r_r29 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r29;
    goto CPyL10;
CPyL15: ;
    cpy_r_r30 = ((mypy___nodes___GeneratorExprObject *)cpy_r_node)->_condlists;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = PyList_New(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals);
        goto CPyL37;
    }
    cpy_r_r34 = 0;
CPyL17: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL38;
    cpy_r_r39 = CPyList_GetItemUnsafe(cpy_r_r30, cpy_r_r34);
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals, "list", cpy_r_r39);
        goto CPyL39;
    }
    cpy_r_conditions = cpy_r_r40;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_conditions)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = PyList_New(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals);
        goto CPyL40;
    }
    cpy_r_r44 = 0;
CPyL21: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_conditions)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL41;
    cpy_r_r49 = CPyList_GetItemUnsafe(cpy_r_conditions, cpy_r_r44);
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_nodes___Expression)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r49);
        goto CPyL42;
    }
    cpy_r_cond = cpy_r_r50;
    cpy_r_r51 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_cond);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals);
        goto CPyL42;
    }
    cpy_r_r52 = CPyList_SetItemUnsafe(cpy_r_r43, cpy_r_r44, cpy_r_r51);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals);
        goto CPyL42;
    }
    cpy_r_r53 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r53;
    goto CPyL21;
CPyL26: ;
    cpy_r_r54 = CPyList_SetItemUnsafe(cpy_r_r33, cpy_r_r34, cpy_r_r43);
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 627, CPyStatic_treetransform___globals);
        goto CPyL39;
    }
    cpy_r_r55 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r55;
    goto CPyL17;
CPyL28: ;
    cpy_r_r56 = ((mypy___nodes___GeneratorExprObject *)cpy_r_node)->_is_async;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_nodes___GeneratorExpr(cpy_r_r1, cpy_r_r5, cpy_r_r19, cpy_r_r33, cpy_r_r56);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 623, CPyStatic_treetransform___globals);
        goto CPyL30;
    }
    return cpy_r_r57;
CPyL30: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL31: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL30;
CPyL32: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL33: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r16);
    goto CPyL30;
CPyL35: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL15;
CPyL36: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r30);
    goto CPyL30;
CPyL38: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL28;
CPyL39: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_conditions);
    goto CPyL30;
CPyL41: ;
    CPy_DECREF(cpy_r_conditions);
    goto CPyL26;
CPyL42: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_conditions);
    CPy_DecRef(cpy_r_r43);
    goto CPyL30;
}

PyObject *CPyPy_treetransform___TransformVisitor___duplicate_generator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:duplicate_generator", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___GeneratorExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___duplicate_generator(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "duplicate_generator", 622, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_slice_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___SliceExprObject *)cpy_r_node)->_begin_index;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr", 633, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___nodes___SliceExprObject *)cpy_r_node)->_end_index;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr", 634, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r4 = ((mypy___nodes___SliceExprObject *)cpy_r_node)->_stride;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr", 635, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_nodes___SliceExpr(cpy_r_r1, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr", 632, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___SliceExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_slice_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr", 631, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_slice_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_slice_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_slice_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_slice_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_slice_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_slice_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_slice_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_conditional_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___ConditionalExprObject *)cpy_r_node)->_cond;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr", 640, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___nodes___ConditionalExprObject *)cpy_r_node)->_if_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr", 640, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    cpy_r_r4 = ((mypy___nodes___ConditionalExprObject *)cpy_r_node)->_else_expr;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr", 640, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_nodes___ConditionalExpr(cpy_r_r1, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr", 639, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ConditionalExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_conditional_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr", 638, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_conditional_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_conditional_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_conditional_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_conditional_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_conditional_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_conditional_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_conditional_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___TypeVarExpr, 6, mypy___nodes___TypeVarExprObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 645, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___TypeVarExpr, 7, mypy___nodes___TypeVarExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 646, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___TypeVarExprObject *)cpy_r_node)->_values;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___types(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 647, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r4 = ((mypy___nodes___TypeVarExprObject *)cpy_r_node)->_upper_bound;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r4); /* type */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 648, CPyStatic_treetransform___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypy___nodes___TypeVarExprObject *)cpy_r_node)->_default;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r6); /* type */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 649, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    cpy_r_r8 = ((mypy___nodes___TypeVarExprObject *)cpy_r_node)->_variance;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_nodes___TypeVarExpr(cpy_r_r0, cpy_r_r1, cpy_r_r3, cpy_r_r5, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 644, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypeVarExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_var_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr", 643, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_var_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_var_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_var_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_paramspec_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___ParamSpecExpr, 6, mypy___nodes___ParamSpecExprObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr", 655, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___ParamSpecExpr, 7, mypy___nodes___ParamSpecExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr", 656, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_node)->_upper_bound;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* type */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr", 657, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r4 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_node)->_default;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r4); /* type */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr", 658, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_node)->_variance;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_nodes___ParamSpecExpr(cpy_r_r0, cpy_r_r1, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr", 654, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_paramspec_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ParamSpecExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_paramspec_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr", 653, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_paramspec_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_paramspec_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___TypeVarTupleExpr, 6, mypy___nodes___TypeVarTupleExprObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr", 664, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___TypeVarTupleExpr, 7, mypy___nodes___TypeVarTupleExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr", 665, CPyStatic_treetransform___globals);
        goto CPyL7;
    }
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_node)->_upper_bound;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* type */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr", 666, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r4 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_node)->_tuple_fallback;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_node)->_default;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r5); /* type */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr", 668, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r7 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_node)->_variance;
    CPyTagged_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_nodes___TypeVarTupleExpr(cpy_r_r0, cpy_r_r1, cpy_r_r3, cpy_r_r4, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr", 663, CPyStatic_treetransform___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_var_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypeVarTupleExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr", 662, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_var_tuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_var_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___TypeAliasExprObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___TypeAliasExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_type_alias_expr", 673, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypeAliasExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_alias_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_alias_expr", 672, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_alias_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_alias_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_old_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_column;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_nodes___NewTypeExpr(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_newtype_expr", 676, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    cpy_r_res = cpy_r_r4;
    cpy_r_r5 = ((mypy___nodes___NewTypeExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(((mypy___nodes___NewTypeExprObject *)cpy_r_res)->_info);
    ((mypy___nodes___NewTypeExprObject *)cpy_r_res)->_info = cpy_r_r5;
    return cpy_r_res;
CPyL2: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NewTypeExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_newtype_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_newtype_expr", 675, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_newtype_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_newtype_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_nodes___NamedTupleExpr(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_namedtuple_expr", 681, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___NamedTupleExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_namedtuple_expr", 680, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_namedtuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_namedtuple_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_enum_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___EnumCallExprObject *)cpy_r_node)->_values;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_nodes___EnumCallExpr(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_enum_call_expr", 684, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_enum_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___EnumCallExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_enum_call_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_enum_call_expr", 683, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_enum_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_enum_call_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_enum_call_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___TypedDictExprObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___TypedDictExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_typeddict_expr", 687, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TypedDictExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_typeddict_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_typeddict_expr", 686, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_typeddict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_typeddict_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___PromoteExprObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___PromoteExpr(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit__promote_expr", 690, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___PromoteExpr))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit__promote_expr(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit__promote_expr", 689, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit__promote_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit__promote_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit__promote_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit__promote_expr__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit__promote_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit__promote_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit__promote_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit__promote_expr__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_temp_node(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___nodes___TempNodeObject *)cpy_r_node)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* type */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_temp_node", 693, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    cpy_r_r2 = 2;
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_nodes___TempNode(cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_temp_node", 693, CPyStatic_treetransform___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_temp_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___TempNode))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_temp_node(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_temp_node", 692, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_temp_node__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_temp_node(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_temp_node__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_temp_node__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_temp_node__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___visit_temp_node__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_temp_node(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___TransformVisitor___visit_temp_node__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___visit_temp_node__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_temp_node__ExpressionVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___node(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_node, CPyType_nodes___Node, 4, mypy___nodes___NodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_node, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "node", 696, CPyStatic_treetransform___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_nodes___Node)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "node", 696, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r0);
        goto CPyL4;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = NULL;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_new, CPyType_nodes___Node, 1, mypy___nodes___NodeObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_new, cpy_r_node, cpy_r_r2, cpy_r_r3, cpy_r_r4); /* set_line */
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "node", 697, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_new;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL4;
}

PyObject *CPyPy_treetransform___TransformVisitor___node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:node", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Node)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___node(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "node", 695, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___mypyfile(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyDef_nodes___MypyFile___accept(cpy_r_node, cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "mypyfile", 701, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_nodes___Node)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "mypyfile", 701, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_new)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL5;
    } else
        goto CPyL10;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/treetransform.py", "mypyfile", 702, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    CPy_INCREF(cpy_r_new);
    if (likely(Py_TYPE(cpy_r_new) == CPyType_nodes___MypyFile))
        cpy_r_r7 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "mypyfile", 703, CPyStatic_treetransform___globals, "mypy.nodes.MypyFile", cpy_r_new);
        goto CPyL11;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_nodes___Context___set_line(cpy_r_r7, cpy_r_node, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "mypyfile", 703, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_new) == CPyType_nodes___MypyFile))
        cpy_r_r12 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "mypyfile", 704, CPyStatic_treetransform___globals, "mypy.nodes.MypyFile", cpy_r_new);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL9;
}

PyObject *CPyPy_treetransform___TransformVisitor___mypyfile(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:mypyfile", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___MypyFile))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___mypyfile(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "mypyfile", 700, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "expr", 707, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_nodes___Node)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "expr", 707, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r3 = CPy_TypeCheck(cpy_r_new, cpy_r_r2);
    if (cpy_r_r3) {
        goto CPyL5;
    } else
        goto CPyL10;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/treetransform.py", "expr", 708, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    CPy_INCREF(cpy_r_new);
    if (likely(PyObject_TypeCheck(cpy_r_new, CPyType_nodes___Expression)))
        cpy_r_r5 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "expr", 709, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_new);
        goto CPyL11;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_nodes___Context___set_line(cpy_r_r5, cpy_r_expr, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "expr", 709, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_new, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "expr", 710, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_new);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL9;
}

PyObject *CPyPy_treetransform___TransformVisitor___expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "expr", 706, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___stmt(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_stmt, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_stmt, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "stmt", 713, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_nodes___Node)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "stmt", 713, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_nodes___Statement;
    cpy_r_r3 = CPy_TypeCheck(cpy_r_new, cpy_r_r2);
    if (cpy_r_r3) {
        goto CPyL5;
    } else
        goto CPyL10;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/treetransform.py", "stmt", 714, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    CPy_INCREF(cpy_r_new);
    if (likely(PyObject_TypeCheck(cpy_r_new, CPyType_nodes___Statement)))
        cpy_r_r5 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "stmt", 715, CPyStatic_treetransform___globals, "mypy.nodes.Statement", cpy_r_new);
        goto CPyL11;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_nodes___Context___set_line(cpy_r_r5, cpy_r_stmt, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "stmt", 715, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_new, CPyType_nodes___Statement)))
        cpy_r_r10 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "stmt", 716, CPyStatic_treetransform___globals, "mypy.nodes.Statement", cpy_r_new);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL9;
}

PyObject *CPyPy_treetransform___TransformVisitor___stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:stmt", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(PyObject_TypeCheck(obj_stmt, CPyType_nodes___Statement)))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.Statement", obj_stmt); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___stmt(arg_self, arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "stmt", 712, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_pattern, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_pattern, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "pattern", 719, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_nodes___Node)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "pattern", 719, CPyStatic_treetransform___globals, "mypy.nodes.Node", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r3 = CPy_TypeCheck(cpy_r_new, cpy_r_r2);
    if (cpy_r_r3) {
        goto CPyL5;
    } else
        goto CPyL10;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/treetransform.py", "pattern", 720, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    CPy_INCREF(cpy_r_new);
    if (likely(PyObject_TypeCheck(cpy_r_new, CPyType_patterns___Pattern)))
        cpy_r_r5 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "pattern", 721, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_new);
        goto CPyL11;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_nodes___Context___set_line(cpy_r_r5, cpy_r_pattern, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "pattern", 721, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_new, CPyType_patterns___Pattern)))
        cpy_r_r10 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "pattern", 722, CPyStatic_treetransform___globals, "mypy.patterns.Pattern", cpy_r_new);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL9;
}

PyObject *CPyPy_treetransform___TransformVisitor___pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(PyObject_TypeCheck(obj_pattern, CPyType_patterns___Pattern)))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.Pattern", obj_pattern); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___pattern(arg_self, arg_pattern);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "pattern", 718, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___optional_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_expr != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_expr);
    if (likely(cpy_r_expr != Py_None))
        cpy_r_r2 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "optional_expr", 730, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_expr);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_expr", 730, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_treetransform___TransformVisitor___optional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:optional_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression))
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL7559;
    if (obj_expr == Py_None)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL7559;
    CPy_TypeError("mypy.nodes.Expression or None", obj_expr); 
    goto fail;
__LL7559: ;
    PyObject *retval = CPyDef_treetransform___TransformVisitor___optional_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "optional_expr", 728, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_new;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_treetransform___TransformVisitor___visit_block(cpy_r_self, cpy_r_block);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "block", 735, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    cpy_r_new = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___BlockObject *)cpy_r_block)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    CPyTagged_DECREF(((mypy___nodes___BlockObject *)cpy_r_new)->_line);
    ((mypy___nodes___BlockObject *)cpy_r_new)->_line = cpy_r_r1;
    return cpy_r_new;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_treetransform___TransformVisitor___block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___block(arg_self, arg_block);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "block", 734, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___optional_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_block != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_block);
    if (likely(cpy_r_block != Py_None))
        cpy_r_r2 = cpy_r_block;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "optional_block", 741, CPyStatic_treetransform___globals, "mypy.nodes.Block", cpy_r_block);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_block", 741, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_treetransform___TransformVisitor___optional_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:optional_block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (Py_TYPE(obj_block) == CPyType_nodes___Block)
        arg_block = obj_block;
    else {
        arg_block = NULL;
    }
    if (arg_block != NULL) goto __LL7560;
    if (obj_block == Py_None)
        arg_block = obj_block;
    else {
        arg_block = NULL;
    }
    if (arg_block != NULL) goto __LL7560;
    CPy_TypeError("mypy.nodes.Block or None", obj_block); 
    goto fail;
__LL7560: ;
    PyObject *retval = CPyDef_treetransform___TransformVisitor___optional_block(arg_self, arg_block);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "optional_block", 739, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___statements(PyObject *cpy_r_self, PyObject *cpy_r_statements) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_statements)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "statements", 746, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_statements)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_statements, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Statement)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "statements", 746, CPyStatic_treetransform___globals, "mypy.nodes.Statement", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_stmt = cpy_r_r9;
    cpy_r_r10 = CPyDef_treetransform___TransformVisitor___stmt(cpy_r_self, cpy_r_stmt);
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "statements", 746, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/treetransform.py", "statements", 746, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___statements(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"statements", 0};
    static CPyArg_Parser parser = {"O:statements", kwlist, 0};
    PyObject *obj_statements;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_statements)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_statements;
    if (likely(PyList_Check(obj_statements)))
        arg_statements = obj_statements;
    else {
        CPy_TypeError("list", obj_statements); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___statements(arg_self, arg_statements);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "statements", 745, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___expressions(PyObject *cpy_r_self, PyObject *cpy_r_expressions) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
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
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_expressions)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "expressions", 749, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_expressions)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_expressions, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "expressions", 749, CPyStatic_treetransform___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_expr = cpy_r_r9;
    cpy_r_r10 = CPyDef_treetransform___TransformVisitor___expr(cpy_r_self, cpy_r_expr);
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "expressions", 749, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/treetransform.py", "expressions", 749, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___expressions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expressions", 0};
    static CPyArg_Parser parser = {"O:expressions", kwlist, 0};
    PyObject *obj_expressions;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expressions)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expressions;
    if (likely(PyList_Check(obj_expressions)))
        arg_expressions = obj_expressions;
    else {
        CPy_TypeError("list", obj_expressions); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___expressions(arg_self, arg_expressions);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "expressions", 748, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___optional_expressions(PyObject *cpy_r_self, PyObject *cpy_r_expressions) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_expressions", 754, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_expressions);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_expressions", 754, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL10;
    if (PyObject_TypeCheck(cpy_r_r2, CPyType_nodes___Expression))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL7561;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL7561;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "optional_expressions", 754, CPyStatic_treetransform___globals, "mypy.nodes.Expression or None", cpy_r_r2);
    goto CPyL11;
__LL7561: ;
    cpy_r_expr = cpy_r_r3;
    cpy_r_r4 = CPyDef_treetransform___TransformVisitor___optional_expr(cpy_r_self, cpy_r_expr);
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_expressions", 754, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    cpy_r_r5 = PyList_Append(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_expressions", 754, CPyStatic_treetransform___globals);
        goto CPyL11;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r7 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_expressions", 754, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    return cpy_r_r0;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___optional_expressions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expressions", 0};
    static CPyArg_Parser parser = {"O:optional_expressions", kwlist, 0};
    PyObject *obj_expressions;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expressions)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expressions = obj_expressions;
    PyObject *retval = CPyDef_treetransform___TransformVisitor___optional_expressions(arg_self, arg_expressions);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "optional_expressions", 751, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___blocks(PyObject *cpy_r_self, PyObject *cpy_r_blocks) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "blocks", 757, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___Block))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "blocks", 757, CPyStatic_treetransform___globals, "mypy.nodes.Block", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_block = cpy_r_r9;
    cpy_r_r10 = CPyDef_treetransform___TransformVisitor___block(cpy_r_self, cpy_r_block);
    CPy_DECREF(cpy_r_block);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "blocks", 757, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/treetransform.py", "blocks", 757, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___blocks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"blocks", 0};
    static CPyArg_Parser parser = {"O:blocks", kwlist, 0};
    PyObject *obj_blocks;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_blocks)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___blocks(arg_self, arg_blocks);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "blocks", 756, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___names(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "names", 760, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___NameExpr))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "names", 760, CPyStatic_treetransform___globals, "mypy.nodes.NameExpr", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_name = cpy_r_r9;
    cpy_r_r10 = CPyDef_treetransform___TransformVisitor___duplicate_name(cpy_r_self, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "names", 760, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/treetransform.py", "names", 760, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:names", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(PyList_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("list", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___names(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "names", 759, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___optional_names(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_names", 763, CPyStatic_treetransform___globals);
        goto CPyL11;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_names);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_names", 764, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL13;
    if (Py_TYPE(cpy_r_r2) == CPyType_nodes___NameExpr)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL7562;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL7562;
    CPy_TypeErrorTraceback("mypy/treetransform.py", "optional_names", 764, CPyStatic_treetransform___globals, "mypy.nodes.NameExpr or None", cpy_r_r2);
    goto CPyL14;
__LL7562: ;
    cpy_r_name = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_name != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL15;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r6 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "optional_names", 766, CPyStatic_treetransform___globals, "mypy.nodes.NameExpr", cpy_r_name);
        goto CPyL14;
    }
    cpy_r_r7 = CPyDef_treetransform___TransformVisitor___duplicate_name(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_names", 766, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    cpy_r_r8 = PyList_Append(cpy_r_result, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_names", 766, CPyStatic_treetransform___globals);
        goto CPyL14;
    } else
        goto CPyL2;
CPyL8: ;
    cpy_r_r10 = Py_None;
    cpy_r_r11 = PyList_Append(cpy_r_result, cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_names", 768, CPyStatic_treetransform___globals);
        goto CPyL14;
    } else
        goto CPyL2;
CPyL9: ;
    cpy_r_r13 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_names", 764, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    return cpy_r_result;
CPyL11: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL12: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___optional_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:optional_names", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_names = obj_names;
    PyObject *retval = CPyDef_treetransform___TransformVisitor___optional_names(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "optional_names", 762, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___type(PyObject *cpy_r_self, PyObject *cpy_r_type) {
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
}

PyObject *CPyPy_treetransform___TransformVisitor___type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:type", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___type(arg_self, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "type", 771, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___optional_type(PyObject *cpy_r_self, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_type != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_type);
    if (likely(cpy_r_type != Py_None))
        cpy_r_r2 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "optional_type", 777, CPyStatic_treetransform___globals, "mypy.types.Type", cpy_r_type);
        goto CPyL5;
    }
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* type */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "optional_type", 777, CPyStatic_treetransform___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_treetransform___TransformVisitor___optional_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:optional_type", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (PyObject_TypeCheck(obj_type, CPyType_types___Type))
        arg_type = obj_type;
    else {
        arg_type = NULL;
    }
    if (arg_type != NULL) goto __LL7563;
    if (obj_type == Py_None)
        arg_type = obj_type;
    else {
        arg_type = NULL;
    }
    if (arg_type != NULL) goto __LL7563;
    CPy_TypeError("mypy.types.Type or None", obj_type); 
    goto fail;
__LL7563: ;
    PyObject *retval = CPyDef_treetransform___TransformVisitor___optional_type(arg_self, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "optional_type", 775, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___TransformVisitor___types(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "types", 782, CPyStatic_treetransform___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/treetransform.py", "types", 782, CPyStatic_treetransform___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_type = cpy_r_r9;
    cpy_r_r10 = CPY_GET_METHOD(cpy_r_self, CPyType_treetransform___TransformVisitor, 101, mypy___treetransform___TransformVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_type); /* type */
    CPy_DECREF(cpy_r_type);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "types", 782, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/treetransform.py", "types", 782, CPyStatic_treetransform___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_treetransform___TransformVisitor___types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_self) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_self) == CPyType_treetransform___TransformVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___TransformVisitor___types(arg_self, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "types", 781, CPyStatic_treetransform___globals);
    return NULL;
}

char CPyDef_treetransform___FuncMapInitializer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_transformer) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_transformer);
    if (((mypy___treetransform___FuncMapInitializerObject *)cpy_r_self)->_transformer != NULL) {
        CPy_DECREF(((mypy___treetransform___FuncMapInitializerObject *)cpy_r_self)->_transformer);
    }
    ((mypy___treetransform___FuncMapInitializerObject *)cpy_r_self)->_transformer = cpy_r_transformer;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/treetransform.py", "__init__", 792, CPyStatic_treetransform___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___FuncMapInitializer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"transformer", 0};
    PyObject *obj_transformer;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_transformer)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_treetransform___FuncMapInitializer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.FuncMapInitializer", obj_self); 
        goto fail;
    }
    PyObject *arg_transformer;
    if (likely((Py_TYPE(obj_transformer) == CPyType_visitors___TypeAssertTransformVisitor) || (Py_TYPE(obj_transformer) == CPyType_checker___TypeTransformVisitor) || (Py_TYPE(obj_transformer) == CPyType_treetransform___TransformVisitor)))
        arg_transformer = obj_transformer;
    else {
        CPy_TypeError("mypy.treetransform.TransformVisitor", obj_transformer); 
        goto fail;
    }
    char retval = CPyDef_treetransform___FuncMapInitializer_____init__(arg_self, arg_transformer);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "__init__", 791, CPyStatic_treetransform___globals);
    return NULL;
}

char CPyDef_treetransform___FuncMapInitializer___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
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
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___treetransform___FuncMapInitializerObject *)cpy_r_self)->_transformer;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncMapInitializer", "transformer", 795, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_r0)->_func_placeholder_map;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "TransformVisitor", "func_placeholder_map", 795, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_node);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 795, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r4 = cpy_r_r2;
    cpy_r_r5 = cpy_r_r4 ^ 1;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 798, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r7 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_arguments;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncDef", "arguments", 798, CPyStatic_treetransform___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_body;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = Py_None;
    cpy_r_r10 = CPyDef_nodes___FuncDef(cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 797, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    cpy_r_r11 = ((mypy___treetransform___FuncMapInitializerObject *)cpy_r_self)->_transformer;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "FuncMapInitializer", "transformer", 797, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_r12 = ((mypy___treetransform___TransformVisitorObject *)cpy_r_r11)->_func_placeholder_map;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/treetransform.py", "visit_func_def", "TransformVisitor", "func_placeholder_map", 797, CPyStatic_treetransform___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyDict_SetItem(cpy_r_r12, cpy_r_node, cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 797, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
CPyL10: ;
    cpy_r_r15 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 800, CPyStatic_treetransform___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL13: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
}

PyObject *CPyPy_treetransform___FuncMapInitializer___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_treetransform___FuncMapInitializer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.FuncMapInitializer", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_treetransform___FuncMapInitializer___visit_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def", 794, CPyStatic_treetransform___globals);
    return NULL;
}

char CPyDef_treetransform___FuncMapInitializer___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_treetransform___FuncMapInitializer___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_treetransform___FuncMapInitializer___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_treetransform___FuncMapInitializer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.FuncMapInitializer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_treetransform___FuncMapInitializer___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___FuncMapInitializer___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_treetransform___FuncMapInitializer___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___FuncMapInitializer___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_treetransform___FuncMapInitializer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.FuncMapInitializer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___FuncMapInitializer___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

PyObject *CPyDef_treetransform___FuncMapInitializer___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_treetransform___FuncMapInitializer___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_treetransform___FuncMapInitializer___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_treetransform___FuncMapInitializer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.treetransform.FuncMapInitializer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_treetransform___FuncMapInitializer___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/treetransform.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_treetransform___globals);
    return NULL;
}

char CPyDef_treetransform_____top_level__(void) {
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
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
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
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", -1, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_treetransform___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 6, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9843]; /* ('Iterable', 'Optional', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_treetransform___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 8, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9844]; /* ('GDEF', 'REVEAL_TYPE', 'Argument', 'AssertStmt',
                                     'AssertTypeExpr', 'AssignmentExpr', 'AssignmentStmt',
                                     'AwaitExpr', 'Block', 'BreakStmt', 'BytesExpr',
                                     'CallExpr', 'CastExpr', 'ClassDef', 'ComparisonExpr',
                                     'ComplexExpr', 'ConditionalExpr', 'ContinueStmt',
                                     'Decorator', 'DelStmt', 'DictExpr',
                                     'DictionaryComprehension', 'EllipsisExpr',
                                     'EnumCallExpr', 'Expression', 'ExpressionStmt',
                                     'FloatExpr', 'ForStmt', 'FuncDef', 'FuncItem',
                                     'GeneratorExpr', 'GlobalDecl', 'IfStmt', 'Import',
                                     'ImportAll', 'ImportFrom', 'IndexExpr', 'IntExpr',
                                     'LambdaExpr', 'ListComprehension', 'ListExpr',
                                     'MatchStmt', 'MemberExpr', 'MypyFile', 'NamedTupleExpr',
                                     'NameExpr', 'NewTypeExpr', 'Node', 'NonlocalDecl',
                                     'OperatorAssignmentStmt', 'OpExpr', 'OverloadedFuncDef',
                                     'OverloadPart', 'ParamSpecExpr', 'PassStmt',
                                     'PromoteExpr', 'RaiseStmt', 'RefExpr', 'ReturnStmt',
                                     'RevealExpr', 'SetComprehension', 'SetExpr',
                                     'SliceExpr', 'StarExpr', 'Statement', 'StrExpr',
                                     'SuperExpr', 'SymbolTable', 'TempNode', 'TryStmt',
                                     'TupleExpr', 'TypeAliasExpr', 'TypeApplication',
                                     'TypedDictExpr', 'TypeVarExpr', 'TypeVarTupleExpr',
                                     'UnaryExpr', 'Var', 'WhileStmt', 'WithStmt',
                                     'YieldExpr', 'YieldFromExpr') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_treetransform___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 10, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9262]; /* ('AsPattern', 'ClassPattern', 'MappingPattern',
                                     'OrPattern', 'Pattern', 'SequencePattern',
                                     'SingletonPattern', 'StarredPattern', 'ValuePattern') */
    cpy_r_r18 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r19 = CPyStatic_treetransform___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 94, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_mypy___patterns = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___patterns);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r22 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r23 = CPyStatic_treetransform___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 105, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_mypy___traverser = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9845]; /* ('FunctionLike', 'ProperType', 'Type') */
    cpy_r_r26 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r27 = CPyStatic_treetransform___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 106, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_mypy___types = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9846]; /* ('replace_object_state',) */
    cpy_r_r30 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r31 = CPyStatic_treetransform___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 107, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_mypy___util = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9212]; /* ('NodeVisitor',) */
    cpy_r_r34 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r35 = CPyStatic_treetransform___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 108, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    CPyModule_mypy___visitor = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = (PyObject *)CPyType_mypy___visitor___NodeVisitor;
    cpy_r_r38 = (PyObject *)CPyType_nodes___Node;
    cpy_r_r39 = PyObject_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 111, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r40 = PyTuple_Pack(1, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 111, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r41 = CPyStatics[1031]; /* 'mypy.treetransform' */
    cpy_r_r42 = (PyObject *)CPyType_treetransform___TransformVisitor_template;
    cpy_r_r43 = CPyType_FromTemplate(cpy_r_r42, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 111, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r44 = CPyDef_treetransform___TransformVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", -1, CPyStatic_treetransform___globals);
        goto CPyL26;
    }
    cpy_r_r45 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r46 = CPyStatics[1127]; /* 'test_only' */
    cpy_r_r47 = CPyStatics[1128]; /* 'var_map' */
    cpy_r_r48 = CPyStatics[1129]; /* 'func_placeholder_map' */
    cpy_r_r49 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r50 = PyTuple_Pack(4, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 111, CPyStatic_treetransform___globals);
        goto CPyL26;
    }
    cpy_r_r51 = PyObject_SetAttr(cpy_r_r43, cpy_r_r45, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 111, CPyStatic_treetransform___globals);
        goto CPyL26;
    }
    CPyType_treetransform___TransformVisitor = (PyTypeObject *)cpy_r_r43;
    CPy_INCREF(CPyType_treetransform___TransformVisitor);
    cpy_r_r53 = CPyStatic_treetransform___globals;
    cpy_r_r54 = CPyStatics[1030]; /* 'TransformVisitor' */
    cpy_r_r55 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 111, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r57 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r58 = PyTuple_Pack(1, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 785, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r59 = CPyStatics[1031]; /* 'mypy.treetransform' */
    cpy_r_r60 = (PyObject *)CPyType_treetransform___FuncMapInitializer_template;
    cpy_r_r61 = CPyType_FromTemplate(cpy_r_r60, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 785, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    cpy_r_r62 = CPyDef_treetransform___FuncMapInitializer_trait_vtable_setup();
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", -1, CPyStatic_treetransform___globals);
        goto CPyL27;
    }
    cpy_r_r63 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r64 = CPyStatics[6179]; /* 'transformer' */
    cpy_r_r65 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r66 = PyTuple_Pack(2, cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 785, CPyStatic_treetransform___globals);
        goto CPyL27;
    }
    cpy_r_r67 = PyObject_SetAttr(cpy_r_r61, cpy_r_r63, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 785, CPyStatic_treetransform___globals);
        goto CPyL27;
    }
    CPyType_treetransform___FuncMapInitializer = (PyTypeObject *)cpy_r_r61;
    CPy_INCREF(CPyType_treetransform___FuncMapInitializer);
    cpy_r_r69 = CPyStatic_treetransform___globals;
    cpy_r_r70 = CPyStatics[6180]; /* 'FuncMapInitializer' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/treetransform.py", "<module>", 785, CPyStatic_treetransform___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r73 = 2;
    return cpy_r_r73;
CPyL26: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL25;
}
