#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
deps___DependencyVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef deps___DependencyVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___deps___DependencyVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___deps___DependencyVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *deps___DependencyVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_deps___DependencyVisitor(PyObject *cpy_r_type_map, tuple_T2II cpy_r_python_version, PyObject *cpy_r_alias_deps, PyObject *cpy_r_options);

static PyObject *
deps___DependencyVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_deps___DependencyVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = deps___DependencyVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_deps___DependencyVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
deps___DependencyVisitor_traverse(mypy___server___deps___DependencyVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_scope);
    Py_VISIT(self->_type_map);
    Py_VISIT(self->_alias_deps);
    Py_VISIT(self->_map);
    Py_VISIT(self->_options);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___deps___DependencyVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___deps___DependencyVisitorObject))));
    return 0;
}

static int
deps___DependencyVisitor_clear(mypy___server___deps___DependencyVisitorObject *self)
{
    Py_CLEAR(self->_scope);
    Py_CLEAR(self->_type_map);
    Py_CLEAR(self->_alias_deps);
    Py_CLEAR(self->_map);
    Py_CLEAR(self->_options);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___deps___DependencyVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___deps___DependencyVisitorObject))));
    return 0;
}

static void
deps___DependencyVisitor_dealloc(mypy___server___deps___DependencyVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, deps___DependencyVisitor_dealloc)
    deps___DependencyVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem deps___DependencyVisitor_vtable[146];
static CPyVTableItem deps___DependencyVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t deps___DependencyVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem deps___DependencyVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t deps___DependencyVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem deps___DependencyVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t deps___DependencyVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_deps___DependencyVisitor_trait_vtable_setup(void)
{
    CPyVTableItem deps___DependencyVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_await_expr__NodeVisitor_glue,
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
    memcpy(deps___DependencyVisitor_mypy___visitor___NodeVisitor_trait_vtable, deps___DependencyVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t deps___DependencyVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(deps___DependencyVisitor_mypy___visitor___NodeVisitor_offset_table, deps___DependencyVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_offset_table, deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem deps___DependencyVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
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
    memcpy(deps___DependencyVisitor_mypy___visitor___StatementVisitor_trait_vtable, deps___DependencyVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t deps___DependencyVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(deps___DependencyVisitor_mypy___visitor___StatementVisitor_offset_table, deps___DependencyVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem deps___DependencyVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(deps___DependencyVisitor_mypy___visitor___PatternVisitor_trait_vtable, deps___DependencyVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t deps___DependencyVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(deps___DependencyVisitor_mypy___visitor___PatternVisitor_offset_table, deps___DependencyVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(deps___DependencyVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem deps___DependencyVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)deps___DependencyVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_deps___DependencyVisitor_____init__,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_block__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_member_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_yield_from_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_call_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_op_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_comparison_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_cast_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assert_type_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_unary_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_index_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_generator_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_type_application__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_star_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_await_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_super_expr__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_all__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor_____init__,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___process_type_info,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_block,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___process_lvalue,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___is_self_member_ref,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___get_non_partial_lvalue_type,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___process_global_ref_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___get_unimported_fullname,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___process_isinstance_call,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___process_binary_op,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_operator_method_dependency,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_type_alias_deps,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_dependency,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_type_dependencies,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_attribute_dependency,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___attribute_triggers,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___add_iter_dependency,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___use_logical_deps,
        (CPyVTableItem)CPyDef_deps___DependencyVisitor___get_type_triggers,
    };
    memcpy(deps___DependencyVisitor_vtable, deps___DependencyVisitor_vtable_scratch, sizeof(deps___DependencyVisitor_vtable));
    return 1;
}

static PyObject *
deps___DependencyVisitor_get_scope(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_scope(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___DependencyVisitor_get_type_map(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_type_map(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___DependencyVisitor_get_alias_deps(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_alias_deps(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___DependencyVisitor_get_map(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_map(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___DependencyVisitor_get_is_class(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_is_class(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___DependencyVisitor_get_is_package_init_file(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_is_package_init_file(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___DependencyVisitor_get_options(mypy___server___deps___DependencyVisitorObject *self, void *closure);
static int
deps___DependencyVisitor_set_options(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef deps___DependencyVisitor_getseters[] = {
    {"scope",
     (getter)deps___DependencyVisitor_get_scope, (setter)deps___DependencyVisitor_set_scope,
     NULL, NULL},
    {"type_map",
     (getter)deps___DependencyVisitor_get_type_map, (setter)deps___DependencyVisitor_set_type_map,
     NULL, NULL},
    {"alias_deps",
     (getter)deps___DependencyVisitor_get_alias_deps, (setter)deps___DependencyVisitor_set_alias_deps,
     NULL, NULL},
    {"map",
     (getter)deps___DependencyVisitor_get_map, (setter)deps___DependencyVisitor_set_map,
     NULL, NULL},
    {"is_class",
     (getter)deps___DependencyVisitor_get_is_class, (setter)deps___DependencyVisitor_set_is_class,
     NULL, NULL},
    {"is_package_init_file",
     (getter)deps___DependencyVisitor_get_is_package_init_file, (setter)deps___DependencyVisitor_set_is_package_init_file,
     NULL, NULL},
    {"options",
     (getter)deps___DependencyVisitor_get_options, (setter)deps___DependencyVisitor_set_options,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef deps___DependencyVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_deps___DependencyVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_type_info",
     (PyCFunction)CPyPy_deps___DependencyVisitor___process_type_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_lvalue",
     (PyCFunction)CPyPy_deps___DependencyVisitor___process_lvalue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_self_member_ref",
     (PyCFunction)CPyPy_deps___DependencyVisitor___is_self_member_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_non_partial_lvalue_type",
     (PyCFunction)CPyPy_deps___DependencyVisitor___get_non_partial_lvalue_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_operator_assignment_stmt",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_operator_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_del_stmt",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_del_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_global_ref_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___process_global_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_unimported_fullname",
     (PyCFunction)CPyPy_deps___DependencyVisitor___get_unimported_fullname,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_isinstance_call",
     (PyCFunction)CPyPy_deps___DependencyVisitor___process_isinstance_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_binary_op",
     (PyCFunction)CPyPy_deps___DependencyVisitor___process_binary_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_operator_method_dependency",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_operator_method_dependency,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_operator_method_dependency_for_type",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_operator_method_dependency_for_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_type_alias_deps",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_type_alias_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_dependency",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_dependency,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_type_dependencies",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_type_dependencies,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_attribute_dependency",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_attribute_dependency,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"attribute_triggers",
     (PyCFunction)CPyPy_deps___DependencyVisitor___attribute_triggers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_attribute_dependency_for_expr",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_attribute_dependency_for_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_iter_dependency",
     (PyCFunction)CPyPy_deps___DependencyVisitor___add_iter_dependency,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"use_logical_deps",
     (PyCFunction)CPyPy_deps___DependencyVisitor___use_logical_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type_triggers",
     (PyCFunction)CPyPy_deps___DependencyVisitor___get_type_triggers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_deps___DependencyVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DependencyVisitor",
    .tp_new = deps___DependencyVisitor_new,
    .tp_dealloc = (destructor)deps___DependencyVisitor_dealloc,
    .tp_traverse = (traverseproc)deps___DependencyVisitor_traverse,
    .tp_clear = (inquiry)deps___DependencyVisitor_clear,
    .tp_getset = deps___DependencyVisitor_getseters,
    .tp_methods = deps___DependencyVisitor_methods,
    .tp_init = deps___DependencyVisitor_init,
    .tp_members = deps___DependencyVisitor_members,
    .tp_basicsize = sizeof(mypy___server___deps___DependencyVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___deps___DependencyVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___server___deps___DependencyVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_deps___DependencyVisitor_template = &CPyType_deps___DependencyVisitor_template_;

static PyObject *
deps___DependencyVisitor_setup(PyTypeObject *type)
{
    mypy___server___deps___DependencyVisitorObject *self;
    self = (mypy___server___deps___DependencyVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = deps___DependencyVisitor_vtable + 12;
    self->_is_class = 2;
    self->_is_package_init_file = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_deps___DependencyVisitor(PyObject *cpy_r_type_map, tuple_T2II cpy_r_python_version, PyObject *cpy_r_alias_deps, PyObject *cpy_r_options)
{
    PyObject *self = deps___DependencyVisitor_setup(CPyType_deps___DependencyVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_deps___DependencyVisitor_____init__(self, cpy_r_type_map, cpy_r_python_version, cpy_r_alias_deps, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
deps___DependencyVisitor_get_scope(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_scope == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scope' of 'DependencyVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scope);
    PyObject *retval = self->_scope;
    return retval;
}

static int
deps___DependencyVisitor_set_scope(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'scope' cannot be deleted");
        return -1;
    }
    if (self->_scope != NULL) {
        CPy_DECREF(self->_scope);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_scope___Scope))
        tmp = value;
    else {
        CPy_TypeError("mypy.scope.Scope", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_scope = tmp;
    return 0;
}

static PyObject *
deps___DependencyVisitor_get_type_map(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_type_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_map' of 'DependencyVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_map);
    PyObject *retval = self->_type_map;
    return retval;
}

static int
deps___DependencyVisitor_set_type_map(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'type_map' cannot be deleted");
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
deps___DependencyVisitor_get_alias_deps(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_alias_deps == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'alias_deps' of 'DependencyVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_alias_deps);
    PyObject *retval = self->_alias_deps;
    return retval;
}

static int
deps___DependencyVisitor_set_alias_deps(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'alias_deps' cannot be deleted");
        return -1;
    }
    if (self->_alias_deps != NULL) {
        CPy_DECREF(self->_alias_deps);
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
    self->_alias_deps = tmp;
    return 0;
}

static PyObject *
deps___DependencyVisitor_get_map(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'map' of 'DependencyVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_map);
    PyObject *retval = self->_map;
    return retval;
}

static int
deps___DependencyVisitor_set_map(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'map' cannot be deleted");
        return -1;
    }
    if (self->_map != NULL) {
        CPy_DECREF(self->_map);
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
    self->_map = tmp;
    return 0;
}

static PyObject *
deps___DependencyVisitor_get_is_class(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_is_class == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_class' of 'DependencyVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_class ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
deps___DependencyVisitor_set_is_class(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'is_class' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_class = tmp;
    return 0;
}

static PyObject *
deps___DependencyVisitor_get_is_package_init_file(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_is_package_init_file == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_package_init_file' of 'DependencyVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_package_init_file ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
deps___DependencyVisitor_set_is_package_init_file(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'is_package_init_file' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_package_init_file = tmp;
    return 0;
}

static PyObject *
deps___DependencyVisitor_get_options(mypy___server___deps___DependencyVisitorObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'DependencyVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
deps___DependencyVisitor_set_options(mypy___server___deps___DependencyVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DependencyVisitor' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_mypy___options___Options)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6482;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6482;
    CPy_TypeError("mypy.options.Options or None", value); 
    tmp = NULL;
__LL6482: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static int
deps___TypeTriggersVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef deps___TypeTriggersVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___deps___TypeTriggersVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___deps___TypeTriggersVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *deps___TypeTriggersVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_deps___TypeTriggersVisitor(char cpy_r_use_logical_deps, PyObject *cpy_r_seen_aliases);

static PyObject *
deps___TypeTriggersVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_deps___TypeTriggersVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = deps___TypeTriggersVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_deps___TypeTriggersVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
deps___TypeTriggersVisitor_traverse(mypy___server___deps___TypeTriggersVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_deps);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___deps___TypeTriggersVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___deps___TypeTriggersVisitorObject))));
    return 0;
}

static int
deps___TypeTriggersVisitor_clear(mypy___server___deps___TypeTriggersVisitorObject *self)
{
    Py_CLEAR(self->_deps);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___deps___TypeTriggersVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___deps___TypeTriggersVisitorObject))));
    return 0;
}

static void
deps___TypeTriggersVisitor_dealloc(mypy___server___deps___TypeTriggersVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, deps___TypeTriggersVisitor_dealloc)
    deps___TypeTriggersVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem deps___TypeTriggersVisitor_vtable[26];
static CPyVTableItem deps___TypeTriggersVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t deps___TypeTriggersVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_deps___TypeTriggersVisitor_trait_vtable_setup(void)
{
    CPyVTableItem deps___TypeTriggersVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(deps___TypeTriggersVisitor_type_visitor___TypeVisitor_trait_vtable, deps___TypeTriggersVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(deps___TypeTriggersVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t deps___TypeTriggersVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(deps___TypeTriggersVisitor_type_visitor___TypeVisitor_offset_table, deps___TypeTriggersVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(deps___TypeTriggersVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem deps___TypeTriggersVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)deps___TypeTriggersVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)deps___TypeTriggersVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor_____init__,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___get_type_triggers,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_instance,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_any,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_deps___TypeTriggersVisitor___visit_union_type,
    };
    memcpy(deps___TypeTriggersVisitor_vtable, deps___TypeTriggersVisitor_vtable_scratch, sizeof(deps___TypeTriggersVisitor_vtable));
    return 1;
}

static PyObject *
deps___TypeTriggersVisitor_get_deps(mypy___server___deps___TypeTriggersVisitorObject *self, void *closure);
static int
deps___TypeTriggersVisitor_set_deps(mypy___server___deps___TypeTriggersVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___TypeTriggersVisitor_get_seen_aliases(mypy___server___deps___TypeTriggersVisitorObject *self, void *closure);
static int
deps___TypeTriggersVisitor_set_seen_aliases(mypy___server___deps___TypeTriggersVisitorObject *self, PyObject *value, void *closure);
static PyObject *
deps___TypeTriggersVisitor_get_use_logical_deps(mypy___server___deps___TypeTriggersVisitorObject *self, void *closure);
static int
deps___TypeTriggersVisitor_set_use_logical_deps(mypy___server___deps___TypeTriggersVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef deps___TypeTriggersVisitor_getseters[] = {
    {"deps",
     (getter)deps___TypeTriggersVisitor_get_deps, (setter)deps___TypeTriggersVisitor_set_deps,
     NULL, NULL},
    {"seen_aliases",
     (getter)deps___TypeTriggersVisitor_get_seen_aliases, (setter)deps___TypeTriggersVisitor_set_seen_aliases,
     NULL, NULL},
    {"use_logical_deps",
     (getter)deps___TypeTriggersVisitor_get_use_logical_deps, (setter)deps___TypeTriggersVisitor_set_use_logical_deps,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef deps___TypeTriggersVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type_triggers",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___get_type_triggers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_deps___TypeTriggersVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_deps___TypeTriggersVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeTriggersVisitor",
    .tp_new = deps___TypeTriggersVisitor_new,
    .tp_dealloc = (destructor)deps___TypeTriggersVisitor_dealloc,
    .tp_traverse = (traverseproc)deps___TypeTriggersVisitor_traverse,
    .tp_clear = (inquiry)deps___TypeTriggersVisitor_clear,
    .tp_getset = deps___TypeTriggersVisitor_getseters,
    .tp_methods = deps___TypeTriggersVisitor_methods,
    .tp_init = deps___TypeTriggersVisitor_init,
    .tp_members = deps___TypeTriggersVisitor_members,
    .tp_basicsize = sizeof(mypy___server___deps___TypeTriggersVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___deps___TypeTriggersVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___server___deps___TypeTriggersVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_deps___TypeTriggersVisitor_template = &CPyType_deps___TypeTriggersVisitor_template_;

static PyObject *
deps___TypeTriggersVisitor_setup(PyTypeObject *type)
{
    mypy___server___deps___TypeTriggersVisitorObject *self;
    self = (mypy___server___deps___TypeTriggersVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = deps___TypeTriggersVisitor_vtable + 3;
    self->_use_logical_deps = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_deps___TypeTriggersVisitor(char cpy_r_use_logical_deps, PyObject *cpy_r_seen_aliases)
{
    PyObject *self = deps___TypeTriggersVisitor_setup(CPyType_deps___TypeTriggersVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_deps___TypeTriggersVisitor_____init__(self, cpy_r_use_logical_deps, cpy_r_seen_aliases);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
deps___TypeTriggersVisitor_get_deps(mypy___server___deps___TypeTriggersVisitorObject *self, void *closure)
{
    if (unlikely(self->_deps == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'deps' of 'TypeTriggersVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_deps);
    PyObject *retval = self->_deps;
    return retval;
}

static int
deps___TypeTriggersVisitor_set_deps(mypy___server___deps___TypeTriggersVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeTriggersVisitor' object attribute 'deps' cannot be deleted");
        return -1;
    }
    if (self->_deps != NULL) {
        CPy_DECREF(self->_deps);
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
    self->_deps = tmp;
    return 0;
}

static PyObject *
deps___TypeTriggersVisitor_get_seen_aliases(mypy___server___deps___TypeTriggersVisitorObject *self, void *closure)
{
    if (unlikely(self->_seen_aliases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'seen_aliases' of 'TypeTriggersVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_seen_aliases);
    PyObject *retval = self->_seen_aliases;
    return retval;
}

static int
deps___TypeTriggersVisitor_set_seen_aliases(mypy___server___deps___TypeTriggersVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeTriggersVisitor' object attribute 'seen_aliases' cannot be deleted");
        return -1;
    }
    if (self->_seen_aliases != NULL) {
        CPy_DECREF(self->_seen_aliases);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_seen_aliases = tmp;
    return 0;
}

static PyObject *
deps___TypeTriggersVisitor_get_use_logical_deps(mypy___server___deps___TypeTriggersVisitorObject *self, void *closure)
{
    if (unlikely(self->_use_logical_deps == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'use_logical_deps' of 'TypeTriggersVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_use_logical_deps ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
deps___TypeTriggersVisitor_set_use_logical_deps(mypy___server___deps___TypeTriggersVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeTriggersVisitor' object attribute 'use_logical_deps' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_use_logical_deps = tmp;
    return 0;
}

static PyObject *deps___dump_all_dependencies_env_setup(PyTypeObject *type);
PyObject *CPyDef_deps___dump_all_dependencies_env(void);

static PyObject *
deps___dump_all_dependencies_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_deps___dump_all_dependencies_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return deps___dump_all_dependencies_env_setup(type);
}

static int
deps___dump_all_dependencies_env_traverse(mypy___server___deps___dump_all_dependencies_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_modules);
    Py_VISIT(self->_type_map);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->_options);
    Py_VISIT(self->_all_deps);
    Py_VISIT(self->_id);
    Py_VISIT(self->_node);
    Py_VISIT(self->_deps);
    Py_VISIT(self->_trigger);
    Py_VISIT(self->_targets);
    return 0;
}

static int
deps___dump_all_dependencies_env_clear(mypy___server___deps___dump_all_dependencies_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_modules);
    Py_CLEAR(self->_type_map);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        CPyTagged __tmp = self->_python_version.f0;
        self->_python_version.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        CPyTagged __tmp = self->_python_version.f1;
        self->_python_version.f1 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_all_deps);
    Py_CLEAR(self->_id);
    Py_CLEAR(self->_node);
    Py_CLEAR(self->_deps);
    Py_CLEAR(self->_trigger);
    Py_CLEAR(self->_targets);
    return 0;
}

static void
deps___dump_all_dependencies_env_dealloc(mypy___server___deps___dump_all_dependencies_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, deps___dump_all_dependencies_env_dealloc)
    deps___dump_all_dependencies_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem deps___dump_all_dependencies_env_vtable[1];
static bool
CPyDef_deps___dump_all_dependencies_env_trait_vtable_setup(void)
{
    CPyVTableItem deps___dump_all_dependencies_env_vtable_scratch[] = {
        NULL
    };
    memcpy(deps___dump_all_dependencies_env_vtable, deps___dump_all_dependencies_env_vtable_scratch, sizeof(deps___dump_all_dependencies_env_vtable));
    return 1;
}

static PyMethodDef deps___dump_all_dependencies_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_deps___dump_all_dependencies_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "dump_all_dependencies_env",
    .tp_new = deps___dump_all_dependencies_env_new,
    .tp_dealloc = (destructor)deps___dump_all_dependencies_env_dealloc,
    .tp_traverse = (traverseproc)deps___dump_all_dependencies_env_traverse,
    .tp_clear = (inquiry)deps___dump_all_dependencies_env_clear,
    .tp_methods = deps___dump_all_dependencies_env_methods,
    .tp_basicsize = sizeof(mypy___server___deps___dump_all_dependencies_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_deps___dump_all_dependencies_env_template = &CPyType_deps___dump_all_dependencies_env_template_;

static PyObject *
deps___dump_all_dependencies_env_setup(PyTypeObject *type)
{
    mypy___server___deps___dump_all_dependencies_envObject *self;
    self = (mypy___server___deps___dump_all_dependencies_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = deps___dump_all_dependencies_env_vtable;
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_deps___dump_all_dependencies_env(void)
{
    PyObject *self = deps___dump_all_dependencies_env_setup(CPyType_deps___dump_all_dependencies_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__deps_____mypyc_lambda__0_dump_all_dependencies_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____get__(self, instance, owner);
}
PyMemberDef deps_____mypyc_lambda__0_dump_all_dependencies_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *deps_____mypyc_lambda__0_dump_all_dependencies_obj_setup(PyTypeObject *type);
PyObject *CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj(void);

static PyObject *
deps_____mypyc_lambda__0_dump_all_dependencies_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return deps_____mypyc_lambda__0_dump_all_dependencies_obj_setup(type);
}

static int
deps_____mypyc_lambda__0_dump_all_dependencies_obj_traverse(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject))));
    return 0;
}

static int
deps_____mypyc_lambda__0_dump_all_dependencies_obj_clear(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject))));
    return 0;
}

static void
deps_____mypyc_lambda__0_dump_all_dependencies_obj_dealloc(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, deps_____mypyc_lambda__0_dump_all_dependencies_obj_dealloc)
    deps_____mypyc_lambda__0_dump_all_dependencies_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem deps_____mypyc_lambda__0_dump_all_dependencies_obj_vtable[2];
static bool
CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_trait_vtable_setup(void)
{
    CPyVTableItem deps_____mypyc_lambda__0_dump_all_dependencies_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____call__,
        (CPyVTableItem)CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____get__,
    };
    memcpy(deps_____mypyc_lambda__0_dump_all_dependencies_obj_vtable, deps_____mypyc_lambda__0_dump_all_dependencies_obj_vtable_scratch, sizeof(deps_____mypyc_lambda__0_dump_all_dependencies_obj_vtable));
    return 1;
}

static PyMethodDef deps_____mypyc_lambda__0_dump_all_dependencies_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_dump_all_dependencies_obj",
    .tp_new = deps_____mypyc_lambda__0_dump_all_dependencies_obj_new,
    .tp_dealloc = (destructor)deps_____mypyc_lambda__0_dump_all_dependencies_obj_dealloc,
    .tp_traverse = (traverseproc)deps_____mypyc_lambda__0_dump_all_dependencies_obj_traverse,
    .tp_clear = (inquiry)deps_____mypyc_lambda__0_dump_all_dependencies_obj_clear,
    .tp_methods = deps_____mypyc_lambda__0_dump_all_dependencies_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__deps_____mypyc_lambda__0_dump_all_dependencies_obj,
    .tp_members = deps_____mypyc_lambda__0_dump_all_dependencies_obj_members,
    .tp_basicsize = sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject),
    .tp_weaklistoffset = sizeof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj_template = &CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj_template_;

static PyObject *
deps_____mypyc_lambda__0_dump_all_dependencies_obj_setup(PyTypeObject *type)
{
    mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *self;
    self = (mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = deps_____mypyc_lambda__0_dump_all_dependencies_obj_vtable;
    self->vectorcall = CPyPy_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj(void)
{
    PyObject *self = deps_____mypyc_lambda__0_dump_all_dependencies_obj_setup(CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef depsmodule_methods[] = {
    {"get_dependencies", (PyCFunction)CPyPy_deps___get_dependencies, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_dependencies_of_target", (PyCFunction)CPyPy_deps___get_dependencies_of_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_type_triggers", (PyCFunction)CPyPy_deps___get_type_triggers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"merge_dependencies", (PyCFunction)CPyPy_deps___merge_dependencies, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"non_trivial_bases", (PyCFunction)CPyPy_deps___non_trivial_bases, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"has_user_bases", (PyCFunction)CPyPy_deps___has_user_bases, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dump_all_dependencies", (PyCFunction)CPyPy_deps___dump_all_dependencies, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef depsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.deps",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    depsmodule_methods
};

PyObject *CPyInit_mypy___server___deps(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___deps_internal) {
        Py_INCREF(CPyModule_mypy___server___deps_internal);
        return CPyModule_mypy___server___deps_internal;
    }
    CPyModule_mypy___server___deps_internal = PyModule_Create(&depsmodule);
    if (unlikely(CPyModule_mypy___server___deps_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___deps_internal, "__name__");
    CPyStatic_deps___globals = PyModule_GetDict(CPyModule_mypy___server___deps_internal);
    if (unlikely(CPyStatic_deps___globals == NULL))
        goto fail;
    CPyType_deps___dump_all_dependencies_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_deps___dump_all_dependencies_env_template, NULL, modname);
    if (unlikely(!CPyType_deps___dump_all_dependencies_env))
        goto fail;
    CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj_template, NULL, modname);
    if (unlikely(!CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_deps_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___deps_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___deps_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_deps___DependencyVisitor);
    Py_CLEAR(CPyType_deps___TypeTriggersVisitor);
    Py_CLEAR(CPyType_deps___dump_all_dependencies_env);
    Py_CLEAR(CPyType_deps_____mypyc_lambda__0_dump_all_dependencies_obj);
    return NULL;
}

PyObject *CPyDef_deps___get_dependencies(PyObject *cpy_r_target, PyObject *cpy_r_type_map, tuple_T2II cpy_r_python_version, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypy___nodes___MypyFileObject *)cpy_r_target)->_alias_deps;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_deps___DependencyVisitor(cpy_r_type_map, cpy_r_python_version, cpy_r_r0, cpy_r_options);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies", 186, CPyStatic_deps___globals);
        goto CPyL4;
    }
    cpy_r_visitor = cpy_r_r1;
    cpy_r_r2 = CPyDef_nodes___MypyFile___accept(cpy_r_target, cpy_r_visitor);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies", 187, CPyStatic_deps___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL2: ;
    cpy_r_r3 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_visitor)->_map;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'map' of 'DependencyVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies", 188, CPyStatic_deps___globals);
        goto CPyL4;
    }
CPyL3: ;
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL5: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL4;
CPyL6: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
}

PyObject *CPyPy_deps___get_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"target", "type_map", "python_version", "options", 0};
    static CPyArg_Parser parser = {"OOOO:get_dependencies", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_type_map;
    PyObject *obj_python_version;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_type_map, &obj_python_version, &obj_options)) {
        return NULL;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_nodes___MypyFile))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_target); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    tuple_T2II arg_python_version;
    PyObject *__tmp6483;
    if (unlikely(!(PyTuple_Check(obj_python_version) && PyTuple_GET_SIZE(obj_python_version) == 2))) {
        __tmp6483 = NULL;
        goto __LL6484;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 0))))
        __tmp6483 = PyTuple_GET_ITEM(obj_python_version, 0);
    else {
        __tmp6483 = NULL;
    }
    if (__tmp6483 == NULL) goto __LL6484;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 1))))
        __tmp6483 = PyTuple_GET_ITEM(obj_python_version, 1);
    else {
        __tmp6483 = NULL;
    }
    if (__tmp6483 == NULL) goto __LL6484;
    __tmp6483 = obj_python_version;
__LL6484: ;
    if (unlikely(__tmp6483 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_python_version); goto fail;
    } else {
        PyObject *__tmp6485 = PyTuple_GET_ITEM(obj_python_version, 0);
        CPyTagged __tmp6486;
        if (likely(PyLong_Check(__tmp6485)))
            __tmp6486 = CPyTagged_BorrowFromObject(__tmp6485);
        else {
            CPy_TypeError("int", __tmp6485); goto fail;
        }
        arg_python_version.f0 = __tmp6486;
        PyObject *__tmp6487 = PyTuple_GET_ITEM(obj_python_version, 1);
        CPyTagged __tmp6488;
        if (likely(PyLong_Check(__tmp6487)))
            __tmp6488 = CPyTagged_BorrowFromObject(__tmp6487);
        else {
            CPy_TypeError("int", __tmp6487); goto fail;
        }
        arg_python_version.f1 = __tmp6488;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___get_dependencies(arg_target, arg_type_map, arg_python_version, arg_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_dependencies", 179, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___get_dependencies_of_target(PyObject *cpy_r_module_id, PyObject *cpy_r_module_tree, PyObject *cpy_r_target, PyObject *cpy_r_type_map, tuple_T2II cpy_r_python_version) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_defn;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
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
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    tuple_T3OOO cpy_r_r98;
    tuple_T3OOO cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    tuple_T3OOO cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    tuple_T3OOO cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    tuple_T3OOO cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    cpy_r_r0 = ((mypy___nodes___MypyFileObject *)cpy_r_module_tree)->_alias_deps;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_deps___DependencyVisitor(cpy_r_type_map, cpy_r_python_version, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 200, CPyStatic_deps___globals);
        goto CPyL86;
    }
    cpy_r_visitor = cpy_r_r2;
    cpy_r_r3 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_visitor)->_scope;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_dependencies_of_target", "DependencyVisitor", "scope", 201, CPyStatic_deps___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = CPyStatics[693]; /* 'module_scope' */
    PyObject *cpy_r_r5[2] = {cpy_r_r3, cpy_r_module_id};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r8 = PyObject_Type(cpy_r_r7);
    cpy_r_r9 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL89;
    }
    cpy_r_r11 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r7};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL6: ;
    cpy_r_r16 = 1;
    cpy_r_r17 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_nodes___MypyFile))
        cpy_r_r21 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_dependencies_of_target", 205, CPyStatic_deps___globals, "mypy.nodes.MypyFile", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r22 = ((mypy___nodes___MypyFileObject *)cpy_r_r21)->_defs;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 0;
CPyL10: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL92;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r22, cpy_r_r23);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___Statement)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_dependencies_of_target", 205, CPyStatic_deps___globals, "mypy.nodes.Statement", cpy_r_r28);
        goto CPyL93;
    }
    cpy_r_defn = cpy_r_r29;
    cpy_r_r30 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL14;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL15;
CPyL14: ;
    cpy_r_r35 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    cpy_r_r34 = cpy_r_r38;
CPyL15: ;
    if (!cpy_r_r34) goto CPyL17;
    cpy_r_r39 = cpy_r_r34;
    goto CPyL18;
CPyL17: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    cpy_r_r39 = cpy_r_r43;
CPyL18: ;
    if (!cpy_r_r39) goto CPyL20;
    cpy_r_r44 = cpy_r_r39;
    goto CPyL21;
CPyL20: ;
    cpy_r_r45 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    cpy_r_r44 = cpy_r_r48;
CPyL21: ;
    if (cpy_r_r44) goto CPyL94;
    cpy_r_r49 = CPY_GET_METHOD_TRAIT(cpy_r_defn, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_defn, cpy_r_visitor); /* accept */
    CPy_DECREF(cpy_r_defn);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 208, CPyStatic_deps___globals);
        goto CPyL93;
    } else
        goto CPyL95;
CPyL23: ;
    cpy_r_r50 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r50;
    goto CPyL10;
CPyL24: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL26;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL27;
CPyL26: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL27: ;
    if (!cpy_r_r55) goto CPyL29;
    cpy_r_r60 = cpy_r_r55;
    goto CPyL30;
CPyL29: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r60 = cpy_r_r64;
CPyL30: ;
    if (!cpy_r_r60) goto CPyL63;
    if (likely((Py_TYPE(cpy_r_target) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_target) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_target) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r65 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_dependencies_of_target", 209, CPyStatic_deps___globals, "mypy.nodes.FuncBase", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r66 = ((mypy___nodes___FuncBaseObject *)cpy_r_r65)->_info;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 209, CPyStatic_deps___globals);
        goto CPyL64;
    }
    if (!cpy_r_r67) goto CPyL63;
    cpy_r_r68 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_visitor)->_scope;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_dependencies_of_target", "DependencyVisitor", "scope", 212, CPyStatic_deps___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r68);
CPyL35: ;
    if (likely((Py_TYPE(cpy_r_target) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_target) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_target) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r69 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals, "mypy.nodes.FuncBase", cpy_r_target);
        goto CPyL96;
    }
    cpy_r_r70 = ((mypy___nodes___FuncBaseObject *)cpy_r_r69)->_info;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[698]; /* 'class_scope' */
    PyObject *cpy_r_r72[2] = {cpy_r_r68, cpy_r_r70};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = PyObject_VectorcallMethod(cpy_r_r71, cpy_r_r73, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r75 = PyObject_Type(cpy_r_r74);
    cpy_r_r76 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL98;
    }
    cpy_r_r78 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r78);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_r74};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL99;
    } else
        goto CPyL100;
CPyL40: ;
    cpy_r_r83 = 1;
    CPy_INCREF(cpy_r_target);
    if (likely((Py_TYPE(cpy_r_target) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_target) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_target) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r84 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_dependencies_of_target", 213, CPyStatic_deps___globals, "mypy.nodes.FuncBase", cpy_r_target);
        goto CPyL43;
    }
    cpy_r_r85 = CPY_GET_METHOD(cpy_r_r84, CPyType_nodes___FuncBase, 4, mypy___nodes___FuncBaseObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r84, cpy_r_visitor); /* accept */
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 213, CPyStatic_deps___globals);
    } else
        goto CPyL101;
CPyL43: ;
    cpy_r_r86 = CPy_CatchError();
    cpy_r_r83 = 0;
    cpy_r_r87 = CPy_GetExcInfo();
    cpy_r_r88 = cpy_r_r87.f0;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = cpy_r_r87.f1;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = cpy_r_r87.f2;
    CPy_INCREF(cpy_r_r90);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    PyObject *cpy_r_r91[4] = {cpy_r_r74, cpy_r_r88, cpy_r_r89, cpy_r_r90};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r77, cpy_r_r92, 4, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL102;
    }
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    cpy_r_r94 = PyObject_IsTrue(cpy_r_r93);
    CPy_DecRef(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL49;
    }
    cpy_r_r96 = cpy_r_r94;
    if (cpy_r_r96) goto CPyL48;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL103;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    goto CPyL51;
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    cpy_r_r97 = CPy_KeepPropagating();
    if (!cpy_r_r97) {
        goto CPyL52;
    } else
        goto CPyL104;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    tuple_T3OOO __tmp6489 = { NULL, NULL, NULL };
    cpy_r_r98 = __tmp6489;
    cpy_r_r99 = cpy_r_r98;
    goto CPyL53;
CPyL52: ;
    cpy_r_r100 = CPy_CatchError();
    cpy_r_r99 = cpy_r_r100;
CPyL53: ;
    if (!cpy_r_r83) goto CPyL105;
    cpy_r_r101 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r102[4] = {cpy_r_r74, cpy_r_r101, cpy_r_r101, cpy_r_r101};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = _PyObject_Vectorcall(cpy_r_r77, cpy_r_r103, 4, 0);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 212, CPyStatic_deps___globals);
        goto CPyL106;
    } else
        goto CPyL107;
CPyL55: ;
    CPy_DECREF(cpy_r_r74);
CPyL56: ;
    if (cpy_r_r99.f0 == NULL) goto CPyL72;
    CPy_Reraise();
    if (!0) {
        goto CPyL59;
    } else
        goto CPyL108;
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    if (cpy_r_r99.f0 == NULL) goto CPyL61;
    CPy_RestoreExcInfo(cpy_r_r99);
    CPy_XDECREF(cpy_r_r99.f0);
    CPy_XDECREF(cpy_r_r99.f1);
    CPy_XDECREF(cpy_r_r99.f2);
CPyL61: ;
    cpy_r_r105 = CPy_KeepPropagating();
    if (!cpy_r_r105) {
        goto CPyL64;
    } else
        goto CPyL109;
CPyL62: ;
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r106 = CPY_GET_METHOD(cpy_r_target, CPyType_nodes___Node, 4, mypy___nodes___NodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_target, cpy_r_visitor); /* accept */
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 215, CPyStatic_deps___globals);
    } else
        goto CPyL110;
CPyL64: ;
    cpy_r_r107 = CPy_CatchError();
    cpy_r_r16 = 0;
    cpy_r_r108 = CPy_GetExcInfo();
    cpy_r_r109 = cpy_r_r108.f0;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = cpy_r_r108.f1;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = cpy_r_r108.f2;
    CPy_INCREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r108.f0);
    CPy_DECREF(cpy_r_r108.f1);
    CPy_DECREF(cpy_r_r108.f2);
    PyObject *cpy_r_r112[4] = {cpy_r_r7, cpy_r_r109, cpy_r_r110, cpy_r_r111};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r113, 4, 0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL111;
    }
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r115 = PyObject_IsTrue(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL70;
    }
    cpy_r_r117 = cpy_r_r115;
    if (cpy_r_r117) goto CPyL69;
    CPy_Reraise();
    if (!0) {
        goto CPyL70;
    } else
        goto CPyL112;
CPyL68: ;
    CPy_Unreachable();
CPyL69: ;
    CPy_RestoreExcInfo(cpy_r_r107);
    CPy_DECREF(cpy_r_r107.f0);
    CPy_DECREF(cpy_r_r107.f1);
    CPy_DECREF(cpy_r_r107.f2);
    goto CPyL72;
CPyL70: ;
    CPy_RestoreExcInfo(cpy_r_r107);
    CPy_DECREF(cpy_r_r107.f0);
    CPy_DECREF(cpy_r_r107.f1);
    CPy_DECREF(cpy_r_r107.f2);
    cpy_r_r118 = CPy_KeepPropagating();
    if (!cpy_r_r118) {
        goto CPyL73;
    } else
        goto CPyL113;
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    tuple_T3OOO __tmp6490 = { NULL, NULL, NULL };
    cpy_r_r119 = __tmp6490;
    cpy_r_r120 = cpy_r_r119;
    goto CPyL74;
