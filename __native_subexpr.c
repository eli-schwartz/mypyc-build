#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
subexpr___SubexpressionFinder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef subexpr___SubexpressionFinder_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___subexpr___SubexpressionFinderObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___subexpr___SubexpressionFinderObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *subexpr___SubexpressionFinder_setup(PyTypeObject *type);
PyObject *CPyDef_subexpr___SubexpressionFinder(void);

static PyObject *
subexpr___SubexpressionFinder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_subexpr___SubexpressionFinder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = subexpr___SubexpressionFinder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_subexpr___SubexpressionFinder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
subexpr___SubexpressionFinder_traverse(mypy___server___subexpr___SubexpressionFinderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_expressions);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___subexpr___SubexpressionFinderObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___subexpr___SubexpressionFinderObject))));
    return 0;
}

static int
subexpr___SubexpressionFinder_clear(mypy___server___subexpr___SubexpressionFinderObject *self)
{
    Py_CLEAR(self->_expressions);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___subexpr___SubexpressionFinderObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___subexpr___SubexpressionFinderObject))));
    return 0;
}

static void
subexpr___SubexpressionFinder_dealloc(mypy___server___subexpr___SubexpressionFinderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, subexpr___SubexpressionFinder_dealloc)
    subexpr___SubexpressionFinder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem subexpr___SubexpressionFinder_vtable[139];
static CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_subexpr___SubexpressionFinder_trait_vtable_setup(void)
{
    CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_await_expr__NodeVisitor_glue,
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
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_trait_vtable, subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_trait_vtable));
    size_t subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_offset_table, subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_trait_vtable, subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_offset_table, subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__StatementVisitor_glue,
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
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_trait_vtable, subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_trait_vtable));
    size_t subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_offset_table, subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_trait_vtable, subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_trait_vtable));
    size_t subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_offset_table, subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem subexpr___SubexpressionFinder_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)subexpr___SubexpressionFinder_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def,
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
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_member_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_call_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_op_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_index_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_application__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_star_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_await_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_super_expr__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder_____init__,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_int_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_name_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_float_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_str_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_unicode_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_complex_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_ellipsis,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_super_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit__promote_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_member_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_yield_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_call_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_op_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_slice_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_cast_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_unary_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dict_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_index_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_generator_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_type_application,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_star_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___visit_await_expr,
        (CPyVTableItem)CPyDef_subexpr___SubexpressionFinder___add,
    };
    memcpy(subexpr___SubexpressionFinder_vtable, subexpr___SubexpressionFinder_vtable_scratch, sizeof(subexpr___SubexpressionFinder_vtable));
    return 1;
}

static PyObject *
subexpr___SubexpressionFinder_get_expressions(mypy___server___subexpr___SubexpressionFinderObject *self, void *closure);
static int
subexpr___SubexpressionFinder_set_expressions(mypy___server___subexpr___SubexpressionFinderObject *self, PyObject *value, void *closure);

