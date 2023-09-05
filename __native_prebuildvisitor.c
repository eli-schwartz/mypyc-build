#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
prebuildvisitor___PreBuildVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef prebuildvisitor___PreBuildVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *prebuildvisitor___PreBuildVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_prebuildvisitor___PreBuildVisitor(PyObject *cpy_r_errors, PyObject *cpy_r_current_file, PyObject *cpy_r_decorators_to_remove);

static PyObject *
prebuildvisitor___PreBuildVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_prebuildvisitor___PreBuildVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = prebuildvisitor___PreBuildVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_prebuildvisitor___PreBuildVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
prebuildvisitor___PreBuildVisitor_traverse(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_free_variables);
    Py_VISIT(self->_symbols_to_funcs);
    Py_VISIT(self->_funcs);
    Py_VISIT(self->_prop_setters);
    Py_VISIT(self->_encapsulating_funcs);
    Py_VISIT(self->_nested_funcs);
    Py_VISIT(self->_funcs_to_decorators);
    Py_VISIT(self->_decorators_to_remove);
    Py_VISIT(self->_module_import_groups);
    Py_VISIT(self->__current_import_group);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_current_file);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject))));
    return 0;
}

static int
prebuildvisitor___PreBuildVisitor_clear(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self)
{
    Py_CLEAR(self->_free_variables);
    Py_CLEAR(self->_symbols_to_funcs);
    Py_CLEAR(self->_funcs);
    Py_CLEAR(self->_prop_setters);
    Py_CLEAR(self->_encapsulating_funcs);
    Py_CLEAR(self->_nested_funcs);
    Py_CLEAR(self->_funcs_to_decorators);
    Py_CLEAR(self->_decorators_to_remove);
    Py_CLEAR(self->_module_import_groups);
    Py_CLEAR(self->__current_import_group);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_current_file);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject))));
    return 0;
}

static void
prebuildvisitor___PreBuildVisitor_dealloc(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, prebuildvisitor___PreBuildVisitor_dealloc)
    prebuildvisitor___PreBuildVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem prebuildvisitor___PreBuildVisitor_vtable[188];
static CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_prebuildvisitor___PreBuildVisitor_trait_vtable_setup(void)
{
    CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_block__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__NodeVisitor_glue,
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
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_trait_vtable, prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_offset_table, prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExpressionVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExpressionVisitor_glue,
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
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_offset_table, prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_block__StatementVisitor_glue,
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
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_trait_vtable, prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_offset_table, prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_trait_vtable, prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_offset_table, prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem prebuildvisitor___PreBuildVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)prebuildvisitor___PreBuildVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_block,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_var__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__ExtendedTraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__ExtendedTraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__ExtendedTraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_block,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExtendedTraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExtendedTraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor_____init__,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_block,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_func,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_import,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_var,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___visit_symbol_node,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___is_parent,
        (CPyVTableItem)CPyDef_prebuildvisitor___PreBuildVisitor___add_free_variable,
    };
    memcpy(prebuildvisitor___PreBuildVisitor_vtable, prebuildvisitor___PreBuildVisitor_vtable_scratch, sizeof(prebuildvisitor___PreBuildVisitor_vtable));
    return 1;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_free_variables(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_free_variables(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_symbols_to_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_symbols_to_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_prop_setters(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_prop_setters(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_encapsulating_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_encapsulating_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_nested_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_nested_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_funcs_to_decorators(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_funcs_to_decorators(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_decorators_to_remove(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_decorators_to_remove(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_module_import_groups(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_module_import_groups(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get__current_import_group(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set__current_import_group(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_errors(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_errors(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prebuildvisitor___PreBuildVisitor_get_current_file(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure);
static int
prebuildvisitor___PreBuildVisitor_set_current_file(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef prebuildvisitor___PreBuildVisitor_getseters[] = {
    {"free_variables",
     (getter)prebuildvisitor___PreBuildVisitor_get_free_variables, (setter)prebuildvisitor___PreBuildVisitor_set_free_variables,
     NULL, NULL},
    {"symbols_to_funcs",
     (getter)prebuildvisitor___PreBuildVisitor_get_symbols_to_funcs, (setter)prebuildvisitor___PreBuildVisitor_set_symbols_to_funcs,
     NULL, NULL},
    {"funcs",
     (getter)prebuildvisitor___PreBuildVisitor_get_funcs, (setter)prebuildvisitor___PreBuildVisitor_set_funcs,
     NULL, NULL},
    {"prop_setters",
     (getter)prebuildvisitor___PreBuildVisitor_get_prop_setters, (setter)prebuildvisitor___PreBuildVisitor_set_prop_setters,
     NULL, NULL},
    {"encapsulating_funcs",
     (getter)prebuildvisitor___PreBuildVisitor_get_encapsulating_funcs, (setter)prebuildvisitor___PreBuildVisitor_set_encapsulating_funcs,
     NULL, NULL},
    {"nested_funcs",
     (getter)prebuildvisitor___PreBuildVisitor_get_nested_funcs, (setter)prebuildvisitor___PreBuildVisitor_set_nested_funcs,
     NULL, NULL},
    {"funcs_to_decorators",
     (getter)prebuildvisitor___PreBuildVisitor_get_funcs_to_decorators, (setter)prebuildvisitor___PreBuildVisitor_set_funcs_to_decorators,
     NULL, NULL},
    {"decorators_to_remove",
     (getter)prebuildvisitor___PreBuildVisitor_get_decorators_to_remove, (setter)prebuildvisitor___PreBuildVisitor_set_decorators_to_remove,
     NULL, NULL},
    {"module_import_groups",
     (getter)prebuildvisitor___PreBuildVisitor_get_module_import_groups, (setter)prebuildvisitor___PreBuildVisitor_set_module_import_groups,
     NULL, NULL},
    {"_current_import_group",
     (getter)prebuildvisitor___PreBuildVisitor_get__current_import_group, (setter)prebuildvisitor___PreBuildVisitor_set__current_import_group,
     NULL, NULL},
    {"errors",
     (getter)prebuildvisitor___PreBuildVisitor_get_errors, (setter)prebuildvisitor___PreBuildVisitor_set_errors,
     NULL, NULL},
    {"current_file",
     (getter)prebuildvisitor___PreBuildVisitor_get_current_file, (setter)prebuildvisitor___PreBuildVisitor_set_current_file,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef prebuildvisitor___PreBuildVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_func,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_symbol_node",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___visit_symbol_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_parent",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___is_parent,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_free_variable",
     (PyCFunction)CPyPy_prebuildvisitor___PreBuildVisitor___add_free_variable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_prebuildvisitor___PreBuildVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "PreBuildVisitor",
    .tp_new = prebuildvisitor___PreBuildVisitor_new,
    .tp_dealloc = (destructor)prebuildvisitor___PreBuildVisitor_dealloc,
    .tp_traverse = (traverseproc)prebuildvisitor___PreBuildVisitor_traverse,
    .tp_clear = (inquiry)prebuildvisitor___PreBuildVisitor_clear,
    .tp_getset = prebuildvisitor___PreBuildVisitor_getseters,
    .tp_methods = prebuildvisitor___PreBuildVisitor_methods,
    .tp_init = prebuildvisitor___PreBuildVisitor_init,
    .tp_members = prebuildvisitor___PreBuildVisitor_members,
    .tp_basicsize = sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_prebuildvisitor___PreBuildVisitor_template = &CPyType_prebuildvisitor___PreBuildVisitor_template_;

static PyObject *
prebuildvisitor___PreBuildVisitor_setup(PyTypeObject *type)
{
    mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self;
    self = (mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = prebuildvisitor___PreBuildVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor(PyObject *cpy_r_errors, PyObject *cpy_r_current_file, PyObject *cpy_r_decorators_to_remove)
{
    PyObject *self = prebuildvisitor___PreBuildVisitor_setup(CPyType_prebuildvisitor___PreBuildVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_prebuildvisitor___PreBuildVisitor_____init__(self, cpy_r_errors, cpy_r_current_file, cpy_r_decorators_to_remove);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_free_variables(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_free_variables == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'free_variables' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_free_variables);
    PyObject *retval = self->_free_variables;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_free_variables(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'free_variables' cannot be deleted");
        return -1;
    }
    if (self->_free_variables != NULL) {
        CPy_DECREF(self->_free_variables);
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
    self->_free_variables = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_symbols_to_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_symbols_to_funcs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'symbols_to_funcs' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_symbols_to_funcs);
    PyObject *retval = self->_symbols_to_funcs;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_symbols_to_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'symbols_to_funcs' cannot be deleted");
        return -1;
    }
    if (self->_symbols_to_funcs != NULL) {
        CPy_DECREF(self->_symbols_to_funcs);
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
    self->_symbols_to_funcs = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_funcs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'funcs' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_funcs);
    PyObject *retval = self->_funcs;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'funcs' cannot be deleted");
        return -1;
    }
    if (self->_funcs != NULL) {
        CPy_DECREF(self->_funcs);
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
    self->_funcs = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_prop_setters(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_prop_setters == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'prop_setters' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_prop_setters);
    PyObject *retval = self->_prop_setters;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_prop_setters(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'prop_setters' cannot be deleted");
        return -1;
    }
    if (self->_prop_setters != NULL) {
        CPy_DECREF(self->_prop_setters);
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
    self->_prop_setters = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_encapsulating_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_encapsulating_funcs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'encapsulating_funcs' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_encapsulating_funcs);
    PyObject *retval = self->_encapsulating_funcs;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_encapsulating_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'encapsulating_funcs' cannot be deleted");
        return -1;
    }
    if (self->_encapsulating_funcs != NULL) {
        CPy_DECREF(self->_encapsulating_funcs);
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
    self->_encapsulating_funcs = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_nested_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_nested_funcs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'nested_funcs' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_nested_funcs);
    PyObject *retval = self->_nested_funcs;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_nested_funcs(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'nested_funcs' cannot be deleted");
        return -1;
    }
    if (self->_nested_funcs != NULL) {
        CPy_DECREF(self->_nested_funcs);
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
    self->_nested_funcs = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_funcs_to_decorators(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_funcs_to_decorators == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'funcs_to_decorators' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_funcs_to_decorators);
    PyObject *retval = self->_funcs_to_decorators;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_funcs_to_decorators(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'funcs_to_decorators' cannot be deleted");
        return -1;
    }
    if (self->_funcs_to_decorators != NULL) {
        CPy_DECREF(self->_funcs_to_decorators);
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
    self->_funcs_to_decorators = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_decorators_to_remove(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_decorators_to_remove == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'decorators_to_remove' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_decorators_to_remove);
    PyObject *retval = self->_decorators_to_remove;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_decorators_to_remove(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'decorators_to_remove' cannot be deleted");
        return -1;
    }
    if (self->_decorators_to_remove != NULL) {
        CPy_DECREF(self->_decorators_to_remove);
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
    self->_decorators_to_remove = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_module_import_groups(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_module_import_groups == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_import_groups' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_import_groups);
    PyObject *retval = self->_module_import_groups;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_module_import_groups(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'module_import_groups' cannot be deleted");
        return -1;
    }
    if (self->_module_import_groups != NULL) {
        CPy_DECREF(self->_module_import_groups);
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
    self->_module_import_groups = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get__current_import_group(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->__current_import_group == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_current_import_group' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->__current_import_group);
    PyObject *retval = self->__current_import_group;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set__current_import_group(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute '_current_import_group' cannot be deleted");
        return -1;
    }
    if (self->__current_import_group != NULL) {
        CPy_DECREF(self->__current_import_group);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_nodes___Import)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10396;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10396;
    CPy_TypeError("mypy.nodes.Import or None", value); 
    tmp = NULL;
__LL10396: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__current_import_group = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_errors(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'errors' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_errors);
    PyObject *retval = self->_errors;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_errors(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'errors' cannot be deleted");
        return -1;
    }
    if (self->_errors != NULL) {
        CPy_DECREF(self->_errors);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypyc___errors___Errors))
        tmp = value;
    else {
        CPy_TypeError("mypyc.errors.Errors", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_errors = tmp;
    return 0;
}

static PyObject *
prebuildvisitor___PreBuildVisitor_get_current_file(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, void *closure)
{
    if (unlikely(self->_current_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'current_file' of 'PreBuildVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_current_file);
    PyObject *retval = self->_current_file;
    return retval;
}

static int
prebuildvisitor___PreBuildVisitor_set_current_file(mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PreBuildVisitor' object attribute 'current_file' cannot be deleted");
        return -1;
    }
    if (self->_current_file != NULL) {
        CPy_DECREF(self->_current_file);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___MypyFile))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_current_file = tmp;
    return 0;
}
static PyMethodDef prebuildvisitormodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef prebuildvisitormodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.prebuildvisitor",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    prebuildvisitormodule_methods
};

PyObject *CPyInit_mypyc___irbuild___prebuildvisitor(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___prebuildvisitor_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___prebuildvisitor_internal);
        return CPyModule_mypyc___irbuild___prebuildvisitor_internal;
    }
    CPyModule_mypyc___irbuild___prebuildvisitor_internal = PyModule_Create(&prebuildvisitormodule);
    if (unlikely(CPyModule_mypyc___irbuild___prebuildvisitor_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___prebuildvisitor_internal, "__name__");
    CPyStatic_prebuildvisitor___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___prebuildvisitor_internal);
    if (unlikely(CPyStatic_prebuildvisitor___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_prebuildvisitor_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___prebuildvisitor_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___prebuildvisitor_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_prebuildvisitor___PreBuildVisitor);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_errors, PyObject *cpy_r_current_file, PyObject *cpy_r_decorators_to_remove) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
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
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor_____init__(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 43, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 47, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_free_variables != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_free_variables);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_free_variables = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 47, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 54, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 54, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 57, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 57, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 60, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_prop_setters != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_prop_setters);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_prop_setters = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 60, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 64, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_encapsulating_funcs != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_encapsulating_funcs);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_encapsulating_funcs = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 64, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 67, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_nested_funcs != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_nested_funcs);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_nested_funcs = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 67, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r13 = PyDict_New();
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 70, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs_to_decorators != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs_to_decorators);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs_to_decorators = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 70, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_decorators_to_remove);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_decorators_to_remove != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_decorators_to_remove);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_decorators_to_remove = cpy_r_decorators_to_remove;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 73, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 78, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_module_import_groups != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_module_import_groups);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_module_import_groups = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 78, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 79, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_errors);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_errors != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_errors);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_errors = cpy_r_errors;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 81, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_current_file);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_current_file != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_current_file);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_current_file = cpy_r_current_file;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 83, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", "current_file", "decorators_to_remove", 0};
    PyObject *obj_errors;
    PyObject *obj_current_file;
    PyObject *obj_decorators_to_remove;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_errors, &obj_current_file, &obj_decorators_to_remove)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_current_file;
    if (likely(Py_TYPE(obj_current_file) == CPyType_nodes___MypyFile))
        arg_current_file = obj_current_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_current_file); 
        goto fail;
    }
    PyObject *arg_decorators_to_remove;
    if (likely(PyDict_Check(obj_decorators_to_remove)))
        arg_decorators_to_remove = obj_decorators_to_remove;
    else {
        CPy_TypeError("dict", obj_decorators_to_remove); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor_____init__(arg_self, arg_errors, arg_current_file, arg_decorators_to_remove);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "__init__", 37, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = (PyObject *)CPyType_nodes___Import;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_o)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit", 87, CPyStatic_prebuildvisitor___globals);
        goto CPyL3;
    }
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_nodes___Node)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit", 85, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_block", 91, CPyStatic_prebuildvisitor___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_traverser___ExtendedTraverserVisitor___visit_block(cpy_r_self, cpy_r_block);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_block", 92, CPyStatic_prebuildvisitor___globals);
        goto CPyL4;
    }
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_block", 93, CPyStatic_prebuildvisitor___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_block(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_block", 90, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_dec) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
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
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_decorators_to_store;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_to_remove;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    int64_t cpy_r_r46;
    char cpy_r_r47;
    int64_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    int64_t cpy_r_r58;
    char cpy_r_r59;
    int64_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL36;
    cpy_r_r5 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    cpy_r_r6 = CPyList_GetItemShortBorrow(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 104, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    cpy_r_r7 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 104, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___MemberExpr))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 104, CPyStatic_prebuildvisitor___globals, "mypy.nodes.MemberExpr", cpy_r_r12);
        goto CPyL38;
    }
    cpy_r_r14 = ((mypy___nodes___MemberExprObject *)cpy_r_r13)->_name;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[4851]; /* 'setter' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL8;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL8;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 104, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
CPyL8: ;
    cpy_r_r21 = cpy_r_r16 == 0;
    if (!cpy_r_r21) goto CPyL11;
    cpy_r_r22 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_prop_setters;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", "PreBuildVisitor", "prop_setters", 106, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r22);
CPyL10: ;
    cpy_r_r23 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PySet_Add(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 106, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    } else
        goto CPyL36;
CPyL11: ;
    cpy_r_r26 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r28[1] = {cpy_r_r26};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 108, CPyStatic_prebuildvisitor___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r26);
    if (likely(PyList_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 108, CPyStatic_prebuildvisitor___globals, "list", cpy_r_r30);
        goto CPyL38;
    }
    cpy_r_decorators_to_store = cpy_r_r31;
    cpy_r_r32 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_decorators_to_remove;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", "PreBuildVisitor", "decorators_to_remove", 109, CPyStatic_prebuildvisitor___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r33);
CPyL14: ;
    cpy_r_r34 = PyDict_Contains(cpy_r_r33, cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 109, CPyStatic_prebuildvisitor___globals);
        goto CPyL41;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL34;
    cpy_r_r37 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_decorators_to_remove;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", "PreBuildVisitor", "decorators_to_remove", 110, CPyStatic_prebuildvisitor___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r37);
CPyL17: ;
    cpy_r_r38 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 110, CPyStatic_prebuildvisitor___globals);
        goto CPyL41;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 110, CPyStatic_prebuildvisitor___globals, "list", cpy_r_r39);
        goto CPyL41;
    }
    cpy_r_to_remove = cpy_r_r40;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_to_remove)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = CPyTagged_Subtract(cpy_r_r43, 2);
    cpy_r_r45 = cpy_r_r44;
CPyL20: ;
    cpy_r_r46 = cpy_r_r45 & 1;
    cpy_r_r47 = cpy_r_r46 == 0;
    cpy_r_r48 = 0 & 1;
    cpy_r_r49 = cpy_r_r48 == 0;
    cpy_r_r50 = cpy_r_r47 & cpy_r_r49;
    if (!cpy_r_r50) goto CPyL22;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r45 >= (Py_ssize_t)0;
    cpy_r_r52 = cpy_r_r51;
    goto CPyL23;
CPyL22: ;
    cpy_r_r53 = CPyTagged_IsLt_(cpy_r_r45, 0);
    cpy_r_r54 = cpy_r_r53 ^ 1;
    cpy_r_r52 = cpy_r_r54;
CPyL23: ;
    if (!cpy_r_r52) goto CPyL42;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_to_remove)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = cpy_r_r45 & 1;
    cpy_r_r59 = cpy_r_r58 == 0;
    cpy_r_r60 = cpy_r_r57 & 1;
    cpy_r_r61 = cpy_r_r60 == 0;
    cpy_r_r62 = cpy_r_r59 & cpy_r_r61;
    if (!cpy_r_r62) goto CPyL26;
    cpy_r_r63 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r57;
    cpy_r_r64 = cpy_r_r63;
    goto CPyL27;
CPyL26: ;
    cpy_r_r65 = CPyTagged_IsLt_(cpy_r_r45, cpy_r_r57);
    cpy_r_r64 = cpy_r_r65;
CPyL27: ;
    if (!cpy_r_r64) goto CPyL42;
    CPyTagged_INCREF(cpy_r_r45);
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_r45);
    if (likely(PyLong_Check(cpy_r_r66)))
        cpy_r_r67 = CPyTagged_FromObject(cpy_r_r66);
    else {
        CPy_TypeError("short_int", cpy_r_r66); cpy_r_r67 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 112, CPyStatic_prebuildvisitor___globals);
        goto CPyL43;
    }
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_to_remove, cpy_r_r67);
    if (likely(PyLong_Check(cpy_r_r68)))
        cpy_r_r69 = CPyTagged_FromObject(cpy_r_r68);
    else {
        CPy_TypeError("int", cpy_r_r68); cpy_r_r69 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 112, CPyStatic_prebuildvisitor___globals);
        goto CPyL43;
    }
    cpy_r_i = cpy_r_r69;
    cpy_r_r70 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r71 = PyObject_DelItem(cpy_r_decorators_to_store, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 113, CPyStatic_prebuildvisitor___globals);
        goto CPyL43;
    }
    cpy_r_r73 = cpy_r_r45 + -2;
    CPyTagged_DECREF(cpy_r_r45);
    cpy_r_r45 = cpy_r_r73;
    goto CPyL20;
CPyL32: ;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_decorators_to_store)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (cpy_r_r77) {
        goto CPyL34;
    } else
        goto CPyL44;
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r78 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs_to_decorators;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", "PreBuildVisitor", "funcs_to_decorators", 119, CPyStatic_prebuildvisitor___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r78);
CPyL35: ;
    cpy_r_r79 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r78, cpy_r_r79, cpy_r_decorators_to_store);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_decorators_to_store);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 119, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
CPyL36: ;
    cpy_r_r82 = CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator(cpy_r_self, cpy_r_dec);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 120, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    return 1;
CPyL38: ;
    cpy_r_r83 = 2;
    return cpy_r_r83;
CPyL39: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_r32);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_to_remove);
    CPyTagged_DECREF(cpy_r_r45);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_to_remove);
    CPyTagged_DecRef(cpy_r_r45);
    goto CPyL38;
CPyL44: ;
    CPy_DECREF(cpy_r_decorators_to_store);
    goto CPyL33;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dec", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_dec;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dec)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_dec;
    if (likely(Py_TYPE(obj_dec) == CPyType_nodes___Decorator))
        arg_dec = obj_dec;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_dec); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator(arg_self, arg_dec);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator", 95, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__ExtendedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_decorator__ExtendedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__ExtendedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__ExtendedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator__ExtendedTraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_decorator__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator__TraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func(cpy_r_self, cpy_r_fdef);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func_def", 124, CPyStatic_prebuildvisitor___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely((Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fdef) == CPyType_nodes___LambdaExpr)))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func_def", 122, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__ExtendedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func_def__ExtendedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__ExtendedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__ExtendedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func_def__ExtendedTraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_lambda_expr", 127, CPyStatic_prebuildvisitor___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___LambdaExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_lambda_expr", 126, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExtendedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExtendedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExtendedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExtendedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_lambda_expr__ExtendedTraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_lambda_expr__TraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_lambda_expr__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_func(PyObject *cpy_r_self, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "funcs", 134, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL14;
    cpy_r_r5 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_encapsulating_funcs;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "encapsulating_funcs", 137, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "funcs", 137, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
CPyL4: ;
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 137, CPyStatic_prebuildvisitor___globals);
        goto CPyL22;
    }
    if (likely((Py_TYPE(cpy_r_r7) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r7) == CPyType_nodes___LambdaExpr)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 137, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r7);
        goto CPyL22;
    }
    cpy_r_r9 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r5, cpy_r_r8, 1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 137, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 137, CPyStatic_prebuildvisitor___globals, "list", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_r11 = PyList_Append(cpy_r_r10, cpy_r_func);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 137, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    cpy_r_r13 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "funcs", 140, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
CPyL10: ;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, -2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 140, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    if (likely((Py_TYPE(cpy_r_r14) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r14) == CPyType_nodes___LambdaExpr)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 140, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r14);
        goto CPyL21;
    }
    cpy_r_r16 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_nested_funcs;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "nested_funcs", 140, CPyStatic_prebuildvisitor___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    cpy_r_r17 = CPyDict_SetItem(cpy_r_r16, cpy_r_func, cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 140, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
CPyL14: ;
    cpy_r_r19 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "funcs", 142, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r19);
CPyL15: ;
    cpy_r_r20 = PyList_Append(cpy_r_r19, cpy_r_func);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 142, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    cpy_r_r22 = CPyDef_traverser___TraverserVisitor___visit_func(cpy_r_self, cpy_r_func);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 143, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    cpy_r_r23 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_func", "PreBuildVisitor", "funcs", 144, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r23);
CPyL18: ;
    cpy_r_r24 = CPyList_PopLast(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 144, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    }
    if (likely((Py_TYPE(cpy_r_r24) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r24) == CPyType_nodes___LambdaExpr)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", cpy_r_r24); 
        cpy_r_r25 = NULL;
    }
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 144, CPyStatic_prebuildvisitor___globals);
        goto CPyL21;
    } else
        goto CPyL24;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL22: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL21;
CPyL24: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL20;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:visit_func", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely((Py_TYPE(obj_func) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_func) == CPyType_nodes___LambdaExpr)))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_func); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func(arg_self, arg_func);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func", 129, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_func__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_func__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_func__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_func__TraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_imp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_import", "PreBuildVisitor", "_current_import_group", 147, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL8;
    cpy_r_r3 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_module_import_groups;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_import", "PreBuildVisitor", "module_import_groups", 148, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_import", "PreBuildVisitor", "_current_import_group", 148, CPyStatic_prebuildvisitor___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 148, CPyStatic_prebuildvisitor___globals, "mypy.nodes.Import", cpy_r_r4);
        goto CPyL15;
    }
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 148, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 148, CPyStatic_prebuildvisitor___globals, "list", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_r8 = PyList_Append(cpy_r_r7, cpy_r_imp);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 148, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    } else
        goto CPyL12;
CPyL8: ;
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 150, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_imp);
    *(PyObject * *)cpy_r_r12 = cpy_r_imp;
    cpy_r_r13 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_module_import_groups;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_import", "PreBuildVisitor", "module_import_groups", 150, CPyStatic_prebuildvisitor___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = CPyDict_SetItem(cpy_r_r13, cpy_r_imp, cpy_r_r10);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 150, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_imp);
    if (((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group != NULL) {
        CPy_DECREF(((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group);
    }
    ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->__current_import_group = cpy_r_imp;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 151, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
CPyL12: ;
    cpy_r_r17 = CPyDef_traverser___ExtendedTraverserVisitor___visit_import(cpy_r_self, cpy_r_imp);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 152, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL15: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imp", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_imp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_imp)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_imp;
    if (likely(Py_TYPE(obj_imp) == CPyType_nodes___Import))
        arg_imp = obj_imp;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_imp); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import(arg_self, arg_imp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import", 146, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__ExtendedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_import__ExtendedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__ExtendedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__ExtendedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import__ExtendedTraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r1 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL3: ;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r10 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r10);
    if (Py_TYPE(cpy_r_r10) == CPyType_nodes___Var)
        cpy_r_r11 = cpy_r_r10;
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 != NULL) goto __LL10397;
    if (Py_TYPE(cpy_r_r10) == CPyType_nodes___FuncDef)
        cpy_r_r11 = cpy_r_r10;
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 != NULL) goto __LL10397;
    CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_name_expr", 156, CPyStatic_prebuildvisitor___globals, "union[mypy.nodes.Var, mypy.nodes.FuncDef]", cpy_r_r10);
    goto CPyL7;
__LL10397: ;
    cpy_r_r12 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_symbol_node(cpy_r_self, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_name_expr", 156, CPyStatic_prebuildvisitor___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_name_expr", 154, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExtendedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExtendedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExtendedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExtendedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_name_expr__ExtendedTraverserVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_var) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_symbol_node(cpy_r_self, cpy_r_var);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_var", 159, CPyStatic_prebuildvisitor___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"var", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_var;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_var)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_var(arg_self, arg_var);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_var", 158, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

PyObject *CPyDef_prebuildvisitor___PreBuildVisitor___visit_var__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prebuildvisitor___PreBuildVisitor___visit_var(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_var__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_var__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_var__NodeVisitor_glue", -1, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___visit_symbol_node(PyObject *cpy_r_self, PyObject *cpy_r_symbol) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_orig_func;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "funcs", 162, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r5 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "symbols_to_funcs", 167, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = PyDict_Contains(cpy_r_r5, cpy_r_symbol);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 167, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL32;
    cpy_r_r9 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "symbols_to_funcs", 168, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r9, cpy_r_symbol);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 168, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    if (likely((Py_TYPE(cpy_r_r10) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r10) == CPyType_nodes___LambdaExpr)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 168, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r10);
        goto CPyL38;
    }
    cpy_r_orig_func = cpy_r_r11;
    cpy_r_r12 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "funcs", 169, CPyStatic_prebuildvisitor___globals);
        goto CPyL39;
    }
CPyL10: ;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 169, CPyStatic_prebuildvisitor___globals);
        goto CPyL39;
    }
    if (likely((Py_TYPE(cpy_r_r13) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r13) == CPyType_nodes___LambdaExpr)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 169, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r13);
        goto CPyL39;
    }
    cpy_r_r15 = CPyDef_prebuildvisitor___PreBuildVisitor___is_parent(cpy_r_self, cpy_r_r14, cpy_r_orig_func);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 169, CPyStatic_prebuildvisitor___globals);
        goto CPyL39;
    }
    if (cpy_r_r15) {
        goto CPyL40;
    } else
        goto CPyL26;
CPyL14: ;
    cpy_r_r16 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "funcs", 174, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
CPyL15: ;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, -2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 174, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    if (likely((Py_TYPE(cpy_r_r17) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r17) == CPyType_nodes___LambdaExpr)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 174, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r17);
        goto CPyL38;
    }
    cpy_r_r19 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "symbols_to_funcs", 174, CPyStatic_prebuildvisitor___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r19);
CPyL18: ;
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r19, cpy_r_symbol, cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 174, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    cpy_r_r22 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_free_variables;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "free_variables", 176, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r22);
CPyL20: ;
    cpy_r_r23 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "funcs", 176, CPyStatic_prebuildvisitor___globals);
        goto CPyL42;
    }
CPyL21: ;
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, -2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 176, CPyStatic_prebuildvisitor___globals);
        goto CPyL42;
    }
    if (likely((Py_TYPE(cpy_r_r24) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r24) == CPyType_nodes___LambdaExpr)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 176, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r24);
        goto CPyL42;
    }
    cpy_r_r26 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r22, cpy_r_r25, 3);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 176, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    if (likely(PySet_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 176, CPyStatic_prebuildvisitor___globals, "set", cpy_r_r26);
        goto CPyL38;
    }
    cpy_r_r28 = PySet_Add(cpy_r_r27, cpy_r_symbol);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 176, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    } else
        goto CPyL37;
CPyL26: ;
    cpy_r_r30 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "funcs", 178, CPyStatic_prebuildvisitor___globals);
        goto CPyL39;
    }
CPyL27: ;
    cpy_r_r31 = CPyList_GetItemShort(cpy_r_r30, -2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 178, CPyStatic_prebuildvisitor___globals);
        goto CPyL39;
    }
    if (likely((Py_TYPE(cpy_r_r31) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r31) == CPyType_nodes___LambdaExpr)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 178, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r31);
        goto CPyL39;
    }
    cpy_r_r33 = CPyDef_prebuildvisitor___PreBuildVisitor___is_parent(cpy_r_self, cpy_r_orig_func, cpy_r_r32);
    CPy_DECREF(cpy_r_orig_func);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 178, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    if (!cpy_r_r33) goto CPyL37;
    cpy_r_r34 = CPyDef_prebuildvisitor___PreBuildVisitor___add_free_variable(cpy_r_self, cpy_r_symbol);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 182, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    } else
        goto CPyL37;
CPyL32: ;
    cpy_r_r35 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_funcs;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "funcs", 188, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
CPyL33: ;
    cpy_r_r36 = CPyList_GetItemShort(cpy_r_r35, -2);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 188, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
    if (likely((Py_TYPE(cpy_r_r36) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r36) == CPyType_nodes___LambdaExpr)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 188, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r36);
        goto CPyL38;
    }
    cpy_r_r38 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", "PreBuildVisitor", "symbols_to_funcs", 188, CPyStatic_prebuildvisitor___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r38);
CPyL36: ;
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r38, cpy_r_symbol, cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 188, CPyStatic_prebuildvisitor___globals);
        goto CPyL38;
    }
CPyL37: ;
    return 1;
CPyL38: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL39: ;
    CPy_DecRef(cpy_r_orig_func);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_orig_func);
    goto CPyL14;
CPyL41: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL38;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___visit_symbol_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symbol", 0};
    static CPyArg_Parser parser = {"O:visit_symbol_node", kwlist, 0};
    PyObject *obj_symbol;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_symbol)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___visit_symbol_node(arg_self, arg_symbol);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "visit_symbol_node", 161, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___is_parent(PyObject *cpy_r_self, PyObject *cpy_r_fitem, PyObject *cpy_r_child) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_parent;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_nested_funcs;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "is_parent", "PreBuildVisitor", "nested_funcs", 193, CPyStatic_prebuildvisitor___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_child);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "is_parent", 193, CPyStatic_prebuildvisitor___globals);
        goto CPyL12;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL4;
    return 0;
CPyL4: ;
    cpy_r_r5 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_nested_funcs;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "is_parent", "PreBuildVisitor", "nested_funcs", 195, CPyStatic_prebuildvisitor___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r5, cpy_r_child);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "is_parent", 195, CPyStatic_prebuildvisitor___globals);
        goto CPyL12;
    }
    if (likely((Py_TYPE(cpy_r_r6) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___LambdaExpr)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "is_parent", 195, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_parent = cpy_r_r7;
    cpy_r_r8 = cpy_r_parent == cpy_r_fitem;
    if (cpy_r_r8) {
        goto CPyL13;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL11;
CPyL9: ;
    cpy_r_r10 = CPyDef_prebuildvisitor___PreBuildVisitor___is_parent(cpy_r_self, cpy_r_fitem, cpy_r_parent);
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "is_parent", 196, CPyStatic_prebuildvisitor___globals);
        goto CPyL12;
    }
    cpy_r_r9 = cpy_r_r10;
CPyL11: ;
    return cpy_r_r9;
CPyL12: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL13: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL8;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___is_parent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fitem", "child", 0};
    static CPyArg_Parser parser = {"OO:is_parent", kwlist, 0};
    PyObject *obj_fitem;
    PyObject *obj_child;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fitem, &obj_child)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely((Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fitem) == CPyType_nodes___LambdaExpr)))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_fitem); 
        goto fail;
    }
    PyObject *arg_child;
    if (likely((Py_TYPE(obj_child) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_child) == CPyType_nodes___LambdaExpr)))
        arg_child = obj_child;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_child); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___is_parent(arg_self, arg_fitem, arg_child);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "is_parent", 190, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor___PreBuildVisitor___add_free_variable(PyObject *cpy_r_self, PyObject *cpy_r_symbol) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_symbols_to_funcs;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", "PreBuildVisitor", "symbols_to_funcs", 201, CPyStatic_prebuildvisitor___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDict_GetItem(cpy_r_r0, cpy_r_symbol);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", 201, CPyStatic_prebuildvisitor___globals);
        goto CPyL8;
    }
    if (likely((Py_TYPE(cpy_r_r1) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r1) == CPyType_nodes___LambdaExpr)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", 201, CPyStatic_prebuildvisitor___globals, "mypy.nodes.FuncItem", cpy_r_r1);
        goto CPyL8;
    }
    cpy_r_func = cpy_r_r2;
    cpy_r_r3 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_self)->_free_variables;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", "PreBuildVisitor", "free_variables", 202, CPyStatic_prebuildvisitor___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r3, cpy_r_func, 3);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_func);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", 202, CPyStatic_prebuildvisitor___globals);
        goto CPyL8;
    }
    if (likely(PySet_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", 202, CPyStatic_prebuildvisitor___globals, "set", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = PySet_Add(cpy_r_r5, cpy_r_symbol);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", 202, CPyStatic_prebuildvisitor___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL8;
}

PyObject *CPyPy_prebuildvisitor___PreBuildVisitor___add_free_variable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symbol", 0};
    static CPyArg_Parser parser = {"O:add_free_variable", kwlist, 0};
    PyObject *obj_symbol;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_symbol)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    char retval = CPyDef_prebuildvisitor___PreBuildVisitor___add_free_variable(arg_self, arg_symbol);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "add_free_variable", 198, CPyStatic_prebuildvisitor___globals);
    return NULL;
}

char CPyDef_prebuildvisitor_____top_level__(void) {
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
    char cpy_r_r26;
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
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", -1, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_prebuildvisitor___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 1, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10204]; /* ('Block', 'Decorator', 'Expression', 'FuncDef',
                                     'FuncItem', 'Import', 'LambdaExpr', 'MemberExpr',
                                     'MypyFile', 'NameExpr', 'Node', 'SymbolNode', 'Var') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_prebuildvisitor___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 3, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9436]; /* ('ExtendedTraverserVisitor',) */
    cpy_r_r14 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r15 = CPyStatic_prebuildvisitor___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 18, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPyModule_mypy___traverser = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r18 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r19 = CPyStatic_prebuildvisitor___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 19, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    CPyModule_mypyc___errors = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___errors);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = (PyObject *)CPyType_traverser___ExtendedTraverserVisitor;
    cpy_r_r22 = PyTuple_Pack(1, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 22, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    cpy_r_r23 = CPyStatics[8091]; /* 'mypyc.irbuild.prebuildvisitor' */
    cpy_r_r24 = (PyObject *)CPyType_prebuildvisitor___PreBuildVisitor_template;
    cpy_r_r25 = CPyType_FromTemplate(cpy_r_r24, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 22, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    cpy_r_r26 = CPyDef_prebuildvisitor___PreBuildVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", -1, CPyStatic_prebuildvisitor___globals);
        goto CPyL15;
    }
    cpy_r_r27 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r28 = CPyStatics[8123]; /* 'free_variables' */
    cpy_r_r29 = CPyStatics[8499]; /* 'symbols_to_funcs' */
    cpy_r_r30 = CPyStatics[8500]; /* 'funcs' */
    cpy_r_r31 = CPyStatics[8124]; /* 'prop_setters' */
    cpy_r_r32 = CPyStatics[8125]; /* 'encapsulating_funcs' */
    cpy_r_r33 = CPyStatics[8501]; /* 'nested_funcs' */
    cpy_r_r34 = CPyStatics[8502]; /* 'funcs_to_decorators' */
    cpy_r_r35 = CPyStatics[8503]; /* 'decorators_to_remove' */
    cpy_r_r36 = CPyStatics[8128]; /* 'module_import_groups' */
    cpy_r_r37 = CPyStatics[8504]; /* '_current_import_group' */
    cpy_r_r38 = CPyStatics[610]; /* 'errors' */
    cpy_r_r39 = CPyStatics[8505]; /* 'current_file' */
    cpy_r_r40 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r41 = PyTuple_Pack(13, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 22, CPyStatic_prebuildvisitor___globals);
        goto CPyL15;
    }
    cpy_r_r42 = PyObject_SetAttr(cpy_r_r25, cpy_r_r27, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 22, CPyStatic_prebuildvisitor___globals);
        goto CPyL15;
    }
    CPyType_prebuildvisitor___PreBuildVisitor = (PyTypeObject *)cpy_r_r25;
    CPy_INCREF(CPyType_prebuildvisitor___PreBuildVisitor);
    cpy_r_r44 = CPyStatic_prebuildvisitor___globals;
    cpy_r_r45 = CPyStatics[8090]; /* 'PreBuildVisitor' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/prebuildvisitor.py", "<module>", 22, CPyStatic_prebuildvisitor___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL15: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL14;
}