CPyL73: ;
    cpy_r_r121 = CPy_CatchError();
    cpy_r_r120 = cpy_r_r121;
CPyL74: ;
    if (!cpy_r_r16) goto CPyL114;
    cpy_r_r122 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r123[4] = {cpy_r_r7, cpy_r_r122, cpy_r_r122, cpy_r_r122};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r124, 4, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 201, CPyStatic_deps___globals);
        goto CPyL115;
    } else
        goto CPyL116;
CPyL76: ;
    CPy_DECREF(cpy_r_r7);
CPyL77: ;
    if (cpy_r_r120.f0 == NULL) {
        goto CPyL84;
    } else
        goto CPyL117;
CPyL78: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL80;
    } else
        goto CPyL118;
CPyL79: ;
    CPy_Unreachable();
CPyL80: ;
    if (cpy_r_r120.f0 == NULL) goto CPyL82;
    CPy_RestoreExcInfo(cpy_r_r120);
    CPy_XDECREF(cpy_r_r120.f0);
    CPy_XDECREF(cpy_r_r120.f1);
    CPy_XDECREF(cpy_r_r120.f2);
CPyL82: ;
    cpy_r_r126 = CPy_KeepPropagating();
    if (!cpy_r_r126) goto CPyL86;
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r127 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_visitor)->_map;
    if (unlikely(cpy_r_r127 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'map' of 'DependencyVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r127);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 216, CPyStatic_deps___globals);
        goto CPyL86;
    }
CPyL85: ;
    return cpy_r_r127;
CPyL86: ;
    cpy_r_r128 = NULL;
    return cpy_r_r128;
CPyL87: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL86;
CPyL88: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r3);
    goto CPyL86;
CPyL89: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL86;
CPyL90: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL86;
CPyL91: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL6;
CPyL92: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL72;
CPyL93: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL64;
CPyL94: ;
    CPy_DECREF(cpy_r_defn);
    goto CPyL23;
CPyL95: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL23;
CPyL96: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL64;
CPyL97: ;
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r70);
    goto CPyL64;
CPyL98: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    goto CPyL64;
CPyL99: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r77);
    goto CPyL64;
CPyL100: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL40;
CPyL101: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL51;
CPyL102: ;
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    goto CPyL49;
CPyL103: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    goto CPyL47;
CPyL104: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r77);
    goto CPyL50;
CPyL105: ;
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r77);
    goto CPyL56;
CPyL106: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL59;
CPyL107: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL55;
CPyL108: ;
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPy_XDECREF(cpy_r_r99.f0);
    CPy_XDECREF(cpy_r_r99.f1);
    CPy_XDECREF(cpy_r_r99.f2);
    goto CPyL58;
CPyL109: ;
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL62;
CPyL110: ;
    CPy_DECREF(cpy_r_r106);
    goto CPyL72;
CPyL111: ;
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    goto CPyL70;
CPyL112: ;
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r107.f0);
    CPy_DECREF(cpy_r_r107.f1);
    CPy_DECREF(cpy_r_r107.f2);
    goto CPyL68;
CPyL113: ;
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL71;
CPyL114: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL77;
CPyL115: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r7);
    goto CPyL80;
CPyL116: ;
    CPy_DECREF(cpy_r_r125);
    goto CPyL76;
CPyL117: ;
    CPy_DECREF(cpy_r_visitor);
    goto CPyL78;
CPyL118: ;
    CPy_XDECREF(cpy_r_r120.f0);
    CPy_XDECREF(cpy_r_r120.f1);
    CPy_XDECREF(cpy_r_r120.f2);
    goto CPyL79;
}

PyObject *CPyPy_deps___get_dependencies_of_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_id", "module_tree", "target", "type_map", "python_version", 0};
    static CPyArg_Parser parser = {"OOOOO:get_dependencies_of_target", kwlist, 0};
    PyObject *obj_module_id;
    PyObject *obj_module_tree;
    PyObject *obj_target;
    PyObject *obj_type_map;
    PyObject *obj_python_version;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_id, &obj_module_tree, &obj_target, &obj_type_map, &obj_python_version)) {
        return NULL;
    }
    PyObject *arg_module_id;
    if (likely(PyUnicode_Check(obj_module_id)))
        arg_module_id = obj_module_id;
    else {
        CPy_TypeError("str", obj_module_id); 
        goto fail;
    }
    PyObject *arg_module_tree;
    if (likely(Py_TYPE(obj_module_tree) == CPyType_nodes___MypyFile))
        arg_module_tree = obj_module_tree;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_module_tree); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_nodes___Node)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_target); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    tuple_T2II arg_python_version;
    PyObject *__tmp6491;
    if (unlikely(!(PyTuple_Check(obj_python_version) && PyTuple_GET_SIZE(obj_python_version) == 2))) {
        __tmp6491 = NULL;
        goto __LL6492;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 0))))
        __tmp6491 = PyTuple_GET_ITEM(obj_python_version, 0);
    else {
        __tmp6491 = NULL;
    }
    if (__tmp6491 == NULL) goto __LL6492;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 1))))
        __tmp6491 = PyTuple_GET_ITEM(obj_python_version, 1);
    else {
        __tmp6491 = NULL;
    }
    if (__tmp6491 == NULL) goto __LL6492;
    __tmp6491 = obj_python_version;
__LL6492: ;
    if (unlikely(__tmp6491 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_python_version); goto fail;
    } else {
        PyObject *__tmp6493 = PyTuple_GET_ITEM(obj_python_version, 0);
        CPyTagged __tmp6494;
        if (likely(PyLong_Check(__tmp6493)))
            __tmp6494 = CPyTagged_BorrowFromObject(__tmp6493);
        else {
            CPy_TypeError("int", __tmp6493); goto fail;
        }
        arg_python_version.f0 = __tmp6494;
        PyObject *__tmp6495 = PyTuple_GET_ITEM(obj_python_version, 1);
        CPyTagged __tmp6496;
        if (likely(PyLong_Check(__tmp6495)))
            __tmp6496 = CPyTagged_BorrowFromObject(__tmp6495);
        else {
            CPy_TypeError("int", __tmp6495); goto fail;
        }
        arg_python_version.f1 = __tmp6496;
    }
    PyObject *retval = CPyDef_deps___get_dependencies_of_target(arg_module_id, arg_module_tree, arg_target, arg_type_map, arg_python_version);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_dependencies_of_target", 191, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_type_map, tuple_T2II cpy_r_python_version, PyObject *cpy_r_alias_deps, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    if (cpy_r_options != NULL) goto CPyL13;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_options = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_scope___Scope();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 227, CPyStatic_deps___globals);
        goto CPyL14;
    }
    if (((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope != NULL) {
        CPy_DECREF(((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope);
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 227, CPyStatic_deps___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_type_map);
    if (((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map != NULL) {
        CPy_DECREF(((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map);
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map = cpy_r_type_map;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 228, CPyStatic_deps___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_alias_deps);
    if (((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_alias_deps != NULL) {
        CPy_DECREF(((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_alias_deps);
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_alias_deps = cpy_r_alias_deps;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 238, CPyStatic_deps___globals);
        goto CPyL14;
    }
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 239, CPyStatic_deps___globals);
        goto CPyL14;
    }
    if (((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_map != NULL) {
        CPy_DECREF(((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_map);
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_map = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 239, CPyStatic_deps___globals);
        goto CPyL14;
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_class = 0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 240, CPyStatic_deps___globals);
        goto CPyL14;
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_package_init_file = 0;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 241, CPyStatic_deps___globals);
        goto CPyL14;
    }
    if (((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_options != NULL) {
        CPy_DECREF(((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_options);
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 242, CPyStatic_deps___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL13: ;
    CPy_INCREF(cpy_r_options);
    goto CPyL2;
CPyL14: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL12;
}

PyObject *CPyPy_deps___DependencyVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type_map", "python_version", "alias_deps", "options", 0};
    PyObject *obj_type_map;
    PyObject *obj_python_version;
    PyObject *obj_alias_deps;
    PyObject *obj_options = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO|O", "__init__", kwlist, &obj_type_map, &obj_python_version, &obj_alias_deps, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    tuple_T2II arg_python_version;
    PyObject *__tmp6497;
    if (unlikely(!(PyTuple_Check(obj_python_version) && PyTuple_GET_SIZE(obj_python_version) == 2))) {
        __tmp6497 = NULL;
        goto __LL6498;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 0))))
        __tmp6497 = PyTuple_GET_ITEM(obj_python_version, 0);
    else {
        __tmp6497 = NULL;
    }
    if (__tmp6497 == NULL) goto __LL6498;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 1))))
        __tmp6497 = PyTuple_GET_ITEM(obj_python_version, 1);
    else {
        __tmp6497 = NULL;
    }
    if (__tmp6497 == NULL) goto __LL6498;
    __tmp6497 = obj_python_version;
__LL6498: ;
    if (unlikely(__tmp6497 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_python_version); goto fail;
    } else {
        PyObject *__tmp6499 = PyTuple_GET_ITEM(obj_python_version, 0);
        CPyTagged __tmp6500;
        if (likely(PyLong_Check(__tmp6499)))
            __tmp6500 = CPyTagged_BorrowFromObject(__tmp6499);
        else {
            CPy_TypeError("int", __tmp6499); goto fail;
        }
        arg_python_version.f0 = __tmp6500;
        PyObject *__tmp6501 = PyTuple_GET_ITEM(obj_python_version, 1);
        CPyTagged __tmp6502;
        if (likely(PyLong_Check(__tmp6501)))
            __tmp6502 = CPyTagged_BorrowFromObject(__tmp6501);
        else {
            CPy_TypeError("int", __tmp6501); goto fail;
        }
        arg_python_version.f1 = __tmp6502;
    }
    PyObject *arg_alias_deps;
    if (likely(PyDict_Check(obj_alias_deps)))
        arg_alias_deps = obj_alias_deps;
    else {
        CPy_TypeError("dict", obj_alias_deps); 
        goto fail;
    }
    PyObject *arg_options;
    if (obj_options == NULL) {
        arg_options = NULL;
        goto __LL6503;
    }
    if (Py_TYPE(obj_options) == CPyType_mypy___options___Options)
        arg_options = obj_options;
    else {
        arg_options = NULL;
    }
    if (arg_options != NULL) goto __LL6503;
    if (obj_options == Py_None)
        arg_options = obj_options;
    else {
        arg_options = NULL;
    }
    if (arg_options != NULL) goto __LL6503;
    CPy_TypeError("mypy.options.Options or None", obj_options); 
    goto fail;
__LL6503: ;
    char retval = CPyDef_deps___DependencyVisitor_____init__(arg_self, arg_type_map, arg_python_version, arg_alias_deps, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "__init__", 220, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
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
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T4CIOO cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
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
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_mypy_file", "DependencyVisitor", "scope", 245, CPyStatic_deps___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL45;
    }
CPyL2: ;
    cpy_r_r2 = CPyStatics[693]; /* 'module_scope' */
    PyObject *cpy_r_r3[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL48;
    } else
        goto CPyL49;
CPyL6: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = CPyDef_nodes___MypyFile___is_package_init_file(cpy_r_o);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 246, CPyStatic_deps___globals);
        goto CPyL23;
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_package_init_file = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 246, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r17 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_mypy_file", "DependencyVisitor", "scope", 247, CPyStatic_deps___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    cpy_r_r18 = CPyDef_scope___Scope___current_target(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 247, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r19 = CPyDef_deps___DependencyVisitor___add_type_alias_deps(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 247, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r20 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_plugin_deps;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = 0;
    cpy_r_r22 = PyDict_Size(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = CPyDict_GetItemsIter(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 248, CPyStatic_deps___globals);
        goto CPyL50;
    }
CPyL13: ;
    cpy_r_r25 = CPyDict_NextItem(cpy_r_r24, cpy_r_r21);
    cpy_r_r26 = cpy_r_r25.f1;
    cpy_r_r21 = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f0;
    if (!cpy_r_r27) goto CPyL51;
    cpy_r_r28 = cpy_r_r25.f2;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = cpy_r_r25.f3;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r30 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_mypy_file", 248, CPyStatic_deps___globals, "str", cpy_r_r28);
        goto CPyL52;
    }
    if (likely(PySet_Check(cpy_r_r29)))
        cpy_r_r31 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_mypy_file", 248, CPyStatic_deps___globals, "set", cpy_r_r29);
        goto CPyL53;
    }
    cpy_r_trigger = cpy_r_r30;
    cpy_r_targets = cpy_r_r31;
    cpy_r_r32 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_map;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_mypy_file", "DependencyVisitor", "map", 249, CPyStatic_deps___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r32);
CPyL17: ;
    cpy_r_r33 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r32, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 249, CPyStatic_deps___globals);
        goto CPyL55;
    }
    if (likely(PySet_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_mypy_file", 249, CPyStatic_deps___globals, "set", cpy_r_r33);
        goto CPyL55;
    }
    cpy_r_r35 = _PySet_Update(cpy_r_r34, cpy_r_targets);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 249, CPyStatic_deps___globals);
        goto CPyL56;
    }
    cpy_r_r37 = CPyDict_CheckSize(cpy_r_r20, cpy_r_r23);
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 248, CPyStatic_deps___globals);
        goto CPyL56;
    } else
        goto CPyL13;
CPyL21: ;
    cpy_r_r38 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 248, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r39 = CPyDef_traverser___TraverserVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 250, CPyStatic_deps___globals);
    } else
        goto CPyL31;
CPyL23: ;
    cpy_r_r40 = CPy_CatchError();
    cpy_r_r14 = 0;
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
    PyObject *cpy_r_r45[4] = {cpy_r_r5, cpy_r_r42, cpy_r_r43, cpy_r_r44};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r46, 4, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL57;
    }
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    cpy_r_r48 = PyObject_IsTrue(cpy_r_r47);
    CPy_DecRef(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r50 = cpy_r_r48;
    if (cpy_r_r50) goto CPyL28;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL58;
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
        goto CPyL59;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    tuple_T3OOO __tmp6504 = { NULL, NULL, NULL };
    cpy_r_r52 = __tmp6504;
    cpy_r_r53 = cpy_r_r52;
    goto CPyL33;
CPyL32: ;
    cpy_r_r54 = CPy_CatchError();
    cpy_r_r53 = cpy_r_r54;
CPyL33: ;
    if (!cpy_r_r14) goto CPyL60;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r56[4] = {cpy_r_r5, cpy_r_r55, cpy_r_r55, cpy_r_r55};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r57, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 245, CPyStatic_deps___globals);
        goto CPyL61;
    } else
        goto CPyL62;
CPyL35: ;
    CPy_DECREF(cpy_r_r5);
CPyL36: ;
    if (cpy_r_r53.f0 == NULL) goto CPyL43;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL63;
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
    CPy_DecRef(cpy_r_r0);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL44;
CPyL49: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL6;
CPyL50: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL23;
CPyL51: ;
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    goto CPyL21;
CPyL52: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r29);
    goto CPyL23;
CPyL53: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL23;
CPyL54: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_trigger);
    CPy_DecRef(cpy_r_targets);
    goto CPyL23;
CPyL55: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_targets);
    goto CPyL23;
CPyL56: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
CPyL57: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL29;
CPyL58: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    goto CPyL27;
CPyL59: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL30;
CPyL60: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL36;
CPyL61: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL39;
CPyL62: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL35;
CPyL63: ;
    CPy_XDECREF(cpy_r_r53.f0);
    CPy_XDECREF(cpy_r_r53.f1);
    CPy_XDECREF(cpy_r_r53.f2);
    goto CPyL38;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_mypy_file(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file", 244, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
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
    PyObject *cpy_r_r15;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_base;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_variants;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_ex;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    tuple_T3OOO cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    tuple_T3OOO cpy_r_r121;
    tuple_T3OOO cpy_r_r122;
    tuple_T3OOO cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_func_def", "DependencyVisitor", "scope", 253, CPyStatic_deps___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[705]; /* 'function_scope' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_o};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL93;
    }
    CPy_DECREF(cpy_r_r0);
    cpy_r_r5 = PyObject_Type(cpy_r_r4);
    cpy_r_r6 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL94;
    }
    cpy_r_r8 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r4};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL95;
    } else
        goto CPyL96;
CPyL5: ;
    cpy_r_r13 = 1;
    cpy_r_r14 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_func_def", "DependencyVisitor", "scope", 254, CPyStatic_deps___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r14);
CPyL7: ;
    cpy_r_r15 = CPyDef_scope___Scope___current_target(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 254, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_target = cpy_r_r15;
    cpy_r_r16 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r18) goto CPyL97;
    cpy_r_r19 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_class;
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_func_def", "DependencyVisitor", "is_class", 256, CPyStatic_deps___globals);
        goto CPyL98;
    }
CPyL10: ;
    if (!cpy_r_r19) goto CPyL18;
CPyL11: ;
    cpy_r_r20 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    cpy_r_r21 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL13;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL14;
CPyL13: ;
    cpy_r_r26 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    cpy_r_r25 = cpy_r_r29;
CPyL14: ;
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r30 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r30);
    if (likely((Py_TYPE(cpy_r_r30) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r30) == CPyType_types___Overloaded)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 257, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_r30);
        goto CPyL98;
    }
    cpy_r_r32 = NULL;
    cpy_r_r33 = 2;
    cpy_r_r34 = CPyDef_typeops___bind_self(cpy_r_r31, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 257, CPyStatic_deps___globals);
        goto CPyL98;
    }
    cpy_r_signature = cpy_r_r34;
    goto CPyL20;
CPyL18: ;
    cpy_r_r35 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r35);
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 259, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r35);
        goto CPyL98;
    }
    cpy_r_signature = cpy_r_r36;
CPyL20: ;
    cpy_r_r37 = CPyDef_deps___DependencyVisitor___get_type_triggers(cpy_r_self, cpy_r_signature);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 260, CPyStatic_deps___globals);
        goto CPyL98;
    }
    cpy_r_r38 = 0;
CPyL22: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL99;
    cpy_r_r43 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r38);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 260, CPyStatic_deps___globals, "str", cpy_r_r43);
        goto CPyL100;
    }
    cpy_r_trigger = cpy_r_r44;
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_trigger, cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 261, CPyStatic_deps___globals);
        goto CPyL101;
    }
    cpy_r_r47 = CPyDef_trigger___make_trigger(cpy_r_target);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 262, CPyStatic_deps___globals);
        goto CPyL101;
    }
    cpy_r_r48 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_trigger, cpy_r_r47);
    CPy_DECREF(cpy_r_trigger);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 262, CPyStatic_deps___globals);
        goto CPyL100;
    }
    cpy_r_r49 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r49;
    goto CPyL22;
CPyL28: ;
    cpy_r_r50 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 263, CPyStatic_deps___globals);
        goto CPyL71;
    }
    if (!cpy_r_r51) goto CPyL55;
    cpy_r_r52 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyDef_deps___non_trivial_bases(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 264, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_r54 = 0;
CPyL32: ;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_r53)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r57;
    if (!cpy_r_r58) goto CPyL102;
    cpy_r_r59 = CPyList_GetItemUnsafe(cpy_r_r53, cpy_r_r54);
    if (likely((Py_TYPE(cpy_r_r59) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r59) == CPyType_nodes___TypeInfo)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 264, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r59);
        goto CPyL103;
    }
    cpy_r_base = cpy_r_r60;
    cpy_r_r61 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 267, CPyStatic_deps___globals);
        goto CPyL104;
    }
    if (!cpy_r_r61) goto CPyL48;
    cpy_r_r62 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 267, CPyStatic_deps___globals);
        goto CPyL104;
    }
CPyL37: ;
    cpy_r_r63 = CPyStatics[288]; /* '__init__' */
    cpy_r_r64 = PyUnicode_Compare(cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 == -1;
    if (!cpy_r_r65) goto CPyL40;
    cpy_r_r66 = PyErr_Occurred();
    cpy_r_r67 = cpy_r_r66 != NULL;
    if (!cpy_r_r67) goto CPyL40;
    cpy_r_r68 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", -1, CPyStatic_deps___globals);
        goto CPyL104;
    }
CPyL40: ;
    cpy_r_r69 = cpy_r_r64 != 0;
    if (cpy_r_r69) goto CPyL42;
    cpy_r_r70 = cpy_r_r69;
    goto CPyL47;
CPyL42: ;
    cpy_r_r71 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 267, CPyStatic_deps___globals);
        goto CPyL104;
    }
CPyL43: ;
    cpy_r_r72 = CPyStatics[721]; /* '__new__' */
    cpy_r_r73 = PyUnicode_Compare(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r74 = cpy_r_r73 == -1;
    if (!cpy_r_r74) goto CPyL46;
    cpy_r_r75 = PyErr_Occurred();
    cpy_r_r76 = cpy_r_r75 != NULL;
    if (!cpy_r_r76) goto CPyL46;
    cpy_r_r77 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", -1, CPyStatic_deps___globals);
        goto CPyL104;
    }
CPyL46: ;
    cpy_r_r78 = cpy_r_r73 != 0;
    cpy_r_r70 = cpy_r_r78;
CPyL47: ;
    if (!cpy_r_r70) goto CPyL105;
CPyL48: ;
    cpy_r_r79 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 268, CPyStatic_deps___globals);
        goto CPyL103;
    }
CPyL49: ;
    cpy_r_r80 = CPyStatics[224]; /* '.' */
    cpy_r_r81 = PyUnicode_Concat(cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 268, CPyStatic_deps___globals);
        goto CPyL103;
    }
    cpy_r_r82 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 268, CPyStatic_deps___globals);
        goto CPyL106;
    }
CPyL51: ;
    cpy_r_r83 = PyUnicode_Concat(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 268, CPyStatic_deps___globals);
        goto CPyL103;
    }
    cpy_r_r84 = CPyDef_trigger___make_trigger(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 268, CPyStatic_deps___globals);
        goto CPyL103;
    }
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 268, CPyStatic_deps___globals);
        goto CPyL103;
    }
CPyL54: ;
    cpy_r_r87 = cpy_r_r54 + 2;
    cpy_r_r54 = cpy_r_r87;
    goto CPyL32;
CPyL55: ;
    cpy_r_r88 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_func_def", "DependencyVisitor", "scope", 269, CPyStatic_deps___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r88);
CPyL56: ;
    cpy_r_r89 = CPyDef_scope___Scope___current_target(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 269, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_r90 = CPyDef_deps___DependencyVisitor___add_type_alias_deps(cpy_r_self, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 269, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_r91 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 270, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_r92 = ((mypy___nodes___FuncDefObject *)cpy_r_o)->_expanded;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = PySet_New(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 271, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_r94 = PySet_New(NULL);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 271, CPyStatic_deps___globals);
        goto CPyL107;
    }
    cpy_r_r95 = PySet_Add(cpy_r_r94, cpy_r_o);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 271, CPyStatic_deps___globals);
        goto CPyL108;
    }
    cpy_r_r97 = PyNumber_Subtract(cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 271, CPyStatic_deps___globals);
        goto CPyL71;
    }
    if (likely(PySet_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 271, CPyStatic_deps___globals, "set", cpy_r_r97);
        goto CPyL71;
    }
    cpy_r_variants = cpy_r_r98;
    cpy_r_r99 = PyObject_GetIter(cpy_r_variants);
    CPy_DECREF(cpy_r_variants);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 272, CPyStatic_deps___globals);
        goto CPyL71;
    }
CPyL65: ;
    cpy_r_r100 = PyIter_Next(cpy_r_r99);
    if (cpy_r_r100 == NULL) goto CPyL109;
    if (likely((Py_TYPE(cpy_r_r100) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r100) == CPyType_nodes___LambdaExpr)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 272, CPyStatic_deps___globals, "mypy.nodes.FuncItem", cpy_r_r100);
        goto CPyL110;
    }
    cpy_r_ex = cpy_r_r101;
    cpy_r_r102 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r103 = (CPyPtr)&((PyObject *)cpy_r_ex)->ob_type;
    cpy_r_r104 = *(PyObject * *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 == cpy_r_r102;
    if (!cpy_r_r105) goto CPyL111;
    if (likely(Py_TYPE(cpy_r_ex) == CPyType_nodes___FuncDef))
        cpy_r_r106 = cpy_r_ex;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_func_def", 274, CPyStatic_deps___globals, "mypy.nodes.FuncDef", cpy_r_ex);
        goto CPyL110;
    }
    cpy_r_r107 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 274, CPyStatic_deps___globals);
        goto CPyL110;
    } else
        goto CPyL65;
CPyL70: ;
    cpy_r_r108 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 272, CPyStatic_deps___globals);
    } else
        goto CPyL79;
CPyL71: ;
    cpy_r_r109 = CPy_CatchError();
    cpy_r_r13 = 0;
    cpy_r_r110 = CPy_GetExcInfo();
    cpy_r_r111 = cpy_r_r110.f0;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = cpy_r_r110.f1;
    CPy_INCREF(cpy_r_r112);
    cpy_r_r113 = cpy_r_r110.f2;
    CPy_INCREF(cpy_r_r113);
    CPy_DecRef(cpy_r_r110.f0);
    CPy_DecRef(cpy_r_r110.f1);
    CPy_DecRef(cpy_r_r110.f2);
    PyObject *cpy_r_r114[4] = {cpy_r_r4, cpy_r_r111, cpy_r_r112, cpy_r_r113};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r115, 4, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL112;
    }
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    cpy_r_r117 = PyObject_IsTrue(cpy_r_r116);
    CPy_DecRef(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL77;
    }
    cpy_r_r119 = cpy_r_r117;
    if (cpy_r_r119) goto CPyL76;
    CPy_Reraise();
    if (!0) {
        goto CPyL77;
    } else
        goto CPyL113;
CPyL75: ;
    CPy_Unreachable();
CPyL76: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    goto CPyL79;
CPyL77: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    cpy_r_r120 = CPy_KeepPropagating();
    if (!cpy_r_r120) {
        goto CPyL80;
    } else
        goto CPyL114;
CPyL78: ;
    CPy_Unreachable();
CPyL79: ;
    tuple_T3OOO __tmp6505 = { NULL, NULL, NULL };
    cpy_r_r121 = __tmp6505;
    cpy_r_r122 = cpy_r_r121;
    goto CPyL81;
CPyL80: ;
    cpy_r_r123 = CPy_CatchError();
    cpy_r_r122 = cpy_r_r123;
CPyL81: ;
    if (!cpy_r_r13) goto CPyL115;
    cpy_r_r124 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r125[4] = {cpy_r_r4, cpy_r_r124, cpy_r_r124, cpy_r_r124};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r126, 4, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 253, CPyStatic_deps___globals);
        goto CPyL116;
    } else
        goto CPyL117;
CPyL83: ;
    CPy_DECREF(cpy_r_r4);
CPyL84: ;
    if (cpy_r_r122.f0 == NULL) goto CPyL91;
    CPy_Reraise();
    if (!0) {
        goto CPyL87;
    } else
        goto CPyL118;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    if (cpy_r_r122.f0 == NULL) goto CPyL89;
    CPy_RestoreExcInfo(cpy_r_r122);
    CPy_XDECREF(cpy_r_r122.f0);
    CPy_XDECREF(cpy_r_r122.f1);
    CPy_XDECREF(cpy_r_r122.f2);
CPyL89: ;
    cpy_r_r128 = CPy_KeepPropagating();
    if (!cpy_r_r128) goto CPyL92;
    CPy_Unreachable();
CPyL91: ;
    return 1;
CPyL92: ;
    cpy_r_r129 = 2;
    return cpy_r_r129;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL92;
CPyL94: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL92;
CPyL95: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL92;
CPyL96: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL5;
CPyL97: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL28;
CPyL98: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL71;
CPyL99: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r37);
    goto CPyL28;
CPyL100: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r37);
    goto CPyL71;
CPyL101: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_trigger);
    goto CPyL71;
CPyL102: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL55;
CPyL103: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL71;
CPyL104: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_base);
    goto CPyL71;
CPyL105: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL54;
CPyL106: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r81);
    goto CPyL71;
CPyL107: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL71;
CPyL108: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r94);
    goto CPyL71;
CPyL109: ;
    CPy_DECREF(cpy_r_r99);
    goto CPyL70;
CPyL110: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL71;
CPyL111: ;
    CPy_DECREF(cpy_r_ex);
    goto CPyL65;
CPyL112: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    goto CPyL77;
CPyL113: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    goto CPyL75;
CPyL114: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL78;
CPyL115: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    goto CPyL84;
CPyL116: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL87;
CPyL117: ;
    CPy_DECREF(cpy_r_r127);
    goto CPyL83;
CPyL118: ;
    CPy_XDECREF(cpy_r_r122.f0);
    CPy_XDECREF(cpy_r_r122.f1);
    CPy_XDECREF(cpy_r_r122.f2);
    goto CPyL86;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_func_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_func_def", 252, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_tname;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
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
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
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
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 277, CPyStatic_deps___globals);
        goto CPyL51;
    }
    if (cpy_r_r0) goto CPyL9;
    cpy_r_r1 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_func;
    cpy_r_r2 = ((mypy___nodes___FuncDefObject *)cpy_r_r1)->_is_overload;
    if (cpy_r_r2) goto CPyL49;
CPyL3: ;
    cpy_r_r3 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_decorator", "DependencyVisitor", "scope", 281, CPyStatic_deps___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyDef_scope___Scope___current_function_name(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 281, CPyStatic_deps___globals);
        goto CPyL51;
    }
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 == cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL49;
    cpy_r_r7 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_func;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_r7, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 282, CPyStatic_deps___globals);
        goto CPyL51;
    }
CPyL7: ;
    cpy_r_r9 = CPyDef_trigger___make_trigger(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 282, CPyStatic_deps___globals);
        goto CPyL51;
    }
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 282, CPyStatic_deps___globals);
        goto CPyL51;
    } else
        goto CPyL49;
CPyL9: ;
    cpy_r_r12 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_decorators;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 0;
CPyL10: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL52;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_nodes___Expression)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 290, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r18);
        goto CPyL53;
    }
    cpy_r_d = cpy_r_r19;
    cpy_r_r20 = Py_None;
    CPy_INCREF(cpy_r_r20);
    cpy_r_tname = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL14;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL15;
CPyL14: ;
    cpy_r_r26 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    cpy_r_r25 = cpy_r_r29;
CPyL15: ;
    if (!cpy_r_r25) goto CPyL17;
    cpy_r_r30 = cpy_r_r25;
    goto CPyL18;
CPyL17: ;
    cpy_r_r31 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    cpy_r_r30 = cpy_r_r34;
CPyL18: ;
    if (!cpy_r_r30) goto CPyL25;
    CPy_INCREF(cpy_r_d);
    if (likely((Py_TYPE(cpy_r_d) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___RefExpr)))
        cpy_r_r35 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 292, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_d);
        goto CPyL54;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 292, CPyStatic_deps___globals);
        goto CPyL54;
    }
CPyL21: ;
    cpy_r_r37 = CPyStr_IsTrue(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (cpy_r_r37) {
        goto CPyL55;
    } else
        goto CPyL25;
CPyL22: ;
    CPy_INCREF(cpy_r_d);
    if (likely((Py_TYPE(cpy_r_d) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___RefExpr)))
        cpy_r_r38 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 293, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_d);
        goto CPyL56;
    }
    cpy_r_r39 = CPY_GET_ATTR(cpy_r_r38, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 293, CPyStatic_deps___globals);
        goto CPyL56;
    }
CPyL24: ;
    cpy_r_tname = cpy_r_r39;
CPyL25: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r44 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 294, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL54;
    }
    cpy_r_r45 = ((mypy___nodes___CallExprObject *)cpy_r_r44)->_callee;
    cpy_r_r46 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_r45)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL29;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL30;
CPyL29: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_r45)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    cpy_r_r50 = cpy_r_r54;
CPyL30: ;
    if (!cpy_r_r50) goto CPyL32;
    cpy_r_r55 = cpy_r_r50;
    goto CPyL33;
CPyL32: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r45)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL33: ;
    if (!cpy_r_r55) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r60 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 294, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL54;
    }
    cpy_r_r61 = ((mypy___nodes___CallExprObject *)cpy_r_r60)->_callee;
    CPy_INCREF(cpy_r_r61);
    if (likely((Py_TYPE(cpy_r_r61) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r61) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r61) == CPyType_nodes___RefExpr)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 294, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r61);
        goto CPyL54;
    }
    cpy_r_r63 = CPY_GET_ATTR(cpy_r_r62, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 294, CPyStatic_deps___globals);
        goto CPyL54;
    }
CPyL37: ;
    cpy_r_r64 = CPyStr_IsTrue(cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (cpy_r_r64) {
        goto CPyL58;
    } else
        goto CPyL57;
CPyL38: ;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r65 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 295, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL56;
    }
    cpy_r_r66 = ((mypy___nodes___CallExprObject *)cpy_r_r65)->_callee;
    CPy_INCREF(cpy_r_r66);
    if (likely((Py_TYPE(cpy_r_r66) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r66) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r66) == CPyType_nodes___RefExpr)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 295, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r66);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_d);
    cpy_r_r68 = CPY_GET_ATTR(cpy_r_r67, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 295, CPyStatic_deps___globals);
        goto CPyL53;
    }
CPyL41: ;
    cpy_r_tname = cpy_r_r68;
CPyL42: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_tname != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL59;
    if (likely(cpy_r_tname != Py_None))
        cpy_r_r71 = cpy_r_tname;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_decorator", 297, CPyStatic_deps___globals, "str", cpy_r_tname);
        goto CPyL53;
    }
    cpy_r_r72 = CPyDef_trigger___make_trigger(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 297, CPyStatic_deps___globals);
        goto CPyL53;
    }
    cpy_r_r73 = ((mypy___nodes___DecoratorObject *)cpy_r_o)->_func;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPY_GET_ATTR(cpy_r_r73, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 297, CPyStatic_deps___globals);
        goto CPyL60;
    }
CPyL46: ;
    cpy_r_r75 = CPyDef_trigger___make_trigger(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 297, CPyStatic_deps___globals);
        goto CPyL60;
    }
    cpy_r_r76 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r72, cpy_r_r75);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 297, CPyStatic_deps___globals);
        goto CPyL53;
    }
CPyL48: ;
    cpy_r_r77 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r77;
    goto CPyL10;
CPyL49: ;
    cpy_r_r78 = CPyDef_traverser___TraverserVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 298, CPyStatic_deps___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r79 = 2;
    return cpy_r_r79;
CPyL52: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL49;
CPyL53: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_tname);
    goto CPyL51;
CPyL55: ;
    CPy_DECREF(cpy_r_tname);
    goto CPyL22;
CPyL56: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_d);
    goto CPyL51;
CPyL57: ;
    CPy_DECREF(cpy_r_d);
    goto CPyL42;
CPyL58: ;
    CPy_DECREF(cpy_r_tname);
    goto CPyL38;
CPyL59: ;
    CPy_DECREF(cpy_r_tname);
    goto CPyL48;
CPyL60: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r72);
    goto CPyL51;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_decorator(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_decorator", 276, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
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
    PyObject *cpy_r_r16;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_old_is_class;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_class_def", "DependencyVisitor", "scope", 301, CPyStatic_deps___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[698]; /* 'class_scope' */
    PyObject *cpy_r_r3[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL44;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL45;
    } else
        goto CPyL46;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_class_def", "DependencyVisitor", "scope", 302, CPyStatic_deps___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r15);
CPyL7: ;
    cpy_r_r16 = CPyDef_scope___Scope___current_full_target(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 302, CPyStatic_deps___globals);
        goto CPyL21;
    }
    cpy_r_target = cpy_r_r16;
    cpy_r_r17 = CPyDef_trigger___make_trigger(cpy_r_target);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 303, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_r18 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r17, cpy_r_target);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 303, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_r19 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_class;
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_class_def", "DependencyVisitor", "is_class", 304, CPyStatic_deps___globals);
        goto CPyL47;
    }
CPyL11: ;
    cpy_r_old_is_class = cpy_r_r19;
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_class = 1;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 305, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_r21 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_type_vars;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = 0;
CPyL13: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL48;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___TypeVarLikeType)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_class_def", 307, CPyStatic_deps___globals, "mypy.types.TypeVarLikeType", cpy_r_r27);
        goto CPyL49;
    }
    cpy_r_tv = cpy_r_r28;
    cpy_r_r29 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_tv)->_fullname;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r30 = CPyDef_trigger___make_trigger(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 308, CPyStatic_deps___globals);
        goto CPyL49;
    }
    cpy_r_r31 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r30, cpy_r_target);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 308, CPyStatic_deps___globals);
        goto CPyL49;
    }
    cpy_r_r32 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r32;
    goto CPyL13;
CPyL18: ;
    cpy_r_r33 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_deps___DependencyVisitor___process_type_info(cpy_r_self, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 309, CPyStatic_deps___globals);
        goto CPyL21;
    }
    cpy_r_r35 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 310, CPyStatic_deps___globals);
        goto CPyL21;
    }
    ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_class = cpy_r_old_is_class;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 311, CPyStatic_deps___globals);
    } else
        goto CPyL29;
CPyL21: ;
    cpy_r_r37 = CPy_CatchError();
    cpy_r_r14 = 0;
    cpy_r_r38 = CPy_GetExcInfo();
    cpy_r_r39 = cpy_r_r38.f0;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = cpy_r_r38.f1;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = cpy_r_r38.f2;
    CPy_INCREF(cpy_r_r41);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    PyObject *cpy_r_r42[4] = {cpy_r_r5, cpy_r_r39, cpy_r_r40, cpy_r_r41};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r43, 4, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL50;
    }
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    cpy_r_r45 = PyObject_IsTrue(cpy_r_r44);
    CPy_DecRef(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL27;
    }
    cpy_r_r47 = cpy_r_r45;
    if (cpy_r_r47) goto CPyL26;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL51;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL29;
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    cpy_r_r48 = CPy_KeepPropagating();
    if (!cpy_r_r48) {
        goto CPyL30;
    } else
        goto CPyL52;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    tuple_T3OOO __tmp6506 = { NULL, NULL, NULL };
    cpy_r_r49 = __tmp6506;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL31;