static PyGetSetDef subexpr___SubexpressionFinder_getseters[] = {
    {"expressions",
     (getter)subexpr___SubexpressionFinder_get_expressions, (setter)subexpr___SubexpressionFinder_set_expressions,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef subexpr___SubexpressionFinder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unicode_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_unicode_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_yield_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_slice_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_slice_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_reveal_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_reveal_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_list_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dict_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_dict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_set_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_comprehension",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_list_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_comprehension",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_set_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_conditional_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_conditional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add",
     (PyCFunction)CPyPy_subexpr___SubexpressionFinder___add,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_subexpr___SubexpressionFinder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SubexpressionFinder",
    .tp_new = subexpr___SubexpressionFinder_new,
    .tp_dealloc = (destructor)subexpr___SubexpressionFinder_dealloc,
    .tp_traverse = (traverseproc)subexpr___SubexpressionFinder_traverse,
    .tp_clear = (inquiry)subexpr___SubexpressionFinder_clear,
    .tp_getset = subexpr___SubexpressionFinder_getseters,
    .tp_methods = subexpr___SubexpressionFinder_methods,
    .tp_init = subexpr___SubexpressionFinder_init,
    .tp_members = subexpr___SubexpressionFinder_members,
    .tp_basicsize = sizeof(mypy___server___subexpr___SubexpressionFinderObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___subexpr___SubexpressionFinderObject),
    .tp_weaklistoffset = sizeof(mypy___server___subexpr___SubexpressionFinderObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_subexpr___SubexpressionFinder_template = &CPyType_subexpr___SubexpressionFinder_template_;

static PyObject *
subexpr___SubexpressionFinder_setup(PyTypeObject *type)
{
    mypy___server___subexpr___SubexpressionFinderObject *self;
    self = (mypy___server___subexpr___SubexpressionFinderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = subexpr___SubexpressionFinder_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_subexpr___SubexpressionFinder(void)
{
    PyObject *self = subexpr___SubexpressionFinder_setup(CPyType_subexpr___SubexpressionFinder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_subexpr___SubexpressionFinder_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
subexpr___SubexpressionFinder_get_expressions(mypy___server___subexpr___SubexpressionFinderObject *self, void *closure)
{
    if (unlikely(self->_expressions == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'expressions' of 'SubexpressionFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_expressions);
    PyObject *retval = self->_expressions;
    return retval;
}

static int
subexpr___SubexpressionFinder_set_expressions(mypy___server___subexpr___SubexpressionFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SubexpressionFinder' object attribute 'expressions' cannot be deleted");
        return -1;
    }
    if (self->_expressions != NULL) {
        CPy_DECREF(self->_expressions);
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
    self->_expressions = tmp;
    return 0;
}
static PyMethodDef subexprmodule_methods[] = {
    {"get_subexpressions", (PyCFunction)CPyPy_subexpr___get_subexpressions, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef subexprmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.subexpr",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    subexprmodule_methods
};

PyObject *CPyInit_mypy___server___subexpr(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___subexpr_internal) {
        Py_INCREF(CPyModule_mypy___server___subexpr_internal);
        return CPyModule_mypy___server___subexpr_internal;
    }
    CPyModule_mypy___server___subexpr_internal = PyModule_Create(&subexprmodule);
    if (unlikely(CPyModule_mypy___server___subexpr_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___subexpr_internal, "__name__");
    CPyStatic_subexpr___globals = PyModule_GetDict(CPyModule_mypy___server___subexpr_internal);
    if (unlikely(CPyStatic_subexpr___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_subexpr_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___subexpr_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___subexpr_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_subexpr___SubexpressionFinder);
    return NULL;
}

PyObject *CPyDef_subexpr___get_subexpressions(PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "get_subexpressions", 39, CPyStatic_subexpr___globals);
        goto CPyL4;
    }
    cpy_r_visitor = cpy_r_r0;
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_node, CPyType_nodes___Node, 4, mypy___nodes___NodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_node, cpy_r_visitor); /* accept */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "get_subexpressions", 40, CPyStatic_subexpr___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL2: ;
    cpy_r_r2 = ((mypy___server___subexpr___SubexpressionFinderObject *)cpy_r_visitor)->_expressions;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'expressions' of 'SubexpressionFinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "get_subexpressions", 41, CPyStatic_subexpr___globals);
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

PyObject *CPyPy_subexpr___get_subexpressions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:get_subexpressions", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Node)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___get_subexpressions(arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "get_subexpressions", 38, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "__init__", 46, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    if (((mypy___server___subexpr___SubexpressionFinderObject *)cpy_r_self)->_expressions != NULL) {
        CPy_DECREF(((mypy___server___subexpr___SubexpressionFinderObject *)cpy_r_self)->_expressions);
    }
    ((mypy___server___subexpr___SubexpressionFinderObject *)cpy_r_self)->_expressions = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "__init__", 46, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "__init__", 45, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_int_expr", 49, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_int_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_int_expr", 48, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_int_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_int_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_int_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_int_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_name_expr", 52, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_name_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_name_expr", 51, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_float_expr", 55, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_float_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_float_expr", 54, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_float_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_float_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_float_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_float_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_str_expr", 58, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_str_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_str_expr", 57, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_str_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_str_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_str_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_str_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_bytes_expr", 61, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_bytes_expr", 60, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_bytes_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_bytes_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_bytes_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_bytes_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_bytes_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_unicode_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_unicode_expr", 64, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_unicode_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unicode_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_unicode_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_unicode_expr", 63, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_complex_expr", 67, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_complex_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_complex_expr", 66, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_complex_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_complex_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_complex_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_complex_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_complex_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_ellipsis", 70, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_ellipsis(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_ellipsis", 69, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_ellipsis__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_ellipsis__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_ellipsis__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_ellipsis__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_ellipsis__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_super_expr", 73, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_super_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_super_expr", 72, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_super_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_super_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_super_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_super_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_super_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_super_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_super_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_super_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_var_expr", 76, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_var_expr", 75, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_var_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_var_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_alias_expr", 79, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_alias_expr", 78, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_alias_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_alias_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_namedtuple_expr", 82, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_namedtuple_expr", 81, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_namedtuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_namedtuple_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_typeddict_expr", 85, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_typeddict_expr", 84, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_typeddict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_typeddict_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit__promote_expr", 88, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit__promote_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit__promote_expr", 87, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit__promote_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit__promote_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit__promote_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit__promote_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit__promote_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_newtype_expr", 91, CPyStatic_subexpr___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Expression)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_newtype_expr", 90, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_newtype_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_newtype_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_member_expr", 94, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_member_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_member_expr", 95, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___MemberExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_member_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_member_expr", 93, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_member_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_member_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_member_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_member_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_from_expr", 98, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_from_expr", 99, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___YieldFromExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_from_expr", 97, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_from_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_from_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_from_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_from_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_yield_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_expr", 102, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_yield_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_expr", 103, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___YieldExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_expr", 101, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_yield_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_yield_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_yield_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_call_expr", 106, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_call_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_call_expr", 107, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CallExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_call_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_call_expr", 105, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_call_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_call_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_call_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_call_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_op_expr", 110, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_op_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_op_expr", 111, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___OpExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_op_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_op_expr", 109, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_op_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_op_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_op_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_op_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_op_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_op_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_op_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_op_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_comparison_expr", 114, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_comparison_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_comparison_expr", 115, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ComparisonExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_comparison_expr", 113, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_comparison_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_comparison_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_comparison_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_comparison_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_slice_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_slice_expr", 118, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_slice_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_slice_expr", 119, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SliceExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_slice_expr", 117, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_slice_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_slice_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_slice_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_slice_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_slice_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_slice_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_slice_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_cast_expr", 122, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_cast_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_cast_expr", 123, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CastExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_cast_expr", 121, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_cast_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_cast_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_cast_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_cast_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_assert_type_expr", 126, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_assert_type_expr", 127, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AssertTypeExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assert_type_expr", 125, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assert_type_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assert_type_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assert_type_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assert_type_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_reveal_expr", 130, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_reveal_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_reveal_expr", 131, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_reveal_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___RevealExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_reveal_expr", 129, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_reveal_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_reveal_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_reveal_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_reveal_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_reveal_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_reveal_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_reveal_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_assignment_expr", 134, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_assignment_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_assignment_expr", 135, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AssignmentExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assignment_expr", 133, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assignment_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assignment_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assignment_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assignment_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_unary_expr", 138, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_unary_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_unary_expr", 139, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___UnaryExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_unary_expr", 137, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_unary_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_unary_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_unary_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_unary_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_list_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_expr", 142, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_list_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_expr", 143, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ListExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_list_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_expr", 141, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_list_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_list_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_list_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_list_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_list_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_list_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_tuple_expr", 146, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_tuple_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_tuple_expr", 147, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TupleExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_tuple_expr", 145, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_tuple_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_tuple_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_tuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_tuple_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_dict_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_dict_expr", 150, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_dict_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_dict_expr", 151, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___DictExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dict_expr", 149, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dict_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dict_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dict_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_dict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dict_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_set_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_expr", 154, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_set_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_expr", 155, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SetExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_set_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_expr", 153, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_set_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_set_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_set_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_set_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_set_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_set_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_index_expr", 158, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_index_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_index_expr", 159, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___IndexExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_index_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_index_expr", 157, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_index_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_index_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_index_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_index_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_index_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_index_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_index_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_index_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_generator_expr", 162, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_generator_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_generator_expr", 163, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___GeneratorExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_generator_expr", 161, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_generator_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_generator_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_generator_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_generator_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_dictionary_comprehension", 166, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_dictionary_comprehension", 167, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___DictionaryComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dictionary_comprehension", 165, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dictionary_comprehension__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dictionary_comprehension__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dictionary_comprehension__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_comprehension", 170, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_list_comprehension(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_comprehension", 171, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ListComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_comprehension", 169, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_comprehension__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_comprehension__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_comprehension__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_list_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_list_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_list_comprehension__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_comprehension", 174, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_set_comprehension(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_comprehension", 175, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SetComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_comprehension", 173, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_comprehension__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_comprehension__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_comprehension__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_set_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_set_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_set_comprehension__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_conditional_expr", 178, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_conditional_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_conditional_expr", 179, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ConditionalExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_conditional_expr", 177, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_conditional_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_conditional_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_conditional_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_conditional_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_conditional_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_conditional_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_conditional_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_application", 182, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_type_application(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_application", 183, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypeApplication))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_type_application(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_application", 181, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_type_application__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_application__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_type_application__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_application__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_type_application__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_application__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_type_application__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_application__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_lambda_expr", 186, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_lambda_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_lambda_expr", 187, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___LambdaExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_lambda_expr", 185, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_lambda_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_lambda_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_lambda_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_lambda_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_star_expr", 190, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_star_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_star_expr", 191, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___StarExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_star_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_star_expr", 189, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_star_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_star_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_star_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_star_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_star_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_star_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_star_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_star_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_star_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_star_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_star_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_star_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___add(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_await_expr", 194, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_await_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "visit_await_expr", 195, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AwaitExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_await_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_await_expr", 193, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___visit_await_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_await_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___visit_await_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_await_expr__TraverserVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_await_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_await_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_await_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_await_expr__NodeVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

PyObject *CPyDef_subexpr___SubexpressionFinder___visit_await_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subexpr___SubexpressionFinder___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___visit_await_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_subexpr___SubexpressionFinder___visit_await_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "visit_await_expr__ExpressionVisitor_glue", -1, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr___SubexpressionFinder___add(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___server___subexpr___SubexpressionFinderObject *)cpy_r_self)->_expressions;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/subexpr.py", "add", "SubexpressionFinder", "expressions", 198, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyList_Append(cpy_r_r0, cpy_r_e);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "add", 198, CPyStatic_subexpr___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_subexpr___SubexpressionFinder___add(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:add", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subexpr___SubexpressionFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.subexpr.SubexpressionFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    char retval = CPyDef_subexpr___SubexpressionFinder___add(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/subexpr.py", "add", 197, CPyStatic_subexpr___globals);
    return NULL;
}

char CPyDef_subexpr_____top_level__(void) {
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
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", -1, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_subexpr___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 3, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9768]; /* ('AssertTypeExpr', 'AssignmentExpr', 'AwaitExpr',
                                    'CallExpr', 'CastExpr', 'ComparisonExpr',
                                    'ConditionalExpr', 'DictExpr', 'DictionaryComprehension',
                                    'Expression', 'GeneratorExpr', 'IndexExpr', 'LambdaExpr',
                                    'ListComprehension', 'ListExpr', 'MemberExpr', 'Node',
                                    'OpExpr', 'RevealExpr', 'SetComprehension', 'SetExpr',
                                    'SliceExpr', 'StarExpr', 'TupleExpr', 'TypeApplication',
                                    'UnaryExpr', 'YieldExpr', 'YieldFromExpr') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_subexpr___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 5, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r14 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r15 = CPyStatic_subexpr___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 35, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    CPyModule_mypy___traverser = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r18 = PyTuple_Pack(1, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 44, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    cpy_r_r19 = CPyStatics[5356]; /* 'mypy.server.subexpr' */
    cpy_r_r20 = (PyObject *)CPyType_subexpr___SubexpressionFinder_template;
    cpy_r_r21 = CPyType_FromTemplate(cpy_r_r20, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 44, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    cpy_r_r22 = CPyDef_subexpr___SubexpressionFinder_trait_vtable_setup();
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", -1, CPyStatic_subexpr___globals);
        goto CPyL14;
    }
    cpy_r_r23 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r24 = CPyStatics[5357]; /* 'expressions' */
    cpy_r_r25 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r26 = PyTuple_Pack(2, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 44, CPyStatic_subexpr___globals);
        goto CPyL14;
    }
    cpy_r_r27 = PyObject_SetAttr(cpy_r_r21, cpy_r_r23, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 44, CPyStatic_subexpr___globals);
        goto CPyL14;
    }
    CPyType_subexpr___SubexpressionFinder = (PyTypeObject *)cpy_r_r21;
    CPy_INCREF(CPyType_subexpr___SubexpressionFinder);
    cpy_r_r29 = CPyStatic_subexpr___globals;
    cpy_r_r30 = CPyStatics[5358]; /* 'SubexpressionFinder' */
    cpy_r_r31 = CPyDict_SetItem(cpy_r_r29, cpy_r_r30, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/server/subexpr.py", "<module>", 44, CPyStatic_subexpr___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL14: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL13;
}