CPyL30: ;
    cpy_r_r51 = CPy_CatchError();
    cpy_r_r50 = cpy_r_r51;
CPyL31: ;
    if (!cpy_r_r14) goto CPyL53;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r53[4] = {cpy_r_r5, cpy_r_r52, cpy_r_r52, cpy_r_r52};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r54, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 301, CPyStatic_deps___globals);
        goto CPyL54;
    } else
        goto CPyL55;
CPyL33: ;
    CPy_DECREF(cpy_r_r5);
CPyL34: ;
    if (cpy_r_r50.f0 == NULL) goto CPyL41;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL56;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    if (cpy_r_r50.f0 == NULL) goto CPyL39;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_XDECREF(cpy_r_r50.f0);
    CPy_XDECREF(cpy_r_r50.f1);
    CPy_XDECREF(cpy_r_r50.f2);
CPyL39: ;
    cpy_r_r56 = CPy_KeepPropagating();
    if (!cpy_r_r56) goto CPyL42;
    CPy_Unreachable();
CPyL41: ;
    return 1;
CPyL42: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL42;
CPyL46: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL47: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL21;
CPyL48: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r21);
    goto CPyL18;
CPyL49: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r21);
    goto CPyL21;
CPyL50: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    goto CPyL27;
CPyL51: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL25;
CPyL52: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL28;
CPyL53: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL34;
CPyL54: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL37;
CPyL55: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL33;
CPyL56: ;
    CPy_XDECREF(cpy_r_r50.f0);
    CPy_XDECREF(cpy_r_r50.f1);
    CPy_XDECREF(cpy_r_r50.f2);
    goto CPyL36;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_class_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_class_def", 300, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
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
    char cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL35;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_newtype_expr", 314, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r0);
        goto CPyL34;
    }
    cpy_r_r4 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 314, CPyStatic_deps___globals);
        goto CPyL34;
    }
    if (!cpy_r_r4) goto CPyL33;
    cpy_r_r5 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_newtype_expr", "DependencyVisitor", "scope", 315, CPyStatic_deps___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r6);
        goto CPyL36;
    }
    cpy_r_r8 = CPyStatics[698]; /* 'class_scope' */
    PyObject *cpy_r_r9[2] = {cpy_r_r5, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r12 = PyObject_Type(cpy_r_r11);
    cpy_r_r13 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL38;
    }
    cpy_r_r15 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r11};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL10: ;
    cpy_r_r20 = 1;
    cpy_r_r21 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r21);
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_newtype_expr", 316, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r21);
        goto CPyL13;
    }
    cpy_r_r23 = CPyDef_deps___DependencyVisitor___process_type_info(cpy_r_self, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 316, CPyStatic_deps___globals);
    } else
        goto CPyL21;
CPyL13: ;
    cpy_r_r24 = CPy_CatchError();
    cpy_r_r20 = 0;
    cpy_r_r25 = CPy_GetExcInfo();
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r25.f1;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = cpy_r_r25.f2;
    CPy_INCREF(cpy_r_r28);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    PyObject *cpy_r_r29[4] = {cpy_r_r11, cpy_r_r26, cpy_r_r27, cpy_r_r28};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r30, 4, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL41;
    }
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    cpy_r_r32 = PyObject_IsTrue(cpy_r_r31);
    CPy_DecRef(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL19;
    }
    cpy_r_r34 = cpy_r_r32;
    if (cpy_r_r34) goto CPyL18;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL42;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    goto CPyL21;
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    cpy_r_r35 = CPy_KeepPropagating();
    if (!cpy_r_r35) {
        goto CPyL22;
    } else
        goto CPyL43;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    tuple_T3OOO __tmp6507 = { NULL, NULL, NULL };
    cpy_r_r36 = __tmp6507;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL23;
CPyL22: ;
    cpy_r_r38 = CPy_CatchError();
    cpy_r_r37 = cpy_r_r38;
CPyL23: ;
    if (!cpy_r_r20) goto CPyL44;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r40[4] = {cpy_r_r11, cpy_r_r39, cpy_r_r39, cpy_r_r39};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r41, 4, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 315, CPyStatic_deps___globals);
        goto CPyL45;
    } else
        goto CPyL46;
CPyL25: ;
    CPy_DECREF(cpy_r_r11);
CPyL26: ;
    if (cpy_r_r37.f0 == NULL) goto CPyL33;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL47;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    if (cpy_r_r37.f0 == NULL) goto CPyL31;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_XDECREF(cpy_r_r37.f0);
    CPy_XDECREF(cpy_r_r37.f1);
    CPy_XDECREF(cpy_r_r37.f2);
CPyL31: ;
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) goto CPyL34;
    CPy_Unreachable();
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL35: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL34;
CPyL40: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL10;
CPyL41: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    goto CPyL19;
CPyL42: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    goto CPyL17;
CPyL43: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL20;
CPyL44: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    goto CPyL26;
CPyL45: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL29;
CPyL46: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL25;
CPyL47: ;
    CPy_XDECREF(cpy_r_r37.f0);
    CPy_XDECREF(cpy_r_r37.f1);
    CPy_XDECREF(cpy_r_r37.f2);
    goto CPyL28;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_newtype_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr", 313, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_newtype_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___process_type_info(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_base;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_base_info;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T4CIOO cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyPtr cpy_r_r82;
    int64_t cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyPtr cpy_r_r104;
    int64_t cpy_r_r105;
    CPyTagged cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyTagged cpy_r_r111;
    int64_t cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    tuple_T4CIOO cpy_r_r115;
    CPyTagged cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    CPyTagged cpy_r_r190;
    char cpy_r_r191;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "DependencyVisitor", "scope", 319, CPyStatic_deps___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_scope___Scope___current_full_target(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 319, CPyStatic_deps___globals);
        goto CPyL137;
    }
    cpy_r_target = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "bases", 320, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL139;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 320, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r8);
        goto CPyL140;
    }
    cpy_r_base = cpy_r_r9;
    cpy_r_r10 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_base, cpy_r_target);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 321, CPyStatic_deps___globals);
        goto CPyL140;
    }
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL4;
CPyL8: ;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_tuple_type;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "tuple_type", 322, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_tuple_type;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "tuple_type", 323, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 323, CPyStatic_deps___globals, "mypy.types.TupleType", cpy_r_r15);
        goto CPyL138;
    }
    cpy_r_r17 = CPyDef_trigger___make_trigger(cpy_r_target);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 323, CPyStatic_deps___globals);
        goto CPyL141;
    }
    cpy_r_r18 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 323, CPyStatic_deps___globals);
        goto CPyL138;
    }
CPyL14: ;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "typeddict_type", 324, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r19);
CPyL15: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 != cpy_r_r20;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r21) goto CPyL20;
    cpy_r_r22 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "typeddict_type", 325, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r22);
CPyL17: ;
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 325, CPyStatic_deps___globals, "mypy.types.TypedDictType", cpy_r_r22);
        goto CPyL138;
    }
    cpy_r_r24 = CPyDef_trigger___make_trigger(cpy_r_target);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 325, CPyStatic_deps___globals);
        goto CPyL142;
    }
    cpy_r_r25 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 325, CPyStatic_deps___globals);
        goto CPyL138;
    }
CPyL20: ;
    cpy_r_r26 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_declared_metaclass;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "declared_metaclass", 326, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r26);
CPyL21: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    CPy_DECREF(cpy_r_r26);
    if (!cpy_r_r28) goto CPyL26;
    cpy_r_r29 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_declared_metaclass;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "declared_metaclass", 327, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r29);
CPyL23: ;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 327, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r29);
        goto CPyL138;
    }
    cpy_r_r31 = CPyDef_trigger___make_trigger(cpy_r_target);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 327, CPyStatic_deps___globals);
        goto CPyL143;
    }
    cpy_r_r32 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 327, CPyStatic_deps___globals);
        goto CPyL138;
    }
CPyL26: ;
    cpy_r_r33 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_is_protocol;
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "is_protocol", 328, CPyStatic_deps___globals);
        goto CPyL138;
    }
CPyL27: ;
    if (!cpy_r_r33) goto CPyL144;
CPyL28: ;
    cpy_r_r34 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "mro", 329, CPyStatic_deps___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r34);
CPyL29: ;
    cpy_r_r35 = CPyList_GetSlice(cpy_r_r34, 0, -2);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 329, CPyStatic_deps___globals);
        goto CPyL138;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 329, CPyStatic_deps___globals, "list", cpy_r_r35);
        goto CPyL138;
    }
    cpy_r_r37 = 0;
CPyL32: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL145;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r36, cpy_r_r37);
    if (likely((Py_TYPE(cpy_r_r42) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r42) == CPyType_nodes___TypeInfo)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 329, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r42);
        goto CPyL146;
    }
    cpy_r_base_info = cpy_r_r43;
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_base_info);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 341, CPyStatic_deps___globals);
        goto CPyL146;
    }
CPyL35: ;
    cpy_r_r45 = CPyDef_trigger___make_wildcard_trigger(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 341, CPyStatic_deps___globals);
        goto CPyL146;
    }
    cpy_r_r46 = CPyDef_trigger___make_trigger(cpy_r_target);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 341, CPyStatic_deps___globals);
        goto CPyL147;
    }
    cpy_r_r47 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 340, CPyStatic_deps___globals);
        goto CPyL146;
    }
    cpy_r_r48 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r48;
    goto CPyL32;
CPyL39: ;
    cpy_r_r49 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "DependencyVisitor", "scope", 346, CPyStatic_deps___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r49);
CPyL40: ;
    cpy_r_r50 = CPyDef_scope___Scope___current_target(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 346, CPyStatic_deps___globals);
        goto CPyL137;
    }
    cpy_r_r51 = CPyDef_deps___DependencyVisitor___add_type_alias_deps(cpy_r_self, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 346, CPyStatic_deps___globals);
        goto CPyL137;
    }
    cpy_r_r52 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "names", 347, CPyStatic_deps___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r52);
CPyL43: ;
    cpy_r_r53 = 0;
    cpy_r_r54 = PyDict_Size(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = CPyDict_GetItemsIter(cpy_r_r52);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 347, CPyStatic_deps___globals);
        goto CPyL148;
    }
CPyL44: ;
    cpy_r_r57 = CPyDict_NextItem(cpy_r_r56, cpy_r_r53);
    cpy_r_r58 = cpy_r_r57.f1;
    cpy_r_r53 = cpy_r_r58;
    cpy_r_r59 = cpy_r_r57.f0;
    if (!cpy_r_r59) goto CPyL149;
    cpy_r_r60 = cpy_r_r57.f2;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = cpy_r_r57.f3;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r57.f2);
    CPy_DECREF(cpy_r_r57.f3);
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r62 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 347, CPyStatic_deps___globals, "str", cpy_r_r60);
        goto CPyL150;
    }
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_nodes___SymbolTableNode))
        cpy_r_r63 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 347, CPyStatic_deps___globals, "mypy.nodes.SymbolTableNode", cpy_r_r61);
        goto CPyL151;
    }
    cpy_r_name = cpy_r_r62;
    cpy_r_node = cpy_r_r63;
    cpy_r_r64 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r65 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r64)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL152;
    cpy_r_r69 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_nodes___Var))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 350, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_r69);
        goto CPyL153;
    }
    cpy_r_r71 = ((mypy___nodes___VarObject *)cpy_r_r70)->_is_initialized_in_class;
    CPy_DECREF(cpy_r_node);
    if (!cpy_r_r71) goto CPyL57;
CPyL50: ;
    cpy_r_r72 = CPyDef_deps___has_user_bases(cpy_r_info);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 350, CPyStatic_deps___globals);
        goto CPyL154;
    }
    if (!cpy_r_r72) goto CPyL57;
    cpy_r_r73 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 351, CPyStatic_deps___globals);
        goto CPyL154;
    }
CPyL53: ;
    cpy_r_r74 = CPyStatics[224]; /* '.' */
    cpy_r_r75 = PyUnicode_Concat(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 351, CPyStatic_deps___globals);
        goto CPyL154;
    }
    cpy_r_r76 = PyUnicode_Concat(cpy_r_r75, cpy_r_name);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 351, CPyStatic_deps___globals);
        goto CPyL154;
    }
    cpy_r_r77 = CPyDef_trigger___make_trigger(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 351, CPyStatic_deps___globals);
        goto CPyL154;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 351, CPyStatic_deps___globals);
        goto CPyL154;
    }
CPyL57: ;
    cpy_r_r80 = CPyDef_deps___non_trivial_bases(cpy_r_info);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 352, CPyStatic_deps___globals);
        goto CPyL154;
    }
    cpy_r_r81 = 0;
CPyL59: ;
    cpy_r_r82 = (CPyPtr)&((PyVarObject *)cpy_r_r80)->ob_size;
    cpy_r_r83 = *(int64_t *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 << 1;
    cpy_r_r85 = (Py_ssize_t)cpy_r_r81 < (Py_ssize_t)cpy_r_r84;
    if (!cpy_r_r85) goto CPyL155;
    cpy_r_r86 = CPyList_GetItemUnsafe(cpy_r_r80, cpy_r_r81);
    if (likely((Py_TYPE(cpy_r_r86) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r86) == CPyType_nodes___TypeInfo)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 352, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r86);
        goto CPyL156;
    }
    cpy_r_base_info = cpy_r_r87;
    cpy_r_r88 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_base_info);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 356, CPyStatic_deps___globals);
        goto CPyL156;
    }
CPyL62: ;
    cpy_r_r89 = CPyStatics[224]; /* '.' */
    cpy_r_r90 = PyUnicode_Concat(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 356, CPyStatic_deps___globals);
        goto CPyL156;
    }
    cpy_r_r91 = PyUnicode_Concat(cpy_r_r90, cpy_r_name);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 356, CPyStatic_deps___globals);
        goto CPyL156;
    }
    cpy_r_r92 = CPyDef_trigger___make_trigger(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 356, CPyStatic_deps___globals);
        goto CPyL156;
    }
    cpy_r_r93 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 357, CPyStatic_deps___globals);
        goto CPyL157;
    }
CPyL66: ;
    cpy_r_r94 = CPyStatics[224]; /* '.' */
    cpy_r_r95 = PyUnicode_Concat(cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 357, CPyStatic_deps___globals);
        goto CPyL157;
    }
    cpy_r_r96 = PyUnicode_Concat(cpy_r_r95, cpy_r_name);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 357, CPyStatic_deps___globals);
        goto CPyL157;
    }
    cpy_r_r97 = CPyDef_trigger___make_trigger(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 357, CPyStatic_deps___globals);
        goto CPyL157;
    }
    cpy_r_r98 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r92, cpy_r_r97);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 355, CPyStatic_deps___globals);
        goto CPyL156;
    }
    cpy_r_r99 = cpy_r_r81 + 2;
    cpy_r_r81 = cpy_r_r99;
    goto CPyL59;
CPyL71: ;
    cpy_r_r100 = CPyDict_CheckSize(cpy_r_r52, cpy_r_r55);
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 347, CPyStatic_deps___globals);
        goto CPyL158;
    } else
        goto CPyL44;
CPyL72: ;
    cpy_r_r101 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 347, CPyStatic_deps___globals);
        goto CPyL137;
    }
    cpy_r_r102 = CPyDef_deps___non_trivial_bases(cpy_r_info);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 359, CPyStatic_deps___globals);
        goto CPyL137;
    }
    cpy_r_r103 = 0;
CPyL75: ;
    cpy_r_r104 = (CPyPtr)&((PyVarObject *)cpy_r_r102)->ob_size;
    cpy_r_r105 = *(int64_t *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 << 1;
    cpy_r_r107 = (Py_ssize_t)cpy_r_r103 < (Py_ssize_t)cpy_r_r106;
    if (!cpy_r_r107) goto CPyL159;
    cpy_r_r108 = CPyList_GetItemUnsafe(cpy_r_r102, cpy_r_r103);
    if (likely((Py_TYPE(cpy_r_r108) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r108) == CPyType_nodes___TypeInfo)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 359, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r108);
        goto CPyL160;
    }
    cpy_r_base_info = cpy_r_r109;
    cpy_r_r110 = ((mypy___nodes___TypeInfoObject *)cpy_r_base_info)->_names;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "names", 360, CPyStatic_deps___globals);
        goto CPyL161;
    }
    CPy_INCREF(cpy_r_r110);
CPyL78: ;
    cpy_r_r111 = 0;
    cpy_r_r112 = PyDict_Size(cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 << 1;
    cpy_r_r114 = CPyDict_GetItemsIter(cpy_r_r110);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 360, CPyStatic_deps___globals);
        goto CPyL162;
    }
CPyL79: ;
    cpy_r_r115 = CPyDict_NextItem(cpy_r_r114, cpy_r_r111);
    cpy_r_r116 = cpy_r_r115.f1;
    cpy_r_r111 = cpy_r_r116;
    cpy_r_r117 = cpy_r_r115.f0;
    if (!cpy_r_r117) goto CPyL163;
    cpy_r_r118 = cpy_r_r115.f2;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = cpy_r_r115.f3;
    CPy_INCREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r115.f2);
    CPy_DECREF(cpy_r_r115.f3);
    if (likely(PyUnicode_Check(cpy_r_r118)))
        cpy_r_r120 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 360, CPyStatic_deps___globals, "str", cpy_r_r118);
        goto CPyL164;
    }
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_nodes___SymbolTableNode))
        cpy_r_r121 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_type_info", 360, CPyStatic_deps___globals, "mypy.nodes.SymbolTableNode", cpy_r_r119);
        goto CPyL165;
    }
    cpy_r_name = cpy_r_r120;
    cpy_r_node = cpy_r_r121;
    CPy_DECREF(cpy_r_node);
    cpy_r_r122 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 361, CPyStatic_deps___globals);
        goto CPyL166;
    }
    if (!cpy_r_r122) goto CPyL97;
    cpy_r_r123 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_type_info", "TypeInfo", "names", 371, CPyStatic_deps___globals);
        goto CPyL166;
    }
    CPy_INCREF(cpy_r_r123);
CPyL85: ;
    cpy_r_r124 = PyDict_Contains(cpy_r_r123, cpy_r_name);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 371, CPyStatic_deps___globals);
        goto CPyL166;
    }
    cpy_r_r126 = cpy_r_r124;
    cpy_r_r127 = cpy_r_r126 ^ 1;
    if (cpy_r_r127) goto CPyL167;
    cpy_r_r128 = CPyStatics[288]; /* '__init__' */
    cpy_r_r129 = PyUnicode_Compare(cpy_r_name, cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 == -1;
    if (!cpy_r_r130) goto CPyL90;
    cpy_r_r131 = PyErr_Occurred();
    cpy_r_r132 = cpy_r_r131 != NULL;
    if (!cpy_r_r132) goto CPyL90;
    cpy_r_r133 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", -1, CPyStatic_deps___globals);
        goto CPyL166;
    }
CPyL90: ;
    cpy_r_r134 = cpy_r_r129 == 0;
    if (!cpy_r_r134) goto CPyL92;
    cpy_r_r135 = cpy_r_r134;
    goto CPyL96;
CPyL92: ;
    cpy_r_r136 = CPyStatics[721]; /* '__new__' */
    cpy_r_r137 = PyUnicode_Compare(cpy_r_name, cpy_r_r136);
    cpy_r_r138 = cpy_r_r137 == -1;
    if (!cpy_r_r138) goto CPyL95;
    cpy_r_r139 = PyErr_Occurred();
    cpy_r_r140 = cpy_r_r139 != NULL;
    if (!cpy_r_r140) goto CPyL95;
    cpy_r_r141 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", -1, CPyStatic_deps___globals);
        goto CPyL166;
    }
CPyL95: ;
    cpy_r_r142 = cpy_r_r137 == 0;
    cpy_r_r135 = cpy_r_r142;
CPyL96: ;
    if (cpy_r_r135) goto CPyL167;
CPyL97: ;
    cpy_r_r143 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 378, CPyStatic_deps___globals);
        goto CPyL166;
    }
CPyL98: ;
    cpy_r_r144 = CPyStatics[224]; /* '.' */
    cpy_r_r145 = PyUnicode_Concat(cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 378, CPyStatic_deps___globals);
        goto CPyL166;
    }
    cpy_r_r146 = PyUnicode_Concat(cpy_r_r145, cpy_r_name);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 378, CPyStatic_deps___globals);
        goto CPyL166;
    }
    cpy_r_r147 = CPyDef_trigger___make_trigger(cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 378, CPyStatic_deps___globals);
        goto CPyL166;
    }
    cpy_r_r148 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 379, CPyStatic_deps___globals);
        goto CPyL168;
    }
CPyL102: ;
    cpy_r_r149 = CPyStatics[224]; /* '.' */
    cpy_r_r150 = PyUnicode_Concat(cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 379, CPyStatic_deps___globals);
        goto CPyL168;
    }
    cpy_r_r151 = PyUnicode_Concat(cpy_r_r150, cpy_r_name);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 379, CPyStatic_deps___globals);
        goto CPyL169;
    }
    cpy_r_r152 = CPyDef_trigger___make_trigger(cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 379, CPyStatic_deps___globals);
        goto CPyL169;
    }
    cpy_r_r153 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r147, cpy_r_r152);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 377, CPyStatic_deps___globals);
        goto CPyL170;
    }
CPyL106: ;
    cpy_r_r154 = CPyDict_CheckSize(cpy_r_r110, cpy_r_r113);
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 360, CPyStatic_deps___globals);
        goto CPyL170;
    } else
        goto CPyL79;
CPyL107: ;
    cpy_r_r155 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 360, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r156 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 381, CPyStatic_deps___globals);
        goto CPyL161;
    }
    if (cpy_r_r156) goto CPyL171;
    cpy_r_r157 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 386, CPyStatic_deps___globals);
        goto CPyL161;
    }
CPyL111: ;
    cpy_r_r158 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r159 = PyUnicode_Concat(cpy_r_r157, cpy_r_r158);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 386, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r160 = CPyDef_trigger___make_trigger(cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 386, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r161 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 387, CPyStatic_deps___globals);
        goto CPyL172;
    }
CPyL114: ;
    cpy_r_r162 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r163 = PyUnicode_Concat(cpy_r_r161, cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 387, CPyStatic_deps___globals);
        goto CPyL172;
    }
    cpy_r_r164 = CPyDef_trigger___make_trigger(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 387, CPyStatic_deps___globals);
        goto CPyL172;
    }
    cpy_r_r165 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r160, cpy_r_r164);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 385, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r166 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 390, CPyStatic_deps___globals);
        goto CPyL161;
    }
CPyL118: ;
    cpy_r_r167 = CPyStatics[5313]; /* '.__new__' */
    cpy_r_r168 = PyUnicode_Concat(cpy_r_r166, cpy_r_r167);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 390, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r169 = CPyDef_trigger___make_trigger(cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 390, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r170 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 391, CPyStatic_deps___globals);
        goto CPyL173;
    }
CPyL121: ;
    cpy_r_r171 = CPyStatics[5313]; /* '.__new__' */
    cpy_r_r172 = PyUnicode_Concat(cpy_r_r170, cpy_r_r171);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 391, CPyStatic_deps___globals);
        goto CPyL173;
    }
    cpy_r_r173 = CPyDef_trigger___make_trigger(cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 391, CPyStatic_deps___globals);
        goto CPyL173;
    }
    cpy_r_r174 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r169, cpy_r_r173);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 389, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r175 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 397, CPyStatic_deps___globals);
        goto CPyL161;
    }
CPyL125: ;
    cpy_r_r176 = CPyStatics[5314]; /* '.(abstract)' */
    cpy_r_r177 = PyUnicode_Concat(cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 397, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r178 = CPyDef_trigger___make_trigger(cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 397, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r179 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 398, CPyStatic_deps___globals);
        goto CPyL174;
    }
CPyL128: ;
    cpy_r_r180 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r181 = PyUnicode_Concat(cpy_r_r179, cpy_r_r180);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 398, CPyStatic_deps___globals);
        goto CPyL174;
    }
    cpy_r_r182 = CPyDef_trigger___make_trigger(cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 398, CPyStatic_deps___globals);
        goto CPyL174;
    }
    cpy_r_r183 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r178, cpy_r_r182);
    CPy_DECREF(cpy_r_r178);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r183 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 396, CPyStatic_deps___globals);
        goto CPyL161;
    }
    cpy_r_r184 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_base_info);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 402, CPyStatic_deps___globals);
        goto CPyL160;
    }
CPyL132: ;
    cpy_r_r185 = CPyStatics[5314]; /* '.(abstract)' */
    cpy_r_r186 = PyUnicode_Concat(cpy_r_r184, cpy_r_r185);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 402, CPyStatic_deps___globals);
        goto CPyL160;
    }
    cpy_r_r187 = CPyDef_trigger___make_trigger(cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 402, CPyStatic_deps___globals);
        goto CPyL160;
    }
    cpy_r_r188 = NULL;
    cpy_r_r189 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r187, cpy_r_r188);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 402, CPyStatic_deps___globals);
        goto CPyL160;
    }
CPyL135: ;
    cpy_r_r190 = cpy_r_r103 + 2;
    cpy_r_r103 = cpy_r_r190;
    goto CPyL75;
CPyL136: ;
    return 1;
CPyL137: ;
    cpy_r_r191 = 2;
    return cpy_r_r191;
CPyL138: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL137;
CPyL139: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL140: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r2);
    goto CPyL137;
CPyL141: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r16);
    goto CPyL137;
CPyL142: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r23);
    goto CPyL137;
CPyL143: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r30);
    goto CPyL137;
CPyL144: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL39;
CPyL145: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r36);
    goto CPyL39;
CPyL146: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r36);
    goto CPyL137;
CPyL147: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r45);
    goto CPyL137;
CPyL148: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL137;
CPyL149: ;
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57.f2);
    CPy_DECREF(cpy_r_r57.f3);
    goto CPyL72;
CPyL150: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r61);
    goto CPyL137;
CPyL151: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r62);
    goto CPyL137;
CPyL152: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL71;
CPyL153: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL137;
CPyL154: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_name);
    goto CPyL137;
CPyL155: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r80);
    goto CPyL71;
CPyL156: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r80);
    goto CPyL137;
CPyL157: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r92);
    goto CPyL137;
CPyL158: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    goto CPyL137;
CPyL159: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL136;
CPyL160: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL137;
CPyL161: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    goto CPyL137;
CPyL162: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    goto CPyL137;
CPyL163: ;
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r115.f2);
    CPy_DECREF(cpy_r_r115.f3);
    goto CPyL107;
CPyL164: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r119);
    goto CPyL137;
CPyL165: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r120);
    goto CPyL137;
CPyL166: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r114);
    goto CPyL137;
CPyL167: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL106;
CPyL168: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r147);
    goto CPyL137;
CPyL169: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r147);
    goto CPyL137;
CPyL170: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r114);
    goto CPyL137;
CPyL171: ;
    CPy_DECREF(cpy_r_base_info);
    goto CPyL135;
CPyL172: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r160);
    goto CPyL137;
CPyL173: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r169);
    goto CPyL137;
CPyL174: ;
    CPy_DecRef(cpy_r_base_info);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r178);
    goto CPyL137;
}

PyObject *CPyPy_deps___DependencyVisitor___process_type_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:process_type_info", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___process_type_info(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "process_type_info", 318, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___ImportObject *)cpy_r_o)->_ids;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp6508;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp6508 = NULL;
        goto __LL6509;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp6508 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp6508 = NULL;
    }
    if (__tmp6508 == NULL) goto __LL6509;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp6508 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp6508 = NULL;
    }
    if (__tmp6508 != NULL) goto __LL6510;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp6508 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp6508 = NULL;
    }
    if (__tmp6508 != NULL) goto __LL6510;
    __tmp6508 = NULL;
__LL6510: ;
    if (__tmp6508 == NULL) goto __LL6509;
    __tmp6508 = cpy_r_r6;
__LL6509: ;
    if (unlikely(__tmp6508 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6511 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp6511);
        PyObject *__tmp6512;
        if (likely(PyUnicode_Check(__tmp6511)))
            __tmp6512 = __tmp6511;
        else {
            CPy_TypeError("str", __tmp6511); 
            __tmp6512 = NULL;
        }
        cpy_r_r7.f0 = __tmp6512;
        PyObject *__tmp6513 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp6513);
        PyObject *__tmp6514;
        if (PyUnicode_Check(__tmp6513))
            __tmp6514 = __tmp6513;
        else {
            __tmp6514 = NULL;
        }
        if (__tmp6514 != NULL) goto __LL6515;
        if (__tmp6513 == Py_None)
            __tmp6514 = __tmp6513;
        else {
            __tmp6514 = NULL;
        }
        if (__tmp6514 != NULL) goto __LL6515;
        CPy_TypeError("str or None", __tmp6513); 
        __tmp6514 = NULL;
__LL6515: ;
        cpy_r_r7.f1 = __tmp6514;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import", 405, CPyStatic_deps___globals);
        goto CPyL11;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_as_id = cpy_r_r9;
    CPy_DECREF(cpy_r_as_id);
    cpy_r_r10 = CPyDef_trigger___make_trigger(cpy_r_id);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import", 406, CPyStatic_deps___globals);
        goto CPyL11;
    }
    cpy_r_r11 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_import", "DependencyVisitor", "scope", 406, CPyStatic_deps___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r11);
CPyL5: ;
    cpy_r_r12 = CPyDef_scope___Scope___current_target(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import", 406, CPyStatic_deps___globals);
        goto CPyL12;
    }
    cpy_r_r13 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import", 406, CPyStatic_deps___globals);
        goto CPyL11;
    }
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL1;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL9;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_import(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import", 404, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    tuple_T2OC cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_module_id;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r__;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_as_name;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 409, CPyStatic_deps___globals);
        goto CPyL18;
    }
    if (!cpy_r_r0) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r1 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_import_from", "DependencyVisitor", "scope", 413, CPyStatic_deps___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r1);
CPyL4: ;
    cpy_r_r2 = CPyDef_scope___Scope___current_module_id(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 413, CPyStatic_deps___globals);
        goto CPyL18;
    }
    cpy_r_r3 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_relative;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_id;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_package_init_file;
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_import_from", "DependencyVisitor", "is_package_init_file", 413, CPyStatic_deps___globals);
        goto CPyL19;
    }
CPyL6: ;
    cpy_r_r6 = CPyDef_mypy___util___correct_relative_import(cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 412, CPyStatic_deps___globals);
        goto CPyL18;
    }
    cpy_r_r7 = cpy_r_r6.f0;
    CPy_INCREF(cpy_r_r7);
    cpy_r_module_id = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f1;
    CPy_DECREF(cpy_r_r6.f0);
    cpy_r_r9 = cpy_r_r8 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r9);
    cpy_r__ = cpy_r_r9;
    CPy_DECREF(cpy_r__);
    cpy_r_r10 = CPyDef_trigger___make_trigger(cpy_r_module_id);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 415, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 415, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r13 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL10: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    PyObject *__tmp6516;
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 2))) {
        __tmp6516 = NULL;
        goto __LL6517;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 0))))
        __tmp6516 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        __tmp6516 = NULL;
    }
    if (__tmp6516 == NULL) goto __LL6517;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 1)))
        __tmp6516 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    else {
        __tmp6516 = NULL;
    }
    if (__tmp6516 != NULL) goto __LL6518;
    if (PyTuple_GET_ITEM(cpy_r_r19, 1) == Py_None)
        __tmp6516 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    else {
        __tmp6516 = NULL;
    }
    if (__tmp6516 != NULL) goto __LL6518;
    __tmp6516 = NULL;
__LL6518: ;
    if (__tmp6516 == NULL) goto __LL6517;
    __tmp6516 = cpy_r_r19;
__LL6517: ;
    if (unlikely(__tmp6516 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r19); cpy_r_r20 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6519 = PyTuple_GET_ITEM(cpy_r_r19, 0);
        CPy_INCREF(__tmp6519);
        PyObject *__tmp6520;
        if (likely(PyUnicode_Check(__tmp6519)))
            __tmp6520 = __tmp6519;
        else {
            CPy_TypeError("str", __tmp6519); 
            __tmp6520 = NULL;
        }
        cpy_r_r20.f0 = __tmp6520;
        PyObject *__tmp6521 = PyTuple_GET_ITEM(cpy_r_r19, 1);
        CPy_INCREF(__tmp6521);
        PyObject *__tmp6522;
        if (PyUnicode_Check(__tmp6521))
            __tmp6522 = __tmp6521;
        else {
            __tmp6522 = NULL;
        }
        if (__tmp6522 != NULL) goto __LL6523;
        if (__tmp6521 == Py_None)
            __tmp6522 = __tmp6521;
        else {
            __tmp6522 = NULL;
        }
        if (__tmp6522 != NULL) goto __LL6523;
        CPy_TypeError("str or None", __tmp6521); 
        __tmp6522 = NULL;
__LL6523: ;
        cpy_r_r20.f1 = __tmp6522;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 416, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r21 = cpy_r_r20.f0;
    CPy_INCREF(cpy_r_r21);
    cpy_r_name = cpy_r_r21;
    cpy_r_r22 = cpy_r_r20.f1;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r20.f0);
    CPy_DECREF(cpy_r_r20.f1);
    cpy_r_as_name = cpy_r_r22;
    CPy_DECREF(cpy_r_as_name);
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = PyUnicode_Concat(cpy_r_module_id, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 417, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r25 = PyUnicode_Concat(cpy_r_r24, cpy_r_name);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 417, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r26 = CPyDef_trigger___make_trigger(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 417, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 417, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r29 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r29;
    goto CPyL10;
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_module_id);
    goto CPyL18;
CPyL21: ;
    CPy_DECREF(cpy_r_module_id);
    CPy_DECREF(cpy_r_r13);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_r13);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_name);
    goto CPyL18;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_import_from(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import_from", 408, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OC cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_module_id;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r__;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_import_all", "DependencyVisitor", "scope", 421, CPyStatic_deps___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_scope___Scope___current_module_id(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_all", 421, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r2 = ((mypy___nodes___ImportAllObject *)cpy_r_o)->_relative;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___nodes___ImportAllObject *)cpy_r_o)->_id;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_is_package_init_file;
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_import_all", "DependencyVisitor", "is_package_init_file", 421, CPyStatic_deps___globals);
        goto CPyL8;
    }
CPyL3: ;
    cpy_r_r5 = CPyDef_mypy___util___correct_relative_import(cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_all", 420, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r6 = cpy_r_r5.f0;
    CPy_INCREF(cpy_r_r6);
    cpy_r_module_id = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f1;
    CPy_DECREF(cpy_r_r5.f0);
    cpy_r_r8 = cpy_r_r7 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r8);
    cpy_r__ = cpy_r_r8;
    CPy_DECREF(cpy_r__);
    cpy_r_r9 = CPyDef_trigger___make_wildcard_trigger(cpy_r_module_id);
    CPy_DECREF(cpy_r_module_id);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_all", 425, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_import_all", 425, CPyStatic_deps___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_import_all(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import_all", 419, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_o)->_is_unreachable;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_block", 429, CPyStatic_deps___globals);
        goto CPyL3;
    }
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_block(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_block", 427, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_block__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_block(cpy_r_self, cpy_r_block);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_block__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_block__TraverserVisitor_glue(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_block__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_rvalue;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_analyzed;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    tuple_T4CIOO cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_name;
    PyObject *cpy_r_symnode;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_typ;
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
    PyObject *cpy_r_attr_target;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyPtr cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyPtr cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyPtr cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyTagged cpy_r_r130;
    int64_t cpy_r_r131;
    CPyTagged cpy_r_r132;
    PyObject *cpy_r_r133;
    tuple_T4CIOO cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyPtr cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyPtr cpy_r_r161;
    int64_t cpy_r_r162;
    CPyTagged cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r169;
    CPyPtr cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    CPyPtr cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    CPyPtr cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_class_name;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyPtr cpy_r_r204;
    PyObject *cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    CPyPtr cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    char cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    CPyTagged cpy_r_r227;
    CPyPtr cpy_r_r228;
    int64_t cpy_r_r229;
    CPyTagged cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    CPyTagged cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    CPyPtr cpy_r_r238;
    CPyPtr cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_items;
    CPyPtr cpy_r_r242;
    int64_t cpy_r_r243;
    CPyTagged cpy_r_r244;
    CPyTagged cpy_r_r245;
    CPyTagged cpy_r_r246;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r247;
    char cpy_r_r248;
    int64_t cpy_r_r249;
    char cpy_r_r250;
    char cpy_r_r251;
    char cpy_r_r252;
    char cpy_r_r253;
    char cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    CPyTagged cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    CPyPtr cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    char cpy_r_r265;
    CPyTagged cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    char cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    CPyPtr cpy_r_r279;
    PyObject *cpy_r_r280;
    char cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    CPyPtr cpy_r_r285;
    PyObject *cpy_r_r286;
    char cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    CPyPtr cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    CPyPtr cpy_r_r295;
    PyObject *cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_fname;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    CPyPtr cpy_r_r309;
    PyObject *cpy_r_r310;
    char cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    CPyPtr cpy_r_r314;
    PyObject *cpy_r_r315;
    char cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_init;
    PyObject *cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    CPyPtr cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    CPyPtr cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    CPyPtr cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    PyObject *cpy_r_r342;
    CPyPtr cpy_r_r343;
    PyObject *cpy_r_r344;
    char cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    CPyTagged cpy_r_r364;
    CPyPtr cpy_r_r365;
    int64_t cpy_r_r366;
    CPyTagged cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_lv;
    PyObject *cpy_r_r371;
    CPyPtr cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    char cpy_r_r375;
    PyObject *cpy_r_r376;
    CPyPtr cpy_r_r377;
    PyObject *cpy_r_r378;
    char cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    CPyPtr cpy_r_r382;
    PyObject *cpy_r_r383;
    char cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    char cpy_r_r387;
    PyObject *cpy_r_r388;
    char cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    char cpy_r_r400;
    CPyTagged cpy_r_r401;
    char cpy_r_r402;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_rvalue;
    CPy_INCREF(cpy_r_r0);
    cpy_r_rvalue = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r5 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 433, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r6 = ((mypy___nodes___CallExprObject *)cpy_r_r5)->_analyzed;
    cpy_r_r7 = (PyObject *)CPyType_nodes___TypeVarExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r11 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 434, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r12 = ((mypy___nodes___CallExprObject *)cpy_r_r11)->_analyzed;
    CPy_INCREF(cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___TypeVarExpr))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 434, CPyStatic_deps___globals, "mypy.nodes.TypeVarExpr", cpy_r_r12);
        goto CPyL225;
    }
    cpy_r_analyzed = cpy_r_r13;
    cpy_r_r14 = ((mypy___nodes___TypeVarExprObject *)cpy_r_analyzed)->_upper_bound;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_analyzed, CPyType_nodes___TypeVarExpr, 7, mypy___nodes___TypeVarExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 436, CPyStatic_deps___globals);
        goto CPyL226;
    }
CPyL6: ;
    cpy_r_r16 = CPyDef_trigger___make_trigger(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 436, CPyStatic_deps___globals);
        goto CPyL226;
    }
    cpy_r_r17 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r14, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 435, CPyStatic_deps___globals);
        goto CPyL227;
    }
    cpy_r_r18 = ((mypy___nodes___TypeVarExprObject *)cpy_r_analyzed)->_values;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = 0;
CPyL9: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL228;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_types___Type)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 438, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r24);
        goto CPyL229;
    }
    cpy_r_val = cpy_r_r25;
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_analyzed, CPyType_nodes___TypeVarExpr, 7, mypy___nodes___TypeVarExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 439, CPyStatic_deps___globals);
        goto CPyL230;
    }
CPyL12: ;
    cpy_r_r27 = CPyDef_trigger___make_trigger(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 439, CPyStatic_deps___globals);
        goto CPyL230;
    }
    cpy_r_r28 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_val, cpy_r_r27);
    CPy_DECREF(cpy_r_val);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 439, CPyStatic_deps___globals);
        goto CPyL229;
    }
    cpy_r_r29 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r29;
    goto CPyL9;
CPyL15: ;
    CPy_INCREF(cpy_r_rvalue);
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r30 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 441, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r31 = CPyDef_traverser___TraverserVisitor___visit_call_expr(cpy_r_self, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 441, CPyStatic_deps___globals);
        goto CPyL225;
    } else
        goto CPyL145;
CPyL17: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r36 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 442, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r37 = ((mypy___nodes___CallExprObject *)cpy_r_r36)->_analyzed;
    cpy_r_r38 = (PyObject *)CPyType_nodes___NamedTupleExpr;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_r37)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (!cpy_r_r41) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r42 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 444, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_r42)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_nodes___NamedTupleExpr))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 444, CPyStatic_deps___globals, "mypy.nodes.NamedTupleExpr", cpy_r_r43);
        goto CPyL225;
    }
    cpy_r_r45 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_r44)->_info;
    CPy_INCREF(cpy_r_r45);
    cpy_r_info = cpy_r_r45;
    cpy_r_r46 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_assignment_stmt", "DependencyVisitor", "scope", 445, CPyStatic_deps___globals);
        goto CPyL231;
    }
    CPy_INCREF(cpy_r_r46);
CPyL23: ;
    cpy_r_r47 = CPyDef_scope___Scope___current_full_target(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 445, CPyStatic_deps___globals);
        goto CPyL231;
    }
    cpy_r_r48 = CPyStatics[224]; /* '.' */
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 445, CPyStatic_deps___globals);
        goto CPyL232;
    }
CPyL25: ;
    cpy_r_r50 = CPyStr_Build(3, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 445, CPyStatic_deps___globals);
        goto CPyL231;
    }
    cpy_r_prefix = cpy_r_r50;
    cpy_r_r51 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r51 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r51);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 446, CPyStatic_deps___globals);
        goto CPyL233;
    }
CPyL27: ;
    cpy_r_r52 = 0;
    cpy_r_r53 = PyDict_Size(cpy_r_r51);
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = CPyDict_GetItemsIter(cpy_r_r51);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 446, CPyStatic_deps___globals);
        goto CPyL234;
    }
CPyL28: ;
    cpy_r_r56 = CPyDict_NextItem(cpy_r_r55, cpy_r_r52);
    cpy_r_r57 = cpy_r_r56.f1;
    cpy_r_r52 = cpy_r_r57;
    cpy_r_r58 = cpy_r_r56.f0;
    if (!cpy_r_r58) goto CPyL235;
    cpy_r_r59 = cpy_r_r56.f2;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = cpy_r_r56.f3;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r56.f2);
    CPy_DECREF(cpy_r_r56.f3);
    if (likely(PyUnicode_Check(cpy_r_r59)))
        cpy_r_r61 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 446, CPyStatic_deps___globals, "str", cpy_r_r59);
        goto CPyL236;
    }
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_nodes___SymbolTableNode))
        cpy_r_r62 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 446, CPyStatic_deps___globals, "mypy.nodes.SymbolTableNode", cpy_r_r60);
        goto CPyL237;
    }
    cpy_r_name = cpy_r_r61;
    cpy_r_symnode = cpy_r_r62;
    cpy_r_r63 = CPyStatics[755]; /* '_' */
    cpy_r_r64 = CPyStr_Startswith(cpy_r_name, cpy_r_r63);
    if (cpy_r_r64) goto CPyL238;
    cpy_r_r65 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    cpy_r_r66 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_r65)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL238;
    cpy_r_r70 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_nodes___Var))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 448, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_r70);
        goto CPyL239;
    }
    cpy_r_r72 = ((mypy___nodes___VarObject *)cpy_r_r71)->_type;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_symnode);
    cpy_r_typ = cpy_r_r72;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_typ != cpy_r_r73;
    if (!cpy_r_r74) goto CPyL240;
    CPy_INCREF(cpy_r_typ);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r75 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 450, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL241;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 450, CPyStatic_deps___globals);
        goto CPyL241;
    }
    CPy_INCREF(cpy_r_typ);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r78 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 451, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL241;
    }
    cpy_r_r79 = CPyDef_trigger___make_trigger(cpy_r_prefix);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 451, CPyStatic_deps___globals);
        goto CPyL242;
    }
    cpy_r_r80 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 451, CPyStatic_deps___globals);
        goto CPyL241;
    }
    cpy_r_r81 = CPyStatics[224]; /* '.' */
    cpy_r_r82 = CPyStr_Build(3, cpy_r_prefix, cpy_r_r81, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 452, CPyStatic_deps___globals);
        goto CPyL243;
    }
    cpy_r_r83 = CPyDef_trigger___make_trigger(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 452, CPyStatic_deps___globals);
        goto CPyL243;
    }
    cpy_r_attr_target = cpy_r_r83;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r84 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 453, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL244;
    }
    cpy_r_r85 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r84, cpy_r_attr_target);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_attr_target);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 453, CPyStatic_deps___globals);
        goto CPyL245;
    }
CPyL44: ;
    cpy_r_r86 = CPyDict_CheckSize(cpy_r_r51, cpy_r_r54);
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 446, CPyStatic_deps___globals);
        goto CPyL245;
    } else
        goto CPyL28;
CPyL45: ;
    cpy_r_r87 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 446, CPyStatic_deps___globals);
        goto CPyL225;
    } else
        goto CPyL145;
CPyL46: ;
    cpy_r_r88 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r89 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r90 = *(PyObject * *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 == cpy_r_r88;
    if (!cpy_r_r91) goto CPyL63;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r92 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 454, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r93 = ((mypy___nodes___CallExprObject *)cpy_r_r92)->_analyzed;
    cpy_r_r94 = (PyObject *)CPyType_nodes___TypedDictExpr;
    cpy_r_r95 = (CPyPtr)&((PyObject *)cpy_r_r93)->ob_type;
    cpy_r_r96 = *(PyObject * *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 == cpy_r_r94;
    if (!cpy_r_r97) goto CPyL63;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r98 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 456, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r99 = ((mypy___nodes___CallExprObject *)cpy_r_r98)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r99) == CPyType_nodes___TypedDictExpr))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 456, CPyStatic_deps___globals, "mypy.nodes.TypedDictExpr", cpy_r_r99);
        goto CPyL225;
    }
    cpy_r_r101 = ((mypy___nodes___TypedDictExprObject *)cpy_r_r100)->_info;
    CPy_INCREF(cpy_r_r101);
    cpy_r_info = cpy_r_r101;
    cpy_r_r102 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_assignment_stmt", "TypeInfo", "typeddict_type", 457, CPyStatic_deps___globals);
        goto CPyL231;
    }
CPyL52: ;
    cpy_r_r103 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r104 = cpy_r_r102 != cpy_r_r103;
    if (cpy_r_r104) {
        goto CPyL55;
    } else
        goto CPyL246;
CPyL53: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r105 = 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 457, CPyStatic_deps___globals);
        goto CPyL224;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r106 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_assignment_stmt", "DependencyVisitor", "scope", 458, CPyStatic_deps___globals);
        goto CPyL231;
    }
    CPy_INCREF(cpy_r_r106);
CPyL56: ;
    cpy_r_r107 = CPyDef_scope___Scope___current_full_target(cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 458, CPyStatic_deps___globals);
        goto CPyL231;
    }
    cpy_r_r108 = CPyStatics[224]; /* '.' */
    cpy_r_r109 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 458, CPyStatic_deps___globals);
        goto CPyL247;
    }
CPyL58: ;
    cpy_r_r110 = CPyStr_Build(3, cpy_r_r107, cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 458, CPyStatic_deps___globals);
        goto CPyL231;
    }
    cpy_r_prefix = cpy_r_r110;
    cpy_r_r111 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_typeddict_type;
    if (unlikely(cpy_r_r111 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'typeddict_type' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r111);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 459, CPyStatic_deps___globals);
        goto CPyL233;
    }
CPyL60: ;
    if (likely(cpy_r_r111 != Py_None))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 459, CPyStatic_deps___globals, "mypy.types.TypedDictType", cpy_r_r111);
        goto CPyL233;
    }
    cpy_r_r113 = CPyDef_trigger___make_trigger(cpy_r_prefix);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 459, CPyStatic_deps___globals);
        goto CPyL248;
    }
    cpy_r_r114 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 459, CPyStatic_deps___globals);
        goto CPyL225;
    } else
        goto CPyL145;
CPyL63: ;
    cpy_r_r115 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r116 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r117 = *(PyObject * *)cpy_r_r116;
    cpy_r_r118 = cpy_r_r117 == cpy_r_r115;
    if (!cpy_r_r118) goto CPyL81;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r119 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 460, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r120 = ((mypy___nodes___CallExprObject *)cpy_r_r119)->_analyzed;
    cpy_r_r121 = (PyObject *)CPyType_nodes___EnumCallExpr;
    cpy_r_r122 = (CPyPtr)&((PyObject *)cpy_r_r120)->ob_type;
    cpy_r_r123 = *(PyObject * *)cpy_r_r122;
    cpy_r_r124 = cpy_r_r123 == cpy_r_r121;
    if (!cpy_r_r124) goto CPyL81;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r125 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r126 = ((mypy___nodes___CallExprObject *)cpy_r_r125)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r126) == CPyType_nodes___EnumCallExpr))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals, "mypy.nodes.EnumCallExpr", cpy_r_r126);
        goto CPyL225;
    }
    cpy_r_r128 = ((mypy___nodes___EnumCallExprObject *)cpy_r_r127)->_info;
    cpy_r_r129 = ((mypy___nodes___TypeInfoObject *)cpy_r_r128)->_names;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_assignment_stmt", "TypeInfo", "names", 462, CPyStatic_deps___globals);
        goto CPyL225;
    }
    CPy_INCREF(cpy_r_r129);
CPyL69: ;
    cpy_r_r130 = 0;
    cpy_r_r131 = PyDict_Size(cpy_r_r129);
    cpy_r_r132 = cpy_r_r131 << 1;
    cpy_r_r133 = CPyDict_GetItemsIter(cpy_r_r129);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals);
        goto CPyL249;
    }
CPyL70: ;
    cpy_r_r134 = CPyDict_NextItem(cpy_r_r133, cpy_r_r130);
    cpy_r_r135 = cpy_r_r134.f1;
    cpy_r_r130 = cpy_r_r135;
    cpy_r_r136 = cpy_r_r134.f0;
    if (!cpy_r_r136) goto CPyL250;
    cpy_r_r137 = cpy_r_r134.f2;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = cpy_r_r134.f3;
    CPy_INCREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r134.f2);
    CPy_DECREF(cpy_r_r134.f3);
    if (likely(PyUnicode_Check(cpy_r_r137)))
        cpy_r_r139 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals, "str", cpy_r_r137);
        goto CPyL251;
    }
    if (likely(Py_TYPE(cpy_r_r138) == CPyType_nodes___SymbolTableNode))
        cpy_r_r140 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals, "mypy.nodes.SymbolTableNode", cpy_r_r138);
        goto CPyL252;
    }
    cpy_r_name = cpy_r_r139;
    CPy_DECREF(cpy_r_name);
    cpy_r_symnode = cpy_r_r140;
    cpy_r_r141 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    cpy_r_r142 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r143 = (CPyPtr)&((PyObject *)cpy_r_r141)->ob_type;
    cpy_r_r144 = *(PyObject * *)cpy_r_r143;
    cpy_r_r145 = cpy_r_r144 == cpy_r_r142;
    if (!cpy_r_r145) goto CPyL253;
    cpy_r_r146 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    if (likely(Py_TYPE(cpy_r_r146) == CPyType_nodes___Var))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 463, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_r146);
        goto CPyL254;
    }
    cpy_r_r148 = ((mypy___nodes___VarObject *)cpy_r_r147)->_type;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r150 = cpy_r_r148 != cpy_r_r149;
    CPy_DECREF(cpy_r_r148);
    if (!cpy_r_r150) goto CPyL253;
    cpy_r_r151 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    if (likely(Py_TYPE(cpy_r_r151) == CPyType_nodes___Var))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 464, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_r151);
        goto CPyL254;
    }
    cpy_r_r153 = ((mypy___nodes___VarObject *)cpy_r_r152)->_type;
    CPy_INCREF(cpy_r_r153);
    if (likely(cpy_r_r153 != Py_None))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 464, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r153);
        goto CPyL254;
    }
    CPy_DECREF(cpy_r_symnode);
    cpy_r_r155 = NULL;
    cpy_r_r156 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 464, CPyStatic_deps___globals);
        goto CPyL255;
    }
CPyL79: ;
    cpy_r_r157 = CPyDict_CheckSize(cpy_r_r129, cpy_r_r132);
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals);
        goto CPyL255;
    } else
        goto CPyL70;
CPyL80: ;
    cpy_r_r158 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 462, CPyStatic_deps___globals);
        goto CPyL225;
    } else
        goto CPyL145;
CPyL81: ;
    cpy_r_r159 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_is_alias_def;
    if (!cpy_r_r159) goto CPyL121;
CPyL82: ;
    cpy_r_r160 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    cpy_r_r161 = (CPyPtr)&((PyVarObject *)cpy_r_r160)->ob_size;
    cpy_r_r162 = *(int64_t *)cpy_r_r161;
    cpy_r_r163 = cpy_r_r162 << 1;
    cpy_r_r164 = cpy_r_r163 == 2;
    if (cpy_r_r164) {
        goto CPyL85;
    } else
        goto CPyL256;
CPyL83: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r165 = 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 466, CPyStatic_deps___globals);
        goto CPyL224;
    }
    CPy_Unreachable();
CPyL85: ;
    cpy_r_r166 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    cpy_r_r167 = CPyList_GetItemShort(cpy_r_r166, 0);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 467, CPyStatic_deps___globals);
        goto CPyL225;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r167, CPyType_nodes___Expression)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 467, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r167);
        goto CPyL225;
    }
    cpy_r_lvalue = cpy_r_r168;
    cpy_r_r169 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r170 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r171 = *(PyObject * *)cpy_r_r170;
    cpy_r_r172 = cpy_r_r171 == cpy_r_r169;
    if (cpy_r_r172) {
        goto CPyL90;
    } else
        goto CPyL257;
CPyL88: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r173 = 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 468, CPyStatic_deps___globals);
        goto CPyL224;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r174 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_assignment_stmt", "DependencyVisitor", "type_map", 469, CPyStatic_deps___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r174);
CPyL91: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r175 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 469, CPyStatic_deps___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL259;
    }
    cpy_r_r176 = CPyDict_GetWithNone(cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 469, CPyStatic_deps___globals);
        goto CPyL225;
    }
    if (PyObject_TypeCheck(cpy_r_r176, CPyType_types___Type))
        cpy_r_r177 = cpy_r_r176;
    else {
        cpy_r_r177 = NULL;
    }
    if (cpy_r_r177 != NULL) goto __LL6524;
    if (cpy_r_r176 == Py_None)
        cpy_r_r177 = cpy_r_r176;
    else {
        cpy_r_r177 = NULL;
    }
    if (cpy_r_r177 != NULL) goto __LL6524;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 469, CPyStatic_deps___globals, "mypy.types.Type or None", cpy_r_r176);
    goto CPyL225;
__LL6524: ;
    cpy_r_r178 = CPyDef_types___get_proper_type(cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 469, CPyStatic_deps___globals);
        goto CPyL225;
    }
    cpy_r_typ = cpy_r_r178;
    cpy_r_r179 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r180 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r181 = *(PyObject * *)cpy_r_r180;
    cpy_r_r182 = cpy_r_r181 == cpy_r_r179;
    if (!cpy_r_r182) goto CPyL97;
    cpy_r_r183 = cpy_r_r182;
    goto CPyL98;
CPyL97: ;
    cpy_r_r184 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r185 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r186 = *(PyObject * *)cpy_r_r185;
    cpy_r_r187 = cpy_r_r186 == cpy_r_r184;
    cpy_r_r183 = cpy_r_r187;
CPyL98: ;
    if (!cpy_r_r183) goto CPyL111;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r188 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 470, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL260;
    }
    cpy_r_r189 = CPY_GET_METHOD(cpy_r_r188, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r188); /* is_type_obj */
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 470, CPyStatic_deps___globals);
        goto CPyL260;
    }
    if (!cpy_r_r189) goto CPyL111;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r190 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 471, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL260;
    }
    cpy_r_r191 = CPY_GET_METHOD(cpy_r_r190, CPyType_types___FunctionLike, 17, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *))(cpy_r_r190); /* type_object */
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 471, CPyStatic_deps___globals);
        goto CPyL260;
    }
    cpy_r_r192 = CPY_GET_ATTR(cpy_r_r191, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 471, CPyStatic_deps___globals);
        goto CPyL260;
    }
CPyL105: ;
    cpy_r_class_name = cpy_r_r192;
    cpy_r_r193 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r194 = PyUnicode_Concat(cpy_r_class_name, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 472, CPyStatic_deps___globals);
        goto CPyL261;
    }
    cpy_r_r195 = CPyDef_trigger___make_trigger(cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 472, CPyStatic_deps___globals);
        goto CPyL261;
    }
    cpy_r_r196 = NULL;
    cpy_r_r197 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r195, cpy_r_r196);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r197 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 472, CPyStatic_deps___globals);
        goto CPyL261;
    }
    cpy_r_r198 = CPyStatics[5313]; /* '.__new__' */
    cpy_r_r199 = PyUnicode_Concat(cpy_r_class_name, cpy_r_r198);
    CPy_DECREF(cpy_r_class_name);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 473, CPyStatic_deps___globals);
        goto CPyL260;
    }
    cpy_r_r200 = CPyDef_trigger___make_trigger(cpy_r_r199);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 473, CPyStatic_deps___globals);
        goto CPyL260;
    }
    cpy_r_r201 = NULL;
    cpy_r_r202 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r200, cpy_r_r201);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r202 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 473, CPyStatic_deps___globals);
        goto CPyL260;
    }
CPyL111: ;
    cpy_r_r203 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r204 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r205 = *(PyObject * *)cpy_r_r204;
    cpy_r_r206 = cpy_r_r205 == cpy_r_r203;
    if (!cpy_r_r206) goto CPyL117;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r207 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 474, CPyStatic_deps___globals, "mypy.nodes.IndexExpr", cpy_r_rvalue);
        goto CPyL260;
    }
    cpy_r_r208 = ((mypy___nodes___IndexExprObject *)cpy_r_r207)->_analyzed;
    cpy_r_r209 = (PyObject *)CPyType_nodes___TypeAliasExpr;
    cpy_r_r210 = (CPyPtr)&((PyObject *)cpy_r_r208)->ob_type;
    cpy_r_r211 = *(PyObject * *)cpy_r_r210;
    cpy_r_r212 = cpy_r_r211 == cpy_r_r209;
    if (cpy_r_r212) {
        goto CPyL262;
    } else
        goto CPyL117;
CPyL114: ;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r213 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 475, CPyStatic_deps___globals, "mypy.nodes.IndexExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r214 = ((mypy___nodes___IndexExprObject *)cpy_r_r213)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r214) == CPyType_nodes___TypeAliasExpr))
        cpy_r_r215 = cpy_r_r214;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 475, CPyStatic_deps___globals, "mypy.nodes.TypeAliasExpr", cpy_r_r214);
        goto CPyL225;
    }
    cpy_r_r216 = ((mypy___nodes___TypeAliasExprObject *)cpy_r_r215)->_type;
    CPy_INCREF(cpy_r_r216);
    cpy_r_r217 = NULL;
    cpy_r_r218 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r216, cpy_r_r217);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r218 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 475, CPyStatic_deps___globals);
        goto CPyL225;
    } else
        goto CPyL145;
CPyL117: ;
    CPy_INCREF(cpy_r_typ);
    if (PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType))
        cpy_r_r219 = cpy_r_typ;
    else {
        cpy_r_r219 = NULL;
    }
    if (cpy_r_r219 != NULL) goto __LL6525;
    if (cpy_r_typ == Py_None)
        cpy_r_r219 = cpy_r_typ;
    else {
        cpy_r_r219 = NULL;
    }
    if (cpy_r_r219 != NULL) goto __LL6525;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 476, CPyStatic_deps___globals, "mypy.types.ProperType or None", cpy_r_typ);
    goto CPyL260;
__LL6525: ;
    cpy_r_r220 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r221 = cpy_r_r219 != cpy_r_r220;
    CPy_DECREF(cpy_r_r219);
    if (!cpy_r_r221) goto CPyL263;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r222 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 477, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL225;
    }
    cpy_r_r223 = NULL;
    cpy_r_r224 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r222, cpy_r_r223);
    CPy_DECREF(cpy_r_r222);
    if (unlikely(cpy_r_r224 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 477, CPyStatic_deps___globals);
        goto CPyL225;
    } else
        goto CPyL145;
CPyL121: ;
    cpy_r_r225 = CPyDef_traverser___TraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r225 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 480, CPyStatic_deps___globals);
        goto CPyL225;
    }
    cpy_r_r226 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    CPy_INCREF(cpy_r_r226);
    cpy_r_r227 = 0;
CPyL123: ;
    cpy_r_r228 = (CPyPtr)&((PyVarObject *)cpy_r_r226)->ob_size;
    cpy_r_r229 = *(int64_t *)cpy_r_r228;
    cpy_r_r230 = cpy_r_r229 << 1;
    cpy_r_r231 = (Py_ssize_t)cpy_r_r227 < (Py_ssize_t)cpy_r_r230;
    if (!cpy_r_r231) goto CPyL264;
    cpy_r_r232 = CPyList_GetItemUnsafe(cpy_r_r226, cpy_r_r227);
    if (likely(PyObject_TypeCheck(cpy_r_r232, CPyType_nodes___Expression)))
        cpy_r_r233 = cpy_r_r232;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 481, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r232);
        goto CPyL265;
    }
    cpy_r_lvalue = cpy_r_r233;
    cpy_r_r234 = CPyDef_deps___DependencyVisitor___process_lvalue(cpy_r_self, cpy_r_lvalue);
    CPy_DECREF(cpy_r_lvalue);
    if (unlikely(cpy_r_r234 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 482, CPyStatic_deps___globals);
        goto CPyL265;
    }
    cpy_r_r235 = cpy_r_r227 + 2;
    cpy_r_r227 = cpy_r_r235;
    goto CPyL123;
CPyL127: ;
    cpy_r_r236 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    CPy_INCREF(cpy_r_r236);
    cpy_r_r237 = PyList_New(1);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 483, CPyStatic_deps___globals);
        goto CPyL266;
    }
    cpy_r_r238 = (CPyPtr)&((PyListObject *)cpy_r_r237)->ob_item;
    cpy_r_r239 = *(CPyPtr *)cpy_r_r238;
    CPy_INCREF(cpy_r_rvalue);
    *(PyObject * *)cpy_r_r239 = cpy_r_rvalue;
    cpy_r_r240 = PyNumber_Add(cpy_r_r236, cpy_r_r237);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 483, CPyStatic_deps___globals);
        goto CPyL225;
    }
    if (likely(PyList_Check(cpy_r_r240)))
        cpy_r_r241 = cpy_r_r240;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 483, CPyStatic_deps___globals, "list", cpy_r_r240);
        goto CPyL225;
    }
    cpy_r_items = cpy_r_r241;
    cpy_r_r242 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r243 = *(int64_t *)cpy_r_r242;
    cpy_r_r244 = cpy_r_r243 << 1;
    cpy_r_r245 = CPyTagged_Subtract(cpy_r_r244, 2);
    cpy_r_r246 = 0;
    CPyTagged_INCREF(cpy_r_r246);
    cpy_r_i = cpy_r_r246;
CPyL131: ;
    cpy_r_r247 = cpy_r_r246 & 1;
    cpy_r_r248 = cpy_r_r247 == 0;
    cpy_r_r249 = cpy_r_r245 & 1;
    cpy_r_r250 = cpy_r_r249 == 0;
    cpy_r_r251 = cpy_r_r248 & cpy_r_r250;
    if (!cpy_r_r251) goto CPyL133;
    cpy_r_r252 = (Py_ssize_t)cpy_r_r246 < (Py_ssize_t)cpy_r_r245;
    cpy_r_r253 = cpy_r_r252;
    goto CPyL134;
CPyL133: ;
    cpy_r_r254 = CPyTagged_IsLt_(cpy_r_r246, cpy_r_r245);
    cpy_r_r253 = cpy_r_r254;
CPyL134: ;
    if (cpy_r_r253) {
        goto CPyL267;
    } else
        goto CPyL268;
CPyL135: ;
    cpy_r_r255 = CPyList_GetItem(cpy_r_items, cpy_r_i);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 485, CPyStatic_deps___globals);
        goto CPyL269;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r255, CPyType_nodes___Expression)))
        cpy_r_r256 = cpy_r_r255;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 485, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r255);
        goto CPyL269;
    }
    cpy_r_lvalue = cpy_r_r256;
    cpy_r_r257 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r258 = CPyList_GetItem(cpy_r_items, cpy_r_r257);
    CPyTagged_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 486, CPyStatic_deps___globals);
        goto CPyL270;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r258, CPyType_nodes___Expression)))
        cpy_r_r259 = cpy_r_r258;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 486, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r258);
        goto CPyL270;
    }
    cpy_r_rvalue = cpy_r_r259;
    cpy_r_r260 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r261 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r262 = *(PyObject * *)cpy_r_r261;
    CPy_DECREF(cpy_r_lvalue);
    cpy_r_r263 = cpy_r_r262 == cpy_r_r260;
    if (!cpy_r_r263) goto CPyL141;
    cpy_r_r264 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r265 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_rvalue, cpy_r_r264);
    if (unlikely(cpy_r_r265 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 488, CPyStatic_deps___globals);
        goto CPyL271;
    }
CPyL141: ;
    cpy_r_r266 = CPyTagged_Add(cpy_r_r246, 2);
    CPyTagged_DECREF(cpy_r_r246);
    CPyTagged_INCREF(cpy_r_r266);
    cpy_r_r246 = cpy_r_r266;
    cpy_r_i = cpy_r_r266;
    goto CPyL131;
CPyL142: ;
    cpy_r_r267 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r267);
    cpy_r_r268 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r269 = cpy_r_r267 != cpy_r_r268;
    CPy_DECREF(cpy_r_r267);
    if (!cpy_r_r269) goto CPyL145;
    cpy_r_r270 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r270);
    if (likely(cpy_r_r270 != Py_None))
        cpy_r_r271 = cpy_r_r270;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 490, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r270);
        goto CPyL225;
    }
    cpy_r_r272 = NULL;
    cpy_r_r273 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r271, cpy_r_r272);
    CPy_DECREF(cpy_r_r271);
    if (unlikely(cpy_r_r273 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 490, CPyStatic_deps___globals);
        goto CPyL225;
    }
CPyL145: ;
    cpy_r_r274 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r274 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 491, CPyStatic_deps___globals);
        goto CPyL225;
    }
    if (!cpy_r_r274) goto CPyL272;
    cpy_r_r275 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_unanalyzed_type;
    cpy_r_r276 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r277 = cpy_r_r275 == cpy_r_r276;
    if (!cpy_r_r277) goto CPyL272;
    cpy_r_r278 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r279 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r280 = *(PyObject * *)cpy_r_r279;
    cpy_r_r281 = cpy_r_r280 == cpy_r_r278;
    if (!cpy_r_r281) goto CPyL272;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r282 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 498, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r283 = ((mypy___nodes___CallExprObject *)cpy_r_r282)->_callee;
    cpy_r_r284 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r285 = (CPyPtr)&((PyObject *)cpy_r_r283)->ob_type;
    cpy_r_r286 = *(PyObject * *)cpy_r_r285;
    cpy_r_r287 = cpy_r_r286 == cpy_r_r284;
    if (!cpy_r_r287) goto CPyL152;
    cpy_r_r288 = cpy_r_r287;
    goto CPyL153;
CPyL152: ;
    cpy_r_r289 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r290 = (CPyPtr)&((PyObject *)cpy_r_r283)->ob_type;
    cpy_r_r291 = *(PyObject * *)cpy_r_r290;
    cpy_r_r292 = cpy_r_r291 == cpy_r_r289;
    cpy_r_r288 = cpy_r_r292;
CPyL153: ;
    if (!cpy_r_r288) goto CPyL155;
    cpy_r_r293 = cpy_r_r288;
    goto CPyL156;
CPyL155: ;
    cpy_r_r294 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r295 = (CPyPtr)&((PyObject *)cpy_r_r283)->ob_type;
    cpy_r_r296 = *(PyObject * *)cpy_r_r295;
    cpy_r_r297 = cpy_r_r296 == cpy_r_r294;
    cpy_r_r293 = cpy_r_r297;
CPyL156: ;
    if (!cpy_r_r293) goto CPyL272;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r298 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 499, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r299 = ((mypy___nodes___CallExprObject *)cpy_r_r298)->_callee;
    CPy_INCREF(cpy_r_r299);
    if (likely((Py_TYPE(cpy_r_r299) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r299) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r299) == CPyType_nodes___RefExpr)))
        cpy_r_r300 = cpy_r_r299;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 499, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r299);
        goto CPyL225;
    }
    cpy_r_r301 = CPY_GET_ATTR(cpy_r_r300, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r300);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 499, CPyStatic_deps___globals);
        goto CPyL225;
    }
CPyL160: ;
    cpy_r_r302 = CPyStr_IsTrue(cpy_r_r301);
    CPy_DECREF(cpy_r_r301);
    if (!cpy_r_r302) goto CPyL272;
    cpy_r_r303 = Py_None;
    CPy_INCREF(cpy_r_r303);
    cpy_r_fname = cpy_r_r303;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r304 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 502, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL273;
    }
    cpy_r_r305 = ((mypy___nodes___CallExprObject *)cpy_r_r304)->_callee;
    if (likely((Py_TYPE(cpy_r_r305) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r305) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r305) == CPyType_nodes___RefExpr)))
        cpy_r_r306 = cpy_r_r305;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 502, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r305);
        goto CPyL273;
    }
    cpy_r_r307 = ((mypy___nodes___RefExprObject *)cpy_r_r306)->_node;
    cpy_r_r308 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r309 = (CPyPtr)&((PyObject *)cpy_r_r307)->ob_type;
    cpy_r_r310 = *(PyObject * *)cpy_r_r309;
    cpy_r_r311 = cpy_r_r310 == cpy_r_r308;
    if (!cpy_r_r311) goto CPyL165;
    cpy_r_r312 = cpy_r_r311;
    goto CPyL166;
CPyL165: ;
    cpy_r_r313 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r314 = (CPyPtr)&((PyObject *)cpy_r_r307)->ob_type;
    cpy_r_r315 = *(PyObject * *)cpy_r_r314;
    cpy_r_r316 = cpy_r_r315 == cpy_r_r313;
    cpy_r_r312 = cpy_r_r316;
CPyL166: ;
    if (!cpy_r_r312) goto CPyL274;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r317 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 504, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL273;
    }
    cpy_r_r318 = ((mypy___nodes___CallExprObject *)cpy_r_r317)->_callee;
    if (likely((Py_TYPE(cpy_r_r318) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r318) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r318) == CPyType_nodes___RefExpr)))
        cpy_r_r319 = cpy_r_r318;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 504, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r318);
        goto CPyL273;
    }
    cpy_r_r320 = ((mypy___nodes___RefExprObject *)cpy_r_r319)->_node;
    CPy_INCREF(cpy_r_r320);
    if (likely((Py_TYPE(cpy_r_r320) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r320) == CPyType_nodes___TypeInfo)))
        cpy_r_r321 = cpy_r_r320;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 504, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r320);
        goto CPyL273;
    }
    CPy_DECREF(cpy_r_rvalue);
    cpy_r_r322 = CPyStatics[288]; /* '__init__' */
    cpy_r_r323 = CPyDef_nodes___TypeInfo___get(cpy_r_r321, cpy_r_r322);
    CPy_DECREF(cpy_r_r321);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 504, CPyStatic_deps___globals);
        goto CPyL275;
    }
    cpy_r_init = cpy_r_r323;
    cpy_r_r324 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r325 = cpy_r_init != cpy_r_r324;
    if (!cpy_r_r325) goto CPyL276;
    if (likely(cpy_r_init != Py_None))
        cpy_r_r326 = cpy_r_init;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 505, CPyStatic_deps___globals, "mypy.nodes.SymbolTableNode", cpy_r_init);
        goto CPyL277;
    }
    cpy_r_r327 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r326)->_node;
    cpy_r_r328 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r329 = (CPyPtr)&((PyObject *)cpy_r_r327)->ob_type;
    cpy_r_r330 = *(PyObject * *)cpy_r_r329;
    cpy_r_r331 = cpy_r_r330 == cpy_r_r328;
    if (!cpy_r_r331) goto CPyL175;
    cpy_r_r332 = cpy_r_r331;
    goto CPyL176;
CPyL175: ;
    cpy_r_r333 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r334 = (CPyPtr)&((PyObject *)cpy_r_r327)->ob_type;
    cpy_r_r335 = *(PyObject * *)cpy_r_r334;
    cpy_r_r336 = cpy_r_r335 == cpy_r_r333;
    cpy_r_r332 = cpy_r_r336;
CPyL176: ;
    if (!cpy_r_r332) goto CPyL178;
    cpy_r_r337 = cpy_r_r332;
    goto CPyL179;
CPyL178: ;
    cpy_r_r338 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r339 = (CPyPtr)&((PyObject *)cpy_r_r327)->ob_type;
    cpy_r_r340 = *(PyObject * *)cpy_r_r339;
    cpy_r_r341 = cpy_r_r340 == cpy_r_r338;
    cpy_r_r337 = cpy_r_r341;
CPyL179: ;
    if (cpy_r_r337) {
        goto CPyL278;
    } else
        goto CPyL276;
CPyL180: ;
    cpy_r_r342 = (PyObject *)CPyType_nodes___SymbolTableNode;
    cpy_r_r343 = (CPyPtr)&((PyObject *)cpy_r_init)->ob_type;
    cpy_r_r344 = *(PyObject * *)cpy_r_r343;
    cpy_r_r345 = cpy_r_r344 == cpy_r_r342;
    if (!cpy_r_r345) goto CPyL183;
    if (likely(cpy_r_init != Py_None))
        cpy_r_r346 = cpy_r_init;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 506, CPyStatic_deps___globals, "mypy.nodes.SymbolTableNode", cpy_r_init);
        goto CPyL224;
    }
    cpy_r_r347 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r346)->_node;
    CPy_INCREF(cpy_r_r347);
    CPy_DECREF(cpy_r_r346);
    cpy_r_r348 = cpy_r_r347;
    goto CPyL185;
CPyL183: ;
    cpy_r_r349 = cpy_r_init;
    cpy_r_r350 = CPyStatics[792]; /* 'node' */
    cpy_r_r351 = CPyObject_GetAttr(cpy_r_r349, cpy_r_r350);
    CPy_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r351 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 506, CPyStatic_deps___globals);
        goto CPyL224;
    }
    cpy_r_r348 = cpy_r_r351;
CPyL185: ;
    cpy_r_r352 = CPyStatics[3939]; /* 'fullname' */
    cpy_r_r353 = CPyObject_GetAttr(cpy_r_r348, cpy_r_r352);
    CPy_DECREF(cpy_r_r348);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 506, CPyStatic_deps___globals);
        goto CPyL224;
    }
    if (PyUnicode_Check(cpy_r_r353))
        cpy_r_r354 = cpy_r_r353;
    else {
        cpy_r_r354 = NULL;
    }
    if (cpy_r_r354 != NULL) goto __LL6526;
    if (cpy_r_r353 == Py_None)
        cpy_r_r354 = cpy_r_r353;
    else {
        cpy_r_r354 = NULL;
    }
    if (cpy_r_r354 != NULL) goto __LL6526;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 506, CPyStatic_deps___globals, "str or None", cpy_r_r353);
    goto CPyL224;
__LL6526: ;
    cpy_r_fname = cpy_r_r354;
    goto CPyL192;
CPyL188: ;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r355 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 508, CPyStatic_deps___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL225;
    }
    cpy_r_r356 = ((mypy___nodes___CallExprObject *)cpy_r_r355)->_callee;
    CPy_INCREF(cpy_r_r356);
    if (likely((Py_TYPE(cpy_r_r356) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r356) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r356) == CPyType_nodes___RefExpr)))
        cpy_r_r357 = cpy_r_r356;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 508, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r356);
        goto CPyL225;
    }
    CPy_DECREF(cpy_r_rvalue);
    cpy_r_r358 = CPY_GET_ATTR(cpy_r_r357, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 508, CPyStatic_deps___globals);
        goto CPyL224;
    }
CPyL191: ;
    cpy_r_fname = cpy_r_r358;
CPyL192: ;
    cpy_r_r359 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r360 = cpy_r_fname != cpy_r_r359;
    if (!cpy_r_r360) goto CPyL279;
    CPy_INCREF(cpy_r_fname);
    if (likely(cpy_r_fname != Py_None))
        cpy_r_r361 = cpy_r_fname;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 501, CPyStatic_deps___globals, "str", cpy_r_fname);
        goto CPyL275;
    }
    cpy_r_r362 = CPyStr_IsTrue(cpy_r_r361);
    CPy_DECREF(cpy_r_r361);
    if (cpy_r_r362) {
        goto CPyL196;
    } else
        goto CPyL279;
CPyL195: ;
    return 1;
CPyL196: ;
    cpy_r_r363 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    CPy_INCREF(cpy_r_r363);
    cpy_r_r364 = 0;
CPyL197: ;
    cpy_r_r365 = (CPyPtr)&((PyVarObject *)cpy_r_r363)->ob_size;
    cpy_r_r366 = *(int64_t *)cpy_r_r365;
    cpy_r_r367 = cpy_r_r366 << 1;
    cpy_r_r368 = (Py_ssize_t)cpy_r_r364 < (Py_ssize_t)cpy_r_r367;
    if (!cpy_r_r368) goto CPyL280;
    cpy_r_r369 = CPyList_GetItemUnsafe(cpy_r_r363, cpy_r_r364);
    if (likely(PyObject_TypeCheck(cpy_r_r369, CPyType_nodes___Expression)))
        cpy_r_r370 = cpy_r_r369;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 511, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r369);
        goto CPyL281;
    }
    cpy_r_lv = cpy_r_r370;
    cpy_r_r371 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r372 = (CPyPtr)&((PyObject *)cpy_r_lv)->ob_type;
    cpy_r_r373 = *(PyObject * *)cpy_r_r372;
    cpy_r_r374 = cpy_r_r373 == cpy_r_r371;
    if (!cpy_r_r374) goto CPyL201;
    cpy_r_r375 = cpy_r_r374;
    goto CPyL202;
CPyL201: ;
    cpy_r_r376 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r377 = (CPyPtr)&((PyObject *)cpy_r_lv)->ob_type;
    cpy_r_r378 = *(PyObject * *)cpy_r_r377;
    cpy_r_r379 = cpy_r_r378 == cpy_r_r376;
    cpy_r_r375 = cpy_r_r379;
CPyL202: ;
    if (!cpy_r_r375) goto CPyL204;
    cpy_r_r380 = cpy_r_r375;
    goto CPyL205;
CPyL204: ;
    cpy_r_r381 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r382 = (CPyPtr)&((PyObject *)cpy_r_lv)->ob_type;
    cpy_r_r383 = *(PyObject * *)cpy_r_r382;
    cpy_r_r384 = cpy_r_r383 == cpy_r_r381;
    cpy_r_r380 = cpy_r_r384;
CPyL205: ;
    if (!cpy_r_r380) goto CPyL282;
    CPy_INCREF(cpy_r_lv);
    if (likely((Py_TYPE(cpy_r_lv) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___RefExpr)))
        cpy_r_r385 = cpy_r_lv;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 512, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_lv);
        goto CPyL283;
    }
    cpy_r_r386 = CPY_GET_ATTR(cpy_r_r385, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r385);
    if (unlikely(cpy_r_r386 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 512, CPyStatic_deps___globals);
        goto CPyL283;
    }
CPyL208: ;
    cpy_r_r387 = CPyStr_IsTrue(cpy_r_r386);
    CPy_DECREF(cpy_r_r386);
    if (!cpy_r_r387) goto CPyL282;
    if (likely((Py_TYPE(cpy_r_lv) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___RefExpr)))
        cpy_r_r388 = cpy_r_lv;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 512, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_lv);
        goto CPyL283;
    }
    cpy_r_r389 = ((mypy___nodes___RefExprObject *)cpy_r_r388)->_is_new_def;
    if (!cpy_r_r389) goto CPyL282;
CPyL211: ;
    if (likely((Py_TYPE(cpy_r_lv) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___RefExpr)))
        cpy_r_r390 = cpy_r_lv;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 513, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_lv);
        goto CPyL283;
    }
    cpy_r_r391 = ((mypy___nodes___RefExprObject *)cpy_r_r390)->_kind;
    CPy_INCREF(cpy_r_r391);
    cpy_r_r392 = CPyStatics[9015]; /* 0 */
    cpy_r_r393 = PyObject_RichCompare(cpy_r_r391, cpy_r_r392, 2);
    CPy_DECREF(cpy_r_r391);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 513, CPyStatic_deps___globals);
        goto CPyL283;
    }
    if (unlikely(!PyBool_Check(cpy_r_r393))) {
        CPy_TypeError("bool", cpy_r_r393); cpy_r_r394 = 2;
    } else
        cpy_r_r394 = cpy_r_r393 == Py_True;
    CPy_DECREF(cpy_r_r393);
    if (unlikely(cpy_r_r394 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 513, CPyStatic_deps___globals);
        goto CPyL283;
    }
    if (cpy_r_r394) {
        goto CPyL284;
    } else
        goto CPyL216;
CPyL215: ;
    return 1;
CPyL216: ;
    CPy_INCREF(cpy_r_fname);
    if (likely(cpy_r_fname != Py_None))
        cpy_r_r395 = cpy_r_fname;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 515, CPyStatic_deps___globals, "str", cpy_r_fname);
        goto CPyL283;
    }
    cpy_r_r396 = CPyDef_trigger___make_trigger(cpy_r_r395);
    CPy_DECREF(cpy_r_r395);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 515, CPyStatic_deps___globals);
        goto CPyL283;
    }
    if (likely((Py_TYPE(cpy_r_lv) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_lv) == CPyType_nodes___RefExpr)))
        cpy_r_r397 = cpy_r_lv;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_assignment_stmt", 515, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_lv);
        goto CPyL285;
    }
    cpy_r_r398 = CPY_GET_ATTR(cpy_r_r397, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r397);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 515, CPyStatic_deps___globals);
        goto CPyL285;
    }
CPyL220: ;
    cpy_r_r399 = CPyDef_trigger___make_trigger(cpy_r_r398);
    CPy_DECREF(cpy_r_r398);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 515, CPyStatic_deps___globals);
        goto CPyL285;
    }
    cpy_r_r400 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r396, cpy_r_r399);
    CPy_DECREF(cpy_r_r396);
    CPy_DECREF(cpy_r_r399);
    if (unlikely(cpy_r_r400 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 515, CPyStatic_deps___globals);
        goto CPyL281;
    }
CPyL222: ;
    cpy_r_r401 = cpy_r_r364 + 2;
    cpy_r_r364 = cpy_r_r401;
    goto CPyL197;
CPyL223: ;
    return 1;
CPyL224: ;
    cpy_r_r402 = 2;
    return cpy_r_r402;
CPyL225: ;
    CPy_DecRef(cpy_r_rvalue);
    goto CPyL224;
CPyL226: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_analyzed);
    CPy_DecRef(cpy_r_r14);
    goto CPyL224;
CPyL227: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_analyzed);
    goto CPyL224;
CPyL228: ;
    CPy_DECREF(cpy_r_analyzed);
    CPy_DECREF(cpy_r_r18);
    goto CPyL15;
CPyL229: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_analyzed);
    CPy_DecRef(cpy_r_r18);
    goto CPyL224;
CPyL230: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_analyzed);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_val);
    goto CPyL224;
CPyL231: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_info);
    goto CPyL224;
CPyL232: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r47);
    goto CPyL224;
CPyL233: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL224;
CPyL234: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    goto CPyL224;
CPyL235: ;
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56.f2);
    CPy_DECREF(cpy_r_r56.f3);
    goto CPyL45;
CPyL236: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r60);
    goto CPyL224;
CPyL237: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r61);
    goto CPyL224;
CPyL238: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_symnode);
    goto CPyL44;
CPyL239: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_symnode);
    goto CPyL224;
CPyL240: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_typ);
    goto CPyL44;
CPyL241: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    goto CPyL224;
CPyL242: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r78);
    goto CPyL224;
CPyL243: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_typ);
    goto CPyL224;
CPyL244: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_attr_target);
    goto CPyL224;
CPyL245: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    goto CPyL224;
CPyL246: ;
    CPy_DECREF(cpy_r_rvalue);
    CPy_DECREF(cpy_r_info);
    goto CPyL53;
CPyL247: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r107);
    goto CPyL224;
CPyL248: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r112);
    goto CPyL224;
CPyL249: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r129);
    goto CPyL224;
CPyL250: ;
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r134.f2);
    CPy_DECREF(cpy_r_r134.f3);
    goto CPyL80;
CPyL251: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r138);
    goto CPyL224;
CPyL252: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r139);
    goto CPyL224;
CPyL253: ;
    CPy_DECREF(cpy_r_symnode);
    goto CPyL79;
CPyL254: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_symnode);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r133);
    goto CPyL224;
CPyL255: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r133);
    goto CPyL224;
CPyL256: ;
    CPy_DECREF(cpy_r_rvalue);
    goto CPyL83;
CPyL257: ;
    CPy_DECREF(cpy_r_rvalue);
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL88;
CPyL258: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL224;
CPyL259: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r174);
    goto CPyL224;
CPyL260: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_typ);
    goto CPyL224;
CPyL261: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_class_name);
    goto CPyL224;
CPyL262: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL114;
CPyL263: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL145;
CPyL264: ;
    CPy_DECREF(cpy_r_r226);
    goto CPyL127;
CPyL265: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r226);
    goto CPyL224;
CPyL266: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_r236);
    goto CPyL224;
CPyL267: ;
    CPy_DECREF(cpy_r_rvalue);
    goto CPyL135;
CPyL268: ;
    CPy_DECREF(cpy_r_items);
    CPyTagged_DECREF(cpy_r_r245);
    CPyTagged_DECREF(cpy_r_r246);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL142;
CPyL269: ;
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r245);
    CPyTagged_DecRef(cpy_r_r246);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL224;
CPyL270: ;
    CPy_DecRef(cpy_r_lvalue);
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r245);
    CPyTagged_DecRef(cpy_r_r246);
    goto CPyL224;
CPyL271: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_items);
    CPyTagged_DecRef(cpy_r_r245);
    CPyTagged_DecRef(cpy_r_r246);
    goto CPyL224;
CPyL272: ;
    CPy_DECREF(cpy_r_rvalue);
    goto CPyL223;
CPyL273: ;
    CPy_DecRef(cpy_r_rvalue);
    CPy_DecRef(cpy_r_fname);
    goto CPyL224;
CPyL274: ;
    CPy_DECREF(cpy_r_fname);
    goto CPyL188;
CPyL275: ;
    CPy_DecRef(cpy_r_fname);
    goto CPyL224;
CPyL276: ;
    CPy_DECREF(cpy_r_init);
    goto CPyL192;
CPyL277: ;
    CPy_DecRef(cpy_r_fname);
    CPy_DecRef(cpy_r_init);
    goto CPyL224;
CPyL278: ;
    CPy_DECREF(cpy_r_fname);
    goto CPyL180;
CPyL279: ;
    CPy_DECREF(cpy_r_fname);
    goto CPyL195;
CPyL280: ;
    CPy_DECREF(cpy_r_fname);
    CPy_DECREF(cpy_r_r363);
    goto CPyL223;
CPyL281: ;
    CPy_DecRef(cpy_r_fname);
    CPy_DecRef(cpy_r_r363);
    goto CPyL224;
CPyL282: ;
    CPy_DECREF(cpy_r_lv);
    goto CPyL222;
CPyL283: ;
    CPy_DecRef(cpy_r_fname);
    CPy_DecRef(cpy_r_r363);
    CPy_DecRef(cpy_r_lv);
    goto CPyL224;
CPyL284: ;
    CPy_DECREF(cpy_r_fname);
    CPy_DECREF(cpy_r_r363);
    CPy_DECREF(cpy_r_lv);
    goto CPyL215;
CPyL285: ;
    CPy_DecRef(cpy_r_fname);
    CPy_DecRef(cpy_r_r363);
    CPy_DecRef(cpy_r_r396);
    goto CPyL224;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_assignment_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt", 431, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___process_lvalue(PyObject *cpy_r_self, PyObject *cpy_r_lvalue) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_lvalue_type;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_type_triggers;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_attr_trigger;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_type_trigger;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_info;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_object_type;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    CPyPtr cpy_r_r92;
    int64_t cpy_r_r93;
    CPyTagged cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    CPyPtr cpy_r_r99;
    int64_t cpy_r_r100;
    CPyTagged cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyTagged cpy_r_r114;
    CPyPtr cpy_r_r115;
    int64_t cpy_r_r116;
    CPyTagged cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_item;
    char cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r4 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 520, CPyStatic_deps___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r5 = ((mypy___nodes___IndexExprObject *)cpy_r_r4)->_base;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r7 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 520, CPyStatic_deps___globals);
        goto CPyL82;
    } else
        goto CPyL81;
CPyL3: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r12 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 522, CPyStatic_deps___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r13 = ((mypy___nodes___NameExprObject *)cpy_r_r12)->_kind;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[9018]; /* 2 */
    cpy_r_r15 = PyObject_RichCompare(cpy_r_r13, cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", -1, CPyStatic_deps___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", -1, CPyStatic_deps___globals);
        goto CPyL82;
    }
    if (!cpy_r_r16) goto CPyL9;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL13;
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r18 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 522, CPyStatic_deps___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r19 = ((mypy___nodes___NameExprObject *)cpy_r_r18)->_kind;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyStatics[9016]; /* 1 */
    cpy_r_r21 = PyObject_RichCompare(cpy_r_r19, cpy_r_r20, 2);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", -1, CPyStatic_deps___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r21))) {
        CPy_TypeError("bool", cpy_r_r21); cpy_r_r22 = 2;
    } else
        cpy_r_r22 = cpy_r_r21 == Py_True;
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", -1, CPyStatic_deps___globals);
        goto CPyL82;
    }
    cpy_r_r17 = cpy_r_r22;
CPyL13: ;
    if (!cpy_r_r17) goto CPyL81;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r23 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 525, CPyStatic_deps___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r24 = CPyDef_deps___DependencyVisitor___get_non_partial_lvalue_type(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 525, CPyStatic_deps___globals);
        goto CPyL82;
    }
    cpy_r_lvalue_type = cpy_r_r24;
    cpy_r_r25 = CPyDef_deps___DependencyVisitor___get_type_triggers(cpy_r_self, cpy_r_lvalue_type);
    CPy_DECREF(cpy_r_lvalue_type);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 526, CPyStatic_deps___globals);
        goto CPyL82;
    }
    cpy_r_type_triggers = cpy_r_r25;
    cpy_r_r26 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_lvalue", "DependencyVisitor", "scope", 527, CPyStatic_deps___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r26);
CPyL18: ;
    cpy_r_r27 = CPyDef_scope___Scope___current_full_target(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 527, CPyStatic_deps___globals);
        goto CPyL83;
    }
    cpy_r_r28 = CPyStatics[224]; /* '.' */
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r29 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 527, CPyStatic_deps___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL84;
    }
    cpy_r_r30 = ((mypy___nodes___NameExprObject *)cpy_r_r29)->_name;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyStr_Build(3, cpy_r_r27, cpy_r_r28, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 527, CPyStatic_deps___globals);
        goto CPyL83;
    }
    cpy_r_r32 = CPyDef_trigger___make_trigger(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 527, CPyStatic_deps___globals);
        goto CPyL83;
    }
    cpy_r_attr_trigger = cpy_r_r32;
    cpy_r_r33 = 0;
CPyL23: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_type_triggers)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL85;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_type_triggers, cpy_r_r33);
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 528, CPyStatic_deps___globals, "str", cpy_r_r38);
        goto CPyL86;
    }
    cpy_r_type_trigger = cpy_r_r39;
    cpy_r_r40 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_type_trigger, cpy_r_attr_trigger);
    CPy_DECREF(cpy_r_type_trigger);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 529, CPyStatic_deps___globals);
        goto CPyL86;
    }
    cpy_r_r41 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r41;
    goto CPyL23;
CPyL27: ;
    cpy_r_r42 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL71;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r46 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 531, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r47 = CPyDef_deps___DependencyVisitor___is_self_member_ref(cpy_r_self, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 531, CPyStatic_deps___globals);
        goto CPyL82;
    }
    if (!cpy_r_r47) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r48 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 531, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r49 = ((mypy___nodes___MemberExprObject *)cpy_r_r48)->_is_new_def;
    if (!cpy_r_r49) goto CPyL46;
CPyL33: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r50 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 532, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r51 = ((mypy___nodes___MemberExprObject *)cpy_r_r50)->_node;
    CPy_INCREF(cpy_r_r51);
    cpy_r_node = cpy_r_r51;
    cpy_r_r52 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL87;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r56 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 534, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL88;
    }
    cpy_r_r57 = ((mypy___nodes___VarObject *)cpy_r_r56)->_info;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_node);
    cpy_r_info = cpy_r_r57;
    cpy_r_r58 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_info);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 534, CPyStatic_deps___globals);
        goto CPyL89;
    }
    if (!cpy_r_r58) goto CPyL90;
    cpy_r_r59 = CPyDef_deps___has_user_bases(cpy_r_info);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 535, CPyStatic_deps___globals);
        goto CPyL89;
    }
    if (!cpy_r_r59) goto CPyL90;
    cpy_r_r60 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 537, CPyStatic_deps___globals);
        goto CPyL82;
    }
CPyL41: ;
    cpy_r_r61 = CPyStatics[224]; /* '.' */
    cpy_r_r62 = PyUnicode_Concat(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 537, CPyStatic_deps___globals);
        goto CPyL82;
    }
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r63 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 537, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL91;
    }
    cpy_r_r64 = ((mypy___nodes___MemberExprObject *)cpy_r_r63)->_name;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = PyUnicode_Concat(cpy_r_r62, cpy_r_r64);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 537, CPyStatic_deps___globals);
        goto CPyL82;
    }
    cpy_r_r66 = CPyDef_trigger___make_trigger(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 537, CPyStatic_deps___globals);
        goto CPyL82;
    }
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 537, CPyStatic_deps___globals);
        goto CPyL82;
    }
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r69 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 538, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r70 = ((mypy___nodes___MemberExprObject *)cpy_r_r69)->_kind;
    cpy_r_r71 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r72 = cpy_r_r70 == cpy_r_r71;
    if (!cpy_r_r72) goto CPyL81;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r73 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 540, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r74 = ((mypy___nodes___MemberExprObject *)cpy_r_r73)->_expr;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_lvalue", "DependencyVisitor", "type_map", 540, CPyStatic_deps___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r75);
CPyL50: ;
    cpy_r_r76 = PyDict_Contains(cpy_r_r75, cpy_r_r74);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 540, CPyStatic_deps___globals);
        goto CPyL82;
    }
    cpy_r_r78 = cpy_r_r76;
    cpy_r_r79 = cpy_r_r78 ^ 1;
    if (!cpy_r_r79) goto CPyL53;
    return 1;
CPyL53: ;
    cpy_r_r80 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_lvalue", "DependencyVisitor", "type_map", 543, CPyStatic_deps___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r80);
CPyL54: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r81 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 543, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL93;
    }
    cpy_r_r82 = ((mypy___nodes___MemberExprObject *)cpy_r_r81)->_expr;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r80, cpy_r_r82);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 543, CPyStatic_deps___globals);
        goto CPyL82;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_types___Type)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 543, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r83);
        goto CPyL82;
    }
    cpy_r_object_type = cpy_r_r84;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r85 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 544, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL94;
    }
    cpy_r_r86 = CPyDef_deps___DependencyVisitor___get_non_partial_lvalue_type(cpy_r_self, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 544, CPyStatic_deps___globals);
        goto CPyL94;
    }
    cpy_r_lvalue_type = cpy_r_r86;
    cpy_r_r87 = CPyDef_deps___DependencyVisitor___get_type_triggers(cpy_r_self, cpy_r_lvalue_type);
    CPy_DECREF(cpy_r_lvalue_type);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 545, CPyStatic_deps___globals);
        goto CPyL94;
    }
    cpy_r_type_triggers = cpy_r_r87;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r88 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 546, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL95;
    }
    cpy_r_r89 = ((mypy___nodes___MemberExprObject *)cpy_r_r88)->_name;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyDef_deps___DependencyVisitor___attribute_triggers(cpy_r_self, cpy_r_object_type, cpy_r_r89);
    CPy_DECREF(cpy_r_object_type);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 546, CPyStatic_deps___globals);
        goto CPyL83;
    }
    cpy_r_r91 = 0;
CPyL63: ;
    cpy_r_r92 = (CPyPtr)&((PyVarObject *)cpy_r_r90)->ob_size;
    cpy_r_r93 = *(int64_t *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 << 1;
    cpy_r_r95 = (Py_ssize_t)cpy_r_r91 < (Py_ssize_t)cpy_r_r94;
    if (!cpy_r_r95) goto CPyL96;
    cpy_r_r96 = CPyList_GetItemUnsafe(cpy_r_r90, cpy_r_r91);
    if (likely(PyUnicode_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 546, CPyStatic_deps___globals, "str", cpy_r_r96);
        goto CPyL97;
    }
    cpy_r_attr_trigger = cpy_r_r97;
    cpy_r_r98 = 0;
CPyL66: ;
    cpy_r_r99 = (CPyPtr)&((PyVarObject *)cpy_r_type_triggers)->ob_size;
    cpy_r_r100 = *(int64_t *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 << 1;
    cpy_r_r102 = (Py_ssize_t)cpy_r_r98 < (Py_ssize_t)cpy_r_r101;
    if (!cpy_r_r102) goto CPyL98;
    cpy_r_r103 = CPyList_GetItemUnsafe(cpy_r_type_triggers, cpy_r_r98);
    if (likely(PyUnicode_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 547, CPyStatic_deps___globals, "str", cpy_r_r103);
        goto CPyL99;
    }
    cpy_r_type_trigger = cpy_r_r104;
    cpy_r_r105 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_type_trigger, cpy_r_attr_trigger);
    CPy_DECREF(cpy_r_type_trigger);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 548, CPyStatic_deps___globals);
        goto CPyL99;
    }
    cpy_r_r106 = cpy_r_r98 + 2;
    cpy_r_r98 = cpy_r_r106;
    goto CPyL66;
CPyL70: ;
    cpy_r_r107 = cpy_r_r91 + 2;
    cpy_r_r91 = cpy_r_r107;
    goto CPyL63;
CPyL71: ;
    cpy_r_r108 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r109 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r110 = *(PyObject * *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 == cpy_r_r108;
    if (!cpy_r_r111) goto CPyL78;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr))
        cpy_r_r112 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 550, CPyStatic_deps___globals, "mypy.nodes.TupleExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r113 = ((mypy___nodes___TupleExprObject *)cpy_r_r112)->_items;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = 0;
CPyL74: ;
    cpy_r_r115 = (CPyPtr)&((PyVarObject *)cpy_r_r113)->ob_size;
    cpy_r_r116 = *(int64_t *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 << 1;
    cpy_r_r118 = (Py_ssize_t)cpy_r_r114 < (Py_ssize_t)cpy_r_r117;
    if (!cpy_r_r118) goto CPyL100;
    cpy_r_r119 = CPyList_GetItemUnsafe(cpy_r_r113, cpy_r_r114);
    if (likely(PyObject_TypeCheck(cpy_r_r119, CPyType_nodes___Expression)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 550, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r119);
        goto CPyL101;
    }
    cpy_r_item = cpy_r_r120;
    cpy_r_r121 = CPyDef_deps___DependencyVisitor___process_lvalue(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 551, CPyStatic_deps___globals);
        goto CPyL101;
    }
    cpy_r_r122 = cpy_r_r114 + 2;
    cpy_r_r114 = cpy_r_r122;
    goto CPyL74;
CPyL78: ;
    cpy_r_r123 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r124 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r125 = *(PyObject * *)cpy_r_r124;
    cpy_r_r126 = cpy_r_r125 == cpy_r_r123;
    if (!cpy_r_r126) goto CPyL81;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___StarExpr))
        cpy_r_r127 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_lvalue", 553, CPyStatic_deps___globals, "mypy.nodes.StarExpr", cpy_r_lvalue);
        goto CPyL82;
    }
    cpy_r_r128 = ((mypy___nodes___StarExprObject *)cpy_r_r127)->_expr;
    CPy_INCREF(cpy_r_r128);
    cpy_r_r129 = CPyDef_deps___DependencyVisitor___process_lvalue(cpy_r_self, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 553, CPyStatic_deps___globals);
        goto CPyL82;
    }
CPyL81: ;
    return 1;
CPyL82: ;
    cpy_r_r130 = 2;
    return cpy_r_r130;
CPyL83: ;
    CPy_DecRef(cpy_r_type_triggers);
    goto CPyL82;
CPyL84: ;
    CPy_DecRef(cpy_r_type_triggers);
    CPy_DecRef(cpy_r_r27);
    goto CPyL82;
CPyL85: ;
    CPy_DECREF(cpy_r_type_triggers);
    CPy_DECREF(cpy_r_attr_trigger);
    goto CPyL81;
CPyL86: ;
    CPy_DecRef(cpy_r_type_triggers);
    CPy_DecRef(cpy_r_attr_trigger);
    goto CPyL82;
CPyL87: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL46;
CPyL88: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL82;
CPyL89: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL82;
CPyL90: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL46;
CPyL91: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL82;
CPyL92: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL82;
CPyL93: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL82;
CPyL94: ;
    CPy_DecRef(cpy_r_object_type);
    goto CPyL82;
CPyL95: ;
    CPy_DecRef(cpy_r_type_triggers);
    CPy_DecRef(cpy_r_object_type);
    goto CPyL82;
CPyL96: ;
    CPy_DECREF(cpy_r_type_triggers);
    CPy_DECREF(cpy_r_r90);
    goto CPyL81;
CPyL97: ;
    CPy_DecRef(cpy_r_type_triggers);
    CPy_DecRef(cpy_r_r90);
    goto CPyL82;
CPyL98: ;
    CPy_DECREF(cpy_r_attr_trigger);
    goto CPyL70;
CPyL99: ;
    CPy_DecRef(cpy_r_type_triggers);
    CPy_DecRef(cpy_r_attr_trigger);
    CPy_DecRef(cpy_r_r90);
    goto CPyL82;
CPyL100: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL81;
CPyL101: ;
    CPy_DecRef(cpy_r_r113);
    goto CPyL82;
}

PyObject *CPyPy_deps___DependencyVisitor___process_lvalue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", 0};
    static CPyArg_Parser parser = {"O:process_lvalue", kwlist, 0};
    PyObject *obj_lvalue;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lvalue)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_lvalue); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___process_lvalue(arg_self, arg_lvalue);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "process_lvalue", 517, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___is_self_member_ref(PyObject *cpy_r_self, PyObject *cpy_r_memberexpr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_memberexpr)->_expr;
    cpy_r_r1 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r5 = ((mypy___nodes___MemberExprObject *)cpy_r_memberexpr)->_expr;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___NameExpr))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "is_self_member_ref", 559, CPyStatic_deps___globals, "mypy.nodes.NameExpr", cpy_r_r5);
        goto CPyL8;
    }
    cpy_r_r7 = ((mypy___nodes___NameExprObject *)cpy_r_r6)->_node;
    CPy_INCREF(cpy_r_r7);
    cpy_r_node = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) {
        goto CPyL5;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL7;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r13 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "is_self_member_ref", 560, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL10;
    }
    cpy_r_r14 = ((mypy___nodes___VarObject *)cpy_r_r13)->_is_self;
    CPy_DECREF(cpy_r_node);
    cpy_r_r12 = cpy_r_r14;
CPyL7: ;
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL9: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL4;
CPyL10: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL8;
}

PyObject *CPyPy_deps___DependencyVisitor___is_self_member_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"memberexpr", 0};
    static CPyArg_Parser parser = {"O:is_self_member_ref", kwlist, 0};
    PyObject *obj_memberexpr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_memberexpr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_memberexpr;
    if (likely(Py_TYPE(obj_memberexpr) == CPyType_nodes___MemberExpr))
        arg_memberexpr = obj_memberexpr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_memberexpr); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___is_self_member_ref(arg_self, arg_memberexpr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "is_self_member_ref", 555, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___get_non_partial_lvalue_type(PyObject *cpy_r_self, PyObject *cpy_r_lvalue) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_lvalue_type;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_non_partial_lvalue_type", "DependencyVisitor", "type_map", 563, CPyStatic_deps___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_lvalue);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 563, CPyStatic_deps___globals);
        goto CPyL27;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___UninhabitedType(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 565, CPyStatic_deps___globals);
        goto CPyL27;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_non_partial_lvalue_type", "DependencyVisitor", "type_map", 566, CPyStatic_deps___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r9, cpy_r_lvalue);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 566, CPyStatic_deps___globals);
        goto CPyL27;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 566, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL27;
    }
    cpy_r_r12 = CPyDef_types___get_proper_type(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 566, CPyStatic_deps___globals);
        goto CPyL27;
    }
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 566, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r12);
        goto CPyL27;
    }
    cpy_r_lvalue_type = cpy_r_r13;
    cpy_r_r14 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_lvalue_type)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (cpy_r_r17) {
        goto CPyL28;
    } else
        goto CPyL26;
CPyL11: ;
    cpy_r_r18 = ((mypy___nodes___RefExprObject *)cpy_r_lvalue)->_node;
    cpy_r_r19 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r18)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL21;
    cpy_r_r23 = ((mypy___nodes___RefExprObject *)cpy_r_lvalue)->_node;
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_nodes___Var))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 569, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_r25 = ((mypy___nodes___VarObject *)cpy_r_r24)->_type;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    CPy_DECREF(cpy_r_r25);
    if (!cpy_r_r27) goto CPyL19;
    cpy_r_r28 = ((mypy___nodes___RefExprObject *)cpy_r_lvalue)->_node;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___Var))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 570, CPyStatic_deps___globals, "mypy.nodes.Var", cpy_r_r28);
        goto CPyL27;
    }
    cpy_r_r30 = ((mypy___nodes___VarObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 570, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r30);
        goto CPyL27;
    }
    cpy_r_r32 = CPyDef_types___get_proper_type(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 570, CPyStatic_deps___globals);
        goto CPyL27;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 570, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r32);
        goto CPyL27;
    }
    cpy_r_lvalue_type = cpy_r_r33;
    goto CPyL26;
CPyL19: ;
    cpy_r_r34 = 2;
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPyDef_types___UninhabitedType(cpy_r_r34, cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 572, CPyStatic_deps___globals);
        goto CPyL27;
    }
    cpy_r_lvalue_type = cpy_r_r37;
    goto CPyL26;
CPyL21: ;
    cpy_r_r38 = ((mypy___nodes___RefExprObject *)cpy_r_lvalue)->_is_new_def;
    cpy_r_r39 = cpy_r_r38 ^ 1;
    if (cpy_r_r39) goto CPyL24;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 579, CPyStatic_deps___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r41 = 2;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPyDef_types___UninhabitedType(cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 580, CPyStatic_deps___globals);
        goto CPyL27;
    }
    return cpy_r_r44;
CPyL26: ;
    return cpy_r_lvalue_type;
CPyL27: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL28: ;
    CPy_DECREF(cpy_r_lvalue_type);
    goto CPyL11;
}

PyObject *CPyPy_deps___DependencyVisitor___get_non_partial_lvalue_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", 0};
    static CPyArg_Parser parser = {"O:get_non_partial_lvalue_type", kwlist, 0};
    PyObject *obj_lvalue;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lvalue)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely((Py_TYPE(obj_lvalue) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_lvalue) == CPyType_nodes___RefExpr)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___get_non_partial_lvalue_type(arg_self, arg_lvalue);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_non_partial_lvalue_type", 562, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_inplace_method;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 584, CPyStatic_deps___globals);
        goto CPyL18;
    }
    cpy_r_r1 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_lvalue;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_deps___DependencyVisitor___process_lvalue(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 585, CPyStatic_deps___globals);
        goto CPyL18;
    }
    cpy_r_r3 = CPyStatic_operators___op_methods;
    if (likely(cpy_r_r3 != NULL)) goto CPyL5;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_methods\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 586, CPyStatic_deps___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r5 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 586, CPyStatic_deps___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 586, CPyStatic_deps___globals, "str", cpy_r_r6);
        goto CPyL18;
    }
    cpy_r_method = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_lvalue;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r8, cpy_r_method);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 587, CPyStatic_deps___globals);
        goto CPyL19;
    }
    cpy_r_r10 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatic_operators___ops_with_inplace_method;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL20;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ops_with_inplace_method\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 588, CPyStatic_deps___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r13 = PySet_Contains(cpy_r_r11, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 588, CPyStatic_deps___globals);
        goto CPyL19;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL21;
    cpy_r_r16 = CPyStatics[896]; /* '__i' */
    cpy_r_r17 = CPyStr_GetSlice(cpy_r_method, 4, 9223372036854775806LL);
    CPy_DECREF(cpy_r_method);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 589, CPyStatic_deps___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 589, CPyStatic_deps___globals, "str", cpy_r_r17);
        goto CPyL18;
    }
    cpy_r_r19 = PyUnicode_Concat(cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 589, CPyStatic_deps___globals);
        goto CPyL18;
    }
    cpy_r_inplace_method = cpy_r_r19;
    cpy_r_r20 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_o)->_lvalue;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r20, cpy_r_inplace_method);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_inplace_method);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 590, CPyStatic_deps___globals);
        goto CPyL18;
    }
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL19: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_r10);
    goto CPyL9;
CPyL21: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL17;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_operator_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt", 583, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_operator_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_operator_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OperatorAssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_operator_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_operator_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_item_type;
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
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 593, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r1 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_is_async;
    if (cpy_r_r1) goto CPyL7;
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r4 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 597, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r5 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r7 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 598, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r8 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_inferred_iterator_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_inferred_iterator_type;
    CPy_INCREF(cpy_r_r11);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_for_stmt", 600, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL22;
    }
    cpy_r_r13 = CPyStatics[824]; /* '__next__' */
    cpy_r_r14 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 600, CPyStatic_deps___globals);
        goto CPyL22;
    } else
        goto CPyL11;
CPyL7: ;
    cpy_r_r15 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[820]; /* '__aiter__' */
    cpy_r_r17 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 602, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r18 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_inferred_iterator_type;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_inferred_iterator_type;
    CPy_INCREF(cpy_r_r21);
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_for_stmt", 604, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r21);
        goto CPyL22;
    }
    cpy_r_r23 = CPyStatics[821]; /* '__anext__' */
    cpy_r_r24 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 604, CPyStatic_deps___globals);
        goto CPyL22;
    }
CPyL11: ;
    cpy_r_r25 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_deps___DependencyVisitor___process_lvalue(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 606, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r27 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index;
    cpy_r_r28 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_inferred_item_type;
    CPy_INCREF(cpy_r_r32);
    cpy_r_item_type = cpy_r_r32;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_item_type != cpy_r_r33;
    if (!cpy_r_r34) goto CPyL23;
    CPy_INCREF(cpy_r_item_type);
    if (likely(cpy_r_item_type != Py_None))
        cpy_r_r35 = cpy_r_item_type;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_for_stmt", 612, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_item_type);
        goto CPyL24;
    }
    cpy_r_r36 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r37 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 612, CPyStatic_deps___globals);
        goto CPyL24;
    }
    if (likely(cpy_r_item_type != Py_None))
        cpy_r_r38 = cpy_r_item_type;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_for_stmt", 613, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_item_type);
        goto CPyL22;
    }
    cpy_r_r39 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r40 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 613, CPyStatic_deps___globals);
        goto CPyL22;
    }
CPyL18: ;
    cpy_r_r41 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index_type;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    CPy_DECREF(cpy_r_r41);
    if (!cpy_r_r43) goto CPyL21;
    cpy_r_r44 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index_type;
    CPy_INCREF(cpy_r_r44);
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_for_stmt", 615, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r44);
        goto CPyL22;
    }
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 615, CPyStatic_deps___globals);
        goto CPyL22;
    }
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL23: ;
    CPy_DECREF(cpy_r_item_type);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_item_type);
    goto CPyL22;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_for_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt", 592, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_e;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 618, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r1 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL17;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_with_stmt", 619, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_e = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_is_async;
    if (cpy_r_r9) goto CPyL7;
CPyL5: ;
    cpy_r_r10 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r11 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_e, cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 621, CPyStatic_deps___globals);
        goto CPyL19;
    }
    cpy_r_r12 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r13 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_e, cpy_r_r12);
    CPy_DECREF(cpy_r_e);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 622, CPyStatic_deps___globals);
        goto CPyL18;
    } else
        goto CPyL9;
CPyL7: ;
    cpy_r_r14 = CPyStatics[832]; /* '__aenter__' */
    cpy_r_r15 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_e, cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 624, CPyStatic_deps___globals);
        goto CPyL19;
    }
    cpy_r_r16 = CPyStatics[834]; /* '__aexit__' */
    cpy_r_r17 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_e, cpy_r_r16);
    CPy_DECREF(cpy_r_e);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 625, CPyStatic_deps___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r18 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r18;
    goto CPyL2;
CPyL10: ;
    cpy_r_r19 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_analyzed_types;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
CPyL11: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL20;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_with_stmt", 626, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL21;
    }
    cpy_r_typ = cpy_r_r26;
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_typ, cpy_r_r27);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 627, CPyStatic_deps___globals);
        goto CPyL21;
    }
    cpy_r_r29 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r29;
    goto CPyL11;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_e);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL16;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_with_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt", 617, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_del_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_del_stmt", 630, CPyStatic_deps___globals);
        goto CPyL5;
    }
    cpy_r_r1 = ((mypy___nodes___DelStmtObject *)cpy_r_o)->_expr;
    cpy_r_r2 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = ((mypy___nodes___DelStmtObject *)cpy_r_o)->_expr;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___IndexExpr))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_del_stmt", 632, CPyStatic_deps___globals, "mypy.nodes.IndexExpr", cpy_r_r6);
        goto CPyL5;
    }
    cpy_r_r8 = ((mypy___nodes___IndexExprObject *)cpy_r_r7)->_base;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r10 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_del_stmt", 632, CPyStatic_deps___globals);
        goto CPyL5;
    }
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_del_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_del_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_del_stmt", 629, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_del_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_del_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_del_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_del_stmt__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_del_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_del_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_del_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_del_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_del_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_del_stmt__StatementVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___process_global_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_class_name;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 637, CPyStatic_deps___globals);
        goto CPyL26;
    }
CPyL1: ;
    cpy_r_r1 = CPyStr_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL5;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 638, CPyStatic_deps___globals);
        goto CPyL26;
    }
CPyL3: ;
    cpy_r_r3 = CPyDef_trigger___make_trigger(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 638, CPyStatic_deps___globals);
        goto CPyL26;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 638, CPyStatic_deps___globals);
        goto CPyL26;
    }
CPyL5: ;
    cpy_r_r6 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "process_global_ref_expr", "DependencyVisitor", "type_map", 644, CPyStatic_deps___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = CPyDict_GetWithNone(cpy_r_r6, cpy_r_o);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 644, CPyStatic_deps___globals);
        goto CPyL26;
    }
    if (PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type))
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL6527;
    if (cpy_r_r7 == Py_None)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL6527;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "process_global_ref_expr", 644, CPyStatic_deps___globals, "mypy.types.Type or None", cpy_r_r7);
    goto CPyL26;
__LL6527: ;
    cpy_r_r9 = CPyDef_types___get_proper_type(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 644, CPyStatic_deps___globals);
        goto CPyL26;
    }
    cpy_r_typ = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL11;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL12;
CPyL11: ;
    cpy_r_r15 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r14 = cpy_r_r18;
CPyL12: ;
    if (!cpy_r_r14) goto CPyL27;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r19 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_global_ref_expr", 645, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL28;
    }
    cpy_r_r20 = CPY_GET_METHOD(cpy_r_r19, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r19); /* is_type_obj */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 645, CPyStatic_deps___globals);
        goto CPyL28;
    }
    if (!cpy_r_r20) goto CPyL27;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r21 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_global_ref_expr", 646, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL26;
    }
    cpy_r_r22 = CPY_GET_METHOD(cpy_r_r21, CPyType_types___FunctionLike, 17, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *))(cpy_r_r21); /* type_object */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 646, CPyStatic_deps___globals);
        goto CPyL26;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 646, CPyStatic_deps___globals);
        goto CPyL26;
    }
CPyL19: ;
    cpy_r_class_name = cpy_r_r23;
    cpy_r_r24 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r25 = PyUnicode_Concat(cpy_r_class_name, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 647, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r26 = CPyDef_trigger___make_trigger(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 647, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 647, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r29 = CPyStatics[5313]; /* '.__new__' */
    cpy_r_r30 = PyUnicode_Concat(cpy_r_class_name, cpy_r_r29);
    CPy_DECREF(cpy_r_class_name);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 648, CPyStatic_deps___globals);
        goto CPyL26;
    }
    cpy_r_r31 = CPyDef_trigger___make_trigger(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 648, CPyStatic_deps___globals);
        goto CPyL26;
    }
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 648, CPyStatic_deps___globals);
        goto CPyL26;
    }
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL27: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_class_name);
    goto CPyL26;
}

PyObject *CPyPy_deps___DependencyVisitor___process_global_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:process_global_ref_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_o) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_o) == CPyType_nodes___RefExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___process_global_ref_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "process_global_ref_expr", 636, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_kind;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[9015]; /* 0 */
    cpy_r_r2 = PyObject_RichCompare(cpy_r_r0, cpy_r_r1, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr", 651, CPyStatic_deps___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r2))) {
        CPy_TypeError("bool", cpy_r_r2); cpy_r_r3 = 2;
    } else
        cpy_r_r3 = cpy_r_r2 == Py_True;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr", 651, CPyStatic_deps___globals);
        goto CPyL10;
    }
    if (!cpy_r_r3) goto CPyL4;
    return 1;
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_kind;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyStatics[9018]; /* 2 */
    cpy_r_r6 = PyObject_RichCompare(cpy_r_r4, cpy_r_r5, 2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr", 655, CPyStatic_deps___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr", 655, CPyStatic_deps___globals);
        goto CPyL10;
    }
    if (!cpy_r_r7) goto CPyL8;
    return 1;
CPyL8: ;
    cpy_r_r8 = CPyDef_deps___DependencyVisitor___process_global_ref_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr", 659, CPyStatic_deps___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_name_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr", 650, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
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
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    cpy_r_r1 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r10 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL17;
    cpy_r_r15 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    if (likely((Py_TYPE(cpy_r_r15) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r15) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r15) == CPyType_nodes___RefExpr)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 662, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r15);
        goto CPyL57;
    }
    cpy_r_r17 = ((mypy___nodes___RefExprObject *)cpy_r_r16)->_node;
    cpy_r_r18 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL10;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL11;
CPyL10: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL11: ;
    if (!cpy_r_r22) goto CPyL17;
    cpy_r_r27 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    if (likely((Py_TYPE(cpy_r_r27) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r27) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r27) == CPyType_nodes___RefExpr)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 664, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r27);
        goto CPyL57;
    }
    cpy_r_r29 = ((mypy___nodes___RefExprObject *)cpy_r_r28)->_node;
    CPy_INCREF(cpy_r_r29);
    if (likely((Py_TYPE(cpy_r_r29) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r29) == CPyType_nodes___TypeInfo)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 664, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r29);
        goto CPyL57;
    }
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 664, CPyStatic_deps___globals);
        goto CPyL57;
    }
CPyL15: ;
    cpy_r_r32 = CPyDef_trigger___make_trigger(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 664, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 664, CPyStatic_deps___globals);
        goto CPyL57;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r35 = CPyDef_traverser___TraverserVisitor___visit_member_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 666, CPyStatic_deps___globals);
        goto CPyL57;
    }
CPyL18: ;
    cpy_r_r36 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_kind;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_r36 != cpy_r_r37;
    if (!cpy_r_r38) goto CPyL20;
    cpy_r_r39 = CPyDef_deps___DependencyVisitor___process_global_ref_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 669, CPyStatic_deps___globals);
        goto CPyL57;
    } else
        goto CPyL56;
CPyL20: ;
    cpy_r_r40 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_member_expr", "DependencyVisitor", "type_map", 672, CPyStatic_deps___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r41);
CPyL21: ;
    cpy_r_r42 = PyDict_Contains(cpy_r_r41, cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 672, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_r44 = cpy_r_r42;
    cpy_r_r45 = cpy_r_r44 ^ 1;
    if (!cpy_r_r45) goto CPyL24;
    return 1;
CPyL24: ;
    cpy_r_r46 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    cpy_r_r47 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_r46)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL26;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL27;
CPyL26: ;
    cpy_r_r52 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_r46)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    cpy_r_r51 = cpy_r_r55;
CPyL27: ;
    if (!cpy_r_r51) goto CPyL29;
    cpy_r_r56 = cpy_r_r51;
    goto CPyL30;
CPyL29: ;
    cpy_r_r57 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r46)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    cpy_r_r56 = cpy_r_r60;
CPyL30: ;
    if (!cpy_r_r56) goto CPyL41;
    cpy_r_r61 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    if (likely((Py_TYPE(cpy_r_r61) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r61) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r61) == CPyType_nodes___RefExpr)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 676, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r61);
        goto CPyL57;
    }
    cpy_r_r63 = ((mypy___nodes___RefExprObject *)cpy_r_r62)->_node;
    cpy_r_r64 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_r63)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL41;
    cpy_r_r68 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    if (likely((Py_TYPE(cpy_r_r68) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r68) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r68) == CPyType_nodes___RefExpr)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r68);
        goto CPyL57;
    }
    cpy_r_r70 = ((mypy___nodes___RefExprObject *)cpy_r_r69)->_node;
    CPy_INCREF(cpy_r_r70);
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_nodes___MypyFile))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals, "mypy.nodes.MypyFile", cpy_r_r70);
        goto CPyL57;
    }
    cpy_r_r72 = CPY_GET_ATTR(cpy_r_r71, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals);
        goto CPyL57;
    }
CPyL36: ;
    cpy_r_r73 = CPyStatics[224]; /* '.' */
    cpy_r_r74 = PyUnicode_Concat(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_r75 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_name;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = PyUnicode_Concat(cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_r77 = CPyDef_trigger___make_trigger(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 678, CPyStatic_deps___globals);
        goto CPyL57;
    }
    return 1;
CPyL41: ;
    cpy_r_r80 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_member_expr", "DependencyVisitor", "type_map", 680, CPyStatic_deps___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r80);
CPyL42: ;
    cpy_r_r81 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 680, CPyStatic_deps___globals);
        goto CPyL57;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r82, CPyType_types___Type)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 680, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r82);
        goto CPyL57;
    }
    cpy_r_r84 = CPyDef_types___get_proper_type(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 680, CPyStatic_deps___globals);
        goto CPyL57;
    }
    if (likely(cpy_r_r84 != Py_None))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 680, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r84);
        goto CPyL57;
    }
    cpy_r_typ = cpy_r_r85;
    cpy_r_r86 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_name;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_typ, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 681, CPyStatic_deps___globals);
        goto CPyL59;
    }
    cpy_r_r88 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 682, CPyStatic_deps___globals);
        goto CPyL59;
    }
    if (!cpy_r_r88) goto CPyL60;
    cpy_r_r89 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r90 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r91 = *(PyObject * *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 == cpy_r_r89;
    if (!cpy_r_r92) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r93 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 683, CPyStatic_deps___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL57;
    }
    cpy_r_r94 = CPyDef_deps___DependencyVisitor___get_unimported_fullname(cpy_r_self, cpy_r_e, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 683, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_name = cpy_r_r94;
    cpy_r_r95 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r96 = cpy_r_name != cpy_r_r95;
    if (!cpy_r_r96) goto CPyL61;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r97 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_member_expr", 692, CPyStatic_deps___globals, "str", cpy_r_name);
        goto CPyL57;
    }
    cpy_r_r98 = CPyDef_trigger___make_trigger(cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 692, CPyStatic_deps___globals);
        goto CPyL57;
    }
    cpy_r_r99 = NULL;
    cpy_r_r100 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 692, CPyStatic_deps___globals);
        goto CPyL57;
    }
CPyL56: ;
    return 1;
CPyL57: ;
    cpy_r_r101 = 2;
    return cpy_r_r101;
CPyL58: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL57;
CPyL59: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL57;
CPyL60: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL56;
CPyL61: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL56;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___MemberExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_member_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr", 661, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_member_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_member_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_member_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_member_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_member_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___get_unimported_fullname(PyObject *cpy_r_self, PyObject *cpy_r_e, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_suffix;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_obj_type;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_suffix = cpy_r_r0;
    goto CPyL30;
CPyL1: ;
    cpy_r_r1 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_type_of_any;
    cpy_r_r2 = cpy_r_r1 == 14;
    if (!cpy_r_r2) goto CPyL19;
    cpy_r_r3 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    cpy_r_r4 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) {
        goto CPyL31;
    } else
        goto CPyL19;
CPyL3: ;
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 706, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r10, cpy_r_suffix);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_suffix);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 706, CPyStatic_deps___globals);
        goto CPyL33;
    }
    cpy_r_suffix = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___MemberExpr))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_unimported_fullname", 707, CPyStatic_deps___globals, "mypy.nodes.MemberExpr", cpy_r_r12);
        goto CPyL34;
    }
    cpy_r_e = cpy_r_r13;
    cpy_r_r14 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_unimported_fullname", "DependencyVisitor", "type_map", 708, CPyStatic_deps___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r15);
CPyL7: ;
    cpy_r_r16 = PyDict_Contains(cpy_r_r15, cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 708, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    if (cpy_r_r19) {
        goto CPyL36;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r20 = Py_None;
    CPy_INCREF(cpy_r_r20);
    return cpy_r_r20;
CPyL10: ;
    cpy_r_r21 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_unimported_fullname", "DependencyVisitor", "type_map", 710, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r21);
CPyL11: ;
    cpy_r_r22 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 710, CPyStatic_deps___globals);
        goto CPyL32;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_types___Type)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_unimported_fullname", 710, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r23);
        goto CPyL32;
    }
    cpy_r_r25 = CPyDef_types___get_proper_type(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 710, CPyStatic_deps___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_unimported_fullname", 710, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r25);
        goto CPyL32;
    }
    cpy_r_obj_type = cpy_r_r26;
    cpy_r_r27 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_obj_type)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (cpy_r_r30) {
        goto CPyL17;
    } else
        goto CPyL37;
CPyL16: ;
    cpy_r_r31 = Py_None;
    CPy_INCREF(cpy_r_r31);
    return cpy_r_r31;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_obj_type) == CPyType_types___AnyType))
        cpy_r_r32 = cpy_r_obj_type;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_unimported_fullname", 714, CPyStatic_deps___globals, "mypy.types.AnyType", cpy_r_obj_type);
        goto CPyL32;
    }
    cpy_r_typ = cpy_r_r32;
    goto CPyL1;
CPyL19: ;
    cpy_r_r33 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_type_of_any;
    cpy_r_r34 = cpy_r_r33 == 6;
    if (!cpy_r_r34) goto CPyL38;
    cpy_r_r35 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_missing_import_name;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL39;
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r38 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_unimported_fullname", 715, CPyStatic_deps___globals, "str", cpy_r_r35);
        goto CPyL40;
    }
    cpy_r_r39 = CPyStr_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (!cpy_r_r39) goto CPyL38;
    cpy_r_r40 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_missing_import_name;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_typ);
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_unimported_fullname", 717, CPyStatic_deps___globals, "str", cpy_r_r40);
        goto CPyL32;
    }
    cpy_r_r42 = CPyStatics[224]; /* '.' */
    cpy_r_r43 = PyUnicode_Concat(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 717, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r44 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_name;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_e);
    cpy_r_r45 = PyUnicode_Concat(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 717, CPyStatic_deps___globals);
        goto CPyL34;
    }
    cpy_r_r46 = PyUnicode_Concat(cpy_r_r45, cpy_r_suffix);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_suffix);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 717, CPyStatic_deps___globals);
        goto CPyL29;
    }
    return cpy_r_r46;
CPyL28: ;
    cpy_r_r47 = Py_None;
    CPy_INCREF(cpy_r_r47);
    return cpy_r_r47;
CPyL29: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL30: ;
    CPy_INCREF(cpy_r_e);
    CPy_INCREF(cpy_r_typ);
    goto CPyL1;
CPyL31: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL3;
CPyL32: ;
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_e);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_suffix);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_suffix);
    CPy_DecRef(cpy_r_r14);
    goto CPyL29;
CPyL36: ;
    CPy_DECREF(cpy_r_e);
    CPy_DECREF(cpy_r_suffix);
    goto CPyL9;
CPyL37: ;
    CPy_DECREF(cpy_r_e);
    CPy_DECREF(cpy_r_suffix);
    CPy_DECREF(cpy_r_obj_type);
    goto CPyL16;
CPyL38: ;
    CPy_DECREF(cpy_r_e);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_suffix);
    goto CPyL28;
CPyL39: ;
    CPy_DECREF(cpy_r_e);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_suffix);
    CPy_DECREF(cpy_r_r35);
    goto CPyL28;
CPyL40: ;
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL29;
}

PyObject *CPyPy_deps___DependencyVisitor___get_unimported_fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", "typ", 0};
    static CPyArg_Parser parser = {"OO:get_unimported_fullname", kwlist, 0};
    PyObject *obj_e;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_e, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___MemberExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_e); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___AnyType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___get_unimported_fullname(arg_self, arg_e, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_unimported_fullname", 694, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 722, CPyStatic_deps___globals);
        goto CPyL19;
    }
    if (cpy_r_r0) goto CPyL3;
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_super_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 723, CPyStatic_deps___globals);
        goto CPyL19;
    }
CPyL3: ;
    cpy_r_r2 = ((mypy___nodes___SuperExprObject *)cpy_r_e)->_info;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL18;
    cpy_r_r5 = ((mypy___nodes___SuperExprObject *)cpy_r_e)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_name = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___SuperExprObject *)cpy_r_e)->_info;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_super_expr", 726, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r6);
        goto CPyL20;
    }
    cpy_r_r8 = CPyDef_deps___non_trivial_bases(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 726, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r9 = 0;
CPyL7: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL21;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely((Py_TYPE(cpy_r_r14) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r14) == CPyType_nodes___TypeInfo)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_super_expr", 726, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r14);
        goto CPyL22;
    }
    cpy_r_base = cpy_r_r15;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 727, CPyStatic_deps___globals);
        goto CPyL23;
    }
CPyL10: ;
    cpy_r_r17 = CPyStatics[224]; /* '.' */
    cpy_r_r18 = PyUnicode_Concat(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 727, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r19 = PyUnicode_Concat(cpy_r_r18, cpy_r_name);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 727, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r20 = CPyDef_trigger___make_trigger(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 727, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 727, CPyStatic_deps___globals);
        goto CPyL23;
    }
    cpy_r_r23 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_names;
    if (unlikely(cpy_r_r23 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r23);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 728, CPyStatic_deps___globals);
        goto CPyL22;
    }
CPyL15: ;
    cpy_r_r24 = PyDict_Contains(cpy_r_r23, cpy_r_name);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 728, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) goto CPyL21;
    cpy_r_r27 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r27;
    goto CPyL7;
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL20: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r8);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_base);
    goto CPyL19;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SuperExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_super_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr", 720, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_super_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_super_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_super_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_super_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_super_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_super_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
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
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_e)->_callee;
    cpy_r_r1 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r10 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL14;
    cpy_r_r15 = ((mypy___nodes___CallExprObject *)cpy_r_e)->_callee;
    CPy_INCREF(cpy_r_r15);
    if (likely((Py_TYPE(cpy_r_r15) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r15) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r15) == CPyType_nodes___RefExpr)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_call_expr", 735, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_r15);
        goto CPyL29;
    }
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 735, CPyStatic_deps___globals);
        goto CPyL29;
    }
CPyL9: ;
    cpy_r_r18 = CPyStatics[855]; /* 'builtins.isinstance' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL12;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 735, CPyStatic_deps___globals);
        goto CPyL29;
    }
CPyL12: ;
    cpy_r_r24 = cpy_r_r19 == 0;
    if (!cpy_r_r24) goto CPyL14;
    cpy_r_r25 = CPyDef_deps___DependencyVisitor___process_isinstance_call(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 736, CPyStatic_deps___globals);
        goto CPyL29;
    } else
        goto CPyL28;
CPyL14: ;
    cpy_r_r26 = CPyDef_traverser___TraverserVisitor___visit_call_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 738, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r27 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_call_expr", "DependencyVisitor", "type_map", 739, CPyStatic_deps___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r27);
CPyL16: ;
    cpy_r_r28 = ((mypy___nodes___CallExprObject *)cpy_r_e)->_callee;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDict_GetWithNone(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 739, CPyStatic_deps___globals);
        goto CPyL29;
    }
    if (PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type))
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL6528;
    if (cpy_r_r29 == Py_None)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL6528;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_call_expr", 739, CPyStatic_deps___globals, "mypy.types.Type or None", cpy_r_r29);
    goto CPyL29;
__LL6528: ;
    cpy_r_typ = cpy_r_r30;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_typ != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL30;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r33 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_call_expr", 741, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r34 = CPyDef_types___get_proper_type(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 741, CPyStatic_deps___globals);
        goto CPyL29;
    }
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_call_expr", 741, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r34);
        goto CPyL29;
    }
    cpy_r_typ = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL24;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL25;
CPyL24: ;
    cpy_r_r41 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    cpy_r_r40 = cpy_r_r44;
CPyL25: ;
    if (cpy_r_r40) goto CPyL30;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r45 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_call_expr", 743, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL29;
    }
    cpy_r_r46 = CPyStatics[706]; /* '__call__' */
    cpy_r_r47 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 743, CPyStatic_deps___globals);
        goto CPyL29;
    }
CPyL28: ;
    return 1;
CPyL29: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL30: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL28;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CallExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_call_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr", 734, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_call_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_call_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_call_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___process_isinstance_call(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_arg;
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
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
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
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_e)->_args;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 4;
    if (!cpy_r_r4) goto CPyL27;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_e)->_args;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 748, CPyStatic_deps___globals);
        goto CPyL29;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_isinstance_call", 748, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL29;
    }
    cpy_r_arg = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL5;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL6;
CPyL5: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL6: ;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r17 = cpy_r_r12;
    goto CPyL9;
CPyL8: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL9: ;
    if (!cpy_r_r17) goto CPyL30;
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r22 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_isinstance_call", 751, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL31;
    }
    cpy_r_r23 = ((mypy___nodes___RefExprObject *)cpy_r_r22)->_kind;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[9016]; /* 1 */
    cpy_r_r25 = PyObject_RichCompare(cpy_r_r23, cpy_r_r24, 2);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 751, CPyStatic_deps___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r25))) {
        CPy_TypeError("bool", cpy_r_r25); cpy_r_r26 = 2;
    } else
        cpy_r_r26 = cpy_r_r25 == Py_True;
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 751, CPyStatic_deps___globals);
        goto CPyL31;
    }
    if (!cpy_r_r26) goto CPyL30;
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r27 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_isinstance_call", 752, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL31;
    }
    cpy_r_r28 = ((mypy___nodes___RefExprObject *)cpy_r_r27)->_node;
    cpy_r_r29 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL17;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL18;
CPyL17: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    cpy_r_r33 = cpy_r_r37;
CPyL18: ;
    if (!cpy_r_r33) goto CPyL30;
    CPy_INCREF(cpy_r_arg);
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r38 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_isinstance_call", 753, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL31;
    }
    cpy_r_r39 = CPY_GET_ATTR(cpy_r_r38, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 753, CPyStatic_deps___globals);
        goto CPyL31;
    }
CPyL21: ;
    cpy_r_r40 = CPyStr_IsTrue(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (!cpy_r_r40) goto CPyL30;
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r41 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_isinstance_call", 756, CPyStatic_deps___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL29;
    }
    cpy_r_r42 = CPY_GET_ATTR(cpy_r_r41, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 756, CPyStatic_deps___globals);
        goto CPyL29;
    }
CPyL24: ;
    cpy_r_r43 = CPyDef_trigger___make_trigger(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 756, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 756, CPyStatic_deps___globals);
        goto CPyL29;
    }
    return 1;
CPyL27: ;
    cpy_r_r46 = CPyDef_traverser___TraverserVisitor___visit_call_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 760, CPyStatic_deps___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL30: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL29;
}

PyObject *CPyPy_deps___DependencyVisitor___process_isinstance_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:process_isinstance_call", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CallExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___process_isinstance_call(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "process_isinstance_call", 745, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_cast_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_cast_expr", 763, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___CastExprObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_cast_expr", 764, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CastExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_cast_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_cast_expr", 762, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_cast_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_cast_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_cast_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_cast_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_cast_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_cast_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assert_type_expr", 767, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_assert_type_expr", 768, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AssertTypeExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_assert_type_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assert_type_expr", 766, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_assert_type_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assert_type_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_assert_type_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assert_type_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_assert_type_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assert_type_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_type_application(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_application", 771, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___TypeApplicationObject *)cpy_r_e)->_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_application", 772, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_typ = cpy_r_r8;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_deps___DependencyVisitor___add_type_dependencies(cpy_r_self, cpy_r_typ, cpy_r_r9);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_application", 773, CPyStatic_deps___globals);
        goto CPyL9;
    }
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypeApplication))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_type_application(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_application", 770, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_type_application__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_type_application__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_type_application__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_application__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_type_application__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_type_application__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_type_application__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_application__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_index_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_index_expr", 776, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___IndexExprObject *)cpy_r_e)->_base;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r3 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(cpy_r_self, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_index_expr", 777, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___IndexExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_index_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_index_expr", 775, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_index_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_index_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_index_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_index_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_index_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_index_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_index_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_index_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_unary_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 780, CPyStatic_deps___globals);
        goto CPyL14;
    }
    cpy_r_r1 = ((mypy___nodes___UnaryExprObject *)cpy_r_e)->_op;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatic_operators___unary_op_methods;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"unary_op_methods\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 781, CPyStatic_deps___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = PyDict_Contains(cpy_r_r2, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 781, CPyStatic_deps___globals);
        goto CPyL14;
    }
    cpy_r_r6 = cpy_r_r4;
    cpy_r_r7 = cpy_r_r6 ^ 1;
    if (!cpy_r_r7) goto CPyL7;
    return 1;
CPyL7: ;
    cpy_r_r8 = CPyStatic_operators___unary_op_methods;
    if (likely(cpy_r_r8 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"unary_op_methods\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 783, CPyStatic_deps___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r10 = ((mypy___nodes___UnaryExprObject *)cpy_r_e)->_op;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r8, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 783, CPyStatic_deps___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_unary_expr", 783, CPyStatic_deps___globals, "str", cpy_r_r11);
        goto CPyL14;
    }
    cpy_r_method = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___UnaryExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(cpy_r_self, cpy_r_r13, cpy_r_method);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_method);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 784, CPyStatic_deps___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___UnaryExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_unary_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr", 779, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_unary_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_unary_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_unary_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_unary_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_unary_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_unary_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_op_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_op_expr", 787, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___OpExprObject *)cpy_r_e)->_op;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___OpExprObject *)cpy_r_e)->_left;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___nodes___OpExprObject *)cpy_r_e)->_right;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_deps___DependencyVisitor___process_binary_op(cpy_r_self, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_op_expr", 788, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___OpExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_op_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_op_expr", 786, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_op_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_op_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_op_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_op_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_op_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_op_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_op_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_op_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_right;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_comparison_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr", 791, CPyStatic_deps___globals);
        goto CPyL11;
    }
    cpy_r_r1 = 0;
    cpy_r_i = 0;
    cpy_r_r2 = ((mypy___nodes___ComparisonExprObject *)cpy_r_e)->_operators;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL12;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_comparison_expr", 792, CPyStatic_deps___globals, "str", cpy_r_r8);
        goto CPyL13;
    }
    cpy_r_op = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___ComparisonExprObject *)cpy_r_e)->_operands;
    cpy_r_r11 = CPyList_GetItem(cpy_r_r10, cpy_r_i);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr", 793, CPyStatic_deps___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_nodes___Expression)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_comparison_expr", 793, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r11);
        goto CPyL14;
    }
    cpy_r_left = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___ComparisonExprObject *)cpy_r_e)->_operands;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r15 = CPyList_GetItem(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr", 794, CPyStatic_deps___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Expression)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_comparison_expr", 794, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r15);
        goto CPyL15;
    }
    cpy_r_right = cpy_r_r16;
    cpy_r_r17 = CPyDef_deps___DependencyVisitor___process_binary_op(cpy_r_self, cpy_r_op, cpy_r_left, cpy_r_right);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr", 795, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r18 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r18;
    cpy_r_i = cpy_r_r18;
    cpy_r_r19 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r19;
    goto CPyL2;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL12: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_op);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ComparisonExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_comparison_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr", 790, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_comparison_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_comparison_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_comparison_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_comparison_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_comparison_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_comparison_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___process_binary_op(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_rev_method;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = CPyStatic_operators___op_methods;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_methods\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 798, CPyStatic_deps___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDict_GetWithNone(cpy_r_r0, cpy_r_op);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 798, CPyStatic_deps___globals);
        goto CPyL28;
    }
    if (PyUnicode_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL6529;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL6529;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 798, CPyStatic_deps___globals, "str or None", cpy_r_r2);
    goto CPyL28;
__LL6529: ;
    cpy_r_method = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_method != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL29;
    CPy_INCREF(cpy_r_method);
    if (likely(cpy_r_method != Py_None))
        cpy_r_r6 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 798, CPyStatic_deps___globals, "str", cpy_r_method);
        goto CPyL30;
    }
    cpy_r_r7 = CPyStr_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL29;
    cpy_r_r8 = CPyStatics[866]; /* 'in' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_op, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL11;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 800, CPyStatic_deps___globals);
        goto CPyL30;
    }
CPyL11: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL14;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r15 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 801, CPyStatic_deps___globals, "str", cpy_r_method);
        goto CPyL28;
    }
    cpy_r_r16 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(cpy_r_self, cpy_r_right, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 801, CPyStatic_deps___globals);
        goto CPyL28;
    } else
        goto CPyL27;
CPyL14: ;
    CPy_INCREF(cpy_r_method);
    if (likely(cpy_r_method != Py_None))
        cpy_r_r17 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 803, CPyStatic_deps___globals, "str", cpy_r_method);
        goto CPyL30;
    }
    cpy_r_r18 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(cpy_r_self, cpy_r_left, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 803, CPyStatic_deps___globals);
        goto CPyL30;
    }
    cpy_r_r19 = CPyStatic_operators___reverse_op_methods;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL31;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 804, CPyStatic_deps___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL19: ;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r21 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 804, CPyStatic_deps___globals, "str", cpy_r_method);
        goto CPyL28;
    }
    cpy_r_r22 = CPyDict_GetWithNone(cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 804, CPyStatic_deps___globals);
        goto CPyL28;
    }
    if (PyUnicode_Check(cpy_r_r22))
        cpy_r_r23 = cpy_r_r22;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL6530;
    if (cpy_r_r22 == Py_None)
        cpy_r_r23 = cpy_r_r22;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL6530;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 804, CPyStatic_deps___globals, "str or None", cpy_r_r22);
    goto CPyL28;
__LL6530: ;
    cpy_r_rev_method = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_rev_method != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL32;
    CPy_INCREF(cpy_r_rev_method);
    if (likely(cpy_r_rev_method != Py_None))
        cpy_r_r26 = cpy_r_rev_method;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 804, CPyStatic_deps___globals, "str", cpy_r_rev_method);
        goto CPyL33;
    }
    cpy_r_r27 = CPyStr_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL32;
    if (likely(cpy_r_rev_method != Py_None))
        cpy_r_r28 = cpy_r_rev_method;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "process_binary_op", 806, CPyStatic_deps___globals, "str", cpy_r_rev_method);
        goto CPyL28;
    }
    cpy_r_r29 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(cpy_r_self, cpy_r_right, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 806, CPyStatic_deps___globals);
        goto CPyL28;
    }
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL29: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL17;
CPyL32: ;
    CPy_DECREF(cpy_r_rev_method);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_rev_method);
    goto CPyL28;
}

PyObject *CPyPy_deps___DependencyVisitor___process_binary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:process_binary_op", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(PyObject_TypeCheck(obj_left, CPyType_nodes___Expression)))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_nodes___Expression)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_right); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___process_binary_op(arg_self, arg_op, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "process_binary_op", 797, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_operator_method_dependency(PyObject *cpy_r_self, PyObject *cpy_r_e, PyObject *cpy_r_method) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_operator_method_dependency", "DependencyVisitor", "type_map", 809, CPyStatic_deps___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDict_GetWithNone(cpy_r_r0, cpy_r_e);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency", 809, CPyStatic_deps___globals);
        goto CPyL8;
    }
    if (PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type))
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6531;
    if (cpy_r_r1 == Py_None)
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6531;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency", 809, CPyStatic_deps___globals, "mypy.types.Type or None", cpy_r_r1);
    goto CPyL8;
__LL6531: ;
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency", 809, CPyStatic_deps___globals);
        goto CPyL8;
    }
    cpy_r_typ = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_typ != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency", 811, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL8;
    }
    cpy_r_r7 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type(cpy_r_self, cpy_r_r6, cpy_r_method);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency", 811, CPyStatic_deps___globals);
        goto CPyL8;
    }
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL9: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL7;
}

PyObject *CPyPy_deps___DependencyVisitor___add_operator_method_dependency(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", "method", 0};
    static CPyArg_Parser parser = {"OO:add_operator_method_dependency", kwlist, 0};
    PyObject *obj_e;
    PyObject *obj_method;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_e, &obj_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___add_operator_method_dependency(arg_self, arg_e, arg_method);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency", 808, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type(PyObject *cpy_r_self, PyObject *cpy_r_typ, PyObject *cpy_r_method) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    cpy_r_r0 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL48;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r4 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 817, CPyStatic_deps___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL47;
    }
    cpy_r_r5 = ((mypy___types___TypeVarTypeObject *)cpy_r_r4)->_upper_bound;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_types___get_proper_type(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 817, CPyStatic_deps___globals);
        goto CPyL47;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 817, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r6);
        goto CPyL47;
    }
    cpy_r_typ = cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r12 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 819, CPyStatic_deps___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r13 = ((mypy___types___TupleTypeObject *)cpy_r_r12)->_partial_fallback;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_typ);
    cpy_r_typ = cpy_r_r13;
CPyL8: ;
    cpy_r_r14 = (PyObject *)CPyType_types___Instance;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 821, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_r18)->_type;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_r19, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 821, CPyStatic_deps___globals);
        goto CPyL47;
    }
CPyL11: ;
    cpy_r_r21 = CPyStatics[224]; /* '.' */
    cpy_r_r22 = PyUnicode_Concat(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 821, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_r23 = PyUnicode_Concat(cpy_r_r22, cpy_r_method);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 821, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_r24 = CPyDef_trigger___make_trigger(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 821, CPyStatic_deps___globals);
        goto CPyL47;
    }
    cpy_r_trigger = cpy_r_r24;
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_trigger, cpy_r_r25);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 822, CPyStatic_deps___globals);
        goto CPyL47;
    } else
        goto CPyL46;
CPyL15: ;
    cpy_r_r27 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r31 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 824, CPyStatic_deps___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r32 = ((mypy___types___UnionTypeObject *)cpy_r_r31)->_items;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r33 = 0;
CPyL18: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL50;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___Type)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 824, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL51;
    }
    cpy_r_item = cpy_r_r39;
    cpy_r_r40 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 825, CPyStatic_deps___globals);
        goto CPyL51;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 825, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r40);
        goto CPyL51;
    }
    cpy_r_r42 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type(cpy_r_self, cpy_r_r41, cpy_r_method);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 825, CPyStatic_deps___globals);
        goto CPyL51;
    }
    cpy_r_r43 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r43;
    goto CPyL18;
CPyL24: ;
    cpy_r_r44 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL26;
    cpy_r_r48 = cpy_r_r47;
    goto CPyL27;
CPyL26: ;
    cpy_r_r49 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    cpy_r_r48 = cpy_r_r52;
CPyL27: ;
    if (!cpy_r_r48) goto CPyL34;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r53 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 826, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r54 = CPY_GET_METHOD(cpy_r_r53, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r53); /* is_type_obj */
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 826, CPyStatic_deps___globals);
        goto CPyL49;
    }
    if (!cpy_r_r54) goto CPyL34;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r55 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 827, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r56 = ((mypy___types___FunctionLikeObject *)cpy_r_r55)->_fallback;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_operator_method_dependency_for_type", "FunctionLike", "fallback", 827, CPyStatic_deps___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r56);
CPyL33: ;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r57 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type(cpy_r_self, cpy_r_r56, cpy_r_method);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 827, CPyStatic_deps___globals);
        goto CPyL47;
    } else
        goto CPyL46;
CPyL34: ;
    cpy_r_r58 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    if (!cpy_r_r61) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r62 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 829, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r63 = ((mypy___types___TypeTypeObject *)cpy_r_r62)->_item;
    cpy_r_r64 = (PyObject *)CPyType_types___Instance;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_r63)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r68 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 829, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r69 = ((mypy___types___TypeTypeObject *)cpy_r_r68)->_item;
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_types___Instance))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 829, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r69);
        goto CPyL49;
    }
    cpy_r_r71 = ((mypy___types___InstanceObject *)cpy_r_r70)->_type;
    cpy_r_r72 = ((mypy___nodes___TypeInfoObject *)cpy_r_r71)->_metaclass_type;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_operator_method_dependency_for_type", "TypeInfo", "metaclass_type", 829, CPyStatic_deps___globals);
        goto CPyL49;
    }
CPyL40: ;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_r72 != cpy_r_r73;
    if (!cpy_r_r74) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r75 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 830, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL49;
    }
    cpy_r_r76 = ((mypy___types___TypeTypeObject *)cpy_r_r75)->_item;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_types___Instance))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 830, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r76);
        goto CPyL49;
    }
    cpy_r_r78 = ((mypy___types___InstanceObject *)cpy_r_r77)->_type;
    cpy_r_r79 = ((mypy___nodes___TypeInfoObject *)cpy_r_r78)->_metaclass_type;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_operator_method_dependency_for_type", "TypeInfo", "metaclass_type", 830, CPyStatic_deps___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r79);
CPyL44: ;
    if (likely(cpy_r_r79 != Py_None))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 830, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r79);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_typ);
    cpy_r_r81 = CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type(cpy_r_self, cpy_r_r80, cpy_r_method);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 830, CPyStatic_deps___globals);
        goto CPyL47;
    }
CPyL46: ;
    return 1;
CPyL47: ;
    cpy_r_r82 = 2;
    return cpy_r_r82;
CPyL48: ;
    CPy_INCREF(cpy_r_typ);
    goto CPyL5;
CPyL49: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL47;
CPyL50: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL46;
CPyL51: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL47;
CPyL52: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL46;
}

PyObject *CPyPy_deps___DependencyVisitor___add_operator_method_dependency_for_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", "method", 0};
    static CPyArg_Parser parser = {"OO:add_operator_method_dependency_for_type", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_method;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___ProperType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_typ); 
        goto fail;
    }
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___add_operator_method_dependency_for_type(arg_self, arg_typ, arg_method);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_operator_method_dependency_for_type", 813, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_seq;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_generator_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_generator_expr", 833, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___GeneratorExprObject *)cpy_r_e)->_sequences;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_generator_expr", 834, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_seq = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___DependencyVisitor___add_iter_dependency(cpy_r_self, cpy_r_seq);
    CPy_DECREF(cpy_r_seq);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_generator_expr", 835, CPyStatic_deps___globals);
        goto CPyL9;
    }
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___GeneratorExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_generator_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_generator_expr", 832, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_generator_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_generator_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_generator_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_generator_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_generator_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_generator_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_generator_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_generator_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_seq;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_dictionary_comprehension", 838, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_e)->_sequences;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_dictionary_comprehension", 839, CPyStatic_deps___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_seq = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___DependencyVisitor___add_iter_dependency(cpy_r_self, cpy_r_seq);
    CPy_DECREF(cpy_r_seq);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_dictionary_comprehension", 840, CPyStatic_deps___globals);
        goto CPyL9;
    }
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___DictionaryComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_dictionary_comprehension", 837, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_dictionary_comprehension__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_dictionary_comprehension__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_dictionary_comprehension__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_star_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_star_expr", 843, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___StarExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_deps___DependencyVisitor___add_iter_dependency(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_star_expr", 844, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___StarExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_star_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_star_expr", 842, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_star_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_star_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_star_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_star_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_star_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_star_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_star_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_star_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_star_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_star_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_star_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_star_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_yield_from_expr", 847, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___YieldFromExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_deps___DependencyVisitor___add_iter_dependency(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_yield_from_expr", 848, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___YieldFromExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_yield_from_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_yield_from_expr", 846, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_yield_from_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_yield_from_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_yield_from_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_yield_from_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_yield_from_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_yield_from_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_yield_from_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_yield_from_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_await_expr(cpy_r_self, cpy_r_e);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_await_expr", 851, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___AwaitExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[811]; /* '__await__' */
    cpy_r_r3 = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(cpy_r_self, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_await_expr", 852, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AwaitExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_await_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_await_expr", 850, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___visit_await_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_await_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___visit_await_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_await_expr__TraverserVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_await_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_await_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_await_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_await_expr__NodeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___visit_await_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___DependencyVisitor___visit_await_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___visit_await_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_await_expr__ExpressionVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_type_alias_deps(PyObject *cpy_r_self, PyObject *cpy_r_target) {
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
    PyObject *cpy_r_alias;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_alias_deps;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_type_alias_deps", "DependencyVisitor", "alias_deps", 859, CPyStatic_deps___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_target);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 859, CPyStatic_deps___globals);
        goto CPyL13;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL12;
    cpy_r_r4 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_alias_deps;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_type_alias_deps", "DependencyVisitor", "alias_deps", 860, CPyStatic_deps___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_target);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 860, CPyStatic_deps___globals);
        goto CPyL13;
    }
    if (likely(PySet_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_type_alias_deps", 860, CPyStatic_deps___globals, "set", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 860, CPyStatic_deps___globals);
        goto CPyL13;
    }
CPyL7: ;
    cpy_r_r8 = PyIter_Next(cpy_r_r7);
    if (cpy_r_r8 == NULL) goto CPyL14;
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_type_alias_deps", 860, CPyStatic_deps___globals, "str", cpy_r_r8);
        goto CPyL15;
    }
    cpy_r_alias = cpy_r_r9;
    cpy_r_r10 = CPyDef_trigger___make_trigger(cpy_r_alias);
    CPy_DECREF(cpy_r_alias);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 861, CPyStatic_deps___globals);
        goto CPyL15;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 861, CPyStatic_deps___globals);
        goto CPyL15;
    } else
        goto CPyL7;
CPyL11: ;
    cpy_r_r13 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 860, CPyStatic_deps___globals);
        goto CPyL13;
    }
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL14: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL13;
}

PyObject *CPyPy_deps___DependencyVisitor___add_type_alias_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", 0};
    static CPyArg_Parser parser = {"O:add_type_alias_deps", kwlist, 0};
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___add_type_alias_deps(arg_self, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_type_alias_deps", 856, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_dependency(PyObject *cpy_r_self, PyObject *cpy_r_trigger, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4OOOO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
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
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    if (cpy_r_target != NULL) goto CPyL17;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_target = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[5315]; /* '<builtins.' */
    cpy_r_r2 = CPyStatics[5316]; /* '<typing.' */
    cpy_r_r3 = CPyStatics[5317]; /* '<mypy_extensions.' */
    cpy_r_r4 = CPyStatics[5318]; /* '<typing_extensions.' */
    cpy_r_r5.f0 = cpy_r_r1;
    cpy_r_r5.f1 = cpy_r_r2;
    cpy_r_r5.f2 = cpy_r_r3;
    cpy_r_r5.f3 = cpy_r_r4;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    CPy_INCREF(cpy_r_r5.f2);
    CPy_INCREF(cpy_r_r5.f3);
    cpy_r_r6 = CPyStatics[4225]; /* 'startswith' */
    cpy_r_r7 = PyTuple_New(4);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6532 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp6532);
    PyObject *__tmp6533 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp6533);
    PyObject *__tmp6534 = cpy_r_r5.f2;
    PyTuple_SET_ITEM(cpy_r_r7, 2, __tmp6534);
    PyObject *__tmp6535 = cpy_r_r5.f3;
    PyTuple_SET_ITEM(cpy_r_r7, 3, __tmp6535);
    PyObject *cpy_r_r8[2] = {cpy_r_trigger, cpy_r_r7};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r9, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_dependency", 868, CPyStatic_deps___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(!PyBool_Check(cpy_r_r10))) {
        CPy_TypeError("bool", cpy_r_r10); cpy_r_r11 = 2;
    } else
        cpy_r_r11 = cpy_r_r10 == Py_True;
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_dependency", 868, CPyStatic_deps___globals);
        goto CPyL19;
    }
    if (cpy_r_r11) {
        goto CPyL20;
    } else
        goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_target == cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL21;
    } else
        goto CPyL10;
CPyL7: ;
    cpy_r_r14 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_dependency", "DependencyVisitor", "scope", 877, CPyStatic_deps___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r14);
CPyL8: ;
    cpy_r_r15 = CPyDef_scope___Scope___current_target(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_dependency", 877, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_target = cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_map;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_dependency", "DependencyVisitor", "map", 878, CPyStatic_deps___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r16, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_dependency", 878, CPyStatic_deps___globals);
        goto CPyL19;
    }
    if (likely(PySet_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_dependency", 878, CPyStatic_deps___globals, "set", cpy_r_r17);
        goto CPyL19;
    }
    if (likely(cpy_r_target != Py_None))
        cpy_r_r19 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_dependency", 878, CPyStatic_deps___globals, "str", cpy_r_target);
        goto CPyL22;
    }
    cpy_r_r20 = PySet_Add(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_dependency", 878, CPyStatic_deps___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL17: ;
    CPy_INCREF(cpy_r_target);
    goto CPyL2;
CPyL18: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r7);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL5;
CPyL21: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL7;
CPyL22: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
}

PyObject *CPyPy_deps___DependencyVisitor___add_dependency(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"trigger", "target", 0};
    static CPyArg_Parser parser = {"O|O:add_dependency", kwlist, 0};
    PyObject *obj_trigger;
    PyObject *obj_target = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_trigger, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_trigger;
    if (likely(PyUnicode_Check(obj_trigger)))
        arg_trigger = obj_trigger;
    else {
        CPy_TypeError("str", obj_trigger); 
        goto fail;
    }
    PyObject *arg_target;
    if (obj_target == NULL) {
        arg_target = NULL;
        goto __LL6536;
    }
    if (PyUnicode_Check(obj_target))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL6536;
    if (obj_target == Py_None)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL6536;
    CPy_TypeError("str or None", obj_target); 
    goto fail;
__LL6536: ;
    char retval = CPyDef_deps___DependencyVisitor___add_dependency(arg_self, arg_trigger, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_dependency", 863, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_type_dependencies(PyObject *cpy_r_self, PyObject *cpy_r_typ, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_trigger;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    if (cpy_r_target != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_target = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_deps___DependencyVisitor___get_type_triggers(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_dependencies", 887, CPyStatic_deps___globals);
        goto CPyL11;
    }
    cpy_r_r2 = 0;
CPyL4: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL12;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_type_dependencies", 887, CPyStatic_deps___globals, "str", cpy_r_r7);
        goto CPyL13;
    }
    cpy_r_trigger = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_trigger, cpy_r_target);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_type_dependencies", 888, CPyStatic_deps___globals);
        goto CPyL13;
    }
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL4;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL10: ;
    CPy_INCREF(cpy_r_target);
    goto CPyL2;
CPyL11: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
}

PyObject *CPyPy_deps___DependencyVisitor___add_type_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", "target", 0};
    static CPyArg_Parser parser = {"O|O:add_type_dependencies", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_target = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_target;
    if (obj_target == NULL) {
        arg_target = NULL;
        goto __LL6537;
    }
    if (PyUnicode_Check(obj_target))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL6537;
    if (obj_target == Py_None)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL6537;
    CPy_TypeError("str or None", obj_target); 
    goto fail;
__LL6537: ;
    char retval = CPyDef_deps___DependencyVisitor___add_type_dependencies(arg_self, arg_typ, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_type_dependencies", 880, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_attribute_dependency(PyObject *cpy_r_self, PyObject *cpy_r_typ, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_targets;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___attribute_triggers(cpy_r_self, cpy_r_typ, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_attribute_dependency", 892, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_targets = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_targets)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_targets, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_attribute_dependency", 893, CPyStatic_deps___globals, "str", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_target = cpy_r_r7;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_deps___DependencyVisitor___add_dependency(cpy_r_self, cpy_r_target, cpy_r_r8);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_attribute_dependency", 894, CPyStatic_deps___globals);
        goto CPyL9;
    }
    cpy_r_r10 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r10;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_targets);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_targets);
    goto CPyL7;
}

PyObject *CPyPy_deps___DependencyVisitor___add_attribute_dependency(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", "name", 0};
    static CPyArg_Parser parser = {"OO:add_attribute_dependency", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___add_attribute_dependency(arg_self, arg_typ, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_attribute_dependency", 890, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___attribute_triggers(PyObject *cpy_r_self, PyObject *cpy_r_typ, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
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
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_member;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
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
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
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
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 898, CPyStatic_deps___globals);
        goto CPyL65;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 898, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL65;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 900, CPyStatic_deps___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL66;
    }
    cpy_r_r7 = ((mypy___types___TypeVarTypeObject *)cpy_r_r6)->_upper_bound;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r8 = CPyDef_types___get_proper_type(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 900, CPyStatic_deps___globals);
        goto CPyL65;
    }
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 900, CPyStatic_deps___globals, "mypy.types.ProperType", cpy_r_r8);
        goto CPyL65;
    }
    cpy_r_typ = cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r14 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 902, CPyStatic_deps___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL66;
    }
    cpy_r_r15 = ((mypy___types___TupleTypeObject *)cpy_r_r14)->_partial_fallback;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_typ);
    cpy_r_typ = cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = (PyObject *)CPyType_types___Instance;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r20 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 904, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL66;
    }
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_r20)->_type;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_r21, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 904, CPyStatic_deps___globals);
        goto CPyL65;
    }
CPyL13: ;
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_r23, cpy_r_name);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 904, CPyStatic_deps___globals);
        goto CPyL65;
    }
    cpy_r_member = cpy_r_r24;
    cpy_r_r25 = CPyDef_trigger___make_trigger(cpy_r_member);
    CPy_DECREF(cpy_r_member);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 905, CPyStatic_deps___globals);
        goto CPyL65;
    }
    cpy_r_r26 = PyList_New(1);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 905, CPyStatic_deps___globals);
        goto CPyL67;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    return cpy_r_r26;
CPyL17: ;
    cpy_r_r29 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL19;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL20;
CPyL19: ;
    cpy_r_r34 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    cpy_r_r33 = cpy_r_r37;
CPyL20: ;
    if (!cpy_r_r33) goto CPyL35;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r38 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 906, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL66;
    }
    cpy_r_r39 = CPY_GET_METHOD(cpy_r_r38, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r38); /* is_type_obj */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 906, CPyStatic_deps___globals);
        goto CPyL66;
    }
    if (!cpy_r_r39) goto CPyL35;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r40 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 907, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL66;
    }
    cpy_r_r41 = CPY_GET_METHOD(cpy_r_r40, CPyType_types___FunctionLike, 17, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *))(cpy_r_r40); /* type_object */
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 907, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_r42 = CPY_GET_ATTR(cpy_r_r41, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 907, CPyStatic_deps___globals);
        goto CPyL66;
    }
CPyL27: ;
    cpy_r_r43 = CPyStatics[224]; /* '.' */
    cpy_r_r44 = CPyStr_Build(3, cpy_r_r42, cpy_r_r43, cpy_r_name);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 907, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_member = cpy_r_r44;
    cpy_r_r45 = CPyDef_trigger___make_trigger(cpy_r_member);
    CPy_DECREF(cpy_r_member);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 908, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_r46 = PyList_New(1);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 908, CPyStatic_deps___globals);
        goto CPyL68;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_r45;
    cpy_r_triggers = cpy_r_r46;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r49 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 909, CPyStatic_deps___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL69;
    }
    cpy_r_r50 = ((mypy___types___FunctionLikeObject *)cpy_r_r49)->_fallback;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "attribute_triggers", "FunctionLike", "fallback", 909, CPyStatic_deps___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r50);
CPyL32: ;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r51 = CPyDef_deps___DependencyVisitor___attribute_triggers(cpy_r_self, cpy_r_r50, cpy_r_name);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 909, CPyStatic_deps___globals);
        goto CPyL70;
    }
    cpy_r_r52 = CPyList_Extend(cpy_r_triggers, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 909, CPyStatic_deps___globals);
        goto CPyL70;
    } else
        goto CPyL71;
CPyL34: ;
    return cpy_r_triggers;
CPyL35: ;
    cpy_r_r53 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL45;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 912, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_targets = cpy_r_r57;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r58 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 913, CPyStatic_deps___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL72;
    }
    cpy_r_r59 = ((mypy___types___UnionTypeObject *)cpy_r_r58)->_items;
    CPy_INCREF(cpy_r_r59);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r60 = 0;
CPyL39: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_r59)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r60 < (Py_ssize_t)cpy_r_r63;
    if (!cpy_r_r64) goto CPyL73;
    cpy_r_r65 = CPyList_GetItemUnsafe(cpy_r_r59, cpy_r_r60);
    if (likely(PyObject_TypeCheck(cpy_r_r65, CPyType_types___Type)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 913, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r65);
        goto CPyL74;
    }
    cpy_r_item = cpy_r_r66;
    cpy_r_r67 = CPyDef_deps___DependencyVisitor___attribute_triggers(cpy_r_self, cpy_r_item, cpy_r_name);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 914, CPyStatic_deps___globals);
        goto CPyL74;
    }
    cpy_r_r68 = CPyList_Extend(cpy_r_targets, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 914, CPyStatic_deps___globals);
        goto CPyL74;
    } else
        goto CPyL75;
CPyL43: ;
    cpy_r_r69 = cpy_r_r60 + 2;
    cpy_r_r60 = cpy_r_r69;
    goto CPyL39;
CPyL44: ;
    return cpy_r_targets;
CPyL45: ;
    cpy_r_r70 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL76;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r74 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 917, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL66;
    }
    cpy_r_r75 = ((mypy___types___TypeTypeObject *)cpy_r_r74)->_item;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyDef_deps___DependencyVisitor___attribute_triggers(cpy_r_self, cpy_r_r75, cpy_r_name);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 917, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_triggers = cpy_r_r76;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r77 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 918, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL69;
    }
    cpy_r_r78 = ((mypy___types___TypeTypeObject *)cpy_r_r77)->_item;
    cpy_r_r79 = (PyObject *)CPyType_types___Instance;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_r78)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL77;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r83 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 918, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL69;
    }
    cpy_r_r84 = ((mypy___types___TypeTypeObject *)cpy_r_r83)->_item;
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_types___Instance))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 918, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r84);
        goto CPyL69;
    }
    cpy_r_r86 = ((mypy___types___InstanceObject *)cpy_r_r85)->_type;
    cpy_r_r87 = ((mypy___nodes___TypeInfoObject *)cpy_r_r86)->_metaclass_type;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "attribute_triggers", "TypeInfo", "metaclass_type", 918, CPyStatic_deps___globals);
        goto CPyL69;
    }
CPyL53: ;
    cpy_r_r88 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r89 = cpy_r_r87 != cpy_r_r88;
    if (!cpy_r_r89) goto CPyL77;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r90 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 920, CPyStatic_deps___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL69;
    }
    cpy_r_r91 = ((mypy___types___TypeTypeObject *)cpy_r_r90)->_item;
    if (likely(Py_TYPE(cpy_r_r91) == CPyType_types___Instance))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 920, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r91);
        goto CPyL69;
    }
    cpy_r_r93 = ((mypy___types___InstanceObject *)cpy_r_r92)->_type;
    cpy_r_r94 = ((mypy___nodes___TypeInfoObject *)cpy_r_r93)->_metaclass_type;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "attribute_triggers", "TypeInfo", "metaclass_type", 920, CPyStatic_deps___globals);
        goto CPyL69;
    }
CPyL57: ;
    if (likely(cpy_r_r94 != Py_None))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "attribute_triggers", 920, CPyStatic_deps___globals, "mypy.types.Instance", cpy_r_r94);
        goto CPyL69;
    }
    cpy_r_r96 = ((mypy___types___InstanceObject *)cpy_r_r95)->_type;
    CPy_INCREF(cpy_r_r96);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r97 = CPY_GET_ATTR(cpy_r_r96, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 920, CPyStatic_deps___globals);
        goto CPyL70;
    }
CPyL59: ;
    cpy_r_r98 = CPyStatics[224]; /* '.' */
    cpy_r_r99 = CPyStr_Build(3, cpy_r_r97, cpy_r_r98, cpy_r_name);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 920, CPyStatic_deps___globals);
        goto CPyL70;
    }
    cpy_r_r100 = CPyDef_trigger___make_trigger(cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 920, CPyStatic_deps___globals);
        goto CPyL70;
    }
    cpy_r_r101 = PyList_Append(cpy_r_triggers, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 919, CPyStatic_deps___globals);
        goto CPyL70;
    }
CPyL62: ;
    return cpy_r_triggers;
CPyL63: ;
    cpy_r_r103 = PyList_New(0);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 924, CPyStatic_deps___globals);
        goto CPyL65;
    }
    return cpy_r_r103;
CPyL65: ;
    cpy_r_r104 = NULL;
    return cpy_r_r104;
CPyL66: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL65;
CPyL68: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r45);
    goto CPyL65;
CPyL69: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_triggers);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL65;
CPyL71: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL34;
CPyL72: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_targets);
    goto CPyL65;
CPyL73: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL44;
CPyL74: ;
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r59);
    goto CPyL65;
CPyL75: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL43;
CPyL76: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL63;
CPyL77: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL62;
}

PyObject *CPyPy_deps___DependencyVisitor___attribute_triggers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", "name", 0};
    static CPyArg_Parser parser = {"OO:attribute_triggers", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___attribute_triggers(arg_self, arg_typ, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "attribute_triggers", 896, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(PyObject *cpy_r_self, PyObject *cpy_r_e, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_attribute_dependency_for_expr", "DependencyVisitor", "type_map", 927, CPyStatic_deps___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDict_GetWithNone(cpy_r_r0, cpy_r_e);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_attribute_dependency_for_expr", 927, CPyStatic_deps___globals);
        goto CPyL7;
    }
    if (PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type))
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6538;
    if (cpy_r_r1 == Py_None)
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6538;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "add_attribute_dependency_for_expr", 927, CPyStatic_deps___globals, "mypy.types.Type or None", cpy_r_r1);
    goto CPyL7;
__LL6538: ;
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_typ != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL8;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r5 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_attribute_dependency_for_expr", 929, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL7;
    }
    cpy_r_r6 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r5, cpy_r_name);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_attribute_dependency_for_expr", 929, CPyStatic_deps___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL8: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL6;
}

PyObject *CPyPy_deps___DependencyVisitor___add_attribute_dependency_for_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", "name", 0};
    static CPyArg_Parser parser = {"OO:add_attribute_dependency_for_expr", kwlist, 0};
    PyObject *obj_e;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_e, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___add_attribute_dependency_for_expr(arg_self, arg_e, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_attribute_dependency_for_expr", 926, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___add_iter_dependency(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "add_iter_dependency", "DependencyVisitor", "type_map", 932, CPyStatic_deps___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDict_GetWithNone(cpy_r_r0, cpy_r_node);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_iter_dependency", 932, CPyStatic_deps___globals);
        goto CPyL7;
    }
    if (PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type))
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6539;
    if (cpy_r_r1 == Py_None)
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6539;
    CPy_TypeErrorTraceback("mypy/server/deps.py", "add_iter_dependency", 932, CPyStatic_deps___globals, "mypy.types.Type or None", cpy_r_r1);
    goto CPyL7;
__LL6539: ;
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_typ != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL8;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r5 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "add_iter_dependency", 934, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL7;
    }
    cpy_r_r6 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r7 = CPyDef_deps___DependencyVisitor___add_attribute_dependency(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "add_iter_dependency", 934, CPyStatic_deps___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL8: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL6;
}

PyObject *CPyPy_deps___DependencyVisitor___add_iter_dependency(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:add_iter_dependency", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___add_iter_dependency(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "add_iter_dependency", 931, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___DependencyVisitor___use_logical_deps(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "use_logical_deps", "DependencyVisitor", "options", 937, CPyStatic_deps___globals);
        goto CPyL7;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL6;
CPyL3: ;
    cpy_r_r4 = ((mypy___server___deps___DependencyVisitorObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "use_logical_deps", "DependencyVisitor", "options", 937, CPyStatic_deps___globals);
        goto CPyL7;
    }
CPyL4: ;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "use_logical_deps", 937, CPyStatic_deps___globals, "mypy.options.Options", cpy_r_r4);
        goto CPyL7;
    }
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_r5)->_logical_deps;
    cpy_r_r3 = cpy_r_r6;
CPyL6: ;
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_deps___DependencyVisitor___use_logical_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":use_logical_deps", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_deps___DependencyVisitor___use_logical_deps(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "use_logical_deps", 936, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___DependencyVisitor___get_type_triggers(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_deps___DependencyVisitor___use_logical_deps(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 940, CPyStatic_deps___globals);
        goto CPyL3;
    }
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_deps___get_type_triggers(cpy_r_typ, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 940, CPyStatic_deps___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_deps___DependencyVisitor___get_type_triggers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_type_triggers", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___DependencyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.DependencyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___DependencyVisitor___get_type_triggers(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 939, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___get_type_triggers(PyObject *cpy_r_typ, char cpy_r_use_logical_deps, PyObject *cpy_r_seen_aliases) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_seen_aliases != NULL) goto CPyL7;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_seen_aliases = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_deps___TypeTriggersVisitor(cpy_r_use_logical_deps, cpy_r_seen_aliases);
    CPy_DECREF(cpy_r_seen_aliases);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 947, CPyStatic_deps___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r1); /* accept */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 947, CPyStatic_deps___globals);
        goto CPyL6;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "get_type_triggers", 947, CPyStatic_deps___globals, "list", cpy_r_r2);
        goto CPyL6;
    }
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL7: ;
    CPy_INCREF(cpy_r_seen_aliases);
    goto CPyL2;
}

PyObject *CPyPy_deps___get_type_triggers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "use_logical_deps", "seen_aliases", 0};
    static CPyArg_Parser parser = {"OO|O:get_type_triggers", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_use_logical_deps;
    PyObject *obj_seen_aliases = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_use_logical_deps, &obj_seen_aliases)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char arg_use_logical_deps;
    if (unlikely(!PyBool_Check(obj_use_logical_deps))) {
        CPy_TypeError("bool", obj_use_logical_deps); goto fail;
    } else
        arg_use_logical_deps = obj_use_logical_deps == Py_True;
    PyObject *arg_seen_aliases;
    if (obj_seen_aliases == NULL) {
        arg_seen_aliases = NULL;
        goto __LL6540;
    }
    if (PySet_Check(obj_seen_aliases))
        arg_seen_aliases = obj_seen_aliases;
    else {
        arg_seen_aliases = NULL;
    }
    if (arg_seen_aliases != NULL) goto __LL6540;
    if (obj_seen_aliases == Py_None)
        arg_seen_aliases = obj_seen_aliases;
    else {
        arg_seen_aliases = NULL;
    }
    if (arg_seen_aliases != NULL) goto __LL6540;
    CPy_TypeError("set or None", obj_seen_aliases); 
    goto fail;
__LL6540: ;
    PyObject *retval = CPyDef_deps___get_type_triggers(arg_typ, arg_use_logical_deps, arg_seen_aliases);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 943, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___TypeTriggersVisitor_____init__(PyObject *cpy_r_self, char cpy_r_use_logical_deps, PyObject *cpy_r_seen_aliases) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    if (cpy_r_seen_aliases != NULL) goto CPyL16;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_seen_aliases = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 954, CPyStatic_deps___globals);
        goto CPyL17;
    }
    if (((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_deps != NULL) {
        CPy_DECREF(((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_deps);
    }
    ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_deps = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 954, CPyStatic_deps___globals);
        goto CPyL17;
    }
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_seen_aliases != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL18;
    CPy_INCREF(cpy_r_seen_aliases);
    if (likely(cpy_r_seen_aliases != Py_None))
        cpy_r_r5 = cpy_r_seen_aliases;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "__init__", 952, CPyStatic_deps___globals, "set", cpy_r_seen_aliases);
        goto CPyL17;
    }
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 952, CPyStatic_deps___globals);
        goto CPyL17;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL18;
    if (likely(cpy_r_seen_aliases != Py_None))
        cpy_r_r9 = cpy_r_seen_aliases;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "__init__", 955, CPyStatic_deps___globals, "set", cpy_r_seen_aliases);
        goto CPyL15;
    }
    cpy_r_r10 = cpy_r_r9;
    goto CPyL12;
CPyL10: ;
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 955, CPyStatic_deps___globals);
        goto CPyL15;
    }
    cpy_r_r10 = cpy_r_r11;
CPyL12: ;
    if (((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_seen_aliases = cpy_r_r10;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 955, CPyStatic_deps___globals);
        goto CPyL15;
    }
    ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_use_logical_deps = cpy_r_use_logical_deps;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/deps.py", "__init__", 956, CPyStatic_deps___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL16: ;
    CPy_INCREF(cpy_r_seen_aliases);
    goto CPyL2;
CPyL17: ;
    CPy_DecRef(cpy_r_seen_aliases);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_seen_aliases);
    goto CPyL10;
}

PyObject *CPyPy_deps___TypeTriggersVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"use_logical_deps", "seen_aliases", 0};
    PyObject *obj_use_logical_deps;
    PyObject *obj_seen_aliases = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_use_logical_deps, &obj_seen_aliases)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    char arg_use_logical_deps;
    if (unlikely(!PyBool_Check(obj_use_logical_deps))) {
        CPy_TypeError("bool", obj_use_logical_deps); goto fail;
    } else
        arg_use_logical_deps = obj_use_logical_deps == Py_True;
    PyObject *arg_seen_aliases;
    if (obj_seen_aliases == NULL) {
        arg_seen_aliases = NULL;
        goto __LL6541;
    }
    if (PySet_Check(obj_seen_aliases))
        arg_seen_aliases = obj_seen_aliases;
    else {
        arg_seen_aliases = NULL;
    }
    if (arg_seen_aliases != NULL) goto __LL6541;
    if (obj_seen_aliases == Py_None)
        arg_seen_aliases = obj_seen_aliases;
    else {
        arg_seen_aliases = NULL;
    }
    if (arg_seen_aliases != NULL) goto __LL6541;
    CPy_TypeError("set or None", obj_seen_aliases); 
    goto fail;
__LL6541: ;
    char retval = CPyDef_deps___TypeTriggersVisitor_____init__(arg_self, arg_use_logical_deps, arg_seen_aliases);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "__init__", 951, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___get_type_triggers(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_use_logical_deps;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "get_type_triggers", "TypeTriggersVisitor", "use_logical_deps", 959, CPyStatic_deps___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "get_type_triggers", "TypeTriggersVisitor", "seen_aliases", 959, CPyStatic_deps___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_deps___get_type_triggers(cpy_r_typ, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 959, CPyStatic_deps___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___get_type_triggers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_type_triggers", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "get_type_triggers", 958, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 962, CPyStatic_deps___globals);
        goto CPyL24;
    }
CPyL1: ;
    cpy_r_r2 = CPyDef_trigger___make_trigger(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 962, CPyStatic_deps___globals);
        goto CPyL24;
    }
    cpy_r_trigger = cpy_r_r2;
    cpy_r_r3 = PyList_New(1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 963, CPyStatic_deps___globals);
        goto CPyL25;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_trigger;
    cpy_r_triggers = cpy_r_r3;
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL4: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL26;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 964, CPyStatic_deps___globals);
        goto CPyL27;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_instance", 964, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL27;
    }
    cpy_r_arg = cpy_r_r13;
    cpy_r_r14 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 965, CPyStatic_deps___globals);
        goto CPyL27;
    }
    cpy_r_r15 = CPyList_Extend(cpy_r_triggers, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 965, CPyStatic_deps___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL9: ;
    cpy_r_r16 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r16;
    goto CPyL4;
CPyL10: ;
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_typ)->_last_known_value;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    CPy_DECREF(cpy_r_r17);
    if (!cpy_r_r19) goto CPyL14;
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_typ)->_last_known_value;
    CPy_INCREF(cpy_r_r20);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_instance", 967, CPyStatic_deps___globals, "mypy.types.LiteralType", cpy_r_r20);
        goto CPyL29;
    }
    cpy_r_r22 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 967, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r23 = CPyList_Extend(cpy_r_triggers, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 967, CPyStatic_deps___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL14: ;
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_typ)->_extra_attrs;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 != cpy_r_r25;
    CPy_DECREF(cpy_r_r24);
    if (!cpy_r_r26) goto CPyL23;
    cpy_r_r27 = ((mypy___types___InstanceObject *)cpy_r_typ)->_extra_attrs;
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_instance", 968, CPyStatic_deps___globals, "mypy.types.ExtraAttrs", cpy_r_r27);
        goto CPyL29;
    }
    cpy_r_r29 = ((mypy___types___ExtraAttrsObject *)cpy_r_r28)->_mod_name;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL31;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r32 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_instance", 968, CPyStatic_deps___globals, "str", cpy_r_r29);
        goto CPyL29;
    }
    cpy_r_r33 = CPyStr_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL23;
    cpy_r_r34 = ((mypy___types___InstanceObject *)cpy_r_typ)->_extra_attrs;
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_instance", 970, CPyStatic_deps___globals, "mypy.types.ExtraAttrs", cpy_r_r34);
        goto CPyL29;
    }
    cpy_r_r36 = ((mypy___types___ExtraAttrsObject *)cpy_r_r35)->_mod_name;
    CPy_INCREF(cpy_r_r36);
    if (likely(cpy_r_r36 != Py_None))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_instance", 970, CPyStatic_deps___globals, "str", cpy_r_r36);
        goto CPyL29;
    }
    cpy_r_r38 = CPyDef_trigger___make_wildcard_trigger(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 970, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r39 = PyList_Append(cpy_r_triggers, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 970, CPyStatic_deps___globals);
        goto CPyL29;
    }
CPyL23: ;
    return cpy_r_triggers;
CPyL24: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL25: ;
    CPy_DecRef(cpy_r_trigger);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL10;
CPyL27: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r6);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL9;
CPyL29: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL14;
CPyL31: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL23;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Instance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Instance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_instance(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_instance", 961, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_type_alias_type", "TypeTriggersVisitor", "seen_aliases", 974, CPyStatic_deps___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PySet_Contains(cpy_r_r0, cpy_r_typ);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 974, CPyStatic_deps___globals);
        goto CPyL24;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 975, CPyStatic_deps___globals);
        goto CPyL24;
    }
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_type_alias_type", "TypeTriggersVisitor", "seen_aliases", 976, CPyStatic_deps___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = PySet_Add(cpy_r_r5, cpy_r_typ);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 976, CPyStatic_deps___globals);
        goto CPyL24;
    }
    cpy_r_r8 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (cpy_r_r10) goto CPyL10;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 977, CPyStatic_deps___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r12 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    CPy_INCREF(cpy_r_r12);
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_alias_type", 978, CPyStatic_deps___globals, "mypy.nodes.TypeAlias", cpy_r_r12);
        goto CPyL24;
    }
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_r13, CPyType_nodes___TypeAlias, 9, mypy___nodes___TypeAliasObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 978, CPyStatic_deps___globals);
        goto CPyL24;
    }
CPyL12: ;
    cpy_r_r15 = CPyDef_trigger___make_trigger(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 978, CPyStatic_deps___globals);
        goto CPyL24;
    }
    cpy_r_trigger = cpy_r_r15;
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 979, CPyStatic_deps___globals);
        goto CPyL25;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_trigger;
    cpy_r_triggers = cpy_r_r16;
    cpy_r_r19 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
CPyL15: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL26;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_alias_type", 980, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL27;
    }
    cpy_r_arg = cpy_r_r26;
    cpy_r_r27 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 981, CPyStatic_deps___globals);
        goto CPyL27;
    }
    cpy_r_r28 = CPyList_Extend(cpy_r_triggers, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 981, CPyStatic_deps___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL19: ;
    cpy_r_r29 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r29;
    goto CPyL15;
CPyL20: ;
    cpy_r_r30 = ((mypy___types___TypeAliasTypeObject *)cpy_r_typ)->_alias;
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_alias_type", 984, CPyStatic_deps___globals, "mypy.nodes.TypeAlias", cpy_r_r30);
        goto CPyL29;
    }
    cpy_r_r32 = ((mypy___nodes___TypeAliasObject *)cpy_r_r31)->_target;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 984, CPyStatic_deps___globals);
        goto CPyL29;
    }
    cpy_r_r34 = CPyList_Extend(cpy_r_triggers, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 984, CPyStatic_deps___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL23: ;
    return cpy_r_triggers;
CPyL24: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL25: ;
    CPy_DecRef(cpy_r_trigger);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r19);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL19;
CPyL29: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL23;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeAliasType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type", 973, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_missing_import_name;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_missing_import_name;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_any", 989, CPyStatic_deps___globals, "str", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = CPyDef_trigger___make_trigger(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_any", 989, CPyStatic_deps___globals);
        goto CPyL7;
    }
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_any", 989, CPyStatic_deps___globals);
        goto CPyL8;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_any", 990, CPyStatic_deps___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___AnyType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_any(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_any", 987, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_none_type", 993, CPyStatic_deps___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___NoneType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_none_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_none_type", 992, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type", 996, CPyStatic_deps___globals);
        goto CPyL10;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_callable_type", 997, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_arg = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type", 998, CPyStatic_deps___globals);
        goto CPyL12;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_triggers, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type", 998, CPyStatic_deps___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    cpy_r_r12 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_ret_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type", 999, CPyStatic_deps___globals);
        goto CPyL14;
    }
    cpy_r_r14 = CPyList_Extend(cpy_r_triggers, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type", 999, CPyStatic_deps___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL9: ;
    return cpy_r_triggers;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
CPyL14: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL10;
CPyL15: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL9;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_callable_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type", 995, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_overloaded", 1005, CPyStatic_deps___globals);
        goto CPyL9;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_typ, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_overloaded", 1006, CPyStatic_deps___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___CallableType))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_overloaded", 1006, CPyStatic_deps___globals, "mypy.types.CallableType", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_overloaded", 1007, CPyStatic_deps___globals);
        goto CPyL12;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_triggers, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_overloaded", 1007, CPyStatic_deps___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL7: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL3;
CPyL8: ;
    return cpy_r_triggers;
CPyL9: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL10: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL7;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Overloaded))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_overloaded(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_overloaded", 1004, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Should not see an erased type here");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_erased_type", 1012, CPyStatic_deps___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_erased_type", 1010, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_deleted_type", 1015, CPyStatic_deps___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___DeletedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_deleted_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_deleted_type", 1014, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "Should not see a partial type here");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_partial_type", 1018, CPyStatic_deps___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___PartialType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_partial_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_partial_type", 1017, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type", 1021, CPyStatic_deps___globals);
        goto CPyL10;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_tuple_type", 1022, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type", 1023, CPyStatic_deps___globals);
        goto CPyL12;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_triggers, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type", 1023, CPyStatic_deps___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    cpy_r_r12 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type", 1024, CPyStatic_deps___globals);
        goto CPyL14;
    }
    cpy_r_r14 = CPyList_Extend(cpy_r_triggers, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type", 1024, CPyStatic_deps___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL9: ;
    return cpy_r_triggers;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
CPyL14: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL10;
CPyL15: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL9;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_tuple_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type", 1020, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_triggers;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_old_triggers;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1028, CPyStatic_deps___globals);
        goto CPyL18;
    }
    cpy_r_triggers = cpy_r_r1;
    cpy_r_r2 = ((mypy___server___deps___TypeTriggersVisitorObject *)cpy_r_self)->_use_logical_deps;
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AttributeError("mypy/server/deps.py", "visit_type_type", "TypeTriggersVisitor", "use_logical_deps", 1029, CPyStatic_deps___globals);
        goto CPyL19;
    }
CPyL2: ;
    if (cpy_r_r2) goto CPyL17;
CPyL3: ;
    cpy_r_r3 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r4[1] = {cpy_r_triggers};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1030, CPyStatic_deps___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_type", 1030, CPyStatic_deps___globals, "list", cpy_r_r6);
        goto CPyL19;
    }
    cpy_r_old_triggers = cpy_r_r7;
    cpy_r_r8 = 0;
CPyL6: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_old_triggers)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL20;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_old_triggers, cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_type", 1031, CPyStatic_deps___globals, "str", cpy_r_r13);
        goto CPyL21;
    }
    cpy_r_trigger = cpy_r_r14;
    cpy_r_r15 = CPyStatics[840]; /* '>' */
    cpy_r_r16 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r17[2] = {cpy_r_trigger, cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1032, CPyStatic_deps___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_type", 1032, CPyStatic_deps___globals, "str", cpy_r_r19);
        goto CPyL22;
    }
    cpy_r_r21 = CPyStatics[5319]; /* '.__init__>' */
    cpy_r_r22 = PyUnicode_Concat(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1032, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r23 = PyList_Append(cpy_r_triggers, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1032, CPyStatic_deps___globals);
        goto CPyL22;
    }
    cpy_r_r25 = CPyStatics[840]; /* '>' */
    cpy_r_r26 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r27[2] = {cpy_r_trigger, cpy_r_r25};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r28, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1033, CPyStatic_deps___globals);
        goto CPyL22;
    }
    CPy_DECREF(cpy_r_trigger);
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_type", 1033, CPyStatic_deps___globals, "str", cpy_r_r29);
        goto CPyL21;
    }
    cpy_r_r31 = CPyStatics[5320]; /* '.__new__>' */
    cpy_r_r32 = PyUnicode_Concat(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1033, CPyStatic_deps___globals);
        goto CPyL21;
    }
    cpy_r_r33 = PyList_Append(cpy_r_triggers, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1033, CPyStatic_deps___globals);
        goto CPyL21;
    }
    cpy_r_r35 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r35;
    goto CPyL6;
CPyL17: ;
    return cpy_r_triggers;
CPyL18: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL19: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_old_triggers);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_old_triggers);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_old_triggers);
    CPy_DecRef(cpy_r_trigger);
    goto CPyL18;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_type", 1027, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1037, CPyStatic_deps___globals);
        goto CPyL19;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStr_IsTrue(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_trigger___make_trigger(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1039, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r5 = PyList_Append(cpy_r_triggers, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1039, CPyStatic_deps___globals);
        goto CPyL20;
    }
CPyL4: ;
    cpy_r_r7 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1040, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1041, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r13 = CPyList_Extend(cpy_r_triggers, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1041, CPyStatic_deps___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL8: ;
    cpy_r_r14 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1042, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1043, CPyStatic_deps___globals);
        goto CPyL20;
    }
    cpy_r_r20 = CPyList_Extend(cpy_r_triggers, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1043, CPyStatic_deps___globals);
        goto CPyL20;
    } else
        goto CPyL22;
CPyL12: ;
    cpy_r_r21 = ((mypy___types___TypeVarTypeObject *)cpy_r_typ)->_values;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = 0;
CPyL13: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL23;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___Type)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_type_var", 1044, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r27);
        goto CPyL24;
    }
    cpy_r_val = cpy_r_r28;
    cpy_r_r29 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_val);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1045, CPyStatic_deps___globals);
        goto CPyL24;
    }
    cpy_r_r30 = CPyList_Extend(cpy_r_triggers, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1045, CPyStatic_deps___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL17: ;
    cpy_r_r31 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r31;
    goto CPyL13;
CPyL18: ;
    return cpy_r_triggers;
CPyL19: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL20: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL22: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL12;
CPyL23: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r21);
    goto CPyL19;
CPyL25: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL17;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_var(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_var", 1036, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1049, CPyStatic_deps___globals);
        goto CPyL15;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStr_IsTrue(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_trigger___make_trigger(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1051, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r5 = PyList_Append(cpy_r_triggers, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1051, CPyStatic_deps___globals);
        goto CPyL16;
    }
CPyL4: ;
    cpy_r_r7 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1052, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1053, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r13 = CPyList_Extend(cpy_r_triggers, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1053, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL8: ;
    cpy_r_r14 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1054, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1055, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r20 = CPyList_Extend(cpy_r_triggers, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1055, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL18;
CPyL12: ;
    cpy_r_r21 = ((mypy___types___ParamSpecTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1056, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r23 = CPyList_Extend(cpy_r_triggers, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1056, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL19;
CPyL14: ;
    return cpy_r_triggers;
CPyL15: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL16: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL18: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL12;
CPyL19: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL14;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___ParamSpecType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_param_spec(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec", 1048, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1060, CPyStatic_deps___globals);
        goto CPyL15;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStr_IsTrue(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_fullname;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_trigger___make_trigger(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1062, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r5 = PyList_Append(cpy_r_triggers, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1062, CPyStatic_deps___globals);
        goto CPyL16;
    }
CPyL4: ;
    cpy_r_r7 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1063, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1064, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r13 = CPyList_Extend(cpy_r_triggers, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1064, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL8: ;
    cpy_r_r14 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1065, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_default;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1066, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r20 = CPyList_Extend(cpy_r_triggers, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1066, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL18;
CPyL12: ;
    cpy_r_r21 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_typ)->_upper_bound;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1067, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r23 = CPyList_Extend(cpy_r_triggers, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1067, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL19;
CPyL14: ;
    return cpy_r_triggers;
CPyL15: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL16: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL18: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL12;
CPyL19: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL14;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeVarTupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple", 1059, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unpack_type", 1071, CPyStatic_deps___globals);
        goto CPyL3;
    }
    if (likely(PyList_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_unpack_type", 1071, CPyStatic_deps___globals, "list", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnpackType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_unpack_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unpack_type", 1070, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_parameters", 1074, CPyStatic_deps___globals);
        goto CPyL8;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___ParametersObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_parameters", 1075, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_arg = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_parameters", 1076, CPyStatic_deps___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_triggers, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_parameters", 1076, CPyStatic_deps___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL6: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    return cpy_r_triggers;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Parameters))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_parameters(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_parameters", 1073, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1080, CPyStatic_deps___globals);
        goto CPyL11;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetValuesIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1081, CPyStatic_deps___globals);
        goto CPyL12;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextValue(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_typeddict_type", 1081, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1082, CPyStatic_deps___globals);
        goto CPyL14;
    }
    cpy_r_r12 = CPyList_Extend(cpy_r_triggers, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1082, CPyStatic_deps___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL6: ;
    cpy_r_r13 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1081, CPyStatic_deps___globals);
        goto CPyL14;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1081, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r15 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1083, CPyStatic_deps___globals);
        goto CPyL16;
    }
    cpy_r_r17 = CPyList_Extend(cpy_r_triggers, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1083, CPyStatic_deps___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL10: ;
    return cpy_r_triggers;
CPyL11: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL12: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL7;
CPyL14: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL6;
CPyL16: ;
    CPy_DecRef(cpy_r_triggers);
    goto CPyL11;
CPyL17: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL10;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypedDictType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type", 1079, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_literal_type", 1087, CPyStatic_deps___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___LiteralType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_literal_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_literal_type", 1086, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_unbound_type", 1090, CPyStatic_deps___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnboundType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_unbound_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unbound_type", 1089, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_uninhabited_type", 1093, CPyStatic_deps___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UninhabitedType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_uninhabited_type", 1092, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_triggers;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_union_type", 1096, CPyStatic_deps___globals);
        goto CPyL8;
    }
    cpy_r_triggers = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___UnionTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "visit_union_type", 1097, CPyStatic_deps___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_deps___TypeTriggersVisitor___get_type_triggers(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_union_type", 1098, CPyStatic_deps___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_triggers, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "visit_union_type", 1098, CPyStatic_deps___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL6: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    return cpy_r_triggers;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_triggers);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnionType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_union_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_union_type", 1095, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___TypeTriggersVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_deps___TypeTriggersVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_deps___TypeTriggersVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_deps___TypeTriggersVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.deps.TypeTriggersVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___TypeTriggersVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___merge_dependencies(PyObject *cpy_r_new_deps, PyObject *cpy_r_deps) {
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
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_new_deps);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetItemsIter(cpy_r_new_deps);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "merge_dependencies", 1103, CPyStatic_deps___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextItem(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r4.f3;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r9 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "merge_dependencies", 1103, CPyStatic_deps___globals, "str", cpy_r_r7);
        goto CPyL12;
    }
    if (likely(PySet_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "merge_dependencies", 1103, CPyStatic_deps___globals, "set", cpy_r_r8);
        goto CPyL13;
    }
    cpy_r_trigger = cpy_r_r9;
    cpy_r_targets = cpy_r_r10;
    cpy_r_r11 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_deps, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "merge_dependencies", 1104, CPyStatic_deps___globals);
        goto CPyL14;
    }
    if (likely(PySet_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "merge_dependencies", 1104, CPyStatic_deps___globals, "set", cpy_r_r11);
        goto CPyL14;
    }
    cpy_r_r13 = _PySet_Update(cpy_r_r12, cpy_r_targets);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/deps.py", "merge_dependencies", 1104, CPyStatic_deps___globals);
        goto CPyL15;
    }
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_new_deps, cpy_r_r2);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/deps.py", "merge_dependencies", 1103, CPyStatic_deps___globals);
        goto CPyL15;
    } else
        goto CPyL1;
CPyL8: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/deps.py", "merge_dependencies", 1103, CPyStatic_deps___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL11: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_targets);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_deps___merge_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"new_deps", "deps", 0};
    static CPyArg_Parser parser = {"OO:merge_dependencies", kwlist, 0};
    PyObject *obj_new_deps;
    PyObject *obj_deps;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_new_deps, &obj_deps)) {
        return NULL;
    }
    PyObject *arg_new_deps;
    if (likely(PyDict_Check(obj_new_deps)))
        arg_new_deps = obj_new_deps;
    else {
        CPy_TypeError("dict", obj_new_deps); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    char retval = CPyDef_deps___merge_dependencies(arg_new_deps, arg_deps);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "merge_dependencies", 1102, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps___non_trivial_bases(PyObject *cpy_r_info) {
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
    PyObject *cpy_r_base;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals);
        goto CPyL15;
    }
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "non_trivial_bases", "TypeInfo", "mro", 1108, CPyStatic_deps___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyList_GetSlice(cpy_r_r1, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals);
        goto CPyL16;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals, "list", cpy_r_r2);
        goto CPyL16;
    }
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL17;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely((Py_TYPE(cpy_r_r9) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r9) == CPyType_nodes___TypeInfo)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r9);
        goto CPyL18;
    }
    cpy_r_base = cpy_r_r10;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals);
        goto CPyL19;
    }
CPyL8: ;
    cpy_r_r12 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r13 = PyUnicode_Compare(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 == -1;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = PyErr_Occurred();
    cpy_r_r16 = cpy_r_r15 != NULL;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals);
        goto CPyL19;
    }
CPyL11: ;
    cpy_r_r18 = cpy_r_r13 != 0;
    if (!cpy_r_r18) goto CPyL20;
    cpy_r_r19 = PyList_Append(cpy_r_r0, cpy_r_base);
    CPy_DECREF(cpy_r_base);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/server/deps.py", "non_trivial_bases", 1108, CPyStatic_deps___globals);
        goto CPyL18;
    }
CPyL13: ;
    cpy_r_r21 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r21;
    goto CPyL5;
CPyL14: ;
    return cpy_r_r0;
CPyL15: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_base);
    goto CPyL15;
CPyL20: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL13;
}

PyObject *CPyPy_deps___non_trivial_bases(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:non_trivial_bases", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_deps___non_trivial_bases(arg_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "non_trivial_bases", 1107, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___has_user_bases(PyObject *cpy_r_info) {
    char cpy_r_r0;
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
    PyObject *cpy_r_base;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "has_user_bases", "TypeInfo", "mro", 1112, CPyStatic_deps___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyList_GetSlice(cpy_r_r1, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "has_user_bases", 1112, CPyStatic_deps___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "has_user_bases", 1112, CPyStatic_deps___globals, "list", cpy_r_r2);
        goto CPyL28;
    }
    cpy_r_r4 = 0;
CPyL4: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL29;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely((Py_TYPE(cpy_r_r9) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r9) == CPyType_nodes___TypeInfo)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "has_user_bases", 1112, CPyStatic_deps___globals, "mypy.nodes.TypeInfo", cpy_r_r9);
        goto CPyL30;
    }
    cpy_r_base = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_module_name;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "has_user_bases", "TypeInfo", "module_name", 1112, CPyStatic_deps___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r11);
CPyL7: ;
    cpy_r_r12 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r13 = PyUnicode_Compare(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 == -1;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = PyErr_Occurred();
    cpy_r_r16 = cpy_r_r15 != NULL;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r17 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/deps.py", "has_user_bases", -1, CPyStatic_deps___globals);
        goto CPyL31;
    }
CPyL10: ;
    cpy_r_r18 = cpy_r_r13 != 0;
    if (cpy_r_r18) goto CPyL12;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL17;
CPyL12: ;
    cpy_r_r20 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_module_name;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "has_user_bases", "TypeInfo", "module_name", 1112, CPyStatic_deps___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r20);
CPyL13: ;
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = PyUnicode_Compare(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 == -1;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = PyErr_Occurred();
    cpy_r_r25 = cpy_r_r24 != NULL;
    if (!cpy_r_r25) goto CPyL16;
    cpy_r_r26 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/server/deps.py", "has_user_bases", -1, CPyStatic_deps___globals);
        goto CPyL31;
    }
CPyL16: ;
    cpy_r_r27 = cpy_r_r22 != 0;
    cpy_r_r19 = cpy_r_r27;
CPyL17: ;
    if (cpy_r_r19) {
        goto CPyL19;
    } else
        goto CPyL32;
CPyL18: ;
    cpy_r_r28 = cpy_r_r19;
    goto CPyL24;
CPyL19: ;
    cpy_r_r29 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_module_name;
    if (unlikely(cpy_r_r29 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'module_name' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r29);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "has_user_bases", 1112, CPyStatic_deps___globals);
        goto CPyL30;
    }
CPyL20: ;
    cpy_r_r30 = CPyStatics[3876]; /* 'enum' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL23;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL23;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/server/deps.py", "has_user_bases", -1, CPyStatic_deps___globals);
        goto CPyL30;
    }
CPyL23: ;
    cpy_r_r36 = cpy_r_r31 != 0;
    cpy_r_r28 = cpy_r_r36;
CPyL24: ;
    if (cpy_r_r28) {
        goto CPyL33;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r0 = 1;
    goto CPyL27;
CPyL26: ;
    cpy_r_r37 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r37;
    goto CPyL4;
CPyL27: ;
    return cpy_r_r0;
CPyL28: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL29: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_base);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL18;
CPyL33: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL25;
}

PyObject *CPyPy_deps___has_user_bases(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:has_user_bases", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_deps___has_user_bases(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "has_user_bases", 1111, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "__get__", -1, CPyStatic_deps___globals);
    return NULL;
}

PyObject *CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____call__(PyObject *cpy_r___mypyc_self__, tuple_T2OO cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/deps.py", "<lambda>", "__mypyc_lambda__0_dump_all_dependencies_obj", "__mypyc_env__", 1134, CPyStatic_deps___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = cpy_r_x.f0;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    tuple_T2OO arg_x;
    PyObject *__tmp6542;
    if (unlikely(!(PyTuple_Check(obj_x) && PyTuple_GET_SIZE(obj_x) == 2))) {
        __tmp6542 = NULL;
        goto __LL6543;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_x, 0))))
        __tmp6542 = PyTuple_GET_ITEM(obj_x, 0);
    else {
        __tmp6542 = NULL;
    }
    if (__tmp6542 == NULL) goto __LL6543;
    if (likely(PySet_Check(PyTuple_GET_ITEM(obj_x, 1))))
        __tmp6542 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp6542 = NULL;
    }
    if (__tmp6542 == NULL) goto __LL6543;
    __tmp6542 = obj_x;
__LL6543: ;
    if (unlikely(__tmp6542 == NULL)) {
        CPy_TypeError("tuple[str, set]", obj_x); goto fail;
    } else {
        PyObject *__tmp6544 = PyTuple_GET_ITEM(obj_x, 0);
        PyObject *__tmp6545;
        if (likely(PyUnicode_Check(__tmp6544)))
            __tmp6545 = __tmp6544;
        else {
            CPy_TypeError("str", __tmp6544); 
            __tmp6545 = NULL;
        }
        arg_x.f0 = __tmp6545;
        PyObject *__tmp6546 = PyTuple_GET_ITEM(obj_x, 1);
        PyObject *__tmp6547;
        if (likely(PySet_Check(__tmp6546)))
            __tmp6547 = __tmp6546;
        else {
            CPy_TypeError("set", __tmp6546); 
            __tmp6547 = NULL;
        }
        arg_x.f1 = __tmp6547;
    }
    PyObject *retval = CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj_____call__(arg___mypyc_self__, arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "<lambda>", 1134, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps___dump_all_dependencies(PyObject *cpy_r_modules, PyObject *cpy_r_type_map, tuple_T2II cpy_r_python_version, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_all_deps;
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
    PyObject *cpy_r_id;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_deps;
    CPyTagged cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T4CIOO cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T2OO cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    CPyPtr cpy_r_r98;
    int64_t cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    CPyTagged cpy_r_r113;
    char cpy_r_r114;
    cpy_r_r0 = CPyDef_deps___dump_all_dependencies_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1115, CPyStatic_deps___globals);
        goto CPyL65;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1122, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_all_deps = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_modules);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_modules);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1123, CPyStatic_deps___globals);
        goto CPyL67;
    }
CPyL3: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL68;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1123, CPyStatic_deps___globals, "str", cpy_r_r9);
        goto CPyL69;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___MypyFile))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1123, CPyStatic_deps___globals, "mypy.nodes.MypyFile", cpy_r_r10);
        goto CPyL70;
    }
    cpy_r_id = cpy_r_r11;
    cpy_r_node = cpy_r_r12;
    cpy_r_r13 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_id, cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL9;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", -1, CPyStatic_deps___globals);
        goto CPyL71;
    }
CPyL9: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL15;
CPyL11: ;
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = PyUnicode_Compare(cpy_r_id, cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 == -1;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = PyErr_Occurred();
    cpy_r_r25 = cpy_r_r24 != NULL;
    if (!cpy_r_r25) goto CPyL14;
    cpy_r_r26 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", -1, CPyStatic_deps___globals);
        goto CPyL71;
    }
CPyL14: ;
    cpy_r_r27 = cpy_r_r22 == 0;
    cpy_r_r20 = cpy_r_r27;
CPyL15: ;
    if (cpy_r_r20) goto CPyL72;
    cpy_r_r28 = CPyStatics[5321]; /* '/typeshed/' */
    cpy_r_r29 = ((mypy___nodes___MypyFileObject *)cpy_r_node)->_path;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = PySequence_Contains(cpy_r_r29, cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1126, CPyStatic_deps___globals);
        goto CPyL71;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) goto CPyL72;
    cpy_r_r33 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1128, CPyStatic_deps___globals);
        goto CPyL71;
    }
CPyL19: ;
    cpy_r_r34 = PyUnicode_Compare(cpy_r_id, cpy_r_r33);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 == -1;
    if (!cpy_r_r35) goto CPyL22;
    cpy_r_r36 = PyErr_Occurred();
    cpy_r_r37 = cpy_r_r36 != NULL;
    if (!cpy_r_r37) goto CPyL22;
    cpy_r_r38 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1128, CPyStatic_deps___globals);
        goto CPyL73;
    }
CPyL22: ;
    cpy_r_r39 = cpy_r_r34 == 0;
    if (cpy_r_r39) {
        goto CPyL25;
    } else
        goto CPyL74;
CPyL23: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1128, CPyStatic_deps___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r41 = CPyDef_deps___get_dependencies(cpy_r_node, cpy_r_type_map, cpy_r_python_version, cpy_r_options);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1129, CPyStatic_deps___globals);
        goto CPyL75;
    }
    cpy_r_deps = cpy_r_r41;
    cpy_r_r42 = 0;
    cpy_r_r43 = PyDict_Size(cpy_r_deps);
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = CPyDict_GetItemsIter(cpy_r_deps);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1130, CPyStatic_deps___globals);
        goto CPyL76;
    }
CPyL27: ;
    cpy_r_r46 = CPyDict_NextItem(cpy_r_r45, cpy_r_r42);
    cpy_r_r47 = cpy_r_r46.f1;
    cpy_r_r42 = cpy_r_r47;
    cpy_r_r48 = cpy_r_r46.f0;
    if (!cpy_r_r48) goto CPyL77;
    cpy_r_r49 = cpy_r_r46.f2;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = cpy_r_r46.f3;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r46.f2);
    CPy_DECREF(cpy_r_r46.f3);
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r51 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1130, CPyStatic_deps___globals, "str", cpy_r_r49);
        goto CPyL78;
    }
    if (likely(PySet_Check(cpy_r_r50)))
        cpy_r_r52 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1130, CPyStatic_deps___globals, "set", cpy_r_r50);
        goto CPyL79;
    }
    cpy_r_trigger = cpy_r_r51;
    cpy_r_targets = cpy_r_r52;
    cpy_r_r53 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_all_deps, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1131, CPyStatic_deps___globals);
        goto CPyL80;
    }
    if (likely(PySet_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1131, CPyStatic_deps___globals, "set", cpy_r_r53);
        goto CPyL80;
    }
    cpy_r_r55 = _PySet_Update(cpy_r_r54, cpy_r_targets);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1131, CPyStatic_deps___globals);
        goto CPyL81;
    }
    cpy_r_r57 = CPyDict_CheckSize(cpy_r_deps, cpy_r_r44);
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1130, CPyStatic_deps___globals);
        goto CPyL81;
    } else
        goto CPyL27;
CPyL34: ;
    cpy_r_r58 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1130, CPyStatic_deps___globals);
        goto CPyL75;
    }
CPyL35: ;
    cpy_r_r59 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r4);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1123, CPyStatic_deps___globals);
        goto CPyL75;
    } else
        goto CPyL3;
CPyL36: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1123, CPyStatic_deps___globals);
        goto CPyL67;
    }
    cpy_r_r61 = CPyStatic_typestate___type_state;
    if (unlikely(cpy_r_r61 == NULL)) {
        goto CPyL82;
    } else
        goto CPyL40;
CPyL38: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1132, CPyStatic_deps___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r63 = CPyDef_typestate___TypeState___add_all_protocol_deps(cpy_r_r61, cpy_r_all_deps);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1132, CPyStatic_deps___globals);
        goto CPyL67;
    }
    cpy_r_r64 = CPyDict_ItemsView(cpy_r_all_deps);
    CPy_DECREF(cpy_r_all_deps);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals);
        goto CPyL66;
    }
    cpy_r_r65 = CPyDef_deps_____mypyc_lambda__0_dump_all_dependencies_obj();
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals);
        goto CPyL83;
    }
    if (((mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *)cpy_r_r65)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *)cpy_r_r65)->___mypyc_env__);
    }
    ((mypy___server___deps_____mypyc_lambda__0_dump_all_dependencies_objObject *)cpy_r_r65)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals);
        goto CPyL84;
    }
    cpy_r_r67 = CPyModule_builtins;
    cpy_r_r68 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals);
        goto CPyL84;
    }
    PyObject *cpy_r_r70[2] = {cpy_r_r64, cpy_r_r65};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, cpy_r_r72);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals);
        goto CPyL84;
    }
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    if (likely(PyList_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals, "list", cpy_r_r73);
        goto CPyL65;
    }
    cpy_r_r75 = 0;
CPyL48: ;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = (Py_ssize_t)cpy_r_r75 < (Py_ssize_t)cpy_r_r78;
    if (!cpy_r_r79) goto CPyL85;
    cpy_r_r80 = CPyList_GetItemUnsafe(cpy_r_r74, cpy_r_r75);
    PyObject *__tmp6548;
    if (unlikely(!(PyTuple_Check(cpy_r_r80) && PyTuple_GET_SIZE(cpy_r_r80) == 2))) {
        __tmp6548 = NULL;
        goto __LL6549;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r80, 0))))
        __tmp6548 = PyTuple_GET_ITEM(cpy_r_r80, 0);
    else {
        __tmp6548 = NULL;
    }
    if (__tmp6548 == NULL) goto __LL6549;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r80, 1))))
        __tmp6548 = PyTuple_GET_ITEM(cpy_r_r80, 1);
    else {
        __tmp6548 = NULL;
    }
    if (__tmp6548 == NULL) goto __LL6549;
    __tmp6548 = cpy_r_r80;
__LL6549: ;
    if (unlikely(__tmp6548 == NULL)) {
        CPy_TypeError("tuple[str, set]", cpy_r_r80); cpy_r_r81 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6550 = PyTuple_GET_ITEM(cpy_r_r80, 0);
        CPy_INCREF(__tmp6550);
        PyObject *__tmp6551;
        if (likely(PyUnicode_Check(__tmp6550)))
            __tmp6551 = __tmp6550;
        else {
            CPy_TypeError("str", __tmp6550); 
            __tmp6551 = NULL;
        }
        cpy_r_r81.f0 = __tmp6551;
        PyObject *__tmp6552 = PyTuple_GET_ITEM(cpy_r_r80, 1);
        CPy_INCREF(__tmp6552);
        PyObject *__tmp6553;
        if (likely(PySet_Check(__tmp6552)))
            __tmp6553 = __tmp6552;
        else {
            CPy_TypeError("set", __tmp6552); 
            __tmp6553 = NULL;
        }
        cpy_r_r81.f1 = __tmp6553;
    }
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1134, CPyStatic_deps___globals);
        goto CPyL86;
    }
    cpy_r_r82 = cpy_r_r81.f0;
    CPy_INCREF(cpy_r_r82);
    cpy_r_trigger = cpy_r_r82;
    cpy_r_r83 = cpy_r_r81.f1;
    CPy_INCREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r81.f0);
    CPy_DECREF(cpy_r_r81.f1);
    cpy_r_targets = cpy_r_r83;
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[190]; /* 'print' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1135, CPyStatic_deps___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_trigger};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1135, CPyStatic_deps___globals);
        goto CPyL87;
    } else
        goto CPyL88;
CPyL52: ;
    CPy_DECREF(cpy_r_trigger);
    cpy_r_r90 = CPyModule_builtins;
    cpy_r_r91 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1136, CPyStatic_deps___globals);
        goto CPyL89;
    }
    PyObject *cpy_r_r93[1] = {cpy_r_targets};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = _PyObject_Vectorcall(cpy_r_r92, cpy_r_r94, 1, 0);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1136, CPyStatic_deps___globals);
        goto CPyL89;
    }
    CPy_DECREF(cpy_r_targets);
    if (likely(PyList_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1136, CPyStatic_deps___globals, "list", cpy_r_r95);
        goto CPyL86;
    }
    cpy_r_r97 = 0;
CPyL56: ;
    cpy_r_r98 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r99 = *(int64_t *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 << 1;
    cpy_r_r101 = (Py_ssize_t)cpy_r_r97 < (Py_ssize_t)cpy_r_r100;
    if (!cpy_r_r101) goto CPyL90;
    cpy_r_r102 = CPyList_GetItemUnsafe(cpy_r_r96, cpy_r_r97);
    if (likely(PyUnicode_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/server/deps.py", "dump_all_dependencies", 1136, CPyStatic_deps___globals, "str", cpy_r_r102);
        goto CPyL91;
    }
    cpy_r_target = cpy_r_r103;
    cpy_r_r104 = CPyStatics[309]; /* '    ' */
    cpy_r_r105 = CPyStr_Build(2, cpy_r_r104, cpy_r_target);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1137, CPyStatic_deps___globals);
        goto CPyL91;
    }
    cpy_r_r106 = CPyModule_builtins;
    cpy_r_r107 = CPyStatics[190]; /* 'print' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1137, CPyStatic_deps___globals);
        goto CPyL92;
    }
    PyObject *cpy_r_r109[1] = {cpy_r_r105};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = _PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 1, 0);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1137, CPyStatic_deps___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL61: ;
    CPy_DECREF(cpy_r_r105);
    cpy_r_r112 = cpy_r_r97 + 2;
    cpy_r_r97 = cpy_r_r112;
    goto CPyL56;
CPyL63: ;
    cpy_r_r113 = cpy_r_r75 + 2;
    cpy_r_r75 = cpy_r_r113;
    goto CPyL48;
CPyL64: ;
    return 1;
CPyL65: ;
    cpy_r_r114 = 2;
    return cpy_r_r114;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    goto CPyL65;
CPyL68: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL36;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL65;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_node);
    goto CPyL65;
CPyL72: ;
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_node);
    goto CPyL35;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_node);
    goto CPyL65;
CPyL74: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_all_deps);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_node);
    goto CPyL23;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    goto CPyL65;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_deps);
    goto CPyL65;
CPyL77: ;
    CPy_DECREF(cpy_r_deps);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46.f2);
    CPy_DECREF(cpy_r_r46.f3);
    goto CPyL34;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r50);
    goto CPyL65;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r51);
    goto CPyL65;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_targets);
    goto CPyL65;
CPyL81: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r45);
    goto CPyL65;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_all_deps);
    goto CPyL38;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r64);
    goto CPyL65;
CPyL84: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL65;
CPyL85: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL64;
CPyL86: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL65;
CPyL87: ;
    CPy_DecRef(cpy_r_trigger);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r74);
    goto CPyL65;
CPyL88: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL52;
CPyL89: ;
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r74);
    goto CPyL65;
CPyL90: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL63;
CPyL91: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r96);
    goto CPyL65;
CPyL92: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r105);
    goto CPyL65;
CPyL93: ;
    CPy_DECREF(cpy_r_r111);
    goto CPyL61;
}

PyObject *CPyPy_deps___dump_all_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "type_map", "python_version", "options", 0};
    static CPyArg_Parser parser = {"OOOO:dump_all_dependencies", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_type_map;
    PyObject *obj_python_version;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_type_map, &obj_python_version, &obj_options)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    tuple_T2II arg_python_version;
    PyObject *__tmp6554;
    if (unlikely(!(PyTuple_Check(obj_python_version) && PyTuple_GET_SIZE(obj_python_version) == 2))) {
        __tmp6554 = NULL;
        goto __LL6555;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 0))))
        __tmp6554 = PyTuple_GET_ITEM(obj_python_version, 0);
    else {
        __tmp6554 = NULL;
    }
    if (__tmp6554 == NULL) goto __LL6555;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 1))))
        __tmp6554 = PyTuple_GET_ITEM(obj_python_version, 1);
    else {
        __tmp6554 = NULL;
    }
    if (__tmp6554 == NULL) goto __LL6555;
    __tmp6554 = obj_python_version;
__LL6555: ;
    if (unlikely(__tmp6554 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_python_version); goto fail;
    } else {
        PyObject *__tmp6556 = PyTuple_GET_ITEM(obj_python_version, 0);
        CPyTagged __tmp6557;
        if (likely(PyLong_Check(__tmp6556)))
            __tmp6557 = CPyTagged_BorrowFromObject(__tmp6556);
        else {
            CPy_TypeError("int", __tmp6556); goto fail;
        }
        arg_python_version.f0 = __tmp6557;
        PyObject *__tmp6558 = PyTuple_GET_ITEM(obj_python_version, 1);
        CPyTagged __tmp6559;
        if (likely(PyLong_Check(__tmp6558)))
            __tmp6559 = CPyTagged_BorrowFromObject(__tmp6558);
        else {
            CPy_TypeError("int", __tmp6558); goto fail;
        }
        arg_python_version.f1 = __tmp6559;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_deps___dump_all_dependencies(arg_modules, arg_type_map, arg_python_version, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/deps.py", "dump_all_dependencies", 1115, CPyStatic_deps___globals);
    return NULL;
}

char CPyDef_deps_____top_level__(void) {
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
    char cpy_r_r62;
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
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", -1, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_deps___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 82, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_deps___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 84, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9755]; /* ('List',) */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_deps___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 85, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9756]; /* ('GDEF', 'LDEF', 'MDEF', 'AssertTypeExpr',
                                     'AssignmentStmt', 'AwaitExpr', 'Block', 'CallExpr',
                                     'CastExpr', 'ClassDef', 'ComparisonExpr', 'Decorator',
                                     'DelStmt', 'DictionaryComprehension', 'EnumCallExpr',
                                     'Expression', 'ForStmt', 'FuncBase', 'FuncDef',
                                     'GeneratorExpr', 'Import', 'ImportAll', 'ImportFrom',
                                     'IndexExpr', 'MemberExpr', 'MypyFile', 'NamedTupleExpr',
                                     'NameExpr', 'NewTypeExpr', 'Node',
                                     'OperatorAssignmentStmt', 'OpExpr', 'OverloadedFuncDef',
                                     'RefExpr', 'StarExpr', 'SuperExpr', 'TupleExpr',
                                     'TypeAliasExpr', 'TypeApplication', 'TypedDictExpr',
                                     'TypeInfo', 'TypeVarExpr', 'UnaryExpr', 'Var',
                                     'WithStmt', 'YieldFromExpr') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_deps___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 87, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9757]; /* ('op_methods', 'ops_with_inplace_method',
                                     'reverse_op_methods', 'unary_op_methods') */
    cpy_r_r22 = CPyStatics[3744]; /* 'mypy.operators' */
    cpy_r_r23 = CPyStatic_deps___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 135, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___operators = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___operators);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r26 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r27 = CPyStatic_deps___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 141, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___options = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9197]; /* ('Scope',) */
    cpy_r_r30 = CPyStatics[1010]; /* 'mypy.scope' */
    cpy_r_r31 = CPyStatic_deps___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 142, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___scope = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___scope);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9758]; /* ('make_trigger', 'make_wildcard_trigger') */
    cpy_r_r34 = CPyStatics[4443]; /* 'mypy.server.trigger' */
    cpy_r_r35 = CPyStatic_deps___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 143, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___server___trigger = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___server___trigger);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r38 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r39 = CPyStatic_deps___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 144, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___traverser = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9759]; /* ('bind_self',) */
    cpy_r_r42 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r43 = CPyStatic_deps___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 145, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___typeops = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9760]; /* ('AnyType', 'CallableType', 'DeletedType', 'ErasedType',
                                     'FunctionLike', 'Instance', 'LiteralType', 'NoneType',
                                     'Overloaded', 'Parameters', 'ParamSpecType',
                                     'PartialType', 'ProperType', 'TupleType', 'Type',
                                     'TypeAliasType', 'TypedDictType', 'TypeOfAny',
                                     'TypeType', 'TypeVarTupleType', 'TypeVarType',
                                     'TypeVisitor', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType', 'get_proper_type') */
    cpy_r_r46 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r47 = CPyStatic_deps___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 146, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___types = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r50 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r51 = CPyStatic_deps___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 175, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___typestate = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[9761]; /* ('correct_relative_import',) */
    cpy_r_r54 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r55 = CPyStatic_deps___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 176, CPyStatic_deps___globals);
        goto CPyL32;
    }
    CPyModule_mypy___util = cpy_r_r56;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r58 = PyTuple_Pack(1, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 219, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r59 = CPyStatics[257]; /* 'mypy.server.deps' */
    cpy_r_r60 = (PyObject *)CPyType_deps___DependencyVisitor_template;
    cpy_r_r61 = CPyType_FromTemplate(cpy_r_r60, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 219, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r62 = CPyDef_deps___DependencyVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", -1, CPyStatic_deps___globals);
        goto CPyL33;
    }
    cpy_r_r63 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r64 = CPyStatics[1104]; /* 'scope' */
    cpy_r_r65 = CPyStatics[4340]; /* 'type_map' */
    cpy_r_r66 = CPyStatics[4086]; /* 'alias_deps' */
    cpy_r_r67 = CPyStatics[865]; /* 'map' */
    cpy_r_r68 = CPyStatics[767]; /* 'is_class' */
    cpy_r_r69 = CPyStatics[5323]; /* 'is_package_init_file' */
    cpy_r_r70 = CPyStatics[159]; /* 'options' */
    cpy_r_r71 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r72 = PyTuple_Pack(8, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 219, CPyStatic_deps___globals);
        goto CPyL33;
    }
    cpy_r_r73 = PyObject_SetAttr(cpy_r_r61, cpy_r_r63, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 219, CPyStatic_deps___globals);
        goto CPyL33;
    }
    CPyType_deps___DependencyVisitor = (PyTypeObject *)cpy_r_r61;
    CPy_INCREF(CPyType_deps___DependencyVisitor);
    cpy_r_r75 = CPyStatic_deps___globals;
    cpy_r_r76 = CPyStatics[5324]; /* 'DependencyVisitor' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 219, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r79 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r80 = CPyStatic_deps___globals;
    cpy_r_r81 = CPyStatics[81]; /* 'List' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r83 = (PyObject *)&PyUnicode_Type;
    cpy_r_r84 = PyObject_GetItem(cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r85 = PyObject_GetItem(cpy_r_r79, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r86 = PyTuple_Pack(1, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r87 = CPyStatics[257]; /* 'mypy.server.deps' */
    cpy_r_r88 = (PyObject *)CPyType_deps___TypeTriggersVisitor_template;
    cpy_r_r89 = CPyType_FromTemplate(cpy_r_r88, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL32;
    }
    cpy_r_r90 = CPyDef_deps___TypeTriggersVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", -1, CPyStatic_deps___globals);
        goto CPyL34;
    }
    cpy_r_r91 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r92 = CPyStatics[690]; /* 'deps' */
    cpy_r_r93 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r94 = CPyStatics[5325]; /* 'use_logical_deps' */
    cpy_r_r95 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r96 = PyTuple_Pack(4, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL34;
    }
    cpy_r_r97 = PyObject_SetAttr(cpy_r_r89, cpy_r_r91, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL34;
    }
    CPyType_deps___TypeTriggersVisitor = (PyTypeObject *)cpy_r_r89;
    CPy_INCREF(CPyType_deps___TypeTriggersVisitor);
    cpy_r_r99 = CPyStatic_deps___globals;
    cpy_r_r100 = CPyStatics[5326]; /* 'TypeTriggersVisitor' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/server/deps.py", "<module>", 950, CPyStatic_deps___globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r103 = 2;
    return cpy_r_r103;
CPyL33: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL32;
}
