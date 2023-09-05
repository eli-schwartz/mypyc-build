#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef builder___IRVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder___IRVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder___IRVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *builder___IRVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_builder___IRVisitor(void);

static PyObject *
builder___IRVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___IRVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder___IRVisitor_setup(type);
}

static int
builder___IRVisitor_traverse(mypyc___irbuild___builder___IRVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder___IRVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder___IRVisitorObject))));
    return 0;
}

static int
builder___IRVisitor_clear(mypyc___irbuild___builder___IRVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder___IRVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder___IRVisitorObject))));
    return 0;
}

static void
builder___IRVisitor_dealloc(mypyc___irbuild___builder___IRVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___IRVisitor_dealloc)
    builder___IRVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___IRVisitor_vtable[76];
static CPyVTableItem builder___IRVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t builder___IRVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem builder___IRVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t builder___IRVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static bool
CPyDef_builder___IRVisitor_trait_vtable_setup(void)
{
    CPyVTableItem builder___IRVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_temp_node,
    };
    memcpy(builder___IRVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, builder___IRVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(builder___IRVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t builder___IRVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(builder___IRVisitor_mypy___visitor___ExpressionVisitor_offset_table, builder___IRVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(builder___IRVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem builder___IRVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_import,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_block,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_match_stmt,
    };
    memcpy(builder___IRVisitor_mypy___visitor___StatementVisitor_trait_vtable, builder___IRVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(builder___IRVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t builder___IRVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(builder___IRVisitor_mypy___visitor___StatementVisitor_offset_table, builder___IRVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(builder___IRVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem builder___IRVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)builder___IRVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)builder___IRVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)builder___IRVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)builder___IRVisitor_mypy___visitor___StatementVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___ExpressionVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_import,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_block,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___StatementVisitor___visit_match_stmt,
    };
    memcpy(builder___IRVisitor_vtable, builder___IRVisitor_vtable_scratch, sizeof(builder___IRVisitor_vtable));
    return 1;
}


static PyGetSetDef builder___IRVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef builder___IRVisitor_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___IRVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IRVisitor",
    .tp_new = builder___IRVisitor_new,
    .tp_dealloc = (destructor)builder___IRVisitor_dealloc,
    .tp_traverse = (traverseproc)builder___IRVisitor_traverse,
    .tp_clear = (inquiry)builder___IRVisitor_clear,
    .tp_getset = builder___IRVisitor_getseters,
    .tp_methods = builder___IRVisitor_methods,
    .tp_members = builder___IRVisitor_members,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___IRVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___builder___IRVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___builder___IRVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_builder___IRVisitor_template = &CPyType_builder___IRVisitor_template_;

static PyObject *
builder___IRVisitor_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___IRVisitorObject *self;
    self = (mypyc___irbuild___builder___IRVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___IRVisitor_vtable + 6;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___IRVisitor(void)
{
    PyObject *self = builder___IRVisitor_setup(CPyType_builder___IRVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


PyMemberDef builder___UnsupportedException_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef builder___UnsupportedException_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef builder___UnsupportedException_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___UnsupportedException_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "UnsupportedException",
    .tp_getset = builder___UnsupportedException_getseters,
    .tp_methods = builder___UnsupportedException_methods,
    .tp_members = builder___UnsupportedException_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_builder___UnsupportedException_template = &CPyType_builder___UnsupportedException_template_;


static int
builder___IRBuilder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *builder___IRBuilder_setup(PyTypeObject *type);
PyObject *CPyDef_builder___IRBuilder(PyObject *cpy_r_current_module, PyObject *cpy_r_types, PyObject *cpy_r_graph, PyObject *cpy_r_errors, PyObject *cpy_r_mapper, PyObject *cpy_r_pbv, PyObject *cpy_r_visitor, PyObject *cpy_r_options, PyObject *cpy_r_singledispatch_impls);

static PyObject *
builder___IRBuilder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___IRBuilder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = builder___IRBuilder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_builder___IRBuilder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
builder___IRBuilder_traverse(mypyc___irbuild___builder___IRBuilderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_builders);
    Py_VISIT(self->_symtables);
    Py_VISIT(self->_runtime_args);
    Py_VISIT(self->_function_name_stack);
    Py_VISIT(self->_class_ir_stack);
    Py_VISIT(self->_current_module);
    Py_VISIT(self->_mapper);
    Py_VISIT(self->_types);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_ret_types);
    Py_VISIT(self->_functions);
    Py_VISIT(self->_classes);
    Py_VISIT(self->_final_names);
    Py_VISIT(self->_callable_class_names);
    Py_VISIT(self->_options);
    if (CPyTagged_CheckLong(self->_lambda_counter)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_lambda_counter));
    }
    if (CPyTagged_CheckLong(self->_temp_counter)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_temp_counter));
    }
    Py_VISIT(self->_free_variables);
    Py_VISIT(self->_prop_setters);
    Py_VISIT(self->_encapsulating_funcs);
    Py_VISIT(self->_nested_fitems);
    Py_VISIT(self->_fdefs_to_decorators);
    Py_VISIT(self->_module_import_groups);
    Py_VISIT(self->_singledispatch_impls);
    Py_VISIT(self->_visitor);
    Py_VISIT(self->_fn_info);
    Py_VISIT(self->_fn_infos);
    Py_VISIT(self->_nonlocal_control);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_imports);
    Py_VISIT(self->_module_name);
    Py_VISIT(self->_module_path);
    return 0;
}

static int
builder___IRBuilder_clear(mypyc___irbuild___builder___IRBuilderObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_builders);
    Py_CLEAR(self->_symtables);
    Py_CLEAR(self->_runtime_args);
    Py_CLEAR(self->_function_name_stack);
    Py_CLEAR(self->_class_ir_stack);
    Py_CLEAR(self->_current_module);
    Py_CLEAR(self->_mapper);
    Py_CLEAR(self->_types);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_ret_types);
    Py_CLEAR(self->_functions);
    Py_CLEAR(self->_classes);
    Py_CLEAR(self->_final_names);
    Py_CLEAR(self->_callable_class_names);
    Py_CLEAR(self->_options);
    if (CPyTagged_CheckLong(self->_lambda_counter)) {
        CPyTagged __tmp = self->_lambda_counter;
        self->_lambda_counter = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_temp_counter)) {
        CPyTagged __tmp = self->_temp_counter;
        self->_temp_counter = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_free_variables);
    Py_CLEAR(self->_prop_setters);
    Py_CLEAR(self->_encapsulating_funcs);
    Py_CLEAR(self->_nested_fitems);
    Py_CLEAR(self->_fdefs_to_decorators);
    Py_CLEAR(self->_module_import_groups);
    Py_CLEAR(self->_singledispatch_impls);
    Py_CLEAR(self->_visitor);
    Py_CLEAR(self->_fn_info);
    Py_CLEAR(self->_fn_infos);
    Py_CLEAR(self->_nonlocal_control);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_imports);
    Py_CLEAR(self->_module_name);
    Py_CLEAR(self->_module_path);
    return 0;
}

static void
builder___IRBuilder_dealloc(mypyc___irbuild___builder___IRBuilderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___IRBuilder_dealloc)
    builder___IRBuilder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___IRBuilder_vtable[103];
static bool
CPyDef_builder___IRBuilder_trait_vtable_setup(void)
{
    CPyVTableItem builder___IRBuilder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_builder___IRBuilder_____init__,
        (CPyVTableItem)CPyDef_builder___IRBuilder___set_module,
        (CPyVTableItem)CPyDef_builder___IRBuilder___accept,
        (CPyVTableItem)CPyDef_builder___IRBuilder___flush_keep_alives,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add,
        (CPyVTableItem)CPyDef_builder___IRBuilder___goto,
        (CPyVTableItem)CPyDef_builder___IRBuilder___activate_block,
        (CPyVTableItem)CPyDef_builder___IRBuilder___goto_and_activate,
        (CPyVTableItem)CPyDef_builder___IRBuilder___self,
        (CPyVTableItem)CPyDef_builder___IRBuilder___py_get_attr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_str,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_bytes_from_str_literal,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_int,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_float,
        (CPyVTableItem)CPyDef_builder___IRBuilder___unary_op,
        (CPyVTableItem)CPyDef_builder___IRBuilder___binary_op,
        (CPyVTableItem)CPyDef_builder___IRBuilder___coerce,
        (CPyVTableItem)CPyDef_builder___IRBuilder___none_object,
        (CPyVTableItem)CPyDef_builder___IRBuilder___none,
        (CPyVTableItem)CPyDef_builder___IRBuilder___true,
        (CPyVTableItem)CPyDef_builder___IRBuilder___false,
        (CPyVTableItem)CPyDef_builder___IRBuilder___new_list_op,
        (CPyVTableItem)CPyDef_builder___IRBuilder___new_set_op,
        (CPyVTableItem)CPyDef_builder___IRBuilder___translate_is_op,
        (CPyVTableItem)CPyDef_builder___IRBuilder___py_call,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_bool_branch,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_native_type_object,
        (CPyVTableItem)CPyDef_builder___IRBuilder___gen_method_call,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_module,
        (CPyVTableItem)CPyDef_builder___IRBuilder___call_c,
        (CPyVTableItem)CPyDef_builder___IRBuilder___int_op,
        (CPyVTableItem)CPyDef_builder___IRBuilder___compare_tagged,
        (CPyVTableItem)CPyDef_builder___IRBuilder___compare_tuples,
        (CPyVTableItem)CPyDef_builder___IRBuilder___builtin_len,
        (CPyVTableItem)CPyDef_builder___IRBuilder___new_tuple,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_to_non_ext_dict,
        (CPyVTableItem)CPyDef_builder___IRBuilder___gen_import,
        (CPyVTableItem)CPyDef_builder___IRBuilder___check_if_module_loaded,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_module,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_module_attr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___assign_if_null,
        (CPyVTableItem)CPyDef_builder___IRBuilder___assign_if_bitmap_unset,
        (CPyVTableItem)CPyDef_builder___IRBuilder___maybe_add_implicit_return,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_implicit_return,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_implicit_unreachable,
        (CPyVTableItem)CPyDef_builder___IRBuilder___disallow_class_assignments,
        (CPyVTableItem)CPyDef_builder___IRBuilder___non_function_scope,
        (CPyVTableItem)CPyDef_builder___IRBuilder___init_final_static,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_final_static,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_literal_value,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_assignment_target,
        (CPyVTableItem)CPyDef_builder___IRBuilder___read,
        (CPyVTableItem)CPyDef_builder___IRBuilder___assign,
        (CPyVTableItem)CPyDef_builder___IRBuilder___coerce_rvalue,
        (CPyVTableItem)CPyDef_builder___IRBuilder___process_sequence_assignment,
        (CPyVTableItem)CPyDef_builder___IRBuilder___process_iterator_tuple_assignment_helper,
        (CPyVTableItem)CPyDef_builder___IRBuilder___process_iterator_tuple_assignment,
        (CPyVTableItem)CPyDef_builder___IRBuilder___push_loop_stack,
        (CPyVTableItem)CPyDef_builder___IRBuilder___pop_loop_stack,
        (CPyVTableItem)CPyDef_builder___IRBuilder___make_spill_target,
        (CPyVTableItem)CPyDef_builder___IRBuilder___spill,
        (CPyVTableItem)CPyDef_builder___IRBuilder___maybe_spill,
        (CPyVTableItem)CPyDef_builder___IRBuilder___maybe_spill_assignable,
        (CPyVTableItem)CPyDef_builder___IRBuilder___extract_int,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_sequence_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_sequence_type_from_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_dict_base_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_dict_key_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_dict_value_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_dict_item_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder____analyze_iterable_item_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_native_module,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_native_ref_expr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_native_module_ref_expr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_synthetic_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___get_final_ref,
        (CPyVTableItem)CPyDef_builder___IRBuilder___emit_load_final,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_module_member_expr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___call_refexpr_with_args,
        (CPyVTableItem)CPyDef_builder___IRBuilder___shortcircuit_expr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___flatten_classes,
        (CPyVTableItem)CPyDef_builder___IRBuilder___enter,
        (CPyVTableItem)CPyDef_builder___IRBuilder___leave,
        (CPyVTableItem)CPyDef_builder___IRBuilder___enter_method,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_argument,
        (CPyVTableItem)CPyDef_builder___IRBuilder___lookup,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_local,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_local_reg,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_self_to_env,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_target,
        (CPyVTableItem)CPyDef_builder___IRBuilder___type_to_rtype,
        (CPyVTableItem)CPyDef_builder___IRBuilder___node_type,
        (CPyVTableItem)CPyDef_builder___IRBuilder___add_var_to_env_class,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_builtin_ref_expr,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_global,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_global_str,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_globals_dict,
        (CPyVTableItem)CPyDef_builder___IRBuilder___load_module_attr_by_fullname,
        (CPyVTableItem)CPyDef_builder___IRBuilder___is_native_attr_ref,
        (CPyVTableItem)CPyDef_builder___IRBuilder___catch_errors,
        (CPyVTableItem)CPyDef_builder___IRBuilder___warning,
        (CPyVTableItem)CPyDef_builder___IRBuilder___error,
        (CPyVTableItem)CPyDef_builder___IRBuilder___note,
    };
    memcpy(builder___IRBuilder_vtable, builder___IRBuilder_vtable_scratch, sizeof(builder___IRBuilder_vtable));
    return 1;
}

static PyObject *
builder___IRBuilder_get_builder(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_builder(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_builders(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_builders(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_symtables(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_symtables(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_runtime_args(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_runtime_args(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_function_name_stack(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_function_name_stack(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_class_ir_stack(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_class_ir_stack(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_current_module(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_current_module(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_mapper(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_mapper(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_types(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_types(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_graph(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_graph(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_ret_types(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_ret_types(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_functions(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_functions(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_classes(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_classes(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_final_names(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_final_names(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_callable_class_names(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_callable_class_names(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_options(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_options(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_lambda_counter(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_lambda_counter(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_temp_counter(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_temp_counter(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_free_variables(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_free_variables(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_prop_setters(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_prop_setters(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_encapsulating_funcs(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_encapsulating_funcs(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_nested_fitems(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_nested_fitems(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_fdefs_to_decorators(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_fdefs_to_decorators(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_module_import_groups(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_module_import_groups(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_singledispatch_impls(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_singledispatch_impls(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_visitor(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_visitor(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_fn_info(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_fn_info(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_fn_infos(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_fn_infos(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_nonlocal_control(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_nonlocal_control(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_errors(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_errors(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_imports(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_imports(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_can_borrow(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_can_borrow(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_module_name(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_module_name(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);
static PyObject *
builder___IRBuilder_get_module_path(mypyc___irbuild___builder___IRBuilderObject *self, void *closure);
static int
builder___IRBuilder_set_module_path(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure);

static PyGetSetDef builder___IRBuilder_getseters[] = {
    {"builder",
     (getter)builder___IRBuilder_get_builder, (setter)builder___IRBuilder_set_builder,
     NULL, NULL},
    {"builders",
     (getter)builder___IRBuilder_get_builders, (setter)builder___IRBuilder_set_builders,
     NULL, NULL},
    {"symtables",
     (getter)builder___IRBuilder_get_symtables, (setter)builder___IRBuilder_set_symtables,
     NULL, NULL},
    {"runtime_args",
     (getter)builder___IRBuilder_get_runtime_args, (setter)builder___IRBuilder_set_runtime_args,
     NULL, NULL},
    {"function_name_stack",
     (getter)builder___IRBuilder_get_function_name_stack, (setter)builder___IRBuilder_set_function_name_stack,
     NULL, NULL},
    {"class_ir_stack",
     (getter)builder___IRBuilder_get_class_ir_stack, (setter)builder___IRBuilder_set_class_ir_stack,
     NULL, NULL},
    {"current_module",
     (getter)builder___IRBuilder_get_current_module, (setter)builder___IRBuilder_set_current_module,
     NULL, NULL},
    {"mapper",
     (getter)builder___IRBuilder_get_mapper, (setter)builder___IRBuilder_set_mapper,
     NULL, NULL},
    {"types",
     (getter)builder___IRBuilder_get_types, (setter)builder___IRBuilder_set_types,
     NULL, NULL},
    {"graph",
     (getter)builder___IRBuilder_get_graph, (setter)builder___IRBuilder_set_graph,
     NULL, NULL},
    {"ret_types",
     (getter)builder___IRBuilder_get_ret_types, (setter)builder___IRBuilder_set_ret_types,
     NULL, NULL},
    {"functions",
     (getter)builder___IRBuilder_get_functions, (setter)builder___IRBuilder_set_functions,
     NULL, NULL},
    {"classes",
     (getter)builder___IRBuilder_get_classes, (setter)builder___IRBuilder_set_classes,
     NULL, NULL},
    {"final_names",
     (getter)builder___IRBuilder_get_final_names, (setter)builder___IRBuilder_set_final_names,
     NULL, NULL},
    {"callable_class_names",
     (getter)builder___IRBuilder_get_callable_class_names, (setter)builder___IRBuilder_set_callable_class_names,
     NULL, NULL},
    {"options",
     (getter)builder___IRBuilder_get_options, (setter)builder___IRBuilder_set_options,
     NULL, NULL},
    {"lambda_counter",
     (getter)builder___IRBuilder_get_lambda_counter, (setter)builder___IRBuilder_set_lambda_counter,
     NULL, NULL},
    {"temp_counter",
     (getter)builder___IRBuilder_get_temp_counter, (setter)builder___IRBuilder_set_temp_counter,
     NULL, NULL},
    {"free_variables",
     (getter)builder___IRBuilder_get_free_variables, (setter)builder___IRBuilder_set_free_variables,
     NULL, NULL},
    {"prop_setters",
     (getter)builder___IRBuilder_get_prop_setters, (setter)builder___IRBuilder_set_prop_setters,
     NULL, NULL},
    {"encapsulating_funcs",
     (getter)builder___IRBuilder_get_encapsulating_funcs, (setter)builder___IRBuilder_set_encapsulating_funcs,
     NULL, NULL},
    {"nested_fitems",
     (getter)builder___IRBuilder_get_nested_fitems, (setter)builder___IRBuilder_set_nested_fitems,
     NULL, NULL},
    {"fdefs_to_decorators",
     (getter)builder___IRBuilder_get_fdefs_to_decorators, (setter)builder___IRBuilder_set_fdefs_to_decorators,
     NULL, NULL},
    {"module_import_groups",
     (getter)builder___IRBuilder_get_module_import_groups, (setter)builder___IRBuilder_set_module_import_groups,
     NULL, NULL},
    {"singledispatch_impls",
     (getter)builder___IRBuilder_get_singledispatch_impls, (setter)builder___IRBuilder_set_singledispatch_impls,
     NULL, NULL},
    {"visitor",
     (getter)builder___IRBuilder_get_visitor, (setter)builder___IRBuilder_set_visitor,
     NULL, NULL},
    {"fn_info",
     (getter)builder___IRBuilder_get_fn_info, (setter)builder___IRBuilder_set_fn_info,
     NULL, NULL},
    {"fn_infos",
     (getter)builder___IRBuilder_get_fn_infos, (setter)builder___IRBuilder_set_fn_infos,
     NULL, NULL},
    {"nonlocal_control",
     (getter)builder___IRBuilder_get_nonlocal_control, (setter)builder___IRBuilder_set_nonlocal_control,
     NULL, NULL},
    {"errors",
     (getter)builder___IRBuilder_get_errors, (setter)builder___IRBuilder_set_errors,
     NULL, NULL},
    {"imports",
     (getter)builder___IRBuilder_get_imports, (setter)builder___IRBuilder_set_imports,
     NULL, NULL},
    {"can_borrow",
     (getter)builder___IRBuilder_get_can_borrow, (setter)builder___IRBuilder_set_can_borrow,
     NULL, NULL},
    {"module_name",
     (getter)builder___IRBuilder_get_module_name, (setter)builder___IRBuilder_set_module_name,
     NULL, NULL},
    {"module_path",
     (getter)builder___IRBuilder_get_module_path, (setter)builder___IRBuilder_set_module_path,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef builder___IRBuilder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_builder___IRBuilder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_module",
     (PyCFunction)CPyPy_builder___IRBuilder___set_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_builder___IRBuilder___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush_keep_alives",
     (PyCFunction)CPyPy_builder___IRBuilder___flush_keep_alives,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add",
     (PyCFunction)CPyPy_builder___IRBuilder___add,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"goto",
     (PyCFunction)CPyPy_builder___IRBuilder___goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"activate_block",
     (PyCFunction)CPyPy_builder___IRBuilder___activate_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"goto_and_activate",
     (PyCFunction)CPyPy_builder___IRBuilder___goto_and_activate,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"self",
     (PyCFunction)CPyPy_builder___IRBuilder___self,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"py_get_attr",
     (PyCFunction)CPyPy_builder___IRBuilder___py_get_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_str",
     (PyCFunction)CPyPy_builder___IRBuilder___load_str,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_bytes_from_str_literal",
     (PyCFunction)CPyPy_builder___IRBuilder___load_bytes_from_str_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_int",
     (PyCFunction)CPyPy_builder___IRBuilder___load_int,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_float",
     (PyCFunction)CPyPy_builder___IRBuilder___load_float,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"unary_op",
     (PyCFunction)CPyPy_builder___IRBuilder___unary_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"binary_op",
     (PyCFunction)CPyPy_builder___IRBuilder___binary_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"coerce",
     (PyCFunction)CPyPy_builder___IRBuilder___coerce,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"none_object",
     (PyCFunction)CPyPy_builder___IRBuilder___none_object,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"none",
     (PyCFunction)CPyPy_builder___IRBuilder___none,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"true",
     (PyCFunction)CPyPy_builder___IRBuilder___true,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"false",
     (PyCFunction)CPyPy_builder___IRBuilder___false,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_list_op",
     (PyCFunction)CPyPy_builder___IRBuilder___new_list_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_set_op",
     (PyCFunction)CPyPy_builder___IRBuilder___new_set_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"translate_is_op",
     (PyCFunction)CPyPy_builder___IRBuilder___translate_is_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"py_call",
     (PyCFunction)CPyPy_builder___IRBuilder___py_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_bool_branch",
     (PyCFunction)CPyPy_builder___IRBuilder___add_bool_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_native_type_object",
     (PyCFunction)CPyPy_builder___IRBuilder___load_native_type_object,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_method_call",
     (PyCFunction)CPyPy_builder___IRBuilder___gen_method_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_module",
     (PyCFunction)CPyPy_builder___IRBuilder___load_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"call_c",
     (PyCFunction)CPyPy_builder___IRBuilder___call_c,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"int_op",
     (PyCFunction)CPyPy_builder___IRBuilder___int_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"compare_tagged",
     (PyCFunction)CPyPy_builder___IRBuilder___compare_tagged,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"compare_tuples",
     (PyCFunction)CPyPy_builder___IRBuilder___compare_tuples,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"builtin_len",
     (PyCFunction)CPyPy_builder___IRBuilder___builtin_len,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_tuple",
     (PyCFunction)CPyPy_builder___IRBuilder___new_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_to_non_ext_dict",
     (PyCFunction)CPyPy_builder___IRBuilder___add_to_non_ext_dict,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_import",
     (PyCFunction)CPyPy_builder___IRBuilder___gen_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_if_module_loaded",
     (PyCFunction)CPyPy_builder___IRBuilder___check_if_module_loaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_module",
     (PyCFunction)CPyPy_builder___IRBuilder___get_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_module_attr",
     (PyCFunction)CPyPy_builder___IRBuilder___get_module_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"assign_if_null",
     (PyCFunction)CPyPy_builder___IRBuilder___assign_if_null,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"assign_if_bitmap_unset",
     (PyCFunction)CPyPy_builder___IRBuilder___assign_if_bitmap_unset,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"maybe_add_implicit_return",
     (PyCFunction)CPyPy_builder___IRBuilder___maybe_add_implicit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_implicit_return",
     (PyCFunction)CPyPy_builder___IRBuilder___add_implicit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_implicit_unreachable",
     (PyCFunction)CPyPy_builder___IRBuilder___add_implicit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"disallow_class_assignments",
     (PyCFunction)CPyPy_builder___IRBuilder___disallow_class_assignments,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"non_function_scope",
     (PyCFunction)CPyPy_builder___IRBuilder___non_function_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"init_final_static",
     (PyCFunction)CPyPy_builder___IRBuilder___init_final_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_final_static",
     (PyCFunction)CPyPy_builder___IRBuilder___load_final_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_literal_value",
     (PyCFunction)CPyPy_builder___IRBuilder___load_literal_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_assignment_target",
     (PyCFunction)CPyPy_builder___IRBuilder___get_assignment_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"read",
     (PyCFunction)CPyPy_builder___IRBuilder___read,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"assign",
     (PyCFunction)CPyPy_builder___IRBuilder___assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"coerce_rvalue",
     (PyCFunction)CPyPy_builder___IRBuilder___coerce_rvalue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_sequence_assignment",
     (PyCFunction)CPyPy_builder___IRBuilder___process_sequence_assignment,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_iterator_tuple_assignment_helper",
     (PyCFunction)CPyPy_builder___IRBuilder___process_iterator_tuple_assignment_helper,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_iterator_tuple_assignment",
     (PyCFunction)CPyPy_builder___IRBuilder___process_iterator_tuple_assignment,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"push_loop_stack",
     (PyCFunction)CPyPy_builder___IRBuilder___push_loop_stack,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pop_loop_stack",
     (PyCFunction)CPyPy_builder___IRBuilder___pop_loop_stack,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"make_spill_target",
     (PyCFunction)CPyPy_builder___IRBuilder___make_spill_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"spill",
     (PyCFunction)CPyPy_builder___IRBuilder___spill,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"maybe_spill",
     (PyCFunction)CPyPy_builder___IRBuilder___maybe_spill,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"maybe_spill_assignable",
     (PyCFunction)CPyPy_builder___IRBuilder___maybe_spill_assignable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"extract_int",
     (PyCFunction)CPyPy_builder___IRBuilder___extract_int,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_sequence_type",
     (PyCFunction)CPyPy_builder___IRBuilder___get_sequence_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_sequence_type_from_type",
     (PyCFunction)CPyPy_builder___IRBuilder___get_sequence_type_from_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dict_base_type",
     (PyCFunction)CPyPy_builder___IRBuilder___get_dict_base_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dict_key_type",
     (PyCFunction)CPyPy_builder___IRBuilder___get_dict_key_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dict_value_type",
     (PyCFunction)CPyPy_builder___IRBuilder___get_dict_value_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dict_item_type",
     (PyCFunction)CPyPy_builder___IRBuilder___get_dict_item_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_analyze_iterable_item_type",
     (PyCFunction)CPyPy_builder___IRBuilder____analyze_iterable_item_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_module",
     (PyCFunction)CPyPy_builder___IRBuilder___is_native_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_ref_expr",
     (PyCFunction)CPyPy_builder___IRBuilder___is_native_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_module_ref_expr",
     (PyCFunction)CPyPy_builder___IRBuilder___is_native_module_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_synthetic_type",
     (PyCFunction)CPyPy_builder___IRBuilder___is_synthetic_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_final_ref",
     (PyCFunction)CPyPy_builder___IRBuilder___get_final_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_load_final",
     (PyCFunction)CPyPy_builder___IRBuilder___emit_load_final,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_module_member_expr",
     (PyCFunction)CPyPy_builder___IRBuilder___is_module_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"call_refexpr_with_args",
     (PyCFunction)CPyPy_builder___IRBuilder___call_refexpr_with_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"shortcircuit_expr",
     (PyCFunction)CPyPy_builder___IRBuilder___shortcircuit_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flatten_classes",
     (PyCFunction)CPyPy_builder___IRBuilder___flatten_classes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter",
     (PyCFunction)CPyPy_builder___IRBuilder___enter,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"leave",
     (PyCFunction)CPyPy_builder___IRBuilder___leave,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_method",
     (PyCFunction)CPyPy_builder___IRBuilder___enter_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_argument",
     (PyCFunction)CPyPy_builder___IRBuilder___add_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup",
     (PyCFunction)CPyPy_builder___IRBuilder___lookup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_local",
     (PyCFunction)CPyPy_builder___IRBuilder___add_local,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_local_reg",
     (PyCFunction)CPyPy_builder___IRBuilder___add_local_reg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_self_to_env",
     (PyCFunction)CPyPy_builder___IRBuilder___add_self_to_env,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_target",
     (PyCFunction)CPyPy_builder___IRBuilder___add_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"type_to_rtype",
     (PyCFunction)CPyPy_builder___IRBuilder___type_to_rtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"node_type",
     (PyCFunction)CPyPy_builder___IRBuilder___node_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_var_to_env_class",
     (PyCFunction)CPyPy_builder___IRBuilder___add_var_to_env_class,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_builtin_ref_expr",
     (PyCFunction)CPyPy_builder___IRBuilder___is_builtin_ref_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_global",
     (PyCFunction)CPyPy_builder___IRBuilder___load_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_global_str",
     (PyCFunction)CPyPy_builder___IRBuilder___load_global_str,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_globals_dict",
     (PyCFunction)CPyPy_builder___IRBuilder___load_globals_dict,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"load_module_attr_by_fullname",
     (PyCFunction)CPyPy_builder___IRBuilder___load_module_attr_by_fullname,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_native_attr_ref",
     (PyCFunction)CPyPy_builder___IRBuilder___is_native_attr_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"catch_errors",
     (PyCFunction)CPyPy_builder___IRBuilder___catch_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"warning",
     (PyCFunction)CPyPy_builder___IRBuilder___warning,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"error",
     (PyCFunction)CPyPy_builder___IRBuilder___error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"note",
     (PyCFunction)CPyPy_builder___IRBuilder___note,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___IRBuilder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IRBuilder",
    .tp_new = builder___IRBuilder_new,
    .tp_dealloc = (destructor)builder___IRBuilder_dealloc,
    .tp_traverse = (traverseproc)builder___IRBuilder_traverse,
    .tp_clear = (inquiry)builder___IRBuilder_clear,
    .tp_getset = builder___IRBuilder_getseters,
    .tp_methods = builder___IRBuilder_methods,
    .tp_init = builder___IRBuilder_init,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___IRBuilderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_builder___IRBuilder_template = &CPyType_builder___IRBuilder_template_;

static PyObject *
builder___IRBuilder_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___IRBuilderObject *self;
    self = (mypyc___irbuild___builder___IRBuilderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___IRBuilder_vtable;
    self->_lambda_counter = CPY_INT_TAG;
    self->_temp_counter = CPY_INT_TAG;
    self->_can_borrow = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___IRBuilder(PyObject *cpy_r_current_module, PyObject *cpy_r_types, PyObject *cpy_r_graph, PyObject *cpy_r_errors, PyObject *cpy_r_mapper, PyObject *cpy_r_pbv, PyObject *cpy_r_visitor, PyObject *cpy_r_options, PyObject *cpy_r_singledispatch_impls)
{
    PyObject *self = builder___IRBuilder_setup(CPyType_builder___IRBuilder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_builder___IRBuilder_____init__(self, cpy_r_current_module, cpy_r_types, cpy_r_graph, cpy_r_errors, cpy_r_mapper, cpy_r_pbv, cpy_r_visitor, cpy_r_options, cpy_r_singledispatch_impls);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
builder___IRBuilder_get_builder(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_builder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builder' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builder);
    PyObject *retval = self->_builder;
    return retval;
}

static int
builder___IRBuilder_set_builder(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'builder' cannot be deleted");
        return -1;
    }
    if (self->_builder != NULL) {
        CPy_DECREF(self->_builder);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ll_builder___LowLevelIRBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.ll_builder.LowLevelIRBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_builder = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_builders(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_builders == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builders' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builders);
    PyObject *retval = self->_builders;
    return retval;
}

static int
builder___IRBuilder_set_builders(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'builders' cannot be deleted");
        return -1;
    }
    if (self->_builders != NULL) {
        CPy_DECREF(self->_builders);
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
    self->_builders = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_symtables(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_symtables == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'symtables' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_symtables);
    PyObject *retval = self->_symtables;
    return retval;
}

static int
builder___IRBuilder_set_symtables(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'symtables' cannot be deleted");
        return -1;
    }
    if (self->_symtables != NULL) {
        CPy_DECREF(self->_symtables);
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
    self->_symtables = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_runtime_args(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_runtime_args == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'runtime_args' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_runtime_args);
    PyObject *retval = self->_runtime_args;
    return retval;
}

static int
builder___IRBuilder_set_runtime_args(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'runtime_args' cannot be deleted");
        return -1;
    }
    if (self->_runtime_args != NULL) {
        CPy_DECREF(self->_runtime_args);
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
    self->_runtime_args = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_function_name_stack(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_function_name_stack == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'function_name_stack' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_function_name_stack);
    PyObject *retval = self->_function_name_stack;
    return retval;
}

static int
builder___IRBuilder_set_function_name_stack(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'function_name_stack' cannot be deleted");
        return -1;
    }
    if (self->_function_name_stack != NULL) {
        CPy_DECREF(self->_function_name_stack);
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
    self->_function_name_stack = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_class_ir_stack(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_class_ir_stack == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'class_ir_stack' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_class_ir_stack);
    PyObject *retval = self->_class_ir_stack;
    return retval;
}

static int
builder___IRBuilder_set_class_ir_stack(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'class_ir_stack' cannot be deleted");
        return -1;
    }
    if (self->_class_ir_stack != NULL) {
        CPy_DECREF(self->_class_ir_stack);
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
    self->_class_ir_stack = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_current_module(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_current_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'current_module' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_current_module);
    PyObject *retval = self->_current_module;
    return retval;
}

static int
builder___IRBuilder_set_current_module(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'current_module' cannot be deleted");
        return -1;
    }
    if (self->_current_module != NULL) {
        CPy_DECREF(self->_current_module);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_current_module = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_mapper(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_mapper == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'mapper' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_mapper);
    PyObject *retval = self->_mapper;
    return retval;
}

static int
builder___IRBuilder_set_mapper(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'mapper' cannot be deleted");
        return -1;
    }
    if (self->_mapper != NULL) {
        CPy_DECREF(self->_mapper);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mapper___Mapper))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_mapper = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_types(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'types' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_types);
    PyObject *retval = self->_types;
    return retval;
}

static int
builder___IRBuilder_set_types(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'types' cannot be deleted");
        return -1;
    }
    if (self->_types != NULL) {
        CPy_DECREF(self->_types);
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
    self->_types = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_graph(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_graph == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'graph' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_graph);
    PyObject *retval = self->_graph;
    return retval;
}

static int
builder___IRBuilder_set_graph(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'graph' cannot be deleted");
        return -1;
    }
    if (self->_graph != NULL) {
        CPy_DECREF(self->_graph);
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
    self->_graph = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_ret_types(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_ret_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ret_types' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ret_types);
    PyObject *retval = self->_ret_types;
    return retval;
}

static int
builder___IRBuilder_set_ret_types(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'ret_types' cannot be deleted");
        return -1;
    }
    if (self->_ret_types != NULL) {
        CPy_DECREF(self->_ret_types);
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
    self->_ret_types = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_functions(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_functions == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'functions' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_functions);
    PyObject *retval = self->_functions;
    return retval;
}

static int
builder___IRBuilder_set_functions(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'functions' cannot be deleted");
        return -1;
    }
    if (self->_functions != NULL) {
        CPy_DECREF(self->_functions);
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
    self->_functions = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_classes(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_classes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'classes' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_classes);
    PyObject *retval = self->_classes;
    return retval;
}

static int
builder___IRBuilder_set_classes(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'classes' cannot be deleted");
        return -1;
    }
    if (self->_classes != NULL) {
        CPy_DECREF(self->_classes);
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
    self->_classes = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_final_names(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_final_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'final_names' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_final_names);
    PyObject *retval = self->_final_names;
    return retval;
}

static int
builder___IRBuilder_set_final_names(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'final_names' cannot be deleted");
        return -1;
    }
    if (self->_final_names != NULL) {
        CPy_DECREF(self->_final_names);
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
    self->_final_names = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_callable_class_names(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_callable_class_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'callable_class_names' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_callable_class_names);
    PyObject *retval = self->_callable_class_names;
    return retval;
}

static int
builder___IRBuilder_set_callable_class_names(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'callable_class_names' cannot be deleted");
        return -1;
    }
    if (self->_callable_class_names != NULL) {
        CPy_DECREF(self->_callable_class_names);
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
    self->_callable_class_names = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_options(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
builder___IRBuilder_set_options(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypyc___options___CompilerOptions))
        tmp = value;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_lambda_counter(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_lambda_counter == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'lambda_counter' of 'IRBuilder' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_lambda_counter);
    PyObject *retval = CPyTagged_StealAsObject(self->_lambda_counter);
    return retval;
}

static int
builder___IRBuilder_set_lambda_counter(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'lambda_counter' cannot be deleted");
        return -1;
    }
    if (self->_lambda_counter != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_lambda_counter);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_lambda_counter = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_temp_counter(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_temp_counter == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'temp_counter' of 'IRBuilder' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_temp_counter);
    PyObject *retval = CPyTagged_StealAsObject(self->_temp_counter);
    return retval;
}

static int
builder___IRBuilder_set_temp_counter(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'temp_counter' cannot be deleted");
        return -1;
    }
    if (self->_temp_counter != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_temp_counter);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_temp_counter = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_free_variables(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_free_variables == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'free_variables' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_free_variables);
    PyObject *retval = self->_free_variables;
    return retval;
}

static int
builder___IRBuilder_set_free_variables(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'free_variables' cannot be deleted");
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
builder___IRBuilder_get_prop_setters(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_prop_setters == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'prop_setters' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_prop_setters);
    PyObject *retval = self->_prop_setters;
    return retval;
}

static int
builder___IRBuilder_set_prop_setters(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'prop_setters' cannot be deleted");
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
builder___IRBuilder_get_encapsulating_funcs(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_encapsulating_funcs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'encapsulating_funcs' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_encapsulating_funcs);
    PyObject *retval = self->_encapsulating_funcs;
    return retval;
}

static int
builder___IRBuilder_set_encapsulating_funcs(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'encapsulating_funcs' cannot be deleted");
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
builder___IRBuilder_get_nested_fitems(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_nested_fitems == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'nested_fitems' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_nested_fitems);
    PyObject *retval = self->_nested_fitems;
    return retval;
}

static int
builder___IRBuilder_set_nested_fitems(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'nested_fitems' cannot be deleted");
        return -1;
    }
    if (self->_nested_fitems != NULL) {
        CPy_DECREF(self->_nested_fitems);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_nested_fitems = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_fdefs_to_decorators(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_fdefs_to_decorators == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fdefs_to_decorators' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fdefs_to_decorators);
    PyObject *retval = self->_fdefs_to_decorators;
    return retval;
}

static int
builder___IRBuilder_set_fdefs_to_decorators(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'fdefs_to_decorators' cannot be deleted");
        return -1;
    }
    if (self->_fdefs_to_decorators != NULL) {
        CPy_DECREF(self->_fdefs_to_decorators);
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
    self->_fdefs_to_decorators = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_module_import_groups(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_module_import_groups == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_import_groups' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_import_groups);
    PyObject *retval = self->_module_import_groups;
    return retval;
}

static int
builder___IRBuilder_set_module_import_groups(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'module_import_groups' cannot be deleted");
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
builder___IRBuilder_get_singledispatch_impls(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_singledispatch_impls == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'singledispatch_impls' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_singledispatch_impls);
    PyObject *retval = self->_singledispatch_impls;
    return retval;
}

static int
builder___IRBuilder_set_singledispatch_impls(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'singledispatch_impls' cannot be deleted");
        return -1;
    }
    if (self->_singledispatch_impls != NULL) {
        CPy_DECREF(self->_singledispatch_impls);
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
    self->_singledispatch_impls = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_visitor(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_visitor == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'visitor' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_visitor);
    PyObject *retval = self->_visitor;
    return retval;
}

static int
builder___IRBuilder_set_visitor(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'visitor' cannot be deleted");
        return -1;
    }
    if (self->_visitor != NULL) {
        CPy_DECREF(self->_visitor);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_irbuild___visitor___IRBuilderVisitor))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRVisitor", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_visitor = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_fn_info(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_fn_info == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fn_info' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fn_info);
    PyObject *retval = self->_fn_info;
    return retval;
}

static int
builder___IRBuilder_set_fn_info(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'fn_info' cannot be deleted");
        return -1;
    }
    if (self->_fn_info != NULL) {
        CPy_DECREF(self->_fn_info);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_context___FuncInfo))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fn_info = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_fn_infos(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_fn_infos == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fn_infos' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fn_infos);
    PyObject *retval = self->_fn_infos;
    return retval;
}

static int
builder___IRBuilder_set_fn_infos(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'fn_infos' cannot be deleted");
        return -1;
    }
    if (self->_fn_infos != NULL) {
        CPy_DECREF(self->_fn_infos);
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
    self->_fn_infos = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_nonlocal_control(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_nonlocal_control == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'nonlocal_control' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_nonlocal_control);
    PyObject *retval = self->_nonlocal_control;
    return retval;
}

static int
builder___IRBuilder_set_nonlocal_control(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'nonlocal_control' cannot be deleted");
        return -1;
    }
    if (self->_nonlocal_control != NULL) {
        CPy_DECREF(self->_nonlocal_control);
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
    self->_nonlocal_control = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_errors(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'errors' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_errors);
    PyObject *retval = self->_errors;
    return retval;
}

static int
builder___IRBuilder_set_errors(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'errors' cannot be deleted");
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
builder___IRBuilder_get_imports(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_imports == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'imports' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_imports);
    PyObject *retval = self->_imports;
    return retval;
}

static int
builder___IRBuilder_set_imports(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'imports' cannot be deleted");
        return -1;
    }
    if (self->_imports != NULL) {
        CPy_DECREF(self->_imports);
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
    self->_imports = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_can_borrow(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    PyObject *retval = self->_can_borrow ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
builder___IRBuilder_set_can_borrow(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'can_borrow' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_can_borrow = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_module_name(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_module_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_name' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_name);
    PyObject *retval = self->_module_name;
    return retval;
}

static int
builder___IRBuilder_set_module_name(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'module_name' cannot be deleted");
        return -1;
    }
    if (self->_module_name != NULL) {
        CPy_DECREF(self->_module_name);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module_name = tmp;
    return 0;
}

static PyObject *
builder___IRBuilder_get_module_path(mypyc___irbuild___builder___IRBuilderObject *self, void *closure)
{
    if (unlikely(self->_module_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_path' of 'IRBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_path);
    PyObject *retval = self->_module_path;
    return retval;
}

static int
builder___IRBuilder_set_module_path(mypyc___irbuild___builder___IRBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IRBuilder' object attribute 'module_path' cannot be deleted");
        return -1;
    }
    if (self->_module_path != NULL) {
        CPy_DECREF(self->_module_path);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module_path = tmp;
    return 0;
}

static PyObject *builder___shortcircuit_expr_IRBuilder_env_setup(PyTypeObject *type);
PyObject *CPyDef_builder___shortcircuit_expr_IRBuilder_env(void);

static PyObject *
builder___shortcircuit_expr_IRBuilder_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___shortcircuit_expr_IRBuilder_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder___shortcircuit_expr_IRBuilder_env_setup(type);
}

static int
builder___shortcircuit_expr_IRBuilder_env_traverse(mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_expr);
    return 0;
}

static int
builder___shortcircuit_expr_IRBuilder_env_clear(mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_expr);
    return 0;
}

static void
builder___shortcircuit_expr_IRBuilder_env_dealloc(mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___shortcircuit_expr_IRBuilder_env_dealloc)
    builder___shortcircuit_expr_IRBuilder_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___shortcircuit_expr_IRBuilder_env_vtable[1];
static bool
CPyDef_builder___shortcircuit_expr_IRBuilder_env_trait_vtable_setup(void)
{
    CPyVTableItem builder___shortcircuit_expr_IRBuilder_env_vtable_scratch[] = {
        NULL
    };
    memcpy(builder___shortcircuit_expr_IRBuilder_env_vtable, builder___shortcircuit_expr_IRBuilder_env_vtable_scratch, sizeof(builder___shortcircuit_expr_IRBuilder_env_vtable));
    return 1;
}

static PyMethodDef builder___shortcircuit_expr_IRBuilder_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___shortcircuit_expr_IRBuilder_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "shortcircuit_expr_IRBuilder_env",
    .tp_new = builder___shortcircuit_expr_IRBuilder_env_new,
    .tp_dealloc = (destructor)builder___shortcircuit_expr_IRBuilder_env_dealloc,
    .tp_traverse = (traverseproc)builder___shortcircuit_expr_IRBuilder_env_traverse,
    .tp_clear = (inquiry)builder___shortcircuit_expr_IRBuilder_env_clear,
    .tp_methods = builder___shortcircuit_expr_IRBuilder_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_builder___shortcircuit_expr_IRBuilder_env_template = &CPyType_builder___shortcircuit_expr_IRBuilder_env_template_;

static PyObject *
builder___shortcircuit_expr_IRBuilder_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *self;
    self = (mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___shortcircuit_expr_IRBuilder_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___shortcircuit_expr_IRBuilder_env(void)
{
    PyObject *self = builder___shortcircuit_expr_IRBuilder_env_setup(CPyType_builder___shortcircuit_expr_IRBuilder_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____get__(self, instance, owner);
}
PyMemberDef builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_setup(PyTypeObject *type);
PyObject *CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj(void);

static PyObject *
builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_setup(type);
}

static int
builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_traverse(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject))));
    return 0;
}

static int
builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_clear(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject))));
    return 0;
}

static void
builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_dealloc(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_dealloc)
    builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_vtable[2];
static bool
CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_trait_vtable_setup(void)
{
    CPyVTableItem builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____call__,
        (CPyVTableItem)CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____get__,
    };
    memcpy(builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_vtable, builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_vtable_scratch, sizeof(builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_vtable));
    return 1;
}

static PyMethodDef builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj",
    .tp_new = builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_new,
    .tp_dealloc = (destructor)builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_dealloc,
    .tp_traverse = (traverseproc)builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_traverse,
    .tp_clear = (inquiry)builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_clear,
    .tp_methods = builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj,
    .tp_members = builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_template = &CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_template_;

static PyObject *
builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *self;
    self = (mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_vtable;
    self->vectorcall = CPyPy_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj(void)
{
    PyObject *self = builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_setup(CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____get__(self, instance, owner);
}
PyMemberDef builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_setup(PyTypeObject *type);
PyObject *CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj(void);

static PyObject *
builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_setup(type);
}

static int
builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_traverse(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject))));
    return 0;
}

static int
builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_clear(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject))));
    return 0;
}

static void
builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_dealloc(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_dealloc)
    builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_vtable[2];
static bool
CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_trait_vtable_setup(void)
{
    CPyVTableItem builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____call__,
        (CPyVTableItem)CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____get__,
    };
    memcpy(builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_vtable, builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_vtable_scratch, sizeof(builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_vtable));
    return 1;
}

static PyMethodDef builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj",
    .tp_new = builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_new,
    .tp_dealloc = (destructor)builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_dealloc,
    .tp_traverse = (traverseproc)builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_traverse,
    .tp_clear = (inquiry)builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_clear,
    .tp_methods = builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj,
    .tp_members = builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_template = &CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_template_;

static PyObject *
builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *self;
    self = (mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_vtable;
    self->vectorcall = CPyPy_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj(void)
{
    PyObject *self = builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_setup(CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *builder___enter_method_IRBuilder_env_setup(PyTypeObject *type);
PyObject *CPyDef_builder___enter_method_IRBuilder_env(void);

static PyObject *
builder___enter_method_IRBuilder_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___enter_method_IRBuilder_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder___enter_method_IRBuilder_env_setup(type);
}

static int
builder___enter_method_IRBuilder_env_traverse(mypyc___irbuild___builder___enter_method_IRBuilder_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_class_ir);
    Py_VISIT(self->_name);
    Py_VISIT(self->_ret_type);
    Py_VISIT(self->_fn_info);
    Py_VISIT(self->_self_type);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_arg_regs);
    Py_VISIT(self->_args);
    Py_VISIT(self->_blocks);
    Py_VISIT(self->_sig);
    Py_VISIT(self->_decl);
    Py_VISIT(self->_ir);
    return 0;
}

static int
builder___enter_method_IRBuilder_env_clear(mypyc___irbuild___builder___enter_method_IRBuilder_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_class_ir);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_ret_type);
    Py_CLEAR(self->_fn_info);
    Py_CLEAR(self->_self_type);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_arg_regs);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_blocks);
    Py_CLEAR(self->_sig);
    Py_CLEAR(self->_decl);
    Py_CLEAR(self->_ir);
    return 0;
}

static void
builder___enter_method_IRBuilder_env_dealloc(mypyc___irbuild___builder___enter_method_IRBuilder_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___enter_method_IRBuilder_env_dealloc)
    builder___enter_method_IRBuilder_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___enter_method_IRBuilder_env_vtable[1];
static bool
CPyDef_builder___enter_method_IRBuilder_env_trait_vtable_setup(void)
{
    CPyVTableItem builder___enter_method_IRBuilder_env_vtable_scratch[] = {
        NULL
    };
    memcpy(builder___enter_method_IRBuilder_env_vtable, builder___enter_method_IRBuilder_env_vtable_scratch, sizeof(builder___enter_method_IRBuilder_env_vtable));
    return 1;
}

static PyMethodDef builder___enter_method_IRBuilder_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___enter_method_IRBuilder_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_method_IRBuilder_env",
    .tp_new = builder___enter_method_IRBuilder_env_new,
    .tp_dealloc = (destructor)builder___enter_method_IRBuilder_env_dealloc,
    .tp_traverse = (traverseproc)builder___enter_method_IRBuilder_env_traverse,
    .tp_clear = (inquiry)builder___enter_method_IRBuilder_env_clear,
    .tp_methods = builder___enter_method_IRBuilder_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___enter_method_IRBuilder_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_builder___enter_method_IRBuilder_env_template = &CPyType_builder___enter_method_IRBuilder_env_template_;

static PyObject *
builder___enter_method_IRBuilder_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___enter_method_IRBuilder_envObject *self;
    self = (mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___enter_method_IRBuilder_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_env(void)
{
    PyObject *self = builder___enter_method_IRBuilder_env_setup(CPyType_builder___enter_method_IRBuilder_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *builder___enter_method_IRBuilder_gen_setup(PyTypeObject *type);
PyObject *CPyDef_builder___enter_method_IRBuilder_gen(void);

static PyObject *
builder___enter_method_IRBuilder_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___enter_method_IRBuilder_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder___enter_method_IRBuilder_gen_setup(type);
}

static int
builder___enter_method_IRBuilder_gen_traverse(mypyc___irbuild___builder___enter_method_IRBuilder_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
builder___enter_method_IRBuilder_gen_clear(mypyc___irbuild___builder___enter_method_IRBuilder_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
builder___enter_method_IRBuilder_gen_dealloc(mypyc___irbuild___builder___enter_method_IRBuilder_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___enter_method_IRBuilder_gen_dealloc)
    builder___enter_method_IRBuilder_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___enter_method_IRBuilder_gen_vtable[6];
static bool
CPyDef_builder___enter_method_IRBuilder_gen_trait_vtable_setup(void)
{
    CPyVTableItem builder___enter_method_IRBuilder_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_builder___enter_method_IRBuilder_gen_____next__,
        (CPyVTableItem)CPyDef_builder___enter_method_IRBuilder_gen___send,
        (CPyVTableItem)CPyDef_builder___enter_method_IRBuilder_gen_____iter__,
        (CPyVTableItem)CPyDef_builder___enter_method_IRBuilder_gen___throw,
        (CPyVTableItem)CPyDef_builder___enter_method_IRBuilder_gen___close,
    };
    memcpy(builder___enter_method_IRBuilder_gen_vtable, builder___enter_method_IRBuilder_gen_vtable_scratch, sizeof(builder___enter_method_IRBuilder_gen_vtable));
    return 1;
}

static PyMethodDef builder___enter_method_IRBuilder_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_builder___enter_method_IRBuilder_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_builder___enter_method_IRBuilder_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_builder___enter_method_IRBuilder_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_builder___enter_method_IRBuilder_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_builder___enter_method_IRBuilder_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___enter_method_IRBuilder_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_method_IRBuilder_gen",
    .tp_new = builder___enter_method_IRBuilder_gen_new,
    .tp_dealloc = (destructor)builder___enter_method_IRBuilder_gen_dealloc,
    .tp_traverse = (traverseproc)builder___enter_method_IRBuilder_gen_traverse,
    .tp_clear = (inquiry)builder___enter_method_IRBuilder_gen_clear,
    .tp_methods = builder___enter_method_IRBuilder_gen_methods,
    .tp_iter = CPyDef_builder___enter_method_IRBuilder_gen_____iter__,
    .tp_iternext = CPyDef_builder___enter_method_IRBuilder_gen_____next__,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___enter_method_IRBuilder_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_builder___enter_method_IRBuilder_gen_template = &CPyType_builder___enter_method_IRBuilder_gen_template_;

static PyObject *
builder___enter_method_IRBuilder_gen_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___enter_method_IRBuilder_genObject *self;
    self = (mypyc___irbuild___builder___enter_method_IRBuilder_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___enter_method_IRBuilder_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen(void)
{
    PyObject *self = builder___enter_method_IRBuilder_gen_setup(CPyType_builder___enter_method_IRBuilder_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *builder___gen_arg_defaults_env_setup(PyTypeObject *type);
PyObject *CPyDef_builder___gen_arg_defaults_env(void);

static PyObject *
builder___gen_arg_defaults_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___gen_arg_defaults_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder___gen_arg_defaults_env_setup(type);
}

static int
builder___gen_arg_defaults_env_traverse(mypyc___irbuild___builder___gen_arg_defaults_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_arg);
    Py_VISIT(self->_fitem);
    Py_VISIT(self->_target);
    Py_VISIT(self->_get_default);
    if (CPyTagged_CheckLong(self->_nb)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_nb));
    }
    return 0;
}

static int
builder___gen_arg_defaults_env_clear(mypyc___irbuild___builder___gen_arg_defaults_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_arg);
    Py_CLEAR(self->_fitem);
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_get_default);
    if (CPyTagged_CheckLong(self->_nb)) {
        CPyTagged __tmp = self->_nb;
        self->_nb = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
builder___gen_arg_defaults_env_dealloc(mypyc___irbuild___builder___gen_arg_defaults_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___gen_arg_defaults_env_dealloc)
    builder___gen_arg_defaults_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___gen_arg_defaults_env_vtable[1];
static bool
CPyDef_builder___gen_arg_defaults_env_trait_vtable_setup(void)
{
    CPyVTableItem builder___gen_arg_defaults_env_vtable_scratch[] = {
        NULL
    };
    memcpy(builder___gen_arg_defaults_env_vtable, builder___gen_arg_defaults_env_vtable_scratch, sizeof(builder___gen_arg_defaults_env_vtable));
    return 1;
}

static PyMethodDef builder___gen_arg_defaults_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___gen_arg_defaults_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_arg_defaults_env",
    .tp_new = builder___gen_arg_defaults_env_new,
    .tp_dealloc = (destructor)builder___gen_arg_defaults_env_dealloc,
    .tp_traverse = (traverseproc)builder___gen_arg_defaults_env_traverse,
    .tp_clear = (inquiry)builder___gen_arg_defaults_env_clear,
    .tp_methods = builder___gen_arg_defaults_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___gen_arg_defaults_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_builder___gen_arg_defaults_env_template = &CPyType_builder___gen_arg_defaults_env_template_;

static PyObject *
builder___gen_arg_defaults_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___gen_arg_defaults_envObject *self;
    self = (mypyc___irbuild___builder___gen_arg_defaults_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___gen_arg_defaults_env_vtable;
    self->_nb = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___gen_arg_defaults_env(void)
{
    PyObject *self = builder___gen_arg_defaults_env_setup(CPyType_builder___gen_arg_defaults_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__builder___get_default_gen_arg_defaults_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_builder___get_default_gen_arg_defaults_obj_____get__(self, instance, owner);
}
PyMemberDef builder___get_default_gen_arg_defaults_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *builder___get_default_gen_arg_defaults_obj_setup(PyTypeObject *type);
PyObject *CPyDef_builder___get_default_gen_arg_defaults_obj(void);

static PyObject *
builder___get_default_gen_arg_defaults_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_builder___get_default_gen_arg_defaults_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return builder___get_default_gen_arg_defaults_obj_setup(type);
}

static int
builder___get_default_gen_arg_defaults_obj_traverse(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject))));
    return 0;
}

static int
builder___get_default_gen_arg_defaults_obj_clear(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject))));
    return 0;
}

static void
builder___get_default_gen_arg_defaults_obj_dealloc(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, builder___get_default_gen_arg_defaults_obj_dealloc)
    builder___get_default_gen_arg_defaults_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem builder___get_default_gen_arg_defaults_obj_vtable[2];
static bool
CPyDef_builder___get_default_gen_arg_defaults_obj_trait_vtable_setup(void)
{
    CPyVTableItem builder___get_default_gen_arg_defaults_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_builder___get_default_gen_arg_defaults_obj_____call__,
        (CPyVTableItem)CPyDef_builder___get_default_gen_arg_defaults_obj_____get__,
    };
    memcpy(builder___get_default_gen_arg_defaults_obj_vtable, builder___get_default_gen_arg_defaults_obj_vtable_scratch, sizeof(builder___get_default_gen_arg_defaults_obj_vtable));
    return 1;
}

static PyMethodDef builder___get_default_gen_arg_defaults_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_builder___get_default_gen_arg_defaults_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_builder___get_default_gen_arg_defaults_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_builder___get_default_gen_arg_defaults_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_default_gen_arg_defaults_obj",
    .tp_new = builder___get_default_gen_arg_defaults_obj_new,
    .tp_dealloc = (destructor)builder___get_default_gen_arg_defaults_obj_dealloc,
    .tp_traverse = (traverseproc)builder___get_default_gen_arg_defaults_obj_traverse,
    .tp_clear = (inquiry)builder___get_default_gen_arg_defaults_obj_clear,
    .tp_methods = builder___get_default_gen_arg_defaults_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__builder___get_default_gen_arg_defaults_obj,
    .tp_members = builder___get_default_gen_arg_defaults_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_builder___get_default_gen_arg_defaults_obj_template = &CPyType_builder___get_default_gen_arg_defaults_obj_template_;

static PyObject *
builder___get_default_gen_arg_defaults_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *self;
    self = (mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = builder___get_default_gen_arg_defaults_obj_vtable;
    self->vectorcall = CPyPy_builder___get_default_gen_arg_defaults_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_builder___get_default_gen_arg_defaults_obj(void)
{
    PyObject *self = builder___get_default_gen_arg_defaults_obj_setup(CPyType_builder___get_default_gen_arg_defaults_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef buildermodule_methods[] = {
    {"gen_arg_defaults", (PyCFunction)CPyPy_builder___gen_arg_defaults, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"remangle_redefinition_name", (PyCFunction)CPyPy_builder___remangle_redefinition_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_call_target_fullname", (PyCFunction)CPyPy_builder___get_call_target_fullname, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef buildermodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.builder",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    buildermodule_methods
};

PyObject *CPyInit_mypyc___irbuild___builder(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___builder_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___builder_internal);
        return CPyModule_mypyc___irbuild___builder_internal;
    }
    CPyModule_mypyc___irbuild___builder_internal = PyModule_Create(&buildermodule);
    if (unlikely(CPyModule_mypyc___irbuild___builder_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___builder_internal, "__name__");
    CPyStatic_builder___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___builder_internal);
    if (unlikely(CPyStatic_builder___globals == NULL))
        goto fail;
    CPyType_builder___shortcircuit_expr_IRBuilder_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder___shortcircuit_expr_IRBuilder_env_template, NULL, modname);
    if (unlikely(!CPyType_builder___shortcircuit_expr_IRBuilder_env))
        goto fail;
    CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_template, NULL, modname);
    if (unlikely(!CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj))
        goto fail;
    CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_template, NULL, modname);
    if (unlikely(!CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj))
        goto fail;
    CPyType_builder___enter_method_IRBuilder_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder___enter_method_IRBuilder_env_template, NULL, modname);
    if (unlikely(!CPyType_builder___enter_method_IRBuilder_env))
        goto fail;
    CPyType_builder___enter_method_IRBuilder_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder___enter_method_IRBuilder_gen_template, NULL, modname);
    if (unlikely(!CPyType_builder___enter_method_IRBuilder_gen))
        goto fail;
    CPyType_builder___gen_arg_defaults_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder___gen_arg_defaults_env_template, NULL, modname);
    if (unlikely(!CPyType_builder___gen_arg_defaults_env))
        goto fail;
    CPyType_builder___get_default_gen_arg_defaults_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_builder___get_default_gen_arg_defaults_obj_template, NULL, modname);
    if (unlikely(!CPyType_builder___get_default_gen_arg_defaults_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_builder_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___builder_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___builder_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_builder___int_borrow_friendly_op);
    CPyStatic_builder___int_borrow_friendly_op = NULL;
    Py_CLEAR(CPyType_builder___IRVisitor);
    Py_CLEAR(CPyType_builder___UnsupportedException);
    Py_CLEAR(CPyType_builder___IRBuilder);
    Py_CLEAR(CPyType_builder___shortcircuit_expr_IRBuilder_env);
    Py_CLEAR(CPyType_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj);
    Py_CLEAR(CPyType_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj);
    Py_CLEAR(CPyType_builder___enter_method_IRBuilder_env);
    Py_CLEAR(CPyType_builder___enter_method_IRBuilder_gen);
    Py_CLEAR(CPyType_builder___gen_arg_defaults_env);
    Py_CLEAR(CPyType_builder___get_default_gen_arg_defaults_obj);
    return NULL;
}

char CPyDef_builder___IRBuilder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_current_module, PyObject *cpy_r_types, PyObject *cpy_r_graph, PyObject *cpy_r_errors, PyObject *cpy_r_mapper, PyObject *cpy_r_pbv, PyObject *cpy_r_visitor, PyObject *cpy_r_options, PyObject *cpy_r_singledispatch_impls) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
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
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    cpy_r_r0 = CPyDef_ll_builder___LowLevelIRBuilder(cpy_r_current_module, cpy_r_errors, cpy_r_mapper, cpy_r_options);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 162, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 163, CPyStatic_builder___globals);
        goto CPyL29;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r1;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builders = cpy_r_r2;
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 164, CPyStatic_builder___globals);
        goto CPyL28;
    }
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 164, CPyStatic_builder___globals);
        goto CPyL30;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables = cpy_r_r6;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 165, CPyStatic_builder___globals);
        goto CPyL28;
    }
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 165, CPyStatic_builder___globals);
        goto CPyL31;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_r9;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_runtime_args = cpy_r_r10;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 166, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_function_name_stack = cpy_r_r13;
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 167, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_class_ir_stack = cpy_r_r14;
    CPy_INCREF(cpy_r_current_module);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_current_module = cpy_r_current_module;
    CPy_INCREF(cpy_r_mapper);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper = cpy_r_mapper;
    CPy_INCREF(cpy_r_types);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types = cpy_r_types;
    CPy_INCREF(cpy_r_graph);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_graph = cpy_r_graph;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 173, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_ret_types = cpy_r_r15;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 174, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_functions = cpy_r_r16;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 175, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_classes = cpy_r_r17;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 176, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_final_names = cpy_r_r18;
    cpy_r_r19 = PySet_New(NULL);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 177, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_callable_class_names = cpy_r_r19;
    CPy_INCREF(cpy_r_options);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_options = cpy_r_options;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_lambda_counter = 0;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_temp_counter = 0;
    cpy_r_r20 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_pbv)->_free_variables;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "__init__", "PreBuildVisitor", "free_variables", 187, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r20);
CPyL14: ;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_free_variables = cpy_r_r20;
    cpy_r_r21 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_pbv)->_prop_setters;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "__init__", "PreBuildVisitor", "prop_setters", 188, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r21);
CPyL15: ;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_prop_setters = cpy_r_r21;
    cpy_r_r22 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_pbv)->_encapsulating_funcs;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "__init__", "PreBuildVisitor", "encapsulating_funcs", 189, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r22);
CPyL16: ;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_encapsulating_funcs = cpy_r_r22;
    cpy_r_r23 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_pbv)->_nested_funcs;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "__init__", "PreBuildVisitor", "nested_funcs", 190, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r23);
CPyL17: ;
    cpy_r_r24 = CPyDict_KeysView(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 190, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nested_fitems = cpy_r_r24;
    cpy_r_r25 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_pbv)->_funcs_to_decorators;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "__init__", "PreBuildVisitor", "funcs_to_decorators", 191, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r25);
CPyL19: ;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fdefs_to_decorators = cpy_r_r25;
    cpy_r_r26 = ((mypyc___irbuild___prebuildvisitor___PreBuildVisitorObject *)cpy_r_pbv)->_module_import_groups;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "__init__", "PreBuildVisitor", "module_import_groups", 192, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r26);
CPyL20: ;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_import_groups = cpy_r_r26;
    CPy_INCREF(cpy_r_singledispatch_impls);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_singledispatch_impls = cpy_r_singledispatch_impls;
    CPy_INCREF(cpy_r_visitor);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_visitor = cpy_r_visitor;
    cpy_r_r27 = CPyStatic_func_ir___INVALID_FUNC_DEF;
    if (likely(cpy_r_r27 != NULL)) goto CPyL23;
    PyErr_SetString(PyExc_NameError, "value for final name \"INVALID_FUNC_DEF\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 203, CPyStatic_builder___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r29 = CPyStatics[163]; /* '' */
    cpy_r_r30 = CPyStatics[163]; /* '' */
    cpy_r_r31 = NULL;
    cpy_r_r32 = 2;
    cpy_r_r33 = 2;
    cpy_r_r34 = 2;
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyDef_context___FuncInfo(cpy_r_r27, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 203, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info = cpy_r_r36;
    cpy_r_r37 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = PyList_New(1);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 204, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_r39 = (CPyPtr)&((PyListObject *)cpy_r_r38)->ob_item;
    cpy_r_r40 = *(CPyPtr *)cpy_r_r39;
    *(PyObject * *)cpy_r_r40 = cpy_r_r37;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_infos = cpy_r_r38;
    cpy_r_r41 = PyList_New(0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 208, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control = cpy_r_r41;
    CPy_INCREF(cpy_r_errors);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_errors = cpy_r_errors;
    cpy_r_r42 = PyDict_New();
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 214, CPyStatic_builder___globals);
        goto CPyL28;
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_imports = cpy_r_r42;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_can_borrow = 0;
    return 1;
CPyL28: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL29: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL28;
}

PyObject *CPyPy_builder___IRBuilder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"current_module", "types", "graph", "errors", "mapper", "pbv", "visitor", "options", "singledispatch_impls", 0};
    PyObject *obj_current_module;
    PyObject *obj_types;
    PyObject *obj_graph;
    PyObject *obj_errors;
    PyObject *obj_mapper;
    PyObject *obj_pbv;
    PyObject *obj_visitor;
    PyObject *obj_options;
    PyObject *obj_singledispatch_impls;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOO", "__init__", kwlist, &obj_current_module, &obj_types, &obj_graph, &obj_errors, &obj_mapper, &obj_pbv, &obj_visitor, &obj_options, &obj_singledispatch_impls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_current_module;
    if (likely(PyUnicode_Check(obj_current_module)))
        arg_current_module = obj_current_module;
    else {
        CPy_TypeError("str", obj_current_module); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyDict_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("dict", obj_types); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_pbv;
    if (likely(Py_TYPE(obj_pbv) == CPyType_prebuildvisitor___PreBuildVisitor))
        arg_pbv = obj_pbv;
    else {
        CPy_TypeError("mypyc.irbuild.prebuildvisitor.PreBuildVisitor", obj_pbv); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(Py_TYPE(obj_visitor) == CPyType_irbuild___visitor___IRBuilderVisitor))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypyc___options___CompilerOptions))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_options); 
        goto fail;
    }
    PyObject *arg_singledispatch_impls;
    if (likely(PyDict_Check(obj_singledispatch_impls)))
        arg_singledispatch_impls = obj_singledispatch_impls;
    else {
        CPy_TypeError("dict", obj_singledispatch_impls); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder_____init__(arg_self, arg_current_module, arg_types, arg_graph, arg_errors, arg_mapper, arg_pbv, arg_visitor, arg_options, arg_singledispatch_impls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "__init__", 150, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___set_module(PyObject *cpy_r_self, PyObject *cpy_r_module_name, PyObject *cpy_r_module_path) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPy_INCREF(cpy_r_module_name);
    if (((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name);
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name = cpy_r_module_name;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "set_module", 225, CPyStatic_builder___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_module_path);
    if (((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path);
    }
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path = cpy_r_module_path;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "set_module", 226, CPyStatic_builder___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_ll_builder___LowLevelIRBuilder___set_module(cpy_r_r2, cpy_r_module_name, cpy_r_module_path);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "set_module", 227, CPyStatic_builder___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_builder___IRBuilder___set_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module_name", "module_path", 0};
    static CPyArg_Parser parser = {"OO:set_module", kwlist, 0};
    PyObject *obj_module_name;
    PyObject *obj_module_path;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_name, &obj_module_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_module_path;
    if (likely(PyUnicode_Check(obj_module_path)))
        arg_module_path = obj_module_path;
    else {
        CPy_TypeError("str", obj_module_path); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___set_module(arg_self, arg_module_name, arg_module_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "set_module", 220, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___accept(PyObject *cpy_r_self, PyObject *cpy_r_node, char cpy_r_can_borrow) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
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
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_old_can_borrow;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    tuple_T3OOO cpy_r_r67;
    PyObject *cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    if (cpy_r_can_borrow != 2) goto CPyL2;
    cpy_r_can_borrow = 0;
CPyL2: ;
    cpy_r_r0 = (PyObject *)CPyType_nodes___Statement;
    cpy_r_r1 = CPy_TypeCheck(cpy_r_node, cpy_r_r0);
    if (!cpy_r_r1) goto CPyL6;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Statement)))
        cpy_r_r2 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals, "mypy.nodes.Statement", cpy_r_node);
        goto CPyL72;
    }
    cpy_r_r3 = ((mypy___nodes___ContextObject *)cpy_r_r2)->_line;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Statement' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL72;
    }
CPyL5: ;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL9;
CPyL6: ;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Expression)))
        cpy_r_r5 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_node);
        goto CPyL72;
    }
    cpy_r_r6 = ((mypy___nodes___ContextObject *)cpy_r_r5)->_line;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Expression' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL72;
    }
CPyL8: ;
    cpy_r_r4 = cpy_r_r6;
CPyL9: ;
    cpy_r_r7 = CPyDef_builder___IRBuilder___catch_errors(cpy_r_self, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r8 = PyObject_Type(cpy_r_r7);
    cpy_r_r9 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL73;
    }
    cpy_r_r11 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r7};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL74;
    } else
        goto CPyL75;
CPyL13: ;
    cpy_r_r16 = 1;
    cpy_r_r17 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r18 = CPy_TypeCheck(cpy_r_node, cpy_r_r17);
    if (!cpy_r_r18) goto CPyL38;
    cpy_r_r19 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_can_borrow;
    cpy_r_old_can_borrow = cpy_r_r19;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_can_borrow = cpy_r_can_borrow;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Expression)))
        cpy_r_r21 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 249, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_node);
        goto CPyL25;
    }
    cpy_r_r22 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_visitor;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPY_GET_METHOD_TRAIT(cpy_r_r21, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r21, cpy_r_r22); /* accept */
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 249, CPyStatic_builder___globals);
        goto CPyL25;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_ops___Value)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 249, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r23);
        goto CPyL25;
    }
    cpy_r_res = cpy_r_r24;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Expression)))
        cpy_r_r25 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 250, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_node);
        goto CPyL76;
    }
    cpy_r_r26 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 250, CPyStatic_builder___globals);
        goto CPyL76;
    }
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Expression)))
        cpy_r_r27 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 250, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_node);
        goto CPyL77;
    }
    cpy_r_r28 = ((mypy___nodes___ContextObject *)cpy_r_r27)->_line;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "accept", "Expression", "line", 250, CPyStatic_builder___globals);
        goto CPyL77;
    }
    CPyTagged_INCREF(cpy_r_r28);
CPyL23: ;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_res, cpy_r_r26, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 250, CPyStatic_builder___globals);
        goto CPyL25;
    }
    cpy_r_res = cpy_r_r30;
    goto CPyL35;
CPyL25: ;
    cpy_r_r31 = CPy_CatchError();
    cpy_r_r32 = (PyObject *)CPyType_builder___UnsupportedException;
    cpy_r_r33 = CPy_ExceptionMatches(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL30;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Expression)))
        cpy_r_r34 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 256, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_node);
        goto CPyL33;
    }
    cpy_r_r35 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r34);
    CPy_DecRef(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 256, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_r36 = NULL;
    cpy_r_r37 = 2;
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPyDef_ops___Register(cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38);
    CPy_DecRef(cpy_r_r35);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 256, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_res = cpy_r_r39;
    goto CPyL32;
CPyL30: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL33;
    } else
        goto CPyL78;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL35;
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    cpy_r_r40 = CPy_KeepPropagating();
    if (!cpy_r_r40) {
        goto CPyL48;
    } else
        goto CPyL79;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_can_borrow = cpy_r_old_can_borrow;
    if (cpy_r_can_borrow) goto CPyL37;
    cpy_r_r42 = CPyDef_builder___IRBuilder___flush_keep_alives(cpy_r_self);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 259, CPyStatic_builder___globals);
        goto CPyL80;
    }
CPyL37: ;
    cpy_r_r43 = cpy_r_res;
    goto CPyL57;
CPyL38: ;
    CPy_INCREF(cpy_r_node);
    if (likely(PyObject_TypeCheck(cpy_r_node, CPyType_nodes___Statement)))
        cpy_r_r44 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 263, CPyStatic_builder___globals, "mypy.nodes.Statement", cpy_r_node);
        goto CPyL40;
    }
    cpy_r_r45 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_visitor;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = CPY_GET_METHOD_TRAIT(cpy_r_r44, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r44, cpy_r_r45); /* accept */
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 263, CPyStatic_builder___globals);
    } else
        goto CPyL81;
CPyL40: ;
    cpy_r_r47 = CPy_CatchError();
    cpy_r_r48 = (PyObject *)CPyType_builder___UnsupportedException;
    cpy_r_r49 = CPy_ExceptionMatches(cpy_r_r48);
    if (cpy_r_r49) goto CPyL43;
    CPy_Reraise();
    if (!0) {
        goto CPyL44;
    } else
        goto CPyL82;
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    goto CPyL46;
CPyL44: ;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    cpy_r_r50 = CPy_KeepPropagating();
    if (!cpy_r_r50) {
        goto CPyL48;
    } else
        goto CPyL83;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    if (PyObject_TypeCheck(cpy_r_r51, CPyType_ops___Value))
        cpy_r_r52 = cpy_r_r51;
    else {
        cpy_r_r52 = NULL;
    }
    if (cpy_r_r52 != NULL) goto __LL9933;
    if (cpy_r_r51 == Py_None)
        cpy_r_r52 = cpy_r_r51;
    else {
        cpy_r_r52 = NULL;
    }
    if (cpy_r_r52 != NULL) goto __LL9933;
    CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "accept", 266, CPyStatic_builder___globals, "mypyc.ir.ops.Value or None", cpy_r_r51);
    goto CPyL48;
__LL9933: ;
    cpy_r_r43 = cpy_r_r52;
    goto CPyL57;
CPyL48: ;
    cpy_r_r53 = CPy_CatchError();
    cpy_r_r16 = 0;
    cpy_r_r54 = CPy_GetExcInfo();
    cpy_r_r55 = cpy_r_r54.f0;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = cpy_r_r54.f1;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = cpy_r_r54.f2;
    CPy_INCREF(cpy_r_r57);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    PyObject *cpy_r_r58[4] = {cpy_r_r7, cpy_r_r55, cpy_r_r56, cpy_r_r57};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r59, 4, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL84;
    }
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    cpy_r_r61 = PyObject_IsTrue(cpy_r_r60);
    CPy_DecRef(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL54;
    }
    cpy_r_r63 = cpy_r_r61;
    if (cpy_r_r63) goto CPyL53;
    CPy_Reraise();
    if (!0) {
        goto CPyL54;
    } else
        goto CPyL85;
CPyL52: ;
    CPy_Unreachable();
CPyL53: ;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    goto CPyL56;
CPyL54: ;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    cpy_r_r64 = CPy_KeepPropagating();
    if (!cpy_r_r64) {
        goto CPyL58;
    } else
        goto CPyL86;
CPyL55: ;
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r65 = NULL;
    cpy_r_r43 = cpy_r_r65;
CPyL57: ;
    tuple_T3OOO __tmp9934 = { NULL, NULL, NULL };
    cpy_r_r66 = __tmp9934;
    cpy_r_r67 = cpy_r_r66;
    goto CPyL59;
CPyL58: ;
    cpy_r_r68 = NULL;
    cpy_r_r43 = cpy_r_r68;
    cpy_r_r69 = CPy_CatchError();
    cpy_r_r67 = cpy_r_r69;
CPyL59: ;
    if (!cpy_r_r16) goto CPyL87;
    cpy_r_r70 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r71[4] = {cpy_r_r7, cpy_r_r70, cpy_r_r70, cpy_r_r70};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r72, 4, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 244, CPyStatic_builder___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL61: ;
    CPy_DECREF(cpy_r_r7);
CPyL62: ;
    if (cpy_r_r67.f0 == NULL) {
        goto CPyL65;
    } else
        goto CPyL90;
CPyL63: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL67;
    } else
        goto CPyL91;
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    if (cpy_r_r43 == NULL) goto CPyL71;
    return cpy_r_r43;
CPyL67: ;
    if (cpy_r_r67.f0 == NULL) goto CPyL69;
    CPy_RestoreExcInfo(cpy_r_r67);
    CPy_XDECREF(cpy_r_r67.f0);
    CPy_XDECREF(cpy_r_r67.f1);
    CPy_XDECREF(cpy_r_r67.f2);
CPyL69: ;
    cpy_r_r74 = CPy_KeepPropagating();
    if (!cpy_r_r74) goto CPyL72;
    CPy_Unreachable();
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL73: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL72;
CPyL74: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL72;
CPyL75: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL13;
CPyL76: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL25;
CPyL77: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r26);
    goto CPyL25;
CPyL78: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL31;
CPyL79: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL34;
CPyL80: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL48;
CPyL81: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL46;
CPyL82: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    goto CPyL42;
CPyL83: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL45;
CPyL84: ;
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    goto CPyL54;
CPyL85: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    goto CPyL52;
CPyL86: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL55;
CPyL87: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL62;
CPyL88: ;
    CPy_DecRef(cpy_r_r7);
    CPy_XDecRef(cpy_r_r43);
    goto CPyL67;
CPyL89: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL61;
CPyL90: ;
    CPy_XDECREF(cpy_r_r43);
    goto CPyL63;
CPyL91: ;
    CPy_XDECREF(cpy_r_r67.f0);
    CPy_XDECREF(cpy_r_r67.f1);
    CPy_XDECREF(cpy_r_r67.f2);
    goto CPyL64;
}

PyObject *CPyPy_builder___IRBuilder___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", "can_borrow", 0};
    static CPyArg_Parser parser = {"O|$O:accept", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_can_borrow = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_node, &obj_can_borrow)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (PyObject_TypeCheck(obj_node, CPyType_nodes___Statement))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL9935;
    if (PyObject_TypeCheck(obj_node, CPyType_nodes___Expression))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL9935;
    CPy_TypeError("union[mypy.nodes.Statement, mypy.nodes.Expression]", obj_node); 
    goto fail;
__LL9935: ;
    char arg_can_borrow;
    if (obj_can_borrow == NULL) {
        arg_can_borrow = 2;
    } else if (unlikely(!PyBool_Check(obj_can_borrow))) {
        CPy_TypeError("bool", obj_can_borrow); goto fail;
    } else
        arg_can_borrow = obj_can_borrow == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___accept(arg_self, arg_node, arg_can_borrow);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "accept", 237, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___flush_keep_alives(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___flush_keep_alives(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flush_keep_alives", 269, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___flush_keep_alives(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush_keep_alives", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___flush_keep_alives(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "flush_keep_alives", 268, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___add(cpy_r_r0, cpy_r_op);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add", 274, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___add(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:add", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyObject_TypeCheck(obj_op, CPyType_ops___Op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Op", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___add(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add", 273, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___goto(PyObject *cpy_r_self, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___goto(cpy_r_r0, cpy_r_target);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "goto", 277, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", 0};
    static CPyArg_Parser parser = {"O:goto", kwlist, 0};
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_ops___BasicBlock))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_target); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___goto(arg_self, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "goto", 276, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___activate_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___activate_block(cpy_r_r0, cpy_r_block);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "activate_block", 280, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___activate_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:activate_block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_ops___BasicBlock))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_block); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___activate_block(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "activate_block", 279, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___goto_and_activate(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___goto_and_activate(cpy_r_r0, cpy_r_block);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "goto_and_activate", 283, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___goto_and_activate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:goto_and_activate", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_ops___BasicBlock))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_block); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___goto_and_activate(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "goto_and_activate", 282, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___self(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___self(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "self", 286, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___self(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":self", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___self(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "self", 285, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___py_get_attr(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_attr, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___py_get_attr(cpy_r_r0, cpy_r_obj, cpy_r_attr, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "py_get_attr", 289, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___py_get_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "attr", "line", 0};
    static CPyArg_Parser parser = {"OOO:py_get_attr", kwlist, 0};
    PyObject *obj_obj;
    PyObject *obj_attr;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_obj, &obj_attr, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyObject_TypeCheck(obj_obj, CPyType_ops___Value)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_obj); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___py_get_attr(arg_self, arg_obj, arg_attr, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "py_get_attr", 288, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_str(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___load_str(cpy_r_r0, cpy_r_value);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_str", 292, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___load_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:load_str", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_str(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_str", 291, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_bytes_from_str_literal(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_irbuild___util___bytes_from_str(cpy_r_value);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_bytes_from_str_literal", 301, CPyStatic_builder___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___load_bytes(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_bytes_from_str_literal", 301, CPyStatic_builder___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_builder___IRBuilder___load_bytes_from_str_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:load_bytes_from_str_literal", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_bytes_from_str_literal(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_bytes_from_str_literal", 294, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_int(PyObject *cpy_r_self, CPyTagged cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___load_int(cpy_r_r0, cpy_r_value);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_int", 304, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___load_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:load_int", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    CPyTagged arg_value;
    if (likely(PyLong_Check(obj_value)))
        arg_value = CPyTagged_BorrowFromObject(obj_value);
    else {
        CPy_TypeError("int", obj_value); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_int(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_int", 303, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_float(PyObject *cpy_r_self, double cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___load_float(cpy_r_r0, cpy_r_value);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_float", 307, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___load_float(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:load_float", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    double arg_value;
    arg_value = PyFloat_AsDouble(obj_value);
    if (arg_value == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_value); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_float(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_float", 306, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___unary_op(PyObject *cpy_r_self, PyObject *cpy_r_lreg, PyObject *cpy_r_expr_op, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___unary_op(cpy_r_r0, cpy_r_lreg, cpy_r_expr_op, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "unary_op", 310, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___unary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lreg", "expr_op", "line", 0};
    static CPyArg_Parser parser = {"OOO:unary_op", kwlist, 0};
    PyObject *obj_lreg;
    PyObject *obj_expr_op;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lreg, &obj_expr_op, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lreg;
    if (likely(PyObject_TypeCheck(obj_lreg, CPyType_ops___Value)))
        arg_lreg = obj_lreg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_lreg); 
        goto fail;
    }
    PyObject *arg_expr_op;
    if (likely(PyUnicode_Check(obj_expr_op)))
        arg_expr_op = obj_expr_op;
    else {
        CPy_TypeError("str", obj_expr_op); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___unary_op(arg_self, arg_lreg, arg_expr_op, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "unary_op", 309, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___binary_op(PyObject *cpy_r_self, PyObject *cpy_r_lreg, PyObject *cpy_r_rreg, PyObject *cpy_r_expr_op, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___binary_op(cpy_r_r0, cpy_r_lreg, cpy_r_rreg, cpy_r_expr_op, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "binary_op", 313, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___binary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lreg", "rreg", "expr_op", "line", 0};
    static CPyArg_Parser parser = {"OOOO:binary_op", kwlist, 0};
    PyObject *obj_lreg;
    PyObject *obj_rreg;
    PyObject *obj_expr_op;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lreg, &obj_rreg, &obj_expr_op, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lreg;
    if (likely(PyObject_TypeCheck(obj_lreg, CPyType_ops___Value)))
        arg_lreg = obj_lreg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_lreg); 
        goto fail;
    }
    PyObject *arg_rreg;
    if (likely(PyObject_TypeCheck(obj_rreg, CPyType_ops___Value)))
        arg_rreg = obj_rreg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rreg); 
        goto fail;
    }
    PyObject *arg_expr_op;
    if (likely(PyUnicode_Check(obj_expr_op)))
        arg_expr_op = obj_expr_op;
    else {
        CPy_TypeError("str", obj_expr_op); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___binary_op(arg_self, arg_lreg, arg_rreg, arg_expr_op, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "binary_op", 312, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___coerce(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_target_type, CPyTagged cpy_r_line, char cpy_r_force) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    if (cpy_r_force != 2) goto CPyL2;
    cpy_r_force = 0;
CPyL2: ;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_can_borrow;
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___coerce(cpy_r_r0, cpy_r_src, cpy_r_target_type, cpy_r_line, cpy_r_force, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce", 316, CPyStatic_builder___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_builder___IRBuilder___coerce(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "target_type", "line", "force", 0};
    static CPyArg_Parser parser = {"OOO|O:coerce", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_target_type;
    PyObject *obj_line;
    PyObject *obj_force = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_src, &obj_target_type, &obj_line, &obj_force)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyObject_TypeCheck(obj_src, CPyType_ops___Value)))
        arg_src = obj_src;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_src); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_rtypes___RType)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_target_type); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_force;
    if (obj_force == NULL) {
        arg_force = 2;
    } else if (unlikely(!PyBool_Check(obj_force))) {
        CPy_TypeError("bool", obj_force); goto fail;
    } else
        arg_force = obj_force == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___coerce(arg_self, arg_src, arg_target_type, arg_line, arg_force);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce", 315, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___none_object(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___none_object(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "none_object", 319, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___none_object(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":none_object", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___none_object(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "none_object", 318, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___none(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___none(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "none", 322, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___none(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":none", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___none(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "none", 321, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___true(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___true(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "true", 325, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___true(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":true", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___true(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "true", 324, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___false(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___false(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "false", 328, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___false(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":false", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___false(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "false", 327, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___new_list_op(PyObject *cpy_r_self, PyObject *cpy_r_values, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___new_list_op(cpy_r_r0, cpy_r_values, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "new_list_op", 331, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___new_list_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"values", "line", 0};
    static CPyArg_Parser parser = {"OO:new_list_op", kwlist, 0};
    PyObject *obj_values;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_values, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_values;
    if (likely(PyList_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("list", obj_values); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___new_list_op(arg_self, arg_values, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "new_list_op", 330, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___new_set_op(PyObject *cpy_r_self, PyObject *cpy_r_values, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___new_set_op(cpy_r_r0, cpy_r_values, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "new_set_op", 334, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___new_set_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"values", "line", 0};
    static CPyArg_Parser parser = {"OO:new_set_op", kwlist, 0};
    PyObject *obj_values;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_values, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_values;
    if (likely(PyList_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("list", obj_values); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___new_set_op(arg_self, arg_values, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "new_set_op", 333, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___translate_is_op(PyObject *cpy_r_self, PyObject *cpy_r_lreg, PyObject *cpy_r_rreg, PyObject *cpy_r_expr_op, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___translate_is_op(cpy_r_r0, cpy_r_lreg, cpy_r_rreg, cpy_r_expr_op, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "translate_is_op", 337, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___translate_is_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lreg", "rreg", "expr_op", "line", 0};
    static CPyArg_Parser parser = {"OOOO:translate_is_op", kwlist, 0};
    PyObject *obj_lreg;
    PyObject *obj_rreg;
    PyObject *obj_expr_op;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lreg, &obj_rreg, &obj_expr_op, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lreg;
    if (likely(PyObject_TypeCheck(obj_lreg, CPyType_ops___Value)))
        arg_lreg = obj_lreg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_lreg); 
        goto fail;
    }
    PyObject *arg_rreg;
    if (likely(PyObject_TypeCheck(obj_rreg, CPyType_ops___Value)))
        arg_rreg = obj_rreg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rreg); 
        goto fail;
    }
    PyObject *arg_expr_op;
    if (likely(PyUnicode_Check(obj_expr_op)))
        arg_expr_op = obj_expr_op;
    else {
        CPy_TypeError("str", obj_expr_op); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___translate_is_op(arg_self, arg_lreg, arg_rreg, arg_expr_op, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "translate_is_op", 336, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___py_call(PyObject *cpy_r_self, PyObject *cpy_r_function, PyObject *cpy_r_arg_values, CPyTagged cpy_r_line, PyObject *cpy_r_arg_kinds, PyObject *cpy_r_arg_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_arg_kinds != NULL) goto CPyL7;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_arg_kinds = cpy_r_r0;
CPyL2: ;
    if (cpy_r_arg_names != NULL) goto CPyL8;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_arg_names = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_ll_builder___LowLevelIRBuilder___py_call(cpy_r_r2, cpy_r_function, cpy_r_arg_values, cpy_r_line, cpy_r_arg_kinds, cpy_r_arg_names);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "py_call", 347, CPyStatic_builder___globals);
        goto CPyL6;
    }
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL7: ;
    CPy_INCREF(cpy_r_arg_kinds);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_arg_names);
    goto CPyL4;
}

PyObject *CPyPy_builder___IRBuilder___py_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"function", "arg_values", "line", "arg_kinds", "arg_names", 0};
    static CPyArg_Parser parser = {"OOO|OO:py_call", kwlist, 0};
    PyObject *obj_function;
    PyObject *obj_arg_values;
    PyObject *obj_line;
    PyObject *obj_arg_kinds = NULL;
    PyObject *obj_arg_names = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_function, &obj_arg_values, &obj_line, &obj_arg_kinds, &obj_arg_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_function;
    if (likely(PyObject_TypeCheck(obj_function, CPyType_ops___Value)))
        arg_function = obj_function;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_function); 
        goto fail;
    }
    PyObject *arg_arg_values;
    if (likely(PyList_Check(obj_arg_values)))
        arg_arg_values = obj_arg_values;
    else {
        CPy_TypeError("list", obj_arg_values); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_arg_kinds;
    if (obj_arg_kinds == NULL) {
        arg_arg_kinds = NULL;
        goto __LL9936;
    }
    if (PyList_Check(obj_arg_kinds))
        arg_arg_kinds = obj_arg_kinds;
    else {
        arg_arg_kinds = NULL;
    }
    if (arg_arg_kinds != NULL) goto __LL9936;
    if (obj_arg_kinds == Py_None)
        arg_arg_kinds = obj_arg_kinds;
    else {
        arg_arg_kinds = NULL;
    }
    if (arg_arg_kinds != NULL) goto __LL9936;
    CPy_TypeError("list or None", obj_arg_kinds); 
    goto fail;
__LL9936: ;
    PyObject *arg_arg_names;
    if (obj_arg_names == NULL) {
        arg_arg_names = NULL;
        goto __LL9937;
    }
    arg_arg_names = obj_arg_names;
    if (arg_arg_names != NULL) goto __LL9937;
    if (obj_arg_names == Py_None)
        arg_arg_names = obj_arg_names;
    else {
        arg_arg_names = NULL;
    }
    if (arg_arg_names != NULL) goto __LL9937;
    CPy_TypeError("object or None", obj_arg_names); 
    goto fail;
__LL9937: ;
    PyObject *retval = CPyDef_builder___IRBuilder___py_call(arg_self, arg_function, arg_arg_values, arg_line, arg_arg_kinds, arg_arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "py_call", 339, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___add_bool_branch(PyObject *cpy_r_self, PyObject *cpy_r_value, PyObject *cpy_r_true, PyObject *cpy_r_false) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___add_bool_branch(cpy_r_r0, cpy_r_value, cpy_r_true, cpy_r_false);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_bool_branch", 350, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___add_bool_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", "true", "false", 0};
    static CPyArg_Parser parser = {"OOO:add_bool_branch", kwlist, 0};
    PyObject *obj_value;
    PyObject *obj_true;
    PyObject *obj_false;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_value, &obj_true, &obj_false)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    PyObject *arg_true;
    if (likely(Py_TYPE(obj_true) == CPyType_ops___BasicBlock))
        arg_true = obj_true;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_true); 
        goto fail;
    }
    PyObject *arg_false;
    if (likely(Py_TYPE(obj_false) == CPyType_ops___BasicBlock))
        arg_false = obj_false;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_false); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___add_bool_branch(arg_self, arg_value, arg_true, arg_false);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_bool_branch", 349, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_native_type_object(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___load_native_type_object(cpy_r_r0, cpy_r_fullname);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_native_type_object", 353, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___load_native_type_object(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:load_native_type_object", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_native_type_object(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_native_type_object", 352, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___gen_method_call(PyObject *cpy_r_self, PyObject *cpy_r_base, PyObject *cpy_r_name, PyObject *cpy_r_arg_values, PyObject *cpy_r_result_type, CPyTagged cpy_r_line, PyObject *cpy_r_arg_kinds, PyObject *cpy_r_arg_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    if (cpy_r_arg_kinds != NULL) goto CPyL7;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_arg_kinds = cpy_r_r0;
CPyL2: ;
    if (cpy_r_arg_names != NULL) goto CPyL8;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_arg_names = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_can_borrow;
    cpy_r_r4 = CPyDef_ll_builder___LowLevelIRBuilder___gen_method_call(cpy_r_r2, cpy_r_base, cpy_r_name, cpy_r_arg_values, cpy_r_result_type, cpy_r_line, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_r3);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_method_call", 365, CPyStatic_builder___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_INCREF(cpy_r_arg_kinds);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_arg_names);
    goto CPyL4;
}

PyObject *CPyPy_builder___IRBuilder___gen_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"base", "name", "arg_values", "result_type", "line", "arg_kinds", "arg_names", 0};
    static CPyArg_Parser parser = {"OOOOO|OO:gen_method_call", kwlist, 0};
    PyObject *obj_base;
    PyObject *obj_name;
    PyObject *obj_arg_values;
    PyObject *obj_result_type;
    PyObject *obj_line;
    PyObject *obj_arg_kinds = NULL;
    PyObject *obj_arg_names = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_base, &obj_name, &obj_arg_values, &obj_result_type, &obj_line, &obj_arg_kinds, &obj_arg_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(PyObject_TypeCheck(obj_base, CPyType_ops___Value)))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_base); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_arg_values;
    if (likely(PyList_Check(obj_arg_values)))
        arg_arg_values = obj_arg_values;
    else {
        CPy_TypeError("list", obj_arg_values); 
        goto fail;
    }
    PyObject *arg_result_type;
    if (PyObject_TypeCheck(obj_result_type, CPyType_rtypes___RType))
        arg_result_type = obj_result_type;
    else {
        arg_result_type = NULL;
    }
    if (arg_result_type != NULL) goto __LL9938;
    if (obj_result_type == Py_None)
        arg_result_type = obj_result_type;
    else {
        arg_result_type = NULL;
    }
    if (arg_result_type != NULL) goto __LL9938;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_result_type); 
    goto fail;
__LL9938: ;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_arg_kinds;
    if (obj_arg_kinds == NULL) {
        arg_arg_kinds = NULL;
        goto __LL9939;
    }
    if (PyList_Check(obj_arg_kinds))
        arg_arg_kinds = obj_arg_kinds;
    else {
        arg_arg_kinds = NULL;
    }
    if (arg_arg_kinds != NULL) goto __LL9939;
    if (obj_arg_kinds == Py_None)
        arg_arg_kinds = obj_arg_kinds;
    else {
        arg_arg_kinds = NULL;
    }
    if (arg_arg_kinds != NULL) goto __LL9939;
    CPy_TypeError("list or None", obj_arg_kinds); 
    goto fail;
__LL9939: ;
    PyObject *arg_arg_names;
    if (obj_arg_names == NULL) {
        arg_arg_names = NULL;
        goto __LL9940;
    }
    if (PyList_Check(obj_arg_names))
        arg_arg_names = obj_arg_names;
    else {
        arg_arg_names = NULL;
    }
    if (arg_arg_names != NULL) goto __LL9940;
    if (obj_arg_names == Py_None)
        arg_arg_names = obj_arg_names;
    else {
        arg_arg_names = NULL;
    }
    if (arg_arg_names != NULL) goto __LL9940;
    CPy_TypeError("list or None", obj_arg_names); 
    goto fail;
__LL9940: ;
    PyObject *retval = CPyDef_builder___IRBuilder___gen_method_call(arg_self, arg_base, arg_name, arg_arg_values, arg_result_type, arg_line, arg_arg_kinds, arg_arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_method_call", 355, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_module(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___load_module(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module", 370, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___load_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:load_module", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_module(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module", 369, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___call_c(PyObject *cpy_r_self, PyObject *cpy_r_desc, PyObject *cpy_r_args, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___call_c(cpy_r_r0, cpy_r_desc, cpy_r_args, cpy_r_line, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_c", 373, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_builder___IRBuilder___call_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"desc", "args", "line", 0};
    static CPyArg_Parser parser = {"OOO:call_c", kwlist, 0};
    PyObject *obj_desc;
    PyObject *obj_args;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_desc, &obj_args, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject * arg_desc;
    if (likely(PyTuple_Check(obj_desc)))
        arg_desc = obj_desc;
    else {
        CPy_TypeError("tuple", obj_desc); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___call_c(arg_self, arg_desc, arg_args, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "call_c", 372, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___int_op(PyObject *cpy_r_self, PyObject *cpy_r_type, PyObject *cpy_r_lhs, PyObject *cpy_r_rhs, CPyTagged cpy_r_op, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___int_op(cpy_r_r0, cpy_r_type, cpy_r_lhs, cpy_r_rhs, cpy_r_op, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "int_op", 376, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", "lhs", "rhs", "op", "line", 0};
    static CPyArg_Parser parser = {"OOOOO:int_op", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_lhs;
    PyObject *obj_rhs;
    PyObject *obj_op;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_lhs, &obj_rhs, &obj_op, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_rtypes___RType)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_type); 
        goto fail;
    }
    PyObject *arg_lhs;
    if (likely(PyObject_TypeCheck(obj_lhs, CPyType_ops___Value)))
        arg_lhs = obj_lhs;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_lhs); 
        goto fail;
    }
    PyObject *arg_rhs;
    if (likely(PyObject_TypeCheck(obj_rhs, CPyType_ops___Value)))
        arg_rhs = obj_rhs;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rhs); 
        goto fail;
    }
    CPyTagged arg_op;
    if (likely(PyLong_Check(obj_op)))
        arg_op = CPyTagged_BorrowFromObject(obj_op);
    else {
        CPy_TypeError("int", obj_op); goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___int_op(arg_self, arg_type, arg_lhs, arg_rhs, arg_op, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "int_op", 375, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___compare_tagged(PyObject *cpy_r_self, PyObject *cpy_r_lhs, PyObject *cpy_r_rhs, PyObject *cpy_r_op, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___compare_tagged(cpy_r_r0, cpy_r_lhs, cpy_r_rhs, cpy_r_op, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "compare_tagged", 379, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___compare_tagged(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lhs", "rhs", "op", "line", 0};
    static CPyArg_Parser parser = {"OOOO:compare_tagged", kwlist, 0};
    PyObject *obj_lhs;
    PyObject *obj_rhs;
    PyObject *obj_op;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lhs, &obj_rhs, &obj_op, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lhs;
    if (likely(PyObject_TypeCheck(obj_lhs, CPyType_ops___Value)))
        arg_lhs = obj_lhs;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_lhs); 
        goto fail;
    }
    PyObject *arg_rhs;
    if (likely(PyObject_TypeCheck(obj_rhs, CPyType_ops___Value)))
        arg_rhs = obj_rhs;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rhs); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___compare_tagged(arg_self, arg_lhs, arg_rhs, arg_op, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "compare_tagged", 378, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___compare_tuples(PyObject *cpy_r_self, PyObject *cpy_r_lhs, PyObject *cpy_r_rhs, PyObject *cpy_r_op, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___compare_tuples(cpy_r_r0, cpy_r_lhs, cpy_r_rhs, cpy_r_op, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "compare_tuples", 382, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___compare_tuples(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lhs", "rhs", "op", "line", 0};
    static CPyArg_Parser parser = {"OOOO:compare_tuples", kwlist, 0};
    PyObject *obj_lhs;
    PyObject *obj_rhs;
    PyObject *obj_op;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lhs, &obj_rhs, &obj_op, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lhs;
    if (likely(PyObject_TypeCheck(obj_lhs, CPyType_ops___Value)))
        arg_lhs = obj_lhs;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_lhs); 
        goto fail;
    }
    PyObject *arg_rhs;
    if (likely(PyObject_TypeCheck(obj_rhs, CPyType_ops___Value)))
        arg_rhs = obj_rhs;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rhs); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___compare_tuples(arg_self, arg_lhs, arg_rhs, arg_op, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "compare_tuples", 381, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___builtin_len(PyObject *cpy_r_self, PyObject *cpy_r_val, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___builtin_len(cpy_r_r0, cpy_r_val, cpy_r_line, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "builtin_len", 385, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_builder___IRBuilder___builtin_len(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"val", "line", 0};
    static CPyArg_Parser parser = {"OO:builtin_len", kwlist, 0};
    PyObject *obj_val;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_val, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_val;
    if (likely(PyObject_TypeCheck(obj_val, CPyType_ops___Value)))
        arg_val = obj_val;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_val); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___builtin_len(arg_self, arg_val, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "builtin_len", 384, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___new_tuple(PyObject *cpy_r_self, PyObject *cpy_r_items, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_ll_builder___LowLevelIRBuilder___new_tuple(cpy_r_r0, cpy_r_items, cpy_r_line);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "new_tuple", 388, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___new_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"items", "line", 0};
    static CPyArg_Parser parser = {"OO:new_tuple", kwlist, 0};
    PyObject *obj_items;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_items, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___new_tuple(arg_self, arg_items, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "new_tuple", 387, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___add_to_non_ext_dict(PyObject *cpy_r_self, PyObject *cpy_r_non_ext, PyObject *cpy_r_key, PyObject *cpy_r_val, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key_unicode;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_builder___IRBuilder___load_str(cpy_r_self, cpy_r_key);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_to_non_ext_dict", 396, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_key_unicode = cpy_r_r0;
    cpy_r_r1 = CPyStatic_builder___globals;
    cpy_r_r2 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_to_non_ext_dict", 397, CPyStatic_builder___globals);
        goto CPyL7;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_to_non_ext_dict", 397, CPyStatic_builder___globals, "tuple", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_non_ext)->_dict;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PyList_New(3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_to_non_ext_dict", 397, CPyStatic_builder___globals);
        goto CPyL8;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = cpy_r_r8 + 8;
    *(PyObject * *)cpy_r_r9 = cpy_r_key_unicode;
    cpy_r_r10 = cpy_r_r8 + 16;
    CPy_INCREF(cpy_r_val);
    *(PyObject * *)cpy_r_r10 = cpy_r_val;
    cpy_r_r11 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r4, cpy_r_r6, cpy_r_line);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_to_non_ext_dict", 397, CPyStatic_builder___globals);
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL7: ;
    CPy_DecRef(cpy_r_key_unicode);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_key_unicode);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL5;
}

PyObject *CPyPy_builder___IRBuilder___add_to_non_ext_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"non_ext", "key", "val", "line", 0};
    static CPyArg_Parser parser = {"OOOO:add_to_non_ext_dict", kwlist, 0};
    PyObject *obj_non_ext;
    PyObject *obj_key;
    PyObject *obj_val;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_non_ext, &obj_key, &obj_val, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_non_ext;
    if (likely(Py_TYPE(obj_non_ext) == CPyType_class_ir___NonExtClassInfo))
        arg_non_ext = obj_non_ext;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_non_ext); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *arg_val;
    if (likely(PyObject_TypeCheck(obj_val, CPyType_ops___Value)))
        arg_val = obj_val;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_val); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___add_to_non_ext_dict(arg_self, arg_non_ext, arg_key, arg_val, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_to_non_ext_dict", 392, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___gen_import(PyObject *cpy_r_self, PyObject *cpy_r_id, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_needs_import;
    PyObject *cpy_r_out;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_imports;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = Py_None;
    cpy_r_r2 = CPyDict_SetItem(cpy_r_r0, cpy_r_id, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 400, CPyStatic_builder___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___BasicBlock(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 402, CPyStatic_builder___globals);
        goto CPyL14;
    }
    cpy_r_r6 = cpy_r_r5;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_ops___BasicBlock(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 402, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r9 = cpy_r_r8;
    cpy_r_needs_import = cpy_r_r6;
    cpy_r_out = cpy_r_r9;
    cpy_r_r10 = CPyDef_builder___IRBuilder___check_if_module_loaded(cpy_r_self, cpy_r_id, cpy_r_line, cpy_r_needs_import, cpy_r_out);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 403, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_r11 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_needs_import);
    CPy_DECREF(cpy_r_needs_import);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 405, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r12 = CPyStatic_builder___globals;
    cpy_r_r13 = CPyStatics[8057]; /* 'import_op' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 406, CPyStatic_builder___globals);
        goto CPyL17;
    }
    if (likely(PyTuple_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_import", 406, CPyStatic_builder___globals, "tuple", cpy_r_r14);
        goto CPyL17;
    }
    cpy_r_r16 = CPyDef_builder___IRBuilder___load_str(cpy_r_self, cpy_r_id);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 406, CPyStatic_builder___globals);
        goto CPyL18;
    }
    cpy_r_r17 = PyList_New(1);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 406, CPyStatic_builder___globals);
        goto CPyL19;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    *(PyObject * *)cpy_r_r19 = cpy_r_r16;
    cpy_r_r20 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r15, cpy_r_r17, cpy_r_line);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 406, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_value = cpy_r_r20;
    cpy_r_r21 = CPyStatics[408]; /* 'module' */
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_ops___InitStatic(cpy_r_value, cpy_r_id, cpy_r_r22, cpy_r_r21, cpy_r_r23);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 407, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 407, CPyStatic_builder___globals);
        goto CPyL17;
    } else
        goto CPyL20;
CPyL12: ;
    cpy_r_r26 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_self, cpy_r_out);
    CPy_DECREF(cpy_r_out);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 408, CPyStatic_builder___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL15: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_needs_import);
    CPy_DecRef(cpy_r_out);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_out);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_r15);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL14;
CPyL20: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL12;
}

PyObject *CPyPy_builder___IRBuilder___gen_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_import", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_id, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___gen_import(arg_self, arg_id, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_import", 399, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___check_if_module_loaded(PyObject *cpy_r_self, PyObject *cpy_r_id, CPyTagged cpy_r_line, PyObject *cpy_r_needs_import, PyObject *cpy_r_out) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_first_load;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_comparison;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_builder___IRBuilder___load_module(cpy_r_self, cpy_r_id);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "check_if_module_loaded", 420, CPyStatic_builder___globals);
        goto CPyL5;
    }
    cpy_r_first_load = cpy_r_r0;
    cpy_r_r1 = CPyDef_builder___IRBuilder___none_object(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "check_if_module_loaded", 421, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyStatics[862]; /* 'is not' */
    cpy_r_r3 = CPyDef_builder___IRBuilder___translate_is_op(cpy_r_self, cpy_r_first_load, cpy_r_r1, cpy_r_r2, cpy_r_line);
    CPy_DECREF(cpy_r_first_load);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "check_if_module_loaded", 421, CPyStatic_builder___globals);
        goto CPyL5;
    }
    cpy_r_comparison = cpy_r_r3;
    cpy_r_r4 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_self, cpy_r_comparison, cpy_r_out, cpy_r_needs_import);
    CPy_DECREF(cpy_r_comparison);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "check_if_module_loaded", 422, CPyStatic_builder___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL6: ;
    CPy_DecRef(cpy_r_first_load);
    goto CPyL5;
}

PyObject *CPyPy_builder___IRBuilder___check_if_module_loaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "line", "needs_import", "out", 0};
    static CPyArg_Parser parser = {"OOOO:check_if_module_loaded", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_line;
    PyObject *obj_needs_import;
    PyObject *obj_out;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_id, &obj_line, &obj_needs_import, &obj_out)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_needs_import;
    if (likely(Py_TYPE(obj_needs_import) == CPyType_ops___BasicBlock))
        arg_needs_import = obj_needs_import;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_needs_import); 
        goto fail;
    }
    PyObject *arg_out;
    if (likely(Py_TYPE(obj_out) == CPyType_ops___BasicBlock))
        arg_out = obj_out;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_out); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___check_if_module_loaded(arg_self, arg_id, arg_line, arg_needs_import, arg_out);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "check_if_module_loaded", 410, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_module(PyObject *cpy_r_self, PyObject *cpy_r_module, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_mod_dict;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = CPyStatic_builder___globals;
    cpy_r_r1 = CPyStatics[8058]; /* 'get_module_dict_op' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 426, CPyStatic_builder___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_module", 426, CPyStatic_builder___globals, "tuple", cpy_r_r2);
        goto CPyL10;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 426, CPyStatic_builder___globals);
        goto CPyL11;
    }
    cpy_r_r5 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r3, cpy_r_r4, cpy_r_line);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 426, CPyStatic_builder___globals);
        goto CPyL10;
    }
    cpy_r_mod_dict = cpy_r_r5;
    cpy_r_r6 = CPyStatic_builder___globals;
    cpy_r_r7 = CPyStatics[8059]; /* 'dict_get_item_op' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 428, CPyStatic_builder___globals);
        goto CPyL12;
    }
    if (likely(PyTuple_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_module", 428, CPyStatic_builder___globals, "tuple", cpy_r_r8);
        goto CPyL12;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___load_str(cpy_r_self, cpy_r_module);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 428, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_r11 = PyList_New(2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 428, CPyStatic_builder___globals);
        goto CPyL14;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_mod_dict;
    cpy_r_r14 = cpy_r_r13 + 8;
    *(PyObject * *)cpy_r_r14 = cpy_r_r10;
    cpy_r_r15 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r9, cpy_r_r11, cpy_r_line);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 428, CPyStatic_builder___globals);
        goto CPyL10;
    }
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_mod_dict);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_mod_dict);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL10;
}

PyObject *CPyPy_builder___IRBuilder___get_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "line", 0};
    static CPyArg_Parser parser = {"OO:get_module", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_module(arg_self, arg_module, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module", 424, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_module_attr(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_attr, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_module_obj;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_builder___IRBuilder___gen_import(cpy_r_self, cpy_r_module, cpy_r_line);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module_attr", 438, CPyStatic_builder___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPyDef_builder___IRBuilder___get_module(cpy_r_self, cpy_r_module, cpy_r_line);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module_attr", 439, CPyStatic_builder___globals);
        goto CPyL4;
    }
    cpy_r_module_obj = cpy_r_r1;
    cpy_r_r2 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_self, cpy_r_module_obj, cpy_r_attr, cpy_r_line);
    CPy_DECREF(cpy_r_module_obj);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module_attr", 440, CPyStatic_builder___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_builder___IRBuilder___get_module_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "attr", "line", 0};
    static CPyArg_Parser parser = {"OOO:get_module_attr", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_attr;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_attr, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_module_attr(arg_self, arg_module, arg_attr, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_module_attr", 430, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___assign_if_null(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_get_val, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_error_block;
    PyObject *cpy_r_body_block;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 444, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 444, CPyStatic_builder___globals);
        goto CPyL14;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_error_block = cpy_r_r2;
    cpy_r_body_block = cpy_r_r5;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_ops___Branch(cpy_r_target, cpy_r_error_block, cpy_r_body_block, 202, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 445, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 445, CPyStatic_builder___globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL4: ;
    cpy_r_r10 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 446, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_get_val, 0, 0, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 447, CPyStatic_builder___globals);
        goto CPyL17;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_ops___Value)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign_if_null", 447, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL17;
    }
    cpy_r_r13 = ((mypyc___ir___ops___RegisterObject *)cpy_r_target)->_type;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_r12, cpy_r_r13, cpy_r_line, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 447, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_ops___Assign(cpy_r_target, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 447, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r18 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 447, CPyStatic_builder___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL10: ;
    cpy_r_r19 = CPyDef_builder___IRBuilder___goto(cpy_r_self, cpy_r_body_block);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 448, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_body_block);
    CPy_DECREF(cpy_r_body_block);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 449, CPyStatic_builder___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL14: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL4;
CPyL17: ;
    CPy_DecRef(cpy_r_body_block);
    goto CPyL13;
CPyL18: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL10;
}

PyObject *CPyPy_builder___IRBuilder___assign_if_null(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "get_val", "line", 0};
    static CPyArg_Parser parser = {"OOO:assign_if_null", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_get_val;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_get_val, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_ops___Register))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_target); 
        goto fail;
    }
    PyObject *arg_get_val = obj_get_val;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___assign_if_null(arg_self, arg_target, arg_get_val, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_null", 442, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___assign_if_bitmap_unset(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_get_val, CPyTagged cpy_r_index, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_error_block;
    PyObject *cpy_r_body_block;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_o;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_b;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 454, CPyStatic_builder___globals);
        goto CPyL31;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 454, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_error_block = cpy_r_r2;
    cpy_r_body_block = cpy_r_r5;
    cpy_r_r6 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL33;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 456, CPyStatic_builder___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    cpy_r_r9 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_r8)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyTagged_FloorDivide(cpy_r_index, 64);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 457, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r11 = CPyTagged_Subtract(-2, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    cpy_r_r12 = CPyList_GetItem(cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 457, CPyStatic_builder___globals);
        goto CPyL35;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_ops___Register))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 457, CPyStatic_builder___globals, "mypyc.ir.ops.Register", cpy_r_r12);
        goto CPyL35;
    }
    cpy_r_r14 = CPyTagged_And(cpy_r_index, 62);
    cpy_r_r15 = CPyTagged_Lshift(2, cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 458, CPyStatic_builder___globals);
        goto CPyL36;
    }
    cpy_r_r16 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL37;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 458, CPyStatic_builder___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___Integer(cpy_r_r15, cpy_r_r16, cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 458, CPyStatic_builder___globals);
        goto CPyL36;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___int_op(cpy_r_self, cpy_r_r6, cpy_r_r13, cpy_r_r19, 400, cpy_r_line);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 455, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_o = cpy_r_r20;
    cpy_r_r21 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r21 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 462, CPyStatic_builder___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_ops___Integer(0, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 462, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPyDef_ops___ComparisonOp(cpy_r_o, cpy_r_r24, 200, cpy_r_r25);
    CPy_DECREF(cpy_r_o);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 462, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_r27 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 462, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_b = cpy_r_r27;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_ops___Branch(cpy_r_b, cpy_r_error_block, cpy_r_body_block, 200, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_b);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 463, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_r31 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 463, CPyStatic_builder___globals);
        goto CPyL35;
    } else
        goto CPyL40;
CPyL22: ;
    cpy_r_r32 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 464, CPyStatic_builder___globals);
        goto CPyL41;
    }
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_get_val, 0, 0, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 465, CPyStatic_builder___globals);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_ops___Value)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 465, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r33);
        goto CPyL41;
    }
    cpy_r_r35 = ((mypyc___ir___ops___RegisterObject *)cpy_r_target)->_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = 2;
    cpy_r_r37 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_r34, cpy_r_r35, cpy_r_line, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 465, CPyStatic_builder___globals);
        goto CPyL41;
    }
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPyDef_ops___Assign(cpy_r_target, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 465, CPyStatic_builder___globals);
        goto CPyL41;
    }
    cpy_r_r40 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 465, CPyStatic_builder___globals);
        goto CPyL41;
    } else
        goto CPyL42;
CPyL28: ;
    cpy_r_r41 = CPyDef_builder___IRBuilder___goto(cpy_r_self, cpy_r_body_block);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 466, CPyStatic_builder___globals);
        goto CPyL41;
    }
    cpy_r_r42 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_body_block);
    CPy_DECREF(cpy_r_body_block);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 467, CPyStatic_builder___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL32: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    goto CPyL3;
CPyL34: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_r9);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_r13);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_r13);
    CPyTagged_DecRef(cpy_r_r15);
    goto CPyL10;
CPyL38: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_o);
    goto CPyL15;
CPyL39: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_o);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL22;
CPyL41: ;
    CPy_DecRef(cpy_r_body_block);
    goto CPyL31;
CPyL42: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL28;
}

PyObject *CPyPy_builder___IRBuilder___assign_if_bitmap_unset(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "get_val", "index", "line", 0};
    static CPyArg_Parser parser = {"OOOO:assign_if_bitmap_unset", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_get_val;
    PyObject *obj_index;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_get_val, &obj_index, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_ops___Register))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_target); 
        goto fail;
    }
    PyObject *arg_get_val = obj_get_val;
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___assign_if_bitmap_unset(arg_self, arg_target, arg_get_val, arg_index, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "assign_if_bitmap_unset", 451, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___maybe_add_implicit_return(PyObject *cpy_r_self) {
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
    char cpy_r_r10;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_ret_types;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 470, CPyStatic_builder___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_rtypes___RType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 470, CPyStatic_builder___globals, "mypyc.ir.rtypes.RType", cpy_r_r1);
        goto CPyL11;
    }
    cpy_r_r3 = CPyDef_rtypes___is_none_rprimitive(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 470, CPyStatic_builder___globals);
        goto CPyL11;
    }
    if (cpy_r_r3) goto CPyL8;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_ret_types;
    cpy_r_r5 = CPyList_GetItemShort(cpy_r_r4, -2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 470, CPyStatic_builder___globals);
        goto CPyL11;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_rtypes___RType)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 470, CPyStatic_builder___globals, "mypyc.ir.rtypes.RType", cpy_r_r5);
        goto CPyL11;
    }
    cpy_r_r7 = CPyDef_rtypes___is_object_rprimitive(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 470, CPyStatic_builder___globals);
        goto CPyL11;
    }
    if (!cpy_r_r7) goto CPyL9;
CPyL8: ;
    cpy_r_r8 = CPyDef_builder___IRBuilder___add_implicit_return(cpy_r_self);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 471, CPyStatic_builder___globals);
        goto CPyL11;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r9 = CPyDef_builder___IRBuilder___add_implicit_unreachable(cpy_r_self);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 473, CPyStatic_builder___globals);
        goto CPyL11;
    }
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_builder___IRBuilder___maybe_add_implicit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":maybe_add_implicit_return", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___maybe_add_implicit_return(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_add_implicit_return", 469, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___add_implicit_return(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_block;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_retval;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    cpy_r_r1 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_r0)->_blocks;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 476, CPyStatic_builder___globals);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_ops___BasicBlock))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 476, CPyStatic_builder___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_block = cpy_r_r3;
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 1, mypyc___ir___ops___BasicBlockObject, char); /* terminated */
    CPy_DECREF(cpy_r_block);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 477, CPyStatic_builder___globals);
        goto CPyL12;
    }
CPyL3: ;
    if (cpy_r_r4) goto CPyL11;
CPyL4: ;
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_ll_builder___LowLevelIRBuilder___none(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 478, CPyStatic_builder___globals);
        goto CPyL12;
    }
    cpy_r_r7 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_ret_types;
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_r7, -2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 478, CPyStatic_builder___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_rtypes___RType)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 478, CPyStatic_builder___globals, "mypyc.ir.rtypes.RType", cpy_r_r8);
        goto CPyL13;
    }
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_r6, cpy_r_r9, -2, cpy_r_r10);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 478, CPyStatic_builder___globals);
        goto CPyL12;
    }
    cpy_r_retval = cpy_r_r11;
    cpy_r_r12 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    cpy_r_r13 = CPyList_GetItemShort(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 479, CPyStatic_builder___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 479, CPyStatic_builder___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    cpy_r_r16 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r15)->_fitem;
    cpy_r_r17 = ((mypy___nodes___FuncItemObject *)cpy_r_r16)->_line;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = CPY_GET_METHOD(cpy_r_r14, CPyType_nonlocalcontrol___NonlocalControl, 2, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r14, cpy_r_self, cpy_r_retval, cpy_r_r17); /* gen_return */
    CPy_DECREF(cpy_r_retval);
    CPyTagged_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 479, CPyStatic_builder___globals);
        goto CPyL12;
    }
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL13: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_retval);
    goto CPyL12;
}

PyObject *CPyPy_builder___IRBuilder___add_implicit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":add_implicit_return", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___add_implicit_return(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_return", 475, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___add_implicit_unreachable(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_block;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    cpy_r_r1 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_r0)->_blocks;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_unreachable", 482, CPyStatic_builder___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_ops___BasicBlock))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_implicit_unreachable", 482, CPyStatic_builder___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r2);
        goto CPyL7;
    }
    cpy_r_block = cpy_r_r3;
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 1, mypyc___ir___ops___BasicBlockObject, char); /* terminated */
    CPy_DECREF(cpy_r_block);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_unreachable", 483, CPyStatic_builder___globals);
        goto CPyL7;
    }
CPyL3: ;
    if (cpy_r_r4) goto CPyL6;
CPyL4: ;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___Unreachable(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_unreachable", 484, CPyStatic_builder___globals);
        goto CPyL7;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_unreachable", 484, CPyStatic_builder___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL8: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL6;
}

PyObject *CPyPy_builder___IRBuilder___add_implicit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":add_implicit_unreachable", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___add_implicit_unreachable(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_implicit_unreachable", 481, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___disallow_class_assignments(PyObject *cpy_r_self, PyObject *cpy_r_lvalues, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
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
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
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
    PyObject *cpy_r_var;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_lvalues)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL28;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_lvalues, cpy_r_r0);
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_nodes___Expression)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 491, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r5);
        goto CPyL29;
    }
    cpy_r_lvalue = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r11 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 494, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL31;
    }
    cpy_r_r12 = ((mypy___nodes___MemberExprObject *)cpy_r_r11)->_expr;
    cpy_r_r13 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL7;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL8;
CPyL7: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL8: ;
    if (!cpy_r_r17) goto CPyL10;
    cpy_r_r22 = cpy_r_r17;
    goto CPyL11;
CPyL10: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL11: ;
    if (!cpy_r_r22) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r27 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 495, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL31;
    }
    cpy_r_r28 = ((mypy___nodes___MemberExprObject *)cpy_r_r27)->_expr;
    if (likely((Py_TYPE(cpy_r_r28) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r28) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r28) == CPyType_nodes___RefExpr)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 495, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r28);
        goto CPyL31;
    }
    cpy_r_r30 = ((mypy___nodes___RefExprObject *)cpy_r_r29)->_node;
    cpy_r_r31 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL16;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL17;
CPyL16: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL17: ;
    if (!cpy_r_r35) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r40 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 497, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL31;
    }
    cpy_r_r41 = ((mypy___nodes___MemberExprObject *)cpy_r_r40)->_expr;
    if (likely((Py_TYPE(cpy_r_r41) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r41) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r41) == CPyType_nodes___RefExpr)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 497, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r41);
        goto CPyL31;
    }
    cpy_r_r43 = ((mypy___nodes___RefExprObject *)cpy_r_r42)->_node;
    CPy_INCREF(cpy_r_r43);
    if (likely((Py_TYPE(cpy_r_r43) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r43) == CPyType_nodes___TypeInfo)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 497, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r43);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r45 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 497, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL32;
    }
    cpy_r_r46 = ((mypy___nodes___MemberExprObject *)cpy_r_r45)->_name;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_lvalue);
    cpy_r_r47 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 497, CPyStatic_builder___globals);
        goto CPyL29;
    }
    cpy_r_r48 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r47)->_node;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_var = cpy_r_r48;
    cpy_r_r49 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_var)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r53 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 498, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL34;
    }
    cpy_r_r54 = ((mypy___nodes___VarObject *)cpy_r_r53)->_is_classvar;
    CPy_DECREF(cpy_r_var);
    if (cpy_r_r54) goto CPyL27;
CPyL26: ;
    cpy_r_r55 = CPyStatics[8060]; /* ('Only class variables defined as ClassVar can be '
                                     'assigned to') */
    cpy_r_r56 = CPyDef_builder___IRBuilder___error(cpy_r_self, cpy_r_r55, cpy_r_line);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 499, CPyStatic_builder___globals);
        goto CPyL29;
    }
CPyL27: ;
    cpy_r_r57 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r57;
    goto CPyL1;
CPyL28: ;
    return 1;
CPyL29: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL30: ;
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_lvalue);
    CPy_DecRef(cpy_r_r44);
    goto CPyL29;
CPyL33: ;
    CPy_DECREF(cpy_r_var);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_var);
    goto CPyL29;
}

PyObject *CPyPy_builder___IRBuilder___disallow_class_assignments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalues", "line", 0};
    static CPyArg_Parser parser = {"OO:disallow_class_assignments", kwlist, 0};
    PyObject *obj_lvalues;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalues, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalues;
    if (likely(PyList_Check(obj_lvalues)))
        arg_lvalues = obj_lvalues;
    else {
        CPy_TypeError("list", obj_lvalues); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___disallow_class_assignments(arg_self, arg_lvalues, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "disallow_class_assignments", 486, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___non_function_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_infos;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 <= (Py_ssize_t)4;
    return cpy_r_r4;
}

PyObject *CPyPy_builder___IRBuilder___non_function_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":non_function_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___non_function_scope(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "non_function_scope", 501, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___init_final_static(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, PyObject *cpy_r_rvalue_reg, PyObject *cpy_r_class_name, PyObject *cpy_r_type_override) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_coerced;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T2OO cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    if (cpy_r_class_name != NULL) goto CPyL38;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_class_name = cpy_r_r0;
CPyL2: ;
    if (cpy_r_type_override != NULL) goto CPyL39;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_type_override = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL40;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 513, CPyStatic_builder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r7 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 514, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL41;
    }
    cpy_r_r8 = ((mypy___nodes___NameExprObject *)cpy_r_r7)->_node;
    cpy_r_r9 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) {
        goto CPyL11;
    } else
        goto CPyL42;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 514, CPyStatic_builder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r14 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 515, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL41;
    }
    cpy_r_r15 = ((mypy___nodes___NameExprObject *)cpy_r_r14)->_node;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___Var))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 515, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r15);
        goto CPyL41;
    }
    cpy_r_r17 = ((mypy___nodes___VarObject *)cpy_r_r16)->_final_value;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 == cpy_r_r18;
    if (!cpy_r_r19) goto CPyL43;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_class_name == cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL44;
    } else
        goto CPyL17;
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r22 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 517, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL45;
    }
    cpy_r_r23 = ((mypy___nodes___NameExprObject *)cpy_r_r22)->_name;
    CPy_INCREF(cpy_r_r23);
    cpy_r_name = cpy_r_r23;
    goto CPyL21;
CPyL17: ;
    if (likely(cpy_r_class_name != Py_None))
        cpy_r_r24 = cpy_r_class_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 519, CPyStatic_builder___globals, "str", cpy_r_class_name);
        goto CPyL45;
    }
    cpy_r_r25 = CPyStatics[224]; /* '.' */
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r26 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 519, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL46;
    }
    cpy_r_r27 = ((mypy___nodes___NameExprObject *)cpy_r_r26)->_name;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStr_Build(3, cpy_r_r24, cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 519, CPyStatic_builder___globals);
        goto CPyL45;
    }
    cpy_r_name = cpy_r_r28;
CPyL21: ;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_name != cpy_r_r29;
    if (cpy_r_r30) {
        goto CPyL24;
    } else
        goto CPyL47;
CPyL22: ;
    PyErr_SetString(PyExc_AssertionError, "Full name not set for variable");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 520, CPyStatic_builder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_type_override != cpy_r_r32;
    if (!cpy_r_r33) goto CPyL48;
    if (likely(cpy_r_type_override != Py_None))
        cpy_r_r34 = cpy_r_type_override;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 521, CPyStatic_builder___globals, "mypyc.ir.rtypes.RType", cpy_r_type_override);
        goto CPyL49;
    }
    cpy_r_r35 = cpy_r_r34;
    goto CPyL30;
CPyL27: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r36 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 521, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL49;
    }
    cpy_r_r37 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 521, CPyStatic_builder___globals);
        goto CPyL49;
    }
    cpy_r_r35 = cpy_r_r37;
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r38 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "init_final_static", 521, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL50;
    }
    cpy_r_r39 = ((mypy___nodes___NameExprObject *)cpy_r_r38)->_line;
    CPyTagged_INCREF(cpy_r_r39);
    cpy_r_r40 = 2;
    cpy_r_r41 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_rvalue_reg, cpy_r_r35, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 521, CPyStatic_builder___globals);
        goto CPyL49;
    }
    cpy_r_coerced = cpy_r_r41;
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_final_names;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypyc___ir___ops___ValueObject *)cpy_r_coerced)->_type;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44.f0 = cpy_r_name;
    cpy_r_r44.f1 = cpy_r_r43;
    CPy_INCREF(cpy_r_r44.f0);
    CPy_INCREF(cpy_r_r44.f1);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = PyTuple_New(2);
    if (unlikely(cpy_r_r45 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9941 = cpy_r_r44.f0;
    PyTuple_SET_ITEM(cpy_r_r45, 0, __tmp9941);
    PyObject *__tmp9942 = cpy_r_r44.f1;
    PyTuple_SET_ITEM(cpy_r_r45, 1, __tmp9942);
    cpy_r_r46 = PyList_Append(cpy_r_r42, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 522, CPyStatic_builder___globals);
        goto CPyL51;
    }
    cpy_r_r48 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "init_final_static", "IRBuilder", "module_name", 523, CPyStatic_builder___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r48);
CPyL34: ;
    cpy_r_r49 = NULL;
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = CPyDef_ops___InitStatic(cpy_r_coerced, cpy_r_name, cpy_r_r48, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_coerced);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 523, CPyStatic_builder___globals);
        goto CPyL37;
    }
    cpy_r_r52 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 523, CPyStatic_builder___globals);
        goto CPyL37;
    } else
        goto CPyL52;
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL38: ;
    CPy_INCREF(cpy_r_class_name);
    goto CPyL2;
CPyL39: ;
    CPy_INCREF(cpy_r_type_override);
    goto CPyL4;
CPyL40: ;
    CPy_DECREF(cpy_r_class_name);
    CPy_DECREF(cpy_r_type_override);
    goto CPyL5;
CPyL41: ;
    CPy_DecRef(cpy_r_class_name);
    CPy_DecRef(cpy_r_type_override);
    goto CPyL37;
CPyL42: ;
    CPy_DECREF(cpy_r_class_name);
    CPy_DECREF(cpy_r_type_override);
    goto CPyL9;
CPyL43: ;
    CPy_DECREF(cpy_r_class_name);
    CPy_DECREF(cpy_r_type_override);
    goto CPyL36;
CPyL44: ;
    CPy_DECREF(cpy_r_class_name);
    goto CPyL15;
CPyL45: ;
    CPy_DecRef(cpy_r_type_override);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_type_override);
    CPy_DecRef(cpy_r_r24);
    goto CPyL37;
CPyL47: ;
    CPy_DECREF(cpy_r_type_override);
    CPy_DECREF(cpy_r_name);
    goto CPyL22;
CPyL48: ;
    CPy_DECREF(cpy_r_type_override);
    goto CPyL27;
CPyL49: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r35);
    goto CPyL37;
CPyL51: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_coerced);
    goto CPyL37;
CPyL52: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL36;
}

PyObject *CPyPy_builder___IRBuilder___init_final_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "rvalue_reg", "class_name", "type_override", 0};
    static CPyArg_Parser parser = {"OO|O$O:init_final_static", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_rvalue_reg;
    PyObject *obj_class_name = NULL;
    PyObject *obj_type_override = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_lvalue, &obj_rvalue_reg, &obj_class_name, &obj_type_override)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_rvalue_reg;
    if (likely(PyObject_TypeCheck(obj_rvalue_reg, CPyType_ops___Value)))
        arg_rvalue_reg = obj_rvalue_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rvalue_reg); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (obj_class_name == NULL) {
        arg_class_name = NULL;
        goto __LL9943;
    }
    if (PyUnicode_Check(obj_class_name))
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL9943;
    if (obj_class_name == Py_None)
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL9943;
    CPy_TypeError("str or None", obj_class_name); 
    goto fail;
__LL9943: ;
    PyObject *arg_type_override;
    if (obj_type_override == NULL) {
        arg_type_override = NULL;
        goto __LL9944;
    }
    if (PyObject_TypeCheck(obj_type_override, CPyType_rtypes___RType))
        arg_type_override = obj_type_override;
    else {
        arg_type_override = NULL;
    }
    if (arg_type_override != NULL) goto __LL9944;
    if (obj_type_override == Py_None)
        arg_type_override = obj_type_override;
    else {
        arg_type_override = NULL;
    }
    if (arg_type_override != NULL) goto __LL9944;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_type_override); 
    goto fail;
__LL9944: ;
    char retval = CPyDef_builder___IRBuilder___init_final_static(arg_self, arg_lvalue, arg_rvalue_reg, arg_class_name, arg_type_override);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "init_final_static", 505, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_final_static(PyObject *cpy_r_self, PyObject *cpy_r_fullname, PyObject *cpy_r_typ, CPyTagged cpy_r_line, PyObject *cpy_r_error_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_split_name;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    if (cpy_r_error_name != NULL) goto CPyL12;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_error_name = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mypy___util___split_target(cpy_r_r1, cpy_r_fullname);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 528, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_split_name = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_split_name != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL6;
    } else
        goto CPyL14;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 529, CPyStatic_builder___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL6: ;
    PyObject *__tmp9945;
    if (unlikely(!(PyTuple_Check(cpy_r_split_name) && PyTuple_GET_SIZE(cpy_r_split_name) == 2))) {
        __tmp9945 = NULL;
        goto __LL9946;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_split_name, 0))))
        __tmp9945 = PyTuple_GET_ITEM(cpy_r_split_name, 0);
    else {
        __tmp9945 = NULL;
    }
    if (__tmp9945 == NULL) goto __LL9946;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_split_name, 1))))
        __tmp9945 = PyTuple_GET_ITEM(cpy_r_split_name, 1);
    else {
        __tmp9945 = NULL;
    }
    if (__tmp9945 == NULL) goto __LL9946;
    __tmp9945 = cpy_r_split_name;
__LL9946: ;
    if (unlikely(__tmp9945 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_split_name); cpy_r_r6 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9947 = PyTuple_GET_ITEM(cpy_r_split_name, 0);
        CPy_INCREF(__tmp9947);
        PyObject *__tmp9948;
        if (likely(PyUnicode_Check(__tmp9947)))
            __tmp9948 = __tmp9947;
        else {
            CPy_TypeError("str", __tmp9947); 
            __tmp9948 = NULL;
        }
        cpy_r_r6.f0 = __tmp9948;
        PyObject *__tmp9949 = PyTuple_GET_ITEM(cpy_r_split_name, 1);
        CPy_INCREF(__tmp9949);
        PyObject *__tmp9950;
        if (likely(PyUnicode_Check(__tmp9949)))
            __tmp9950 = __tmp9949;
        else {
            CPy_TypeError("str", __tmp9949); 
            __tmp9950 = NULL;
        }
        cpy_r_r6.f1 = __tmp9950;
    }
    CPy_DECREF(cpy_r_split_name);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 530, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_r7 = cpy_r_r6.f0;
    CPy_INCREF(cpy_r_r7);
    cpy_r_module = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f1;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    cpy_r_name = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[8061]; /* 'value for final name "' */
    cpy_r_r11 = PyObject_Str(cpy_r_error_name);
    CPy_DECREF(cpy_r_error_name);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 536, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPyStatics[8062]; /* '" was not set' */
    cpy_r_r13 = CPyStr_Build(3, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 536, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_ll_builder___LowLevelIRBuilder___load_static_checked(cpy_r_r9, cpy_r_typ, cpy_r_name, cpy_r_module, cpy_r_r14, cpy_r_line, cpy_r_r13);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 531, CPyStatic_builder___globals);
        goto CPyL11;
    }
    return cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL12: ;
    CPy_INCREF(cpy_r_error_name);
    goto CPyL2;
CPyL13: ;
    CPy_DecRef(cpy_r_error_name);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_error_name);
    CPy_DECREF(cpy_r_split_name);
    goto CPyL4;
CPyL15: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r9);
    goto CPyL11;
}

PyObject *CPyPy_builder___IRBuilder___load_final_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", "typ", "line", "error_name", 0};
    static CPyArg_Parser parser = {"OOO|O:load_final_static", kwlist, 0};
    PyObject *obj_fullname;
    PyObject *obj_typ;
    PyObject *obj_line;
    PyObject *obj_error_name = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fullname, &obj_typ, &obj_line, &obj_error_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_error_name;
    if (obj_error_name == NULL) {
        arg_error_name = NULL;
        goto __LL9951;
    }
    if (PyUnicode_Check(obj_error_name))
        arg_error_name = obj_error_name;
    else {
        arg_error_name = NULL;
    }
    if (arg_error_name != NULL) goto __LL9951;
    if (obj_error_name == Py_None)
        arg_error_name = obj_error_name;
    else {
        arg_error_name = NULL;
    }
    if (arg_error_name != NULL) goto __LL9951;
    CPy_TypeError("str or None", obj_error_name); 
    goto fail;
__LL9951: ;
    PyObject *retval = CPyDef_builder___IRBuilder___load_final_static(arg_self, arg_fullname, arg_typ, arg_line, arg_error_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_final_static", 525, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_literal_value(PyObject *cpy_r_self, PyObject *cpy_r_val) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    double cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
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
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = (PyObject *)&PyBool_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_val, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 541, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL8;
    if (unlikely(!PyBool_Check(cpy_r_val))) {
        CPy_TypeError("bool", cpy_r_val); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_val == Py_True;
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 542, CPyStatic_builder___globals);
        goto CPyL39;
    }
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = CPyDef_builder___IRBuilder___true(cpy_r_self);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 543, CPyStatic_builder___globals);
        goto CPyL39;
    }
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = CPyDef_builder___IRBuilder___false(cpy_r_self);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 545, CPyStatic_builder___globals);
        goto CPyL39;
    }
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r7 = (PyObject *)&PyLong_Type;
    cpy_r_r8 = PyObject_IsInstance(cpy_r_val, cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 546, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r11);
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r12 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r12 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 547, CPyStatic_builder___globals);
        goto CPyL40;
    }
    cpy_r_r13 = CPyDef_ll_builder___LowLevelIRBuilder___load_int(cpy_r_r11, cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 547, CPyStatic_builder___globals);
        goto CPyL39;
    }
    return cpy_r_r13;
CPyL13: ;
    cpy_r_r14 = (PyObject *)&PyFloat_Type;
    cpy_r_r15 = PyObject_IsInstance(cpy_r_val, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 548, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL19;
    cpy_r_r18 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyFloat_AsDouble(cpy_r_val);
    if (cpy_r_r19 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_val); cpy_r_r19 = -113.0;
    }
    cpy_r_r20 = cpy_r_r19 == -113.0;
    if (unlikely(cpy_r_r20)) goto CPyL17;
CPyL16: ;
    cpy_r_r21 = CPyDef_ll_builder___LowLevelIRBuilder___load_float(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 549, CPyStatic_builder___globals);
        goto CPyL39;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r22 = PyErr_Occurred();
    if (unlikely(cpy_r_r22 != NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 549, CPyStatic_builder___globals);
        goto CPyL41;
    } else
        goto CPyL16;
CPyL18: ;
    return cpy_r_r21;
CPyL19: ;
    cpy_r_r23 = (PyObject *)&PyUnicode_Type;
    cpy_r_r24 = PyObject_IsInstance(cpy_r_val, cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 550, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r26 = cpy_r_r24;
    if (!cpy_r_r26) goto CPyL24;
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r27);
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r28 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "load_literal_value", 551, CPyStatic_builder___globals, "str", cpy_r_val);
        goto CPyL42;
    }
    cpy_r_r29 = CPyDef_ll_builder___LowLevelIRBuilder___load_str(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 551, CPyStatic_builder___globals);
        goto CPyL39;
    }
    return cpy_r_r29;
CPyL24: ;
    cpy_r_r30 = (PyObject *)&PyBytes_Type;
    cpy_r_r31 = PyObject_IsInstance(cpy_r_val, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 552, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL29;
    cpy_r_r34 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r34);
    CPy_INCREF(cpy_r_val);
    if (likely(PyBytes_Check(cpy_r_val) || PyByteArray_Check(cpy_r_val)))
        cpy_r_r35 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "load_literal_value", 553, CPyStatic_builder___globals, "bytes", cpy_r_val);
        goto CPyL43;
    }
    cpy_r_r36 = CPyDef_ll_builder___LowLevelIRBuilder___load_bytes(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 553, CPyStatic_builder___globals);
        goto CPyL39;
    }
    return cpy_r_r36;
CPyL29: ;
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 554, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r40 = PyObject_IsInstance(cpy_r_val, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 554, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r42 = cpy_r_r40;
    if (!cpy_r_r42) goto CPyL34;
    cpy_r_r43 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyDef_ll_builder___LowLevelIRBuilder___load_complex(cpy_r_r43, cpy_r_val);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 555, CPyStatic_builder___globals);
        goto CPyL39;
    }
    return cpy_r_r44;
CPyL34: ;
    cpy_r_r45 = 0 ? Py_True : Py_False;
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", -1, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) goto CPyL38;
    PyErr_SetString(PyExc_AssertionError, "Unsupported literal value");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 557, CPyStatic_builder___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL38: ;
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL40: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL39;
}

PyObject *CPyPy_builder___IRBuilder___load_literal_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"val", 0};
    static CPyArg_Parser parser = {"O:load_literal_value", kwlist, 0};
    PyObject *obj_val;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_val)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_val;
    if (PyLong_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL9952;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL9952;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL9952;
    if (CPyFloat_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL9952;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL9952;
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL9952;
    CPy_TypeError("union[int, str, bytes, float, object, bool]", obj_val); 
    goto fail;
__LL9952: ;
    PyObject *retval = CPyDef_builder___IRBuilder___load_literal_value(arg_self, arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_literal_value", 539, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_assignment_target(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, CPyTagged cpy_r_line, char cpy_r_for_read) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_symbol;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_reg_type;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_globals_dict;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyPtr cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_can_borrow;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyPtr cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_star_idx;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_lvalues;
    CPyTagged cpy_r_r122;
    CPyTagged cpy_r_idx;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    CPyPtr cpy_r_r126;
    int64_t cpy_r_r127;
    CPyTagged cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_item;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_targ;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyPtr cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    CPyTagged cpy_r_r146;
    CPyTagged cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    if (cpy_r_line != CPY_INT_TAG) goto CPyL116;
    cpy_r_line = -2;
CPyL2: ;
    if (cpy_r_for_read != 2) goto CPyL4;
    cpy_r_for_read = 0;
CPyL4: ;
    cpy_r_r0 = (Py_ssize_t)cpy_r_line == -2;
    if (cpy_r_r0) {
        goto CPyL117;
    } else
        goto CPyL7;
CPyL5: ;
    cpy_r_r1 = ((mypy___nodes___ContextObject *)cpy_r_lvalue)->_line;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_assignment_target", "Expression", "line", 563, CPyStatic_builder___globals);
        goto CPyL115;
    }
    CPyTagged_INCREF(cpy_r_r1);
CPyL6: ;
    cpy_r_line = cpy_r_r1;
CPyL7: ;
    cpy_r_r2 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r6 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 567, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL118;
    }
    cpy_r_r7 = ((mypy___nodes___NameExprObject *)cpy_r_r6)->_node;
    CPy_INCREF(cpy_r_r7);
    cpy_r_symbol = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_symbol)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_symbol) == CPyType_nodes___Decorator))
        cpy_r_r12 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 569, CPyStatic_builder___globals, "mypy.nodes.Decorator", cpy_r_symbol);
        goto CPyL119;
    }
    cpy_r_r13 = ((mypy___nodes___DecoratorObject *)cpy_r_r12)->_func;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_symbol);
    cpy_r_symbol = cpy_r_r13;
CPyL12: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_symbol == cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL120;
    } else
        goto CPyL20;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r16 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 572, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL118;
    }
    cpy_r_r17 = ((mypy___nodes___NameExprObject *)cpy_r_r16)->_is_special_form;
    if (cpy_r_r17) {
        goto CPyL17;
    } else
        goto CPyL121;
CPyL15: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 572, CPyStatic_builder___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r19 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 573, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL118;
    }
    cpy_r_r20 = ((mypy___nodes___NameExprObject *)cpy_r_r19)->_name;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_nodes___Var(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 573, CPyStatic_builder___globals);
        goto CPyL118;
    }
    cpy_r_symbol = cpy_r_r22;
CPyL20: ;
    if (cpy_r_for_read) goto CPyL122;
    cpy_r_r23 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_symbol)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL122;
    if (likely(Py_TYPE(cpy_r_symbol) == CPyType_nodes___Var))
        cpy_r_r27 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 574, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_symbol);
        goto CPyL119;
    }
    cpy_r_r28 = ((mypy___nodes___VarObject *)cpy_r_r27)->_is_cls;
    if (!cpy_r_r28) goto CPyL122;
CPyL24: ;
    cpy_r_r29 = CPyStatics[8063]; /* 'Cannot assign to the first argument of classmethod' */
    cpy_r_r30 = CPyDef_builder___IRBuilder___error(cpy_r_self, cpy_r_r29, cpy_r_line);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 575, CPyStatic_builder___globals);
        goto CPyL123;
    }
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r31 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 576, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL123;
    }
    cpy_r_r32 = ((mypy___nodes___NameExprObject *)cpy_r_r31)->_kind;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9015]; /* 0 */
    cpy_r_r34 = PyObject_RichCompare(cpy_r_r32, cpy_r_r33, 2);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 576, CPyStatic_builder___globals);
        goto CPyL123;
    }
    if (unlikely(!PyBool_Check(cpy_r_r34))) {
        CPy_TypeError("bool", cpy_r_r34); cpy_r_r35 = 2;
    } else
        cpy_r_r35 = cpy_r_r34 == Py_True;
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 576, CPyStatic_builder___globals);
        goto CPyL123;
    }
    if (!cpy_r_r35) goto CPyL124;
    CPy_INCREF(cpy_r_symbol);
    if (likely(cpy_r_symbol != Py_None))
        cpy_r_r36 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 577, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_symbol);
        goto CPyL123;
    }
    cpy_r_r37 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    cpy_r_r38 = CPyList_GetItemShort(cpy_r_r37, -2);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 577, CPyStatic_builder___globals);
        goto CPyL125;
    }
    if (likely(PyDict_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 577, CPyStatic_builder___globals, "dict", cpy_r_r38);
        goto CPyL125;
    }
    cpy_r_r40 = PyDict_Contains(cpy_r_r39, cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 577, CPyStatic_builder___globals);
        goto CPyL123;
    }
    cpy_r_r42 = cpy_r_r40;
    cpy_r_r43 = cpy_r_r42 ^ 1;
    if (!cpy_r_r43) goto CPyL52;
    cpy_r_r44 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_symbol)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_symbol) == CPyType_nodes___Var))
        cpy_r_r48 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 578, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_symbol);
        goto CPyL123;
    }
    cpy_r_r49 = ((mypy___nodes___VarObject *)cpy_r_r48)->_type;
    cpy_r_r50 = (PyObject *)CPyType_types___DeletedType;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_r49)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (cpy_r_r53) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_symbol) == CPyType_nodes___Var))
        cpy_r_r54 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 579, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_symbol);
        goto CPyL123;
    }
    cpy_r_r55 = ((mypy___nodes___VarObject *)cpy_r_r54)->_type;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 579, CPyStatic_builder___globals);
        goto CPyL123;
    }
    cpy_r_reg_type = cpy_r_r56;
    goto CPyL43;
CPyL40: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r57 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 581, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL123;
    }
    cpy_r_r58 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 581, CPyStatic_builder___globals);
        goto CPyL123;
    }
    cpy_r_reg_type = cpy_r_r58;
CPyL43: ;
    cpy_r_r59 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = CPY_GET_ATTR(cpy_r_r59, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 587, CPyStatic_builder___globals);
        goto CPyL126;
    }
CPyL44: ;
    if (!cpy_r_r60) goto CPyL49;
CPyL45: ;
    if (likely(cpy_r_symbol != Py_None))
        cpy_r_r61 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 589, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_symbol);
        goto CPyL127;
    }
    cpy_r_r62 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPY_GET_ATTR(cpy_r_r62, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 589, CPyStatic_builder___globals);
        goto CPyL128;
    }
CPyL47: ;
    cpy_r_r64 = CPyDef_builder___IRBuilder___add_var_to_env_class(cpy_r_self, cpy_r_r61, cpy_r_reg_type, cpy_r_r63, 0);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_reg_type);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 588, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r64;
CPyL49: ;
    if (likely(cpy_r_symbol != Py_None))
        cpy_r_r65 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 593, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_symbol);
        goto CPyL127;
    }
    cpy_r_r66 = 2;
    cpy_r_r67 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_self, cpy_r_r65, cpy_r_reg_type, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_reg_type);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 593, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r67;
CPyL52: ;
    if (likely(cpy_r_symbol != Py_None))
        cpy_r_r68 = cpy_r_symbol;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 596, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_symbol);
        goto CPyL115;
    }
    cpy_r_r69 = CPyDef_builder___IRBuilder___lookup(cpy_r_self, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 596, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r69;
CPyL55: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r70 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 597, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL115;
    }
    cpy_r_r71 = ((mypy___nodes___NameExprObject *)cpy_r_r70)->_kind;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyStatics[9016]; /* 1 */
    cpy_r_r73 = PyObject_RichCompare(cpy_r_r71, cpy_r_r72, 2);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 597, CPyStatic_builder___globals);
        goto CPyL115;
    }
    if (unlikely(!PyBool_Check(cpy_r_r73))) {
        CPy_TypeError("bool", cpy_r_r73); cpy_r_r74 = 2;
    } else
        cpy_r_r74 = cpy_r_r73 == Py_True;
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 597, CPyStatic_builder___globals);
        goto CPyL115;
    }
    if (!cpy_r_r74) goto CPyL64;
    cpy_r_r75 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_self);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 598, CPyStatic_builder___globals);
        goto CPyL115;
    }
    cpy_r_globals_dict = cpy_r_r75;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r76 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 599, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL129;
    }
    cpy_r_r77 = ((mypy___nodes___NameExprObject *)cpy_r_r76)->_name;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = CPyDef_builder___IRBuilder___load_str(cpy_r_self, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 599, CPyStatic_builder___globals);
        goto CPyL129;
    }
    cpy_r_name = cpy_r_r78;
    cpy_r_r79 = CPyDef_targets___AssignmentTargetIndex(cpy_r_globals_dict, cpy_r_name);
    CPy_DECREF(cpy_r_globals_dict);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 600, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r79;
CPyL64: ;
    if (0) goto CPyL107;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r80 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 602, CPyStatic_builder___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL115;
    }
    cpy_r_r81 = ((mypy___nodes___NameExprObject *)cpy_r_r80)->_kind;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = CPyModule_builtins;
    cpy_r_r83 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 602, CPyStatic_builder___globals);
        goto CPyL130;
    }
    PyObject *cpy_r_r85[1] = {cpy_r_r81};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = _PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 1, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 602, CPyStatic_builder___globals);
        goto CPyL130;
    }
    CPy_DECREF(cpy_r_r81);
    CPy_Raise(cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 602, CPyStatic_builder___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r88 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r89 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r90 = *(PyObject * *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 == cpy_r_r88;
    if (cpy_r_r91) {
        goto CPyL131;
    } else
        goto CPyL79;
CPyL71: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r92 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 605, CPyStatic_builder___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL115;
    }
    cpy_r_r93 = ((mypy___nodes___IndexExprObject *)cpy_r_r92)->_base;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = 2;
    cpy_r_r95 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 605, CPyStatic_builder___globals);
        goto CPyL115;
    }
    if (likely(cpy_r_r95 != Py_None))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 605, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r95);
        goto CPyL115;
    }
    cpy_r_base = cpy_r_r96;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___IndexExpr))
        cpy_r_r97 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 606, CPyStatic_builder___globals, "mypy.nodes.IndexExpr", cpy_r_lvalue);
        goto CPyL132;
    }
    cpy_r_r98 = ((mypy___nodes___IndexExprObject *)cpy_r_r97)->_index;
    CPy_INCREF(cpy_r_r98);
    cpy_r_r99 = 2;
    cpy_r_r100 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 606, CPyStatic_builder___globals);
        goto CPyL132;
    }
    if (likely(cpy_r_r100 != Py_None))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 606, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r100);
        goto CPyL132;
    }
    cpy_r_index = cpy_r_r101;
    cpy_r_r102 = CPyDef_targets___AssignmentTargetIndex(cpy_r_base, cpy_r_index);
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 607, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r102;
CPyL79: ;
    cpy_r_r103 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r104 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r105 = *(PyObject * *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 == cpy_r_r103;
    if (cpy_r_r106) {
        goto CPyL133;
    } else
        goto CPyL88;
CPyL80: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r107 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 610, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL115;
    }
    cpy_r_r108 = CPyDef_builder___IRBuilder___is_native_attr_ref(cpy_r_self, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 610, CPyStatic_builder___globals);
        goto CPyL115;
    }
    cpy_r_can_borrow = cpy_r_r108;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r109 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 611, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL115;
    }
    cpy_r_r110 = ((mypy___nodes___MemberExprObject *)cpy_r_r109)->_expr;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_r110, cpy_r_can_borrow);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 611, CPyStatic_builder___globals);
        goto CPyL115;
    }
    if (likely(cpy_r_r111 != Py_None))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 611, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r111);
        goto CPyL115;
    }
    cpy_r_obj = cpy_r_r112;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r113 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 612, CPyStatic_builder___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL134;
    }
    cpy_r_r114 = ((mypy___nodes___MemberExprObject *)cpy_r_r113)->_name;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = CPyDef_targets___AssignmentTargetAttr(cpy_r_obj, cpy_r_r114, cpy_r_can_borrow);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 612, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r115;
CPyL88: ;
    cpy_r_r116 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r117 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r118 = *(PyObject * *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 == cpy_r_r116;
    if (!cpy_r_r119) goto CPyL135;
    cpy_r_r120 = Py_None;
    CPy_INCREF(cpy_r_r120);
    cpy_r_star_idx = cpy_r_r120;
    cpy_r_r121 = PyList_New(0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 616, CPyStatic_builder___globals);
        goto CPyL136;
    }
    cpy_r_lvalues = cpy_r_r121;
    cpy_r_r122 = 0;
    cpy_r_idx = 0;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr))
        cpy_r_r123 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 617, CPyStatic_builder___globals, "mypy.nodes.TupleExpr", cpy_r_lvalue);
        goto CPyL137;
    }
    cpy_r_r124 = ((mypy___nodes___TupleExprObject *)cpy_r_r123)->_items;
    CPy_INCREF(cpy_r_r124);
    cpy_r_r125 = 0;
CPyL92: ;
    cpy_r_r126 = (CPyPtr)&((PyVarObject *)cpy_r_r124)->ob_size;
    cpy_r_r127 = *(int64_t *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 << 1;
    cpy_r_r129 = (Py_ssize_t)cpy_r_r125 < (Py_ssize_t)cpy_r_r128;
    if (!cpy_r_r129) goto CPyL138;
    cpy_r_r130 = CPyList_GetItemUnsafe(cpy_r_r124, cpy_r_r125);
    if (likely(PyObject_TypeCheck(cpy_r_r130, CPyType_nodes___Expression)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 617, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r130);
        goto CPyL139;
    }
    cpy_r_item = cpy_r_r131;
    cpy_r_r132 = CPY_INT_TAG;
    cpy_r_r133 = 2;
    cpy_r_r134 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_self, cpy_r_item, cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 618, CPyStatic_builder___globals);
        goto CPyL140;
    }
    cpy_r_targ = cpy_r_r134;
    cpy_r_r135 = PyList_Append(cpy_r_lvalues, cpy_r_targ);
    CPy_DECREF(cpy_r_targ);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 619, CPyStatic_builder___globals);
        goto CPyL140;
    }
    cpy_r_r137 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r138 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r139 = *(PyObject * *)cpy_r_r138;
    CPy_DECREF(cpy_r_item);
    cpy_r_r140 = cpy_r_r139 == cpy_r_r137;
    if (!cpy_r_r140) goto CPyL141;
    cpy_r_r141 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r142 = cpy_r_star_idx != cpy_r_r141;
    CPy_DECREF(cpy_r_star_idx);
    if (!cpy_r_r142) goto CPyL99;
    cpy_r_r143 = CPyStatics[4957]; /* 'Two starred expressions in assignment' */
    cpy_r_r144 = CPyDef_builder___IRBuilder___error(cpy_r_self, cpy_r_r143, cpy_r_line);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 622, CPyStatic_builder___globals);
        goto CPyL142;
    }
CPyL99: ;
    cpy_r_r145 = CPyTagged_StealAsObject(cpy_r_idx);
    cpy_r_star_idx = cpy_r_r145;
CPyL100: ;
    cpy_r_r146 = cpy_r_r122 + 2;
    cpy_r_r122 = cpy_r_r146;
    cpy_r_idx = cpy_r_r146;
    cpy_r_r147 = cpy_r_r125 + 2;
    cpy_r_r125 = cpy_r_r147;
    goto CPyL92;
CPyL101: ;
    cpy_r_r148 = CPyDef_targets___AssignmentTargetTuple(cpy_r_lvalues, cpy_r_star_idx);
    CPy_DECREF(cpy_r_lvalues);
    CPy_DECREF(cpy_r_star_idx);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 625, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r148;
CPyL103: ;
    cpy_r_r149 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r150 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r151 = *(PyObject * *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 == cpy_r_r149;
    if (!cpy_r_r152) goto CPyL107;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___StarExpr))
        cpy_r_r153 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 628, CPyStatic_builder___globals, "mypy.nodes.StarExpr", cpy_r_lvalue);
        goto CPyL115;
    }
    cpy_r_r154 = ((mypy___nodes___StarExprObject *)cpy_r_r153)->_expr;
    CPy_INCREF(cpy_r_r154);
    cpy_r_r155 = CPY_INT_TAG;
    cpy_r_r156 = 2;
    cpy_r_r157 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_self, cpy_r_r154, cpy_r_r155, cpy_r_r156);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 628, CPyStatic_builder___globals);
        goto CPyL115;
    }
    return cpy_r_r157;
CPyL107: ;
    if (0) goto CPyL114;
    cpy_r_r158 = CPyStatics[8064]; /* 'Unsupported lvalue: %r' */
    cpy_r_r159 = PyNumber_Remainder(cpy_r_r158, cpy_r_lvalue);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 630, CPyStatic_builder___globals);
        goto CPyL115;
    }
    if (likely(PyUnicode_Check(cpy_r_r159)))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 630, CPyStatic_builder___globals, "str", cpy_r_r159);
        goto CPyL115;
    }
    cpy_r_r161 = CPyModule_builtins;
    cpy_r_r162 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r163 = CPyObject_GetAttr(cpy_r_r161, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 630, CPyStatic_builder___globals);
        goto CPyL143;
    }
    PyObject *cpy_r_r164[1] = {cpy_r_r160};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = _PyObject_Vectorcall(cpy_r_r163, cpy_r_r165, 1, 0);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 630, CPyStatic_builder___globals);
        goto CPyL143;
    }
    CPy_DECREF(cpy_r_r160);
    CPy_Raise(cpy_r_r166);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 630, CPyStatic_builder___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL114: ;
    CPy_Unreachable();
CPyL115: ;
    cpy_r_r167 = NULL;
    return cpy_r_r167;
CPyL116: ;
    CPyTagged_INCREF(cpy_r_line);
    goto CPyL2;
CPyL117: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL5;
CPyL118: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL115;
CPyL119: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_symbol);
    goto CPyL115;
CPyL120: ;
    CPy_DECREF(cpy_r_symbol);
    goto CPyL13;
CPyL121: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL15;
CPyL122: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL25;
CPyL123: ;
    CPy_DecRef(cpy_r_symbol);
    goto CPyL115;
CPyL124: ;
    CPy_DECREF(cpy_r_symbol);
    goto CPyL55;
CPyL125: ;
    CPy_DecRef(cpy_r_symbol);
    CPy_DecRef(cpy_r_r36);
    goto CPyL115;
CPyL126: ;
    CPy_DecRef(cpy_r_symbol);
    CPy_DecRef(cpy_r_reg_type);
    goto CPyL115;
CPyL127: ;
    CPy_DecRef(cpy_r_reg_type);
    goto CPyL115;
CPyL128: ;
    CPy_DecRef(cpy_r_reg_type);
    CPy_DecRef(cpy_r_r61);
    goto CPyL115;
CPyL129: ;
    CPy_DecRef(cpy_r_globals_dict);
    goto CPyL115;
CPyL130: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL115;
CPyL131: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL71;
CPyL132: ;
    CPy_DecRef(cpy_r_base);
    goto CPyL115;
CPyL133: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL80;
CPyL134: ;
    CPy_DecRef(cpy_r_obj);
    goto CPyL115;
CPyL135: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL103;
CPyL136: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_star_idx);
    goto CPyL115;
CPyL137: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_star_idx);
    CPy_DecRef(cpy_r_lvalues);
    CPyTagged_DecRef(cpy_r_idx);
    goto CPyL115;
CPyL138: ;
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_idx);
    CPy_DECREF(cpy_r_r124);
    goto CPyL101;
CPyL139: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_star_idx);
    CPy_DecRef(cpy_r_lvalues);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_r124);
    goto CPyL115;
CPyL140: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_star_idx);
    CPy_DecRef(cpy_r_lvalues);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_item);
    goto CPyL115;
CPyL141: ;
    CPyTagged_DECREF(cpy_r_idx);
    goto CPyL100;
CPyL142: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_lvalues);
    CPyTagged_DecRef(cpy_r_idx);
    CPy_DecRef(cpy_r_r124);
    goto CPyL115;
CPyL143: ;
    CPy_DecRef(cpy_r_r160);
    goto CPyL115;
}

PyObject *CPyPy_builder___IRBuilder___get_assignment_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "line", "for_read", 0};
    static CPyArg_Parser parser = {"O|O$O:get_assignment_target", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_line = NULL;
    PyObject *obj_for_read = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_lvalue, &obj_line, &obj_for_read)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_lvalue); 
        goto fail;
    }
    CPyTagged arg_line;
    if (obj_line == NULL) {
        arg_line = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_for_read;
    if (obj_for_read == NULL) {
        arg_for_read = 2;
    } else if (unlikely(!PyBool_Check(obj_for_read))) {
        CPy_TypeError("bool", obj_for_read); goto fail;
    } else
        arg_for_read = obj_for_read == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___get_assignment_target(arg_self, arg_lvalue, arg_line, arg_for_read);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_assignment_target", 559, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___read(PyObject *cpy_r_self, PyObject *cpy_r_target, CPyTagged cpy_r_line, char cpy_r_can_borrow) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
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
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_borrow;
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
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    if (cpy_r_line != CPY_INT_TAG) goto CPyL61;
    cpy_r_line = -2;
CPyL2: ;
    if (cpy_r_can_borrow != 2) goto CPyL4;
    cpy_r_can_borrow = 0;
CPyL4: ;
    cpy_r_r0 = (PyObject *)CPyType_ops___Value;
    cpy_r_r1 = CPy_TypeCheck(cpy_r_target, cpy_r_r0);
    if (cpy_r_r1) {
        goto CPyL62;
    } else
        goto CPyL7;
CPyL5: ;
    CPy_INCREF(cpy_r_target);
    if (likely(PyObject_TypeCheck(cpy_r_target, CPyType_ops___Value)))
        cpy_r_r2 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 636, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_target);
        goto CPyL60;
    }
    return cpy_r_r2;
CPyL7: ;
    cpy_r_r3 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) {
        goto CPyL63;
    } else
        goto CPyL10;
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r7 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 638, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL60;
    }
    cpy_r_r8 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r7)->_register;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL10: ;
    cpy_r_r9 = (PyObject *)CPyType_targets___AssignmentTargetIndex;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r13 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 641, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r14 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r13)->_base;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[1197]; /* '__getitem__' */
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r16 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 641, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL65;
    }
    cpy_r_r17 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r16)->_index;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 641, CPyStatic_builder___globals);
        goto CPyL66;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r17;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r21 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 641, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL67;
    }
    cpy_r_r22 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r21)->_type;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_self, cpy_r_r14, cpy_r_r15, cpy_r_r18, cpy_r_r22, cpy_r_line, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 640, CPyStatic_builder___globals);
        goto CPyL64;
    }
    cpy_r_reg = cpy_r_r25;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_reg != cpy_r_r26;
    if (cpy_r_r27) {
        goto CPyL68;
    } else
        goto CPyL69;
CPyL17: ;
    return cpy_r_reg;
CPyL18: ;
    cpy_r_r28 = 0 ? Py_True : Py_False;
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", -1, CPyStatic_builder___globals);
        goto CPyL64;
    }
    cpy_r_r31 = cpy_r_r29;
    if (cpy_r_r31) {
        goto CPyL32;
    } else
        goto CPyL70;
CPyL20: ;
    cpy_r_r32 = (PyObject *)CPyType_ops___Value;
    cpy_r_r33 = CPy_TypeCheck(cpy_r_target, cpy_r_r32);
    if (!cpy_r_r33) goto CPyL24;
    CPy_INCREF(cpy_r_target);
    if (likely(PyObject_TypeCheck(cpy_r_target, CPyType_ops___Value)))
        cpy_r_r34 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_target);
        goto CPyL60;
    }
    cpy_r_r35 = CPyStatics[3966]; /* 'base' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals);
        goto CPyL60;
    }
    cpy_r_r37 = cpy_r_r36;
    goto CPyL27;
CPyL24: ;
    CPy_INCREF(cpy_r_target);
    if (likely(PyObject_TypeCheck(cpy_r_target, CPyType_targets___AssignmentTarget)))
        cpy_r_r38 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_target);
        goto CPyL60;
    }
    cpy_r_r39 = CPyStatics[3966]; /* 'base' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals);
        goto CPyL60;
    }
    cpy_r_r37 = cpy_r_r40;
CPyL27: ;
    cpy_r_r41 = CPyStatics[802]; /* 'type' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r41);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals);
        goto CPyL60;
    }
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_r42};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_Raise(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 645, CPyStatic_builder___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r49 = (PyObject *)CPyType_targets___AssignmentTargetAttr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL72;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r53 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 647, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r54 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r53)->_obj;
    cpy_r_r55 = ((mypyc___ir___ops___ValueObject *)cpy_r_r54)->_type;
    cpy_r_r56 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_r55)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL47;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r60 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 647, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r61 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r60)->_obj;
    cpy_r_r62 = ((mypyc___ir___ops___ValueObject *)cpy_r_r61)->_type;
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_rtypes___RInstance))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 647, CPyStatic_builder___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r62);
        goto CPyL64;
    }
    cpy_r_r64 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r63)->_class_ir;
    cpy_r_r65 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r64)->_is_ext_class;
    if (!cpy_r_r65) goto CPyL47;
CPyL38: ;
    if (cpy_r_can_borrow) goto CPyL40;
    cpy_r_r66 = cpy_r_can_borrow;
    goto CPyL42;
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r67 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 648, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r68 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r67)->_can_borrow;
    cpy_r_r66 = cpy_r_r68;
CPyL42: ;
    cpy_r_borrow = cpy_r_r66;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r69 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 649, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r70 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r69)->_obj;
    CPy_INCREF(cpy_r_r70);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r71 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 649, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL73;
    }
    cpy_r_r72 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r71)->_attr;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyDef_ops___GetAttr(cpy_r_r70, cpy_r_r72, cpy_r_line, cpy_r_borrow);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 649, CPyStatic_builder___globals);
        goto CPyL60;
    }
    cpy_r_r74 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 649, CPyStatic_builder___globals);
        goto CPyL60;
    }
    return cpy_r_r74;
CPyL47: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r75 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 651, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL64;
    }
    cpy_r_r76 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r75)->_obj;
    CPy_INCREF(cpy_r_r76);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r77 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 651, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL74;
    }
    cpy_r_r78 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r77)->_attr;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_self, cpy_r_r76, cpy_r_r78, cpy_r_line);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r78);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 651, CPyStatic_builder___globals);
        goto CPyL60;
    }
    return cpy_r_r79;
CPyL51: ;
    if (0) goto CPyL59;
    cpy_r_r80 = CPyStatics[8064]; /* 'Unsupported lvalue: %r' */
    CPy_INCREF(cpy_r_target);
    if (likely(PyObject_TypeCheck(cpy_r_target, CPyType_targets___AssignmentTarget)))
        cpy_r_r81 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 653, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_target);
        goto CPyL60;
    }
    cpy_r_r82 = PyNumber_Remainder(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 653, CPyStatic_builder___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "read", 653, CPyStatic_builder___globals, "str", cpy_r_r82);
        goto CPyL60;
    }
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 653, CPyStatic_builder___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r83};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 653, CPyStatic_builder___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_r83);
    CPy_Raise(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 653, CPyStatic_builder___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r90 = NULL;
    return cpy_r_r90;
CPyL61: ;
    CPyTagged_INCREF(cpy_r_line);
    goto CPyL2;
CPyL62: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL5;
CPyL63: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL8;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL60;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r14);
    goto CPyL60;
CPyL66: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL60;
CPyL67: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    goto CPyL60;
CPyL68: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL17;
CPyL69: ;
    CPy_DECREF(cpy_r_reg);
    goto CPyL18;
CPyL70: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL20;
CPyL71: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL60;
CPyL72: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL51;
CPyL73: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r70);
    goto CPyL60;
CPyL74: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r76);
    goto CPyL60;
CPyL75: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL60;
}

PyObject *CPyPy_builder___IRBuilder___read(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "line", "can_borrow", 0};
    static CPyArg_Parser parser = {"O|OO:read", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_line = NULL;
    PyObject *obj_can_borrow = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_line, &obj_can_borrow)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (PyObject_TypeCheck(obj_target, CPyType_ops___Value))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL9953;
    if (PyObject_TypeCheck(obj_target, CPyType_targets___AssignmentTarget))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL9953;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", obj_target); 
    goto fail;
__LL9953: ;
    CPyTagged arg_line;
    if (obj_line == NULL) {
        arg_line = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_can_borrow;
    if (obj_can_borrow == NULL) {
        arg_can_borrow = 2;
    } else if (unlikely(!PyBool_Check(obj_can_borrow))) {
        CPy_TypeError("bool", obj_can_borrow); goto fail;
    } else
        arg_can_borrow = obj_can_borrow == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___read(arg_self, arg_target, arg_line, arg_can_borrow);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "read", 632, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___assign(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_rvalue_reg, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
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
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
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
    PyObject *cpy_r_key;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_boxed_reg;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_target_reg2;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_rtypes;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    int64_t cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    CPyPtr cpy_r_r113;
    int64_t cpy_r_r114;
    CPyTagged cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyTagged cpy_r_i;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_item_value;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    CPyTagged cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    cpy_r_r0 = (PyObject *)CPyType_ops___Register;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL6;
    CPy_INCREF(cpy_r_target);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_ops___Register))
        cpy_r_r4 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 657, CPyStatic_builder___globals, "mypyc.ir.ops.Register", cpy_r_target);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_target) == CPyType_ops___Register))
        cpy_r_r5 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 657, CPyStatic_builder___globals, "mypyc.ir.ops.Register", cpy_r_target);
        goto CPyL73;
    }
    cpy_r_r6 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r5)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_builder___IRBuilder___coerce_rvalue(cpy_r_self, cpy_r_rvalue_reg, cpy_r_r6, cpy_r_line);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 657, CPyStatic_builder___globals);
        goto CPyL73;
    }
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_ops___Assign(cpy_r_r4, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 657, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 657, CPyStatic_builder___globals);
        goto CPyL72;
    } else
        goto CPyL74;
CPyL6: ;
    cpy_r_r11 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r15 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 659, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r16 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r15)->_type;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_builder___IRBuilder___coerce_rvalue(cpy_r_self, cpy_r_rvalue_reg, cpy_r_r16, cpy_r_line);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 659, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_rvalue_reg = cpy_r_r17;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r18 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 660, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL75;
    }
    cpy_r_r19 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r18)->_register;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_ops___Assign(cpy_r_r19, cpy_r_rvalue_reg, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_rvalue_reg);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 660, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r22 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 660, CPyStatic_builder___globals);
        goto CPyL72;
    } else
        goto CPyL76;
CPyL12: ;
    cpy_r_r23 = (PyObject *)CPyType_targets___AssignmentTargetAttr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r27 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 662, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r28 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r27)->_obj_type;
    cpy_r_r29 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r33 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 663, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r34 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r33)->_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_builder___IRBuilder___coerce_rvalue(cpy_r_self, cpy_r_rvalue_reg, cpy_r_r34, cpy_r_line);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 663, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_rvalue_reg = cpy_r_r35;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r36 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 664, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL75;
    }
    cpy_r_r37 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r36)->_obj;
    CPy_INCREF(cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r38 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 664, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL77;
    }
    cpy_r_r39 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r38)->_attr;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyDef_ops___SetAttr(cpy_r_r37, cpy_r_r39, cpy_r_rvalue_reg, cpy_r_line);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_rvalue_reg);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 664, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r41 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 664, CPyStatic_builder___globals);
        goto CPyL72;
    } else
        goto CPyL78;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r42 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 666, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r43 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r42)->_attr;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyDef_builder___IRBuilder___load_str(cpy_r_self, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 666, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_key = cpy_r_r44;
    cpy_r_r45 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = CPyDef_ll_builder___LowLevelIRBuilder___box(cpy_r_r45, cpy_r_rvalue_reg);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 667, CPyStatic_builder___globals);
        goto CPyL79;
    }
    cpy_r_boxed_reg = cpy_r_r46;
    cpy_r_r47 = CPyStatic_builder___globals;
    cpy_r_r48 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 668, CPyStatic_builder___globals);
        goto CPyL80;
    }
    if (likely(PyTuple_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 668, CPyStatic_builder___globals, "tuple", cpy_r_r49);
        goto CPyL80;
    }
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r51 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 668, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL81;
    }
    cpy_r_r52 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r51)->_obj;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = PyList_New(3);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 668, CPyStatic_builder___globals);
        goto CPyL82;
    }
    cpy_r_r54 = (CPyPtr)&((PyListObject *)cpy_r_r53)->ob_item;
    cpy_r_r55 = *(CPyPtr *)cpy_r_r54;
    *(PyObject * *)cpy_r_r55 = cpy_r_r52;
    cpy_r_r56 = cpy_r_r55 + 8;
    *(PyObject * *)cpy_r_r56 = cpy_r_key;
    cpy_r_r57 = cpy_r_r55 + 16;
    *(PyObject * *)cpy_r_r57 = cpy_r_boxed_reg;
    cpy_r_r58 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r50, cpy_r_r53, cpy_r_line);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 668, CPyStatic_builder___globals);
        goto CPyL72;
    } else
        goto CPyL83;
CPyL29: ;
    cpy_r_r59 = (PyObject *)CPyType_targets___AssignmentTargetIndex;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (!cpy_r_r62) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r63 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 671, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r64 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r63)->_base;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[808]; /* '__setitem__' */
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r66 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 671, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL84;
    }
    cpy_r_r67 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r66)->_index;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = PyList_New(2);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 671, CPyStatic_builder___globals);
        goto CPyL85;
    }
    cpy_r_r69 = (CPyPtr)&((PyListObject *)cpy_r_r68)->ob_item;
    cpy_r_r70 = *(CPyPtr *)cpy_r_r69;
    *(PyObject * *)cpy_r_r70 = cpy_r_r67;
    cpy_r_r71 = cpy_r_r70 + 8;
    CPy_INCREF(cpy_r_rvalue_reg);
    *(PyObject * *)cpy_r_r71 = cpy_r_rvalue_reg;
    cpy_r_r72 = Py_None;
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_self, cpy_r_r64, cpy_r_r65, cpy_r_r68, cpy_r_r72, cpy_r_line, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 670, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_target_reg2 = cpy_r_r75;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_target_reg2 != cpy_r_r76;
    CPy_DECREF(cpy_r_target_reg2);
    if (cpy_r_r77) goto CPyL71;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r78 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 673, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r79 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r78)->_base;
    cpy_r_r80 = ((mypyc___ir___ops___ValueObject *)cpy_r_r79)->_type;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = CPyModule_builtins;
    cpy_r_r82 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 673, CPyStatic_builder___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r84[1] = {cpy_r_r80};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 1, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 673, CPyStatic_builder___globals);
        goto CPyL86;
    }
    CPy_DECREF(cpy_r_r80);
    CPy_Raise(cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 673, CPyStatic_builder___globals);
        goto CPyL72;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r87 = (PyObject *)CPyType_targets___AssignmentTargetTuple;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    if (!cpy_r_r90) goto CPyL68;
    cpy_r_r91 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue_reg)->_type;
    cpy_r_r92 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r93 = (CPyPtr)&((PyObject *)cpy_r_r91)->ob_type;
    cpy_r_r94 = *(PyObject * *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 == cpy_r_r92;
    if (!cpy_r_r95) goto CPyL58;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r96 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 675, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r97 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r96)->_star_idx;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_r97 == cpy_r_r98;
    if (!cpy_r_r99) goto CPyL58;
    cpy_r_r100 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue_reg)->_type;
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_rtypes___RTuple))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 676, CPyStatic_builder___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r100);
        goto CPyL72;
    }
    cpy_r_r102 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r101)->_types;
    CPy_INCREF(cpy_r_r102);
    cpy_r_rtypes = cpy_r_r102;
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_rtypes)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 << 1;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r106 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 677, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL87;
    }
    cpy_r_r107 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r106)->_items;
    cpy_r_r108 = (CPyPtr)&((PyVarObject *)cpy_r_r107)->ob_size;
    cpy_r_r109 = *(int64_t *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 << 1;
    cpy_r_r111 = cpy_r_r105 == cpy_r_r110;
    if (cpy_r_r111) {
        goto CPyL49;
    } else
        goto CPyL88;
CPyL47: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r112 = 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 677, CPyStatic_builder___globals);
        goto CPyL72;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r113 = (CPyPtr)&((PyVarObject *)cpy_r_rtypes)->ob_size;
    cpy_r_r114 = *(int64_t *)cpy_r_r113;
    CPy_DECREF(cpy_r_rtypes);
    cpy_r_r115 = cpy_r_r114 << 1;
    cpy_r_r116 = 0;
    cpy_r_i = cpy_r_r116;
CPyL50: ;
    cpy_r_r117 = (Py_ssize_t)cpy_r_r116 < (Py_ssize_t)cpy_r_r115;
    if (!cpy_r_r117) goto CPyL89;
    cpy_r_r118 = CPyDef_ops___TupleGet(cpy_r_rvalue_reg, cpy_r_i, cpy_r_line);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 679, CPyStatic_builder___globals);
        goto CPyL90;
    }
    cpy_r_r119 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 679, CPyStatic_builder___globals);
        goto CPyL90;
    }
    cpy_r_item_value = cpy_r_r119;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r120 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 680, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL91;
    }
    cpy_r_r121 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r120)->_items;
    cpy_r_r122 = CPyList_GetItem(cpy_r_r121, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 680, CPyStatic_builder___globals);
        goto CPyL92;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r122, CPyType_targets___AssignmentTarget)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 680, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r122);
        goto CPyL92;
    }
    cpy_r_r124 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_r123, cpy_r_item_value, cpy_r_line);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_item_value);
    if (unlikely(cpy_r_r124 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 680, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r125 = cpy_r_r116 + 2;
    cpy_r_r116 = cpy_r_r125;
    cpy_r_i = cpy_r_r125;
    goto CPyL50;
CPyL58: ;
    cpy_r_r126 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue_reg)->_type;
    CPy_INCREF(cpy_r_r126);
    cpy_r_r127 = CPyDef_rtypes___is_list_rprimitive(cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 682, CPyStatic_builder___globals);
        goto CPyL72;
    }
    if (cpy_r_r127) goto CPyL62;
    cpy_r_r128 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue_reg)->_type;
    CPy_INCREF(cpy_r_r128);
    cpy_r_r129 = CPyDef_rtypes___is_tuple_rprimitive(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 682, CPyStatic_builder___globals);
        goto CPyL72;
    }
    if (!cpy_r_r129) goto CPyL66;
CPyL62: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r130 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 683, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r131 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r130)->_star_idx;
    cpy_r_r132 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r133 = cpy_r_r131 == cpy_r_r132;
    if (!cpy_r_r133) goto CPyL66;
    CPy_INCREF(cpy_r_target);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r134 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 684, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r135 = CPyDef_builder___IRBuilder___process_sequence_assignment(cpy_r_self, cpy_r_r134, cpy_r_rvalue_reg, cpy_r_line);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 684, CPyStatic_builder___globals);
        goto CPyL72;
    } else
        goto CPyL71;
CPyL66: ;
    CPy_INCREF(cpy_r_target);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r136 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "assign", 686, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL72;
    }
    cpy_r_r137 = CPyDef_builder___IRBuilder___process_iterator_tuple_assignment(cpy_r_self, cpy_r_r136, cpy_r_rvalue_reg, cpy_r_line);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 686, CPyStatic_builder___globals);
        goto CPyL72;
    } else
        goto CPyL71;
CPyL68: ;
    if (0) goto CPyL71;
    PyErr_SetString(PyExc_AssertionError, "Unsupported assignment target");
    cpy_r_r138 = 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 688, CPyStatic_builder___globals);
        goto CPyL72;
    }
    CPy_Unreachable();
CPyL71: ;
    return 1;
CPyL72: ;
    cpy_r_r139 = 2;
    return cpy_r_r139;
CPyL73: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL72;
CPyL74: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL71;
CPyL75: ;
    CPy_DecRef(cpy_r_rvalue_reg);
    goto CPyL72;
CPyL76: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL71;
CPyL77: ;
    CPy_DecRef(cpy_r_rvalue_reg);
    CPy_DecRef(cpy_r_r37);
    goto CPyL72;
CPyL78: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL71;
CPyL79: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL72;
CPyL80: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_boxed_reg);
    goto CPyL72;
CPyL81: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_boxed_reg);
    CPy_DecRef(cpy_r_r50);
    goto CPyL72;
CPyL82: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_boxed_reg);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r52);
    goto CPyL72;
CPyL83: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL71;
CPyL84: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL72;
CPyL85: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL72;
CPyL86: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL72;
CPyL87: ;
    CPy_DecRef(cpy_r_rtypes);
    goto CPyL72;
CPyL88: ;
    CPy_DECREF(cpy_r_rtypes);
    goto CPyL47;
CPyL89: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL71;
CPyL90: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL72;
CPyL91: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_item_value);
    goto CPyL72;
CPyL92: ;
    CPy_DecRef(cpy_r_item_value);
    goto CPyL72;
}

PyObject *CPyPy_builder___IRBuilder___assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "rvalue_reg", "line", 0};
    static CPyArg_Parser parser = {"OOO:assign", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_rvalue_reg;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_rvalue_reg, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (Py_TYPE(obj_target) == CPyType_ops___Register)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL9954;
    if (PyObject_TypeCheck(obj_target, CPyType_targets___AssignmentTarget))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL9954;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", obj_target); 
    goto fail;
__LL9954: ;
    PyObject *arg_rvalue_reg;
    if (likely(PyObject_TypeCheck(obj_rvalue_reg, CPyType_ops___Value)))
        arg_rvalue_reg = obj_rvalue_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rvalue_reg); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___assign(arg_self, arg_target, arg_rvalue_reg, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "assign", 655, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___coerce_rvalue(PyObject *cpy_r_self, PyObject *cpy_r_rvalue, PyObject *cpy_r_rtype, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_typename;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyDef_rtypes___is_float_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 691, CPyStatic_builder___globals);
        goto CPyL15;
    }
    if (!cpy_r_r0) goto CPyL13;
    cpy_r_r1 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_rtypes___is_tagged(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 691, CPyStatic_builder___globals);
        goto CPyL15;
    }
    if (!cpy_r_r2) goto CPyL13;
    cpy_r_r3 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_rtypes___RType___short_name(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 692, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_typename = cpy_r_r4;
    cpy_r_r5 = CPyStatics[8002]; /* 'short_int' */
    cpy_r_r6 = PyUnicode_Compare(cpy_r_typename, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 693, CPyStatic_builder___globals);
        goto CPyL16;
    }
CPyL8: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    if (cpy_r_r11) {
        goto CPyL17;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r12 = CPyStatics[5158]; /* 'int' */
    CPy_INCREF(cpy_r_r12);
    cpy_r_typename = cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = CPyStatics[8066]; /* 'Incompatible value representations in assignment ' */
    cpy_r_r14 = CPyStatics[8067]; /* '(expression has type "' */
    cpy_r_r15 = CPyStatics[8068]; /* '", variable has type "float")' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_typename, cpy_r_r15);
    CPy_DECREF(cpy_r_typename);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 697, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r17 = PyUnicode_Concat(cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 696, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r18 = CPyDef_builder___IRBuilder___error(cpy_r_self, cpy_r_r17, cpy_r_line);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 695, CPyStatic_builder___globals);
        goto CPyL15;
    }
CPyL13: ;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_rvalue, cpy_r_rtype, cpy_r_line, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 700, CPyStatic_builder___globals);
        goto CPyL15;
    }
    return cpy_r_r20;
CPyL15: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL16: ;
    CPy_DecRef(cpy_r_typename);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_typename);
    goto CPyL9;
}

PyObject *CPyPy_builder___IRBuilder___coerce_rvalue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rvalue", "rtype", "line", 0};
    static CPyArg_Parser parser = {"OOO:coerce_rvalue", kwlist, 0};
    PyObject *obj_rvalue;
    PyObject *obj_rtype;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_rvalue, &obj_rtype, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_rvalue;
    if (likely(PyObject_TypeCheck(obj_rvalue, CPyType_ops___Value)))
        arg_rvalue = obj_rvalue;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rvalue); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___coerce_rvalue(arg_self, arg_rvalue, arg_rtype, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "coerce_rvalue", 690, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___process_sequence_assignment(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_rvalue, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_expected_len;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_i;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_item_value;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_value;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyStatic_builder___globals;
    cpy_r_r5 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 707, CPyStatic_builder___globals);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RPrimitive))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 707, CPyStatic_builder___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r6);
        goto CPyL33;
    }
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_ops___Integer(cpy_r_r3, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 707, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_expected_len = cpy_r_r9;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatic_builder___globals;
    cpy_r_r12 = CPyStatics[8069]; /* 'check_unpack_count_op' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 708, CPyStatic_builder___globals);
        goto CPyL34;
    }
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 708, CPyStatic_builder___globals, "tuple", cpy_r_r13);
        goto CPyL34;
    }
    cpy_r_r15 = PyList_New(2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 708, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_rvalue);
    *(PyObject * *)cpy_r_r17 = cpy_r_rvalue;
    cpy_r_r18 = cpy_r_r17 + 8;
    *(PyObject * *)cpy_r_r18 = cpy_r_expected_len;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_ll_builder___LowLevelIRBuilder___call_c(cpy_r_r10, cpy_r_r14, cpy_r_r15, cpy_r_line, cpy_r_r19);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 708, CPyStatic_builder___globals);
        goto CPyL33;
    } else
        goto CPyL36;
CPyL7: ;
    cpy_r_r21 = PyList_New(0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 711, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_values = cpy_r_r21;
    cpy_r_r22 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = 0;
    cpy_r_i = cpy_r_r26;
CPyL9: ;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r27) goto CPyL37;
    cpy_r_r28 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    cpy_r_r29 = CPyList_GetItem(cpy_r_r28, cpy_r_i);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 713, CPyStatic_builder___globals);
        goto CPyL38;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_targets___AssignmentTarget)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 713, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r29);
        goto CPyL38;
    }
    cpy_r_item = cpy_r_r30;
    cpy_r_r31 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_ll_builder___LowLevelIRBuilder___load_int(cpy_r_r31, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 714, CPyStatic_builder___globals);
        goto CPyL39;
    }
    cpy_r_index = cpy_r_r32;
    cpy_r_r33 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue)->_type;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_rtypes___is_list_rprimitive(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 715, CPyStatic_builder___globals);
        goto CPyL40;
    }
    if (cpy_r_r34) {
        goto CPyL41;
    } else
        goto CPyL20;
CPyL15: ;
    cpy_r_r35 = CPyStatic_builder___globals;
    cpy_r_r36 = CPyStatics[8070]; /* 'list_get_item_unsafe_op' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 716, CPyStatic_builder___globals);
        goto CPyL42;
    }
    if (likely(PyTuple_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 716, CPyStatic_builder___globals, "tuple", cpy_r_r37);
        goto CPyL42;
    }
    cpy_r_r39 = PyList_New(2);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 716, CPyStatic_builder___globals);
        goto CPyL43;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    CPy_INCREF(cpy_r_rvalue);
    *(PyObject * *)cpy_r_r41 = cpy_r_rvalue;
    cpy_r_r42 = cpy_r_r41 + 8;
    *(PyObject * *)cpy_r_r42 = cpy_r_index;
    cpy_r_r43 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r38, cpy_r_r39, cpy_r_line);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 716, CPyStatic_builder___globals);
        goto CPyL44;
    }
    cpy_r_item_value = cpy_r_r43;
    goto CPyL23;
CPyL20: ;
    cpy_r_r44 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r46 = PyList_New(1);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 719, CPyStatic_builder___globals);
        goto CPyL45;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_index;
    cpy_r_r49 = ((mypyc___irbuild___targets___AssignmentTargetObject *)cpy_r_item)->_type;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_item);
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = 2;
    cpy_r_r53 = CPyDef_ll_builder___LowLevelIRBuilder___gen_method_call(cpy_r_r44, cpy_r_rvalue, cpy_r_r45, cpy_r_r46, cpy_r_r49, cpy_r_line, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 718, CPyStatic_builder___globals);
        goto CPyL44;
    }
    cpy_r_item_value = cpy_r_r53;
CPyL23: ;
    cpy_r_r54 = PyList_Append(cpy_r_values, cpy_r_item_value);
    CPy_DECREF(cpy_r_item_value);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 721, CPyStatic_builder___globals);
        goto CPyL44;
    }
    cpy_r_r56 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r56;
    cpy_r_i = cpy_r_r56;
    goto CPyL9;
CPyL25: ;
    cpy_r_r57 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = 0;
    cpy_r_r59 = 0;
CPyL26: ;
    cpy_r_r60 = (CPyPtr)&((PyVarObject *)cpy_r_r57)->ob_size;
    cpy_r_r61 = *(int64_t *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r62;
    if (!cpy_r_r63) goto CPyL46;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = (Py_ssize_t)cpy_r_r59 < (Py_ssize_t)cpy_r_r66;
    if (!cpy_r_r67) goto CPyL46;
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_r57, cpy_r_r58);
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_targets___AssignmentTarget)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 724, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r68);
        goto CPyL47;
    }
    cpy_r_lvalue = cpy_r_r69;
    cpy_r_r70 = CPyList_GetItemUnsafe(cpy_r_values, cpy_r_r59);
    if (likely(PyObject_TypeCheck(cpy_r_r70, CPyType_ops___Value)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 724, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r70);
        goto CPyL48;
    }
    cpy_r_value = cpy_r_r71;
    cpy_r_r72 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_lvalue, cpy_r_value, cpy_r_line);
    CPy_DECREF(cpy_r_lvalue);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 725, CPyStatic_builder___globals);
        goto CPyL47;
    }
    cpy_r_r73 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r73;
    cpy_r_r74 = cpy_r_r59 + 2;
    cpy_r_r59 = cpy_r_r74;
    goto CPyL26;
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL34: ;
    CPy_DecRef(cpy_r_expected_len);
    CPy_DecRef(cpy_r_r10);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_expected_len);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL7;
CPyL37: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL25;
CPyL38: ;
    CPy_DecRef(cpy_r_values);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_item);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_index);
    goto CPyL33;
CPyL41: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL15;
CPyL42: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_index);
    goto CPyL33;
CPyL43: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r38);
    goto CPyL33;
CPyL44: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r44);
    goto CPyL33;
CPyL46: ;
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_r57);
    goto CPyL32;
CPyL47: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r57);
    goto CPyL33;
CPyL48: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL33;
}

PyObject *CPyPy_builder___IRBuilder___process_sequence_assignment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "rvalue", "line", 0};
    static CPyArg_Parser parser = {"OOO:process_sequence_assignment", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_rvalue;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_rvalue, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_targets___AssignmentTargetTuple))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetTuple", obj_target); 
        goto fail;
    }
    PyObject *arg_rvalue;
    if (likely(PyObject_TypeCheck(obj_rvalue, CPyType_ops___Value)))
        arg_rvalue = obj_rvalue;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rvalue); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___process_sequence_assignment(arg_self, arg_target, arg_rvalue, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "process_sequence_assignment", 702, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___process_iterator_tuple_assignment_helper(PyObject *cpy_r_self, PyObject *cpy_r_litem, PyObject *cpy_r_ritem, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_error_block;
    PyObject *cpy_r_ok_block;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 730, CPyStatic_builder___globals);
        goto CPyL12;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 730, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_error_block = cpy_r_r2;
    cpy_r_ok_block = cpy_r_r5;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_ops___Branch(cpy_r_ritem, cpy_r_error_block, cpy_r_ok_block, 202, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 731, CPyStatic_builder___globals);
        goto CPyL14;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 731, CPyStatic_builder___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL4: ;
    cpy_r_r10 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 733, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_r11 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r12 = CPyStatics[8071]; /* 'not enough values to unpack' */
    cpy_r_r13 = CPyDef_ops___RaiseStandardError(cpy_r_r11, cpy_r_r12, cpy_r_line);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 735, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 734, CPyStatic_builder___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL7: ;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_ops___Unreachable(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 737, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 737, CPyStatic_builder___globals);
        goto CPyL16;
    } else
        goto CPyL18;
CPyL9: ;
    cpy_r_r18 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_ok_block);
    CPy_DECREF(cpy_r_ok_block);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 739, CPyStatic_builder___globals);
        goto CPyL12;
    }
    cpy_r_r19 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_litem, cpy_r_ritem, cpy_r_line);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 740, CPyStatic_builder___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL4;
CPyL16: ;
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL7;
CPyL18: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL9;
}

PyObject *CPyPy_builder___IRBuilder___process_iterator_tuple_assignment_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"litem", "ritem", "line", 0};
    static CPyArg_Parser parser = {"OOO:process_iterator_tuple_assignment_helper", kwlist, 0};
    PyObject *obj_litem;
    PyObject *obj_ritem;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_litem, &obj_ritem, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_litem;
    if (likely(PyObject_TypeCheck(obj_litem, CPyType_targets___AssignmentTarget)))
        arg_litem = obj_litem;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTarget", obj_litem); 
        goto fail;
    }
    PyObject *arg_ritem;
    if (likely(PyObject_TypeCheck(obj_ritem, CPyType_ops___Value)))
        arg_ritem = obj_ritem;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_ritem); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___process_iterator_tuple_assignment_helper(arg_self, arg_litem, arg_ritem, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment_helper", 727, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___process_iterator_tuple_assignment(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_rvalue_reg, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_iterator;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_split_idx;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_litem;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_ritem;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_error_block;
    PyObject *cpy_r_ok_block;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_post_star_vals;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_iter_list;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_iter_list_len;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_post_star_len;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_condition;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    CPyPtr cpy_r_r100;
    int64_t cpy_r_r101;
    CPyTagged cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyTagged cpy_r_r104;
    int64_t cpy_r_r105;
    char cpy_r_r106;
    int64_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    CPyPtr cpy_r_r114;
    int64_t cpy_r_r115;
    CPyTagged cpy_r_r116;
    int64_t cpy_r_r117;
    char cpy_r_r118;
    int64_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyPtr cpy_r_r134;
    CPyPtr cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    CPyTagged cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyTagged cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    CPyPtr cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_extra;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyTagged cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyTagged cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyTagged cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    cpy_r_r0 = CPyStatic_builder___globals;
    cpy_r_r1 = CPyStatics[8072]; /* 'iter_op' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 745, CPyStatic_builder___globals);
        goto CPyL85;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 745, CPyStatic_builder___globals, "tuple", cpy_r_r2);
        goto CPyL85;
    }
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 745, CPyStatic_builder___globals);
        goto CPyL86;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_rvalue_reg);
    *(PyObject * *)cpy_r_r6 = cpy_r_rvalue_reg;
    cpy_r_r7 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r3, cpy_r_r4, cpy_r_line);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 745, CPyStatic_builder___globals);
        goto CPyL85;
    }
    cpy_r_iterator = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_star_idx;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_star_idx;
    CPy_INCREF(cpy_r_r11);
    if (likely(PyLong_Check(cpy_r_r11)))
        cpy_r_r12 = CPyTagged_FromObject(cpy_r_r11);
    else {
        CPy_TypeError("int", cpy_r_r11); cpy_r_r12 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 748, CPyStatic_builder___globals);
        goto CPyL87;
    }
    cpy_r_r13 = cpy_r_r12;
    goto CPyL8;
CPyL7: ;
    cpy_r_r14 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r13 = cpy_r_r17;
CPyL8: ;
    cpy_r_split_idx = cpy_r_r13;
    cpy_r_r18 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyList_GetSlice(cpy_r_r18, 0, cpy_r_split_idx);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 751, CPyStatic_builder___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 751, CPyStatic_builder___globals, "list", cpy_r_r19);
        goto CPyL88;
    }
    cpy_r_r21 = 0;
CPyL11: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL89;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_targets___AssignmentTarget)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 751, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r26);
        goto CPyL90;
    }
    cpy_r_litem = cpy_r_r27;
    cpy_r_r28 = CPyStatic_builder___globals;
    cpy_r_r29 = CPyStatics[8073]; /* 'next_op' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 752, CPyStatic_builder___globals);
        goto CPyL91;
    }
    if (likely(PyTuple_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 752, CPyStatic_builder___globals, "tuple", cpy_r_r30);
        goto CPyL91;
    }
    cpy_r_r32 = PyList_New(1);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 752, CPyStatic_builder___globals);
        goto CPyL92;
    }
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_r32)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    CPy_INCREF(cpy_r_iterator);
    *(PyObject * *)cpy_r_r34 = cpy_r_iterator;
    cpy_r_r35 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r31, cpy_r_r32, cpy_r_line);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 752, CPyStatic_builder___globals);
        goto CPyL91;
    }
    cpy_r_ritem = cpy_r_r35;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPyDef_ops___BasicBlock(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 753, CPyStatic_builder___globals);
        goto CPyL93;
    }
    cpy_r_r38 = cpy_r_r37;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPyDef_ops___BasicBlock(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 753, CPyStatic_builder___globals);
        goto CPyL94;
    }
    cpy_r_r41 = cpy_r_r40;
    cpy_r_error_block = cpy_r_r38;
    cpy_r_ok_block = cpy_r_r41;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = 2;
    cpy_r_r44 = CPyDef_ops___Branch(cpy_r_ritem, cpy_r_error_block, cpy_r_ok_block, 202, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 754, CPyStatic_builder___globals);
        goto CPyL95;
    }
    cpy_r_r45 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 754, CPyStatic_builder___globals);
        goto CPyL95;
    } else
        goto CPyL96;
CPyL21: ;
    cpy_r_r46 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 756, CPyStatic_builder___globals);
        goto CPyL97;
    }
    cpy_r_r47 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r48 = CPyStatics[8071]; /* 'not enough values to unpack' */
    cpy_r_r49 = CPyDef_ops___RaiseStandardError(cpy_r_r47, cpy_r_r48, cpy_r_line);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 758, CPyStatic_builder___globals);
        goto CPyL97;
    }
    cpy_r_r50 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 757, CPyStatic_builder___globals);
        goto CPyL97;
    } else
        goto CPyL98;
CPyL24: ;
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = CPyDef_ops___Unreachable(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 762, CPyStatic_builder___globals);
        goto CPyL97;
    }
    cpy_r_r53 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 762, CPyStatic_builder___globals);
        goto CPyL97;
    } else
        goto CPyL99;
CPyL26: ;
    cpy_r_r54 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_ok_block);
    CPy_DECREF(cpy_r_ok_block);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 764, CPyStatic_builder___globals);
        goto CPyL93;
    }
    cpy_r_r55 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_litem, cpy_r_ritem, cpy_r_line);
    CPy_DECREF(cpy_r_litem);
    CPy_DECREF(cpy_r_ritem);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 766, CPyStatic_builder___globals);
        goto CPyL90;
    }
    cpy_r_r56 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r56;
    goto CPyL11;
CPyL29: ;
    cpy_r_r57 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_star_idx;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_r57 != cpy_r_r58;
    if (!cpy_r_r59) goto CPyL100;
    cpy_r_r60 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = CPyTagged_Add(cpy_r_split_idx, 2);
    CPyTagged_DECREF(cpy_r_split_idx);
    cpy_r_r62 = CPyList_GetSlice(cpy_r_r60, cpy_r_r61, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r60);
    CPyTagged_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 770, CPyStatic_builder___globals);
        goto CPyL87;
    }
    if (likely(PyList_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 770, CPyStatic_builder___globals, "list", cpy_r_r62);
        goto CPyL87;
    }
    cpy_r_post_star_vals = cpy_r_r63;
    cpy_r_r64 = CPyStatic_builder___globals;
    cpy_r_r65 = CPyStatics[8074]; /* 'to_list' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 771, CPyStatic_builder___globals);
        goto CPyL101;
    }
    if (likely(PyTuple_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 771, CPyStatic_builder___globals, "tuple", cpy_r_r66);
        goto CPyL101;
    }
    cpy_r_r68 = PyList_New(1);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 771, CPyStatic_builder___globals);
        goto CPyL102;
    }
    cpy_r_r69 = (CPyPtr)&((PyListObject *)cpy_r_r68)->ob_item;
    cpy_r_r70 = *(CPyPtr *)cpy_r_r69;
    *(PyObject * *)cpy_r_r70 = cpy_r_iterator;
    cpy_r_r71 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r67, cpy_r_r68, cpy_r_line);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 771, CPyStatic_builder___globals);
        goto CPyL103;
    }
    cpy_r_iter_list = cpy_r_r71;
    cpy_r_r72 = CPyDef_builder___IRBuilder___builtin_len(cpy_r_self, cpy_r_iter_list, cpy_r_line);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 772, CPyStatic_builder___globals);
        goto CPyL104;
    }
    cpy_r_iter_list_len = cpy_r_r72;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_post_star_vals)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPY_INT_TAG;
    cpy_r_r78 = CPyDef_ops___Integer(cpy_r_r75, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 773, CPyStatic_builder___globals);
        goto CPyL105;
    }
    cpy_r_post_star_len = cpy_r_r78;
    cpy_r_r79 = CPyStatics[2470]; /* '<=' */
    cpy_r_r80 = CPyDef_builder___IRBuilder___binary_op(cpy_r_self, cpy_r_post_star_len, cpy_r_iter_list_len, cpy_r_r79, cpy_r_line);
    CPy_DECREF(cpy_r_post_star_len);
    CPy_DECREF(cpy_r_iter_list_len);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 774, CPyStatic_builder___globals);
        goto CPyL104;
    }
    cpy_r_condition = cpy_r_r80;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = CPyDef_ops___BasicBlock(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 776, CPyStatic_builder___globals);
        goto CPyL106;
    }
    cpy_r_r83 = cpy_r_r82;
    cpy_r_r84 = CPY_INT_TAG;
    cpy_r_r85 = CPyDef_ops___BasicBlock(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 776, CPyStatic_builder___globals);
        goto CPyL107;
    }
    cpy_r_r86 = cpy_r_r85;
    cpy_r_error_block = cpy_r_r83;
    cpy_r_ok_block = cpy_r_r86;
    cpy_r_r87 = CPY_INT_TAG;
    cpy_r_r88 = 2;
    cpy_r_r89 = CPyDef_ops___Branch(cpy_r_condition, cpy_r_ok_block, cpy_r_error_block, 200, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_condition);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 777, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r90 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 777, CPyStatic_builder___globals);
        goto CPyL108;
    } else
        goto CPyL109;
CPyL43: ;
    cpy_r_r91 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 779, CPyStatic_builder___globals);
        goto CPyL110;
    }
    cpy_r_r92 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r93 = CPyStatics[8071]; /* 'not enough values to unpack' */
    cpy_r_r94 = CPyDef_ops___RaiseStandardError(cpy_r_r92, cpy_r_r93, cpy_r_line);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 781, CPyStatic_builder___globals);
        goto CPyL110;
    }
    cpy_r_r95 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 780, CPyStatic_builder___globals);
        goto CPyL110;
    } else
        goto CPyL111;
CPyL46: ;
    cpy_r_r96 = CPY_INT_TAG;
    cpy_r_r97 = CPyDef_ops___Unreachable(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 785, CPyStatic_builder___globals);
        goto CPyL110;
    }
    cpy_r_r98 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 785, CPyStatic_builder___globals);
        goto CPyL110;
    } else
        goto CPyL112;
CPyL48: ;
    cpy_r_r99 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_ok_block);
    CPy_DECREF(cpy_r_ok_block);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 787, CPyStatic_builder___globals);
        goto CPyL104;
    }
    cpy_r_r100 = (CPyPtr)&((PyVarObject *)cpy_r_post_star_vals)->ob_size;
    cpy_r_r101 = *(int64_t *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 << 1;
    cpy_r_r103 = CPyTagged_Subtract(cpy_r_r102, 2);
    cpy_r_r104 = cpy_r_r103;
CPyL50: ;
    cpy_r_r105 = cpy_r_r104 & 1;
    cpy_r_r106 = cpy_r_r105 == 0;
    cpy_r_r107 = 0 & 1;
    cpy_r_r108 = cpy_r_r107 == 0;
    cpy_r_r109 = cpy_r_r106 & cpy_r_r108;
    if (!cpy_r_r109) goto CPyL52;
    cpy_r_r110 = (Py_ssize_t)cpy_r_r104 >= (Py_ssize_t)0;
    cpy_r_r111 = cpy_r_r110;
    goto CPyL53;
CPyL52: ;
    cpy_r_r112 = CPyTagged_IsLt_(cpy_r_r104, 0);
    cpy_r_r113 = cpy_r_r112 ^ 1;
    cpy_r_r111 = cpy_r_r113;
CPyL53: ;
    if (!cpy_r_r111) goto CPyL113;
    cpy_r_r114 = (CPyPtr)&((PyVarObject *)cpy_r_post_star_vals)->ob_size;
    cpy_r_r115 = *(int64_t *)cpy_r_r114;
    cpy_r_r116 = cpy_r_r115 << 1;
    cpy_r_r117 = cpy_r_r104 & 1;
    cpy_r_r118 = cpy_r_r117 == 0;
    cpy_r_r119 = cpy_r_r116 & 1;
    cpy_r_r120 = cpy_r_r119 == 0;
    cpy_r_r121 = cpy_r_r118 & cpy_r_r120;
    if (!cpy_r_r121) goto CPyL56;
    cpy_r_r122 = (Py_ssize_t)cpy_r_r104 < (Py_ssize_t)cpy_r_r116;
    cpy_r_r123 = cpy_r_r122;
    goto CPyL57;
CPyL56: ;
    cpy_r_r124 = CPyTagged_IsLt_(cpy_r_r104, cpy_r_r116);
    cpy_r_r123 = cpy_r_r124;
CPyL57: ;
    if (!cpy_r_r123) goto CPyL113;
    CPyTagged_INCREF(cpy_r_r104);
    cpy_r_r125 = CPyTagged_StealAsObject(cpy_r_r104);
    if (likely(PyLong_Check(cpy_r_r125)))
        cpy_r_r126 = CPyTagged_FromObject(cpy_r_r125);
    else {
        CPy_TypeError("short_int", cpy_r_r125); cpy_r_r126 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 789, CPyStatic_builder___globals);
        goto CPyL114;
    }
    cpy_r_r127 = CPyList_GetItemUnsafe(cpy_r_post_star_vals, cpy_r_r126);
    if (likely(PyObject_TypeCheck(cpy_r_r127, CPyType_targets___AssignmentTarget)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 789, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r127);
        goto CPyL114;
    }
    cpy_r_litem = cpy_r_r128;
    cpy_r_r129 = CPyStatic_builder___globals;
    cpy_r_r130 = CPyStatics[8075]; /* 'list_pop_last' */
    cpy_r_r131 = CPyDict_GetItem(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 790, CPyStatic_builder___globals);
        goto CPyL115;
    }
    if (likely(PyTuple_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 790, CPyStatic_builder___globals, "tuple", cpy_r_r131);
        goto CPyL115;
    }
    cpy_r_r133 = PyList_New(1);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 790, CPyStatic_builder___globals);
        goto CPyL116;
    }
    cpy_r_r134 = (CPyPtr)&((PyListObject *)cpy_r_r133)->ob_item;
    cpy_r_r135 = *(CPyPtr *)cpy_r_r134;
    CPy_INCREF(cpy_r_iter_list);
    *(PyObject * *)cpy_r_r135 = cpy_r_iter_list;
    cpy_r_r136 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r132, cpy_r_r133, cpy_r_line);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 790, CPyStatic_builder___globals);
        goto CPyL115;
    }
    cpy_r_ritem = cpy_r_r136;
    cpy_r_r137 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_litem, cpy_r_ritem, cpy_r_line);
    CPy_DECREF(cpy_r_litem);
    CPy_DECREF(cpy_r_ritem);
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 791, CPyStatic_builder___globals);
        goto CPyL114;
    }
    cpy_r_r138 = cpy_r_r104 + -2;
    CPyTagged_DECREF(cpy_r_r104);
    cpy_r_r104 = cpy_r_r138;
    goto CPyL50;
CPyL66: ;
    cpy_r_r139 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_items;
    cpy_r_r140 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_target)->_star_idx;
    if (likely(PyLong_Check(cpy_r_r140)))
        cpy_r_r141 = CPyTagged_FromObject(cpy_r_r140);
    else {
        CPy_TypeError("int", cpy_r_r140); cpy_r_r141 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r141 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 794, CPyStatic_builder___globals);
        goto CPyL117;
    }
    cpy_r_r142 = CPyList_GetItem(cpy_r_r139, cpy_r_r141);
    CPyTagged_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 794, CPyStatic_builder___globals);
        goto CPyL117;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r142, CPyType_targets___AssignmentTarget)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 794, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r142);
        goto CPyL117;
    }
    cpy_r_r144 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_r143, cpy_r_iter_list, cpy_r_line);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_iter_list);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 794, CPyStatic_builder___globals);
        goto CPyL85;
    } else
        goto CPyL84;
CPyL70: ;
    cpy_r_r145 = CPyStatic_builder___globals;
    cpy_r_r146 = CPyStatics[8073]; /* 'next_op' */
    cpy_r_r147 = CPyDict_GetItem(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 799, CPyStatic_builder___globals);
        goto CPyL87;
    }
    if (likely(PyTuple_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 799, CPyStatic_builder___globals, "tuple", cpy_r_r147);
        goto CPyL87;
    }
    cpy_r_r149 = PyList_New(1);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 799, CPyStatic_builder___globals);
        goto CPyL118;
    }
    cpy_r_r150 = (CPyPtr)&((PyListObject *)cpy_r_r149)->ob_item;
    cpy_r_r151 = *(CPyPtr *)cpy_r_r150;
    *(PyObject * *)cpy_r_r151 = cpy_r_iterator;
    cpy_r_r152 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r148, cpy_r_r149, cpy_r_line);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 799, CPyStatic_builder___globals);
        goto CPyL85;
    }
    cpy_r_extra = cpy_r_r152;
    cpy_r_r153 = CPY_INT_TAG;
    cpy_r_r154 = CPyDef_ops___BasicBlock(cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 800, CPyStatic_builder___globals);
        goto CPyL119;
    }
    cpy_r_r155 = cpy_r_r154;
    cpy_r_r156 = CPY_INT_TAG;
    cpy_r_r157 = CPyDef_ops___BasicBlock(cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 800, CPyStatic_builder___globals);
        goto CPyL120;
    }
    cpy_r_r158 = cpy_r_r157;
    cpy_r_error_block = cpy_r_r155;
    cpy_r_ok_block = cpy_r_r158;
    cpy_r_r159 = CPY_INT_TAG;
    cpy_r_r160 = 2;
    cpy_r_r161 = CPyDef_ops___Branch(cpy_r_extra, cpy_r_ok_block, cpy_r_error_block, 202, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_extra);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 801, CPyStatic_builder___globals);
        goto CPyL121;
    }
    cpy_r_r162 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 801, CPyStatic_builder___globals);
        goto CPyL121;
    } else
        goto CPyL122;
CPyL78: ;
    cpy_r_r163 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r163 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 803, CPyStatic_builder___globals);
        goto CPyL123;
    }
    cpy_r_r164 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r165 = CPyStatics[8076]; /* 'too many values to unpack' */
    cpy_r_r166 = CPyDef_ops___RaiseStandardError(cpy_r_r164, cpy_r_r165, cpy_r_line);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 805, CPyStatic_builder___globals);
        goto CPyL123;
    }
    cpy_r_r167 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r166);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 804, CPyStatic_builder___globals);
        goto CPyL123;
    } else
        goto CPyL124;
CPyL81: ;
    cpy_r_r168 = CPY_INT_TAG;
    cpy_r_r169 = CPyDef_ops___Unreachable(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 809, CPyStatic_builder___globals);
        goto CPyL123;
    }
    cpy_r_r170 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 809, CPyStatic_builder___globals);
        goto CPyL123;
    } else
        goto CPyL125;
CPyL83: ;
    cpy_r_r171 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_ok_block);
    CPy_DECREF(cpy_r_ok_block);
    if (unlikely(cpy_r_r171 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 811, CPyStatic_builder___globals);
        goto CPyL85;
    }
CPyL84: ;
    return 1;
CPyL85: ;
    cpy_r_r172 = 2;
    return cpy_r_r172;
CPyL86: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL85;
CPyL87: ;
    CPy_DecRef(cpy_r_iterator);
    goto CPyL85;
CPyL88: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    goto CPyL85;
CPyL89: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL29;
CPyL90: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    goto CPyL85;
CPyL91: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_litem);
    goto CPyL85;
CPyL92: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_r31);
    goto CPyL85;
CPyL93: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_ritem);
    goto CPyL85;
CPyL94: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_ritem);
    CPy_DecRef(cpy_r_r38);
    goto CPyL85;
CPyL95: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_ritem);
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL85;
CPyL96: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL21;
CPyL97: ;
    CPy_DecRef(cpy_r_iterator);
    CPyTagged_DecRef(cpy_r_split_idx);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_ritem);
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL85;
CPyL98: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL24;
CPyL99: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL26;
CPyL100: ;
    CPyTagged_DECREF(cpy_r_split_idx);
    goto CPyL70;
CPyL101: ;
    CPy_DecRef(cpy_r_iterator);
    CPy_DecRef(cpy_r_post_star_vals);
    goto CPyL85;
CPyL102: ;
    CPy_DecRef(cpy_r_iterator);
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_r67);
    goto CPyL85;
CPyL103: ;
    CPy_DecRef(cpy_r_post_star_vals);
    goto CPyL85;
CPyL104: ;
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    goto CPyL85;
CPyL105: ;
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    CPy_DecRef(cpy_r_iter_list_len);
    goto CPyL85;
CPyL106: ;
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    CPy_DecRef(cpy_r_condition);
    goto CPyL85;
CPyL107: ;
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    CPy_DecRef(cpy_r_condition);
    CPy_DecRef(cpy_r_r83);
    goto CPyL85;
CPyL108: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    goto CPyL85;
CPyL109: ;
    CPy_DECREF(cpy_r_r90);
    goto CPyL43;
CPyL110: ;
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    goto CPyL85;
CPyL111: ;
    CPy_DECREF(cpy_r_r95);
    goto CPyL46;
CPyL112: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL48;
CPyL113: ;
    CPy_DECREF(cpy_r_post_star_vals);
    CPyTagged_DECREF(cpy_r_r104);
    goto CPyL66;
CPyL114: ;
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    CPyTagged_DecRef(cpy_r_r104);
    goto CPyL85;
CPyL115: ;
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    CPyTagged_DecRef(cpy_r_r104);
    goto CPyL85;
CPyL116: ;
    CPy_DecRef(cpy_r_litem);
    CPy_DecRef(cpy_r_post_star_vals);
    CPy_DecRef(cpy_r_iter_list);
    CPyTagged_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r132);
    goto CPyL85;
CPyL117: ;
    CPy_DecRef(cpy_r_iter_list);
    goto CPyL85;
CPyL118: ;
    CPy_DecRef(cpy_r_iterator);
    CPy_DecRef(cpy_r_r148);
    goto CPyL85;
CPyL119: ;
    CPy_DecRef(cpy_r_extra);
    goto CPyL85;
CPyL120: ;
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r155);
    goto CPyL85;
CPyL121: ;
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL85;
CPyL122: ;
    CPy_DECREF(cpy_r_r162);
    goto CPyL78;
CPyL123: ;
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL85;
CPyL124: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL81;
CPyL125: ;
    CPy_DECREF(cpy_r_r170);
    goto CPyL83;
}

PyObject *CPyPy_builder___IRBuilder___process_iterator_tuple_assignment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "rvalue_reg", "line", 0};
    static CPyArg_Parser parser = {"OOO:process_iterator_tuple_assignment", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_rvalue_reg;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_rvalue_reg, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_targets___AssignmentTargetTuple))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTargetTuple", obj_target); 
        goto fail;
    }
    PyObject *arg_rvalue_reg;
    if (likely(PyObject_TypeCheck(obj_rvalue_reg, CPyType_ops___Value)))
        arg_rvalue_reg = obj_rvalue_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_rvalue_reg); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___process_iterator_tuple_assignment(arg_self, arg_target, arg_rvalue_reg, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "process_iterator_tuple_assignment", 742, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___push_loop_stack(PyObject *cpy_r_self, PyObject *cpy_r_continue_block, PyObject *cpy_r_break_block) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "push_loop_stack", 815, CPyStatic_builder___globals);
        goto CPyL6;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "push_loop_stack", 815, CPyStatic_builder___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r2);
        goto CPyL6;
    }
    cpy_r_r4 = CPyDef_nonlocalcontrol___LoopNonlocalControl(cpy_r_r3, cpy_r_continue_block, cpy_r_break_block);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "push_loop_stack", 815, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_r5 = PyList_Append(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "push_loop_stack", 814, CPyStatic_builder___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_builder___IRBuilder___push_loop_stack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"continue_block", "break_block", 0};
    static CPyArg_Parser parser = {"OO:push_loop_stack", kwlist, 0};
    PyObject *obj_continue_block;
    PyObject *obj_break_block;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_continue_block, &obj_break_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_continue_block;
    if (likely(Py_TYPE(obj_continue_block) == CPyType_ops___BasicBlock))
        arg_continue_block = obj_continue_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_continue_block); 
        goto fail;
    }
    PyObject *arg_break_block;
    if (likely(Py_TYPE(obj_break_block) == CPyType_ops___BasicBlock))
        arg_break_block = obj_break_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_break_block); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___push_loop_stack(arg_self, arg_continue_block, arg_break_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "push_loop_stack", 813, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___pop_loop_stack(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyList_PopLast(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "pop_loop_stack", 819, CPyStatic_builder___globals);
        goto CPyL3;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r1); 
        cpy_r_r2 = NULL;
    }
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "pop_loop_stack", 819, CPyStatic_builder___globals);
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

PyObject *CPyPy_builder___IRBuilder___pop_loop_stack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":pop_loop_stack", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___pop_loop_stack(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "pop_loop_stack", 818, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___make_spill_target(PyObject *cpy_r_self, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_name;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyStatics[7710]; /* '__mypyc_temp__' */
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_temp_counter;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyTagged_Str(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "make_spill_target", 823, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "make_spill_target", 823, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_name = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_temp_counter;
    cpy_r_r5 = CPyTagged_Add(cpy_r_r4, 2);
    CPyTagged_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_temp_counter);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_temp_counter = cpy_r_r5;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_nodes___Var(cpy_r_name, cpy_r_r7);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "make_spill_target", 825, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_r9, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "make_spill_target", 825, CPyStatic_builder___globals);
        goto CPyL7;
    }
CPyL4: ;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___add_var_to_env_class(cpy_r_self, cpy_r_r8, cpy_r_type, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "make_spill_target", 825, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_target = cpy_r_r12;
    return cpy_r_target;
CPyL6: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL7: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL6;
}

PyObject *CPyPy_builder___IRBuilder___make_spill_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:make_spill_target", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_rtypes___RType)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___make_spill_target(arg_self, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "make_spill_target", 821, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___spill(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_target;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_value)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_builder___IRBuilder___make_spill_target(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "spill", 830, CPyStatic_builder___globals);
        goto CPyL3;
    }
    cpy_r_target = cpy_r_r1;
    cpy_r_r2 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_target, cpy_r_value, -2);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "spill", 832, CPyStatic_builder___globals);
        goto CPyL4;
    }
    return cpy_r_target;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL3;
}

PyObject *CPyPy_builder___IRBuilder___spill(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:spill", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___spill(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "spill", 828, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___maybe_spill(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill", 843, CPyStatic_builder___globals);
        goto CPyL5;
    }
CPyL1: ;
    if (!cpy_r_r1) goto CPyL4;
CPyL2: ;
    cpy_r_r2 = CPyDef_builder___IRBuilder___spill(cpy_r_self, cpy_r_value);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill", 844, CPyStatic_builder___globals);
        goto CPyL5;
    }
    return cpy_r_r2;
CPyL4: ;
    CPy_INCREF(cpy_r_value);
    return cpy_r_value;
CPyL5: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_builder___IRBuilder___maybe_spill(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:maybe_spill", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___maybe_spill(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill", 835, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___maybe_spill_assignable(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_reg;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill_assignable", 855, CPyStatic_builder___globals);
        goto CPyL10;
    }
CPyL1: ;
    if (!cpy_r_r1) goto CPyL4;
CPyL2: ;
    cpy_r_r2 = CPyDef_builder___IRBuilder___spill(cpy_r_self, cpy_r_value);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill_assignable", 856, CPyStatic_builder___globals);
        goto CPyL10;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = (PyObject *)CPyType_ops___Register;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_value)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL7;
    CPy_INCREF(cpy_r_value);
    if (likely(Py_TYPE(cpy_r_value) == CPyType_ops___Register))
        cpy_r_r7 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "maybe_spill_assignable", 859, CPyStatic_builder___globals, "mypyc.ir.ops.Register", cpy_r_value);
        goto CPyL10;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = ((mypyc___ir___ops___ValueObject *)cpy_r_value)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = NULL;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___Register(cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill_assignable", 862, CPyStatic_builder___globals);
        goto CPyL10;
    }
    cpy_r_reg = cpy_r_r12;
    cpy_r_r13 = CPyDef_builder___IRBuilder___assign(cpy_r_self, cpy_r_reg, cpy_r_value, -2);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill_assignable", 863, CPyStatic_builder___globals);
        goto CPyL11;
    }
    return cpy_r_reg;
CPyL10: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL11: ;
    CPy_DecRef(cpy_r_reg);
    goto CPyL10;
}

PyObject *CPyPy_builder___IRBuilder___maybe_spill_assignable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:maybe_spill_assignable", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___maybe_spill_assignable(arg_self, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "maybe_spill_assignable", 847, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___extract_int(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___IntExpr))
        cpy_r_r4 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "extract_int", 868, CPyStatic_builder___globals, "mypy.nodes.IntExpr", cpy_r_e);
        goto CPyL15;
    }
    cpy_r_r5 = ((mypy___nodes___IntExprObject *)cpy_r_r4)->_value;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r11 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "extract_int", 869, CPyStatic_builder___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL15;
    }
    cpy_r_r12 = ((mypy___nodes___UnaryExprObject *)cpy_r_r11)->_op;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[1198]; /* '-' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL8;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL8;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "extract_int", 869, CPyStatic_builder___globals);
        goto CPyL15;
    }
CPyL8: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    if (!cpy_r_r19) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r20 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "extract_int", 869, CPyStatic_builder___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL15;
    }
    cpy_r_r21 = ((mypy___nodes___UnaryExprObject *)cpy_r_r20)->_expr;
    cpy_r_r22 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r26 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "extract_int", 870, CPyStatic_builder___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL15;
    }
    cpy_r_r27 = ((mypy___nodes___UnaryExprObject *)cpy_r_r26)->_expr;
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_nodes___IntExpr))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "extract_int", 870, CPyStatic_builder___globals, "mypy.nodes.IntExpr", cpy_r_r27);
        goto CPyL15;
    }
    cpy_r_r29 = ((mypy___nodes___IntExprObject *)cpy_r_r28)->_value;
    CPyTagged_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyTagged_Negate(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r29);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    return cpy_r_r31;
CPyL14: ;
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL15: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
}

PyObject *CPyPy_builder___IRBuilder___extract_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:extract_int", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___extract_int(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "extract_int", 866, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_sequence_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_GetItem(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type", 875, CPyStatic_builder___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type", 875, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = CPyDef_builder___IRBuilder___get_sequence_type_from_type(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type", 875, CPyStatic_builder___globals);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_builder___IRBuilder___get_sequence_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_sequence_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_sequence_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type", 874, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_sequence_type_from_type(PyObject *cpy_r_self, PyObject *cpy_r_target_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_target_type);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 878, CPyStatic_builder___globals);
        goto CPyL34;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 878, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL34;
    }
    cpy_r_target_type = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_target_type)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_target_type) == CPyType_types___UnionType))
        cpy_r_r6 = cpy_r_target_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 881, CPyStatic_builder___globals, "mypy.types.UnionType", cpy_r_target_type);
        goto CPyL35;
    }
    cpy_r_r7 = ((mypy___types___UnionTypeObject *)cpy_r_r6)->_items;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_target_type);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 881, CPyStatic_builder___globals);
        goto CPyL36;
    }
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL37;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 881, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL38;
    }
    cpy_r_item = cpy_r_r17;
    cpy_r_r18 = CPyDef_builder___IRBuilder___get_sequence_type_from_type(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 881, CPyStatic_builder___globals);
        goto CPyL38;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 881, CPyStatic_builder___globals);
        goto CPyL38;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL6;
CPyL11: ;
    cpy_r_r21 = CPyDef_rtypes___RUnion___make_simplified_union(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 880, CPyStatic_builder___globals);
        goto CPyL34;
    }
    return cpy_r_r21;
CPyL13: ;
    cpy_r_r22 = (PyObject *)CPyType_types___Instance;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_target_type)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (cpy_r_r25) goto CPyL19;
    if (likely(PyObject_TypeCheck(cpy_r_target_type, CPyType_types___ProperType)))
        cpy_r_r26 = cpy_r_target_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 883, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_target_type);
        goto CPyL34;
    }
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 883, CPyStatic_builder___globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_r26};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 883, CPyStatic_builder___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r26);
    CPy_Raise(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 883, CPyStatic_builder___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_target_type) == CPyType_types___Instance))
        cpy_r_r33 = cpy_r_target_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 884, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_target_type);
        goto CPyL35;
    }
    cpy_r_r34 = ((mypy___types___InstanceObject *)cpy_r_r33)->_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_r34, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 884, CPyStatic_builder___globals);
        goto CPyL35;
    }
CPyL21: ;
    cpy_r_r36 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL24;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL24;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 884, CPyStatic_builder___globals);
        goto CPyL35;
    }
CPyL24: ;
    cpy_r_r42 = cpy_r_r37 == 0;
    if (cpy_r_r42) {
        goto CPyL40;
    } else
        goto CPyL29;
CPyL25: ;
    cpy_r_r43 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r43 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 885, CPyStatic_builder___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL28: ;
    CPy_INCREF(cpy_r_r43);
    return cpy_r_r43;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_target_type) == CPyType_types___Instance))
        cpy_r_r45 = cpy_r_target_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 887, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_target_type);
        goto CPyL35;
    }
    cpy_r_r46 = ((mypy___types___InstanceObject *)cpy_r_r45)->_args;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_target_type);
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_r46, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 887, CPyStatic_builder___globals);
        goto CPyL34;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r47, CPyType_types___Type)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 887, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r47);
        goto CPyL34;
    }
    cpy_r_r49 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 887, CPyStatic_builder___globals);
        goto CPyL34;
    }
    return cpy_r_r49;
CPyL34: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL35: ;
    CPy_DecRef(cpy_r_target_type);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL34;
CPyL37: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
CPyL38: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL34;
CPyL40: ;
    CPy_DECREF(cpy_r_target_type);
    goto CPyL25;
}

PyObject *CPyPy_builder___IRBuilder___get_sequence_type_from_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target_type", 0};
    static CPyArg_Parser parser = {"O:get_sequence_type_from_type", kwlist, 0};
    PyObject *obj_target_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_target_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_types___Type)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_target_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_sequence_type_from_type(arg_self, arg_target_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_sequence_type_from_type", 877, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_dict_base_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_target_type;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_dict_types;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_t;
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
    PyObject *cpy_r_base;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_dict_base;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_base_2;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_GetItem(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 894, CPyStatic_builder___globals);
        goto CPyL63;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 894, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL63;
    }
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 894, CPyStatic_builder___globals);
        goto CPyL63;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 894, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL63;
    }
    cpy_r_target_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_target_type)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_target_type) == CPyType_types___UnionType))
        cpy_r_r9 = cpy_r_target_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 896, CPyStatic_builder___globals, "mypy.types.UnionType", cpy_r_target_type);
        goto CPyL64;
    }
    cpy_r_r10 = ((mypy___types___UnionTypeObject *)cpy_r_r9)->_items;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_target_type);
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = PyList_New(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 896, CPyStatic_builder___globals);
        goto CPyL65;
    }
    cpy_r_r14 = 0;
CPyL8: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL66;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___Type)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 896, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL67;
    }
    cpy_r_item = cpy_r_r20;
    cpy_r_r21 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 896, CPyStatic_builder___globals);
        goto CPyL67;
    }
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 896, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_r21);
        goto CPyL67;
    }
    cpy_r_r23 = CPyList_SetItemUnsafe(cpy_r_r13, cpy_r_r14, cpy_r_r22);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 896, CPyStatic_builder___globals);
        goto CPyL67;
    }
    cpy_r_r24 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r24;
    goto CPyL8;
CPyL14: ;
    cpy_r_types = cpy_r_r13;
    goto CPyL17;
CPyL15: ;
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 898, CPyStatic_builder___globals);
        goto CPyL64;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    *(PyObject * *)cpy_r_r27 = cpy_r_target_type;
    cpy_r_types = cpy_r_r25;
CPyL17: ;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 900, CPyStatic_builder___globals);
        goto CPyL68;
    }
    cpy_r_dict_types = cpy_r_r28;
    cpy_r_r29 = 0;
CPyL19: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL69;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r29);
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_types___ProperType)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 901, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_r34);
        goto CPyL70;
    }
    cpy_r_t = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TypedDictType))
        cpy_r_r40 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 903, CPyStatic_builder___globals, "mypy.types.TypedDictType", cpy_r_t);
        goto CPyL71;
    }
    cpy_r_r41 = ((mypy___types___TypedDictTypeObject *)cpy_r_r40)->_fallback;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_t);
    cpy_r_t = cpy_r_r41;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r42 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 904, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL71;
    }
    cpy_r_r43 = ((mypy___types___InstanceObject *)cpy_r_r42)->_type;
    cpy_r_r44 = ((mypy___nodes___TypeInfoObject *)cpy_r_r43)->_mro;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_dict_base_type", "TypeInfo", "mro", 904, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r44);
CPyL25: ;
    cpy_r_r45 = 0;
CPyL26: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL72;
    cpy_r_r50 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r45);
    if (likely((Py_TYPE(cpy_r_r50) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r50) == CPyType_nodes___TypeInfo)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 904, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r50);
        goto CPyL73;
    }
    cpy_r_base = cpy_r_r51;
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_base, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 904, CPyStatic_builder___globals);
        goto CPyL74;
    }
CPyL29: ;
    cpy_r_r53 = CPyStatics[892]; /* 'typing.Mapping' */
    cpy_r_r54 = PyUnicode_Compare(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 == -1;
    if (!cpy_r_r55) goto CPyL32;
    cpy_r_r56 = PyErr_Occurred();
    cpy_r_r57 = cpy_r_r56 != NULL;
    if (!cpy_r_r57) goto CPyL32;
    cpy_r_r58 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 904, CPyStatic_builder___globals);
        goto CPyL74;
    }
CPyL32: ;
    cpy_r_r59 = cpy_r_r54 == 0;
    if (cpy_r_r59) {
        goto CPyL75;
    } else
        goto CPyL76;
CPyL33: ;
    cpy_r_r60 = cpy_r_base;
    goto CPyL37;
CPyL34: ;
    cpy_r_r61 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r61;
    goto CPyL26;
CPyL35: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 904, CPyStatic_builder___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_dict_base = cpy_r_r60;
    goto CPyL58;
CPyL38: ;
    cpy_r_r63 = (PyObject *)CPyType_types___Instance;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (cpy_r_r66) {
        goto CPyL43;
    } else
        goto CPyL77;
CPyL39: ;
    cpy_r_r67 = CPyModule_builtins;
    cpy_r_r68 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 906, CPyStatic_builder___globals);
        goto CPyL78;
    }
    PyObject *cpy_r_r70[1] = {cpy_r_t};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 906, CPyStatic_builder___globals);
        goto CPyL78;
    }
    CPy_DECREF(cpy_r_t);
    CPy_Raise(cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 906, CPyStatic_builder___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL43: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r73 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 907, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL71;
    }
    cpy_r_r74 = ((mypy___types___InstanceObject *)cpy_r_r73)->_type;
    cpy_r_r75 = ((mypy___nodes___TypeInfoObject *)cpy_r_r74)->_mro;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_dict_base_type", "TypeInfo", "mro", 907, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r75);
CPyL45: ;
    cpy_r_r76 = 0;
CPyL46: ;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_r75)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = (Py_ssize_t)cpy_r_r76 < (Py_ssize_t)cpy_r_r79;
    if (!cpy_r_r80) goto CPyL79;
    cpy_r_r81 = CPyList_GetItemUnsafe(cpy_r_r75, cpy_r_r76);
    if (likely((Py_TYPE(cpy_r_r81) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r81) == CPyType_nodes___TypeInfo)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 907, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r81);
        goto CPyL80;
    }
    cpy_r_base_2 = cpy_r_r82;
    cpy_r_r83 = CPY_GET_ATTR(cpy_r_base_2, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 907, CPyStatic_builder___globals);
        goto CPyL81;
    }
CPyL49: ;
    cpy_r_r84 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r85 = PyUnicode_Compare(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 == -1;
    if (!cpy_r_r86) goto CPyL52;
    cpy_r_r87 = PyErr_Occurred();
    cpy_r_r88 = cpy_r_r87 != NULL;
    if (!cpy_r_r88) goto CPyL52;
    cpy_r_r89 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 907, CPyStatic_builder___globals);
        goto CPyL81;
    }
CPyL52: ;
    cpy_r_r90 = cpy_r_r85 == 0;
    if (cpy_r_r90) {
        goto CPyL82;
    } else
        goto CPyL83;
CPyL53: ;
    cpy_r_r91 = cpy_r_base_2;
    goto CPyL57;
CPyL54: ;
    cpy_r_r92 = cpy_r_r76 + 2;
    cpy_r_r76 = cpy_r_r92;
    goto CPyL46;
CPyL55: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 907, CPyStatic_builder___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_dict_base = cpy_r_r91;
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r94 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 908, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL84;
    }
    cpy_r_r95 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r94, cpy_r_dict_base);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_dict_base);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 908, CPyStatic_builder___globals);
        goto CPyL70;
    }
    cpy_r_r96 = PyList_Append(cpy_r_dict_types, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 908, CPyStatic_builder___globals);
        goto CPyL70;
    }
    cpy_r_r98 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r98;
    goto CPyL19;
CPyL62: ;
    return cpy_r_dict_types;
CPyL63: ;
    cpy_r_r99 = NULL;
    return cpy_r_r99;
CPyL64: ;
    CPy_DecRef(cpy_r_target_type);
    goto CPyL63;
CPyL65: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL63;
CPyL66: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL14;
CPyL67: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL63;
CPyL68: ;
    CPy_DecRef(cpy_r_types);
    goto CPyL63;
CPyL69: ;
    CPy_DECREF(cpy_r_types);
    goto CPyL62;
CPyL70: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    goto CPyL63;
CPyL71: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    CPy_DecRef(cpy_r_t);
    goto CPyL63;
CPyL72: ;
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_dict_types);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r44);
    goto CPyL35;
CPyL73: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r44);
    goto CPyL63;
CPyL74: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_base);
    goto CPyL63;
CPyL75: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL33;
CPyL76: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL34;
CPyL77: ;
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_dict_types);
    goto CPyL39;
CPyL78: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL63;
CPyL79: ;
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_dict_types);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r75);
    goto CPyL55;
CPyL80: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r75);
    goto CPyL63;
CPyL81: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_base_2);
    goto CPyL63;
CPyL82: ;
    CPy_DECREF(cpy_r_r75);
    goto CPyL53;
CPyL83: ;
    CPy_DECREF(cpy_r_base_2);
    goto CPyL54;
CPyL84: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_dict_types);
    CPy_DecRef(cpy_r_dict_base);
    goto CPyL63;
}

PyObject *CPyPy_builder___IRBuilder___get_dict_base_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_dict_base_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_dict_base_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_base_type", 889, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_dict_key_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dict_base_types;
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
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_rtypes;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyDef_builder___IRBuilder___get_dict_base_type(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 912, CPyStatic_builder___globals);
        goto CPyL19;
    }
    cpy_r_dict_base_types = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_dict_base_types)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = CPyList_GetItemShortBorrow(cpy_r_dict_base_types, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 914, CPyStatic_builder___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 914, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_args;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_dict_base_types);
    cpy_r_r8 = CPySequenceTuple_GetItem(cpy_r_r7, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 914, CPyStatic_builder___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 914, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL19;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 914, CPyStatic_builder___globals);
        goto CPyL19;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_dict_base_types)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = PyList_New(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 916, CPyStatic_builder___globals);
        goto CPyL20;
    }
    cpy_r_r14 = 0;
CPyL10: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_dict_base_types)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_dict_base_types, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_types___Instance))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 916, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_r19);
        goto CPyL22;
    }
    cpy_r_t = cpy_r_r20;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_t);
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_r21, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 916, CPyStatic_builder___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 916, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL22;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 916, CPyStatic_builder___globals);
        goto CPyL22;
    }
    cpy_r_r25 = CPyList_SetItemUnsafe(cpy_r_r13, cpy_r_r14, cpy_r_r24);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 916, CPyStatic_builder___globals);
        goto CPyL22;
    }
    cpy_r_r26 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r26;
    goto CPyL10;
CPyL17: ;
    cpy_r_rtypes = cpy_r_r13;
    cpy_r_r27 = CPyDef_rtypes___RUnion___make_simplified_union(cpy_r_rtypes);
    CPy_DECREF(cpy_r_rtypes);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 917, CPyStatic_builder___globals);
        goto CPyL19;
    }
    return cpy_r_r27;
CPyL19: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL20: ;
    CPy_DecRef(cpy_r_dict_base_types);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_dict_base_types);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_dict_base_types);
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
}

PyObject *CPyPy_builder___IRBuilder___get_dict_key_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_dict_key_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_dict_key_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_key_type", 911, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_dict_value_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dict_base_types;
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
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_rtypes;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyDef_builder___IRBuilder___get_dict_base_type(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 920, CPyStatic_builder___globals);
        goto CPyL19;
    }
    cpy_r_dict_base_types = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_dict_base_types)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 2;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = CPyList_GetItemShortBorrow(cpy_r_dict_base_types, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 922, CPyStatic_builder___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 922, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_args;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_dict_base_types);
    cpy_r_r8 = CPySequenceTuple_GetItem(cpy_r_r7, 2);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 922, CPyStatic_builder___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 922, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL19;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 922, CPyStatic_builder___globals);
        goto CPyL19;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_dict_base_types)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = PyList_New(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 924, CPyStatic_builder___globals);
        goto CPyL20;
    }
    cpy_r_r14 = 0;
CPyL10: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_dict_base_types)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_dict_base_types, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_types___Instance))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 924, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_r19);
        goto CPyL22;
    }
    cpy_r_t = cpy_r_r20;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_t);
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_r21, 2);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 924, CPyStatic_builder___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 924, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL22;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 924, CPyStatic_builder___globals);
        goto CPyL22;
    }
    cpy_r_r25 = CPyList_SetItemUnsafe(cpy_r_r13, cpy_r_r14, cpy_r_r24);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 924, CPyStatic_builder___globals);
        goto CPyL22;
    }
    cpy_r_r26 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r26;
    goto CPyL10;
CPyL17: ;
    cpy_r_rtypes = cpy_r_r13;
    cpy_r_r27 = CPyDef_rtypes___RUnion___make_simplified_union(cpy_r_rtypes);
    CPy_DECREF(cpy_r_rtypes);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 925, CPyStatic_builder___globals);
        goto CPyL19;
    }
    return cpy_r_r27;
CPyL19: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL20: ;
    CPy_DecRef(cpy_r_dict_base_types);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_dict_base_types);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_dict_base_types);
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
}

PyObject *CPyPy_builder___IRBuilder___get_dict_value_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_dict_value_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_dict_value_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_value_type", 919, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_dict_item_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key_type;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_builder___IRBuilder___get_dict_key_type(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_item_type", 928, CPyStatic_builder___globals);
        goto CPyL5;
    }
    cpy_r_key_type = cpy_r_r0;
    cpy_r_r1 = CPyDef_builder___IRBuilder___get_dict_value_type(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_item_type", 929, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_value_type = cpy_r_r1;
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_item_type", 930, CPyStatic_builder___globals);
        goto CPyL7;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_key_type;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_value_type;
    cpy_r_r6 = CPyDef_rtypes___RTuple(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_item_type", 930, CPyStatic_builder___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_key_type);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_value_type);
    goto CPyL5;
}

PyObject *CPyPy_builder___IRBuilder___get_dict_item_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_dict_item_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_dict_item_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_dict_item_type", 927, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder____analyze_iterable_item_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_iterable;
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
    PyObject *cpy_r_echk;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T2OO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_iterator;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_joined;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    tuple_T2OO cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 935, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = NULL;
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_types___AnyType(10, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 937, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_iterable = cpy_r_r9;
    goto CPyL9;
CPyL4: ;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r10, cpy_r_expr);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 939, CPyStatic_builder___globals);
        goto CPyL32;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 939, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL32;
    }
    cpy_r_r13 = CPyDef_types___get_proper_type(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 939, CPyStatic_builder___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 939, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_r13);
        goto CPyL32;
    }
    cpy_r_iterable = cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", "IRBuilder", "module_name", 940, CPyStatic_builder___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r16);
CPyL10: ;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 940, CPyStatic_builder___globals);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_mypy___build___State))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 940, CPyStatic_builder___globals, "mypy.build.State", cpy_r_r17);
        goto CPyL34;
    }
    cpy_r_r19 = CPyDef_mypy___build___State___type_checker(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 940, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r20 = ((mypy___checker___TypeCheckerObject *)cpy_r_r19)->_expr_checker;
    if (unlikely(cpy_r_r20 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'expr_checker' of 'TypeChecker' undefined");
    } else {
        CPy_INCREF(cpy_r_r20);
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 940, CPyStatic_builder___globals);
        goto CPyL34;
    }
CPyL14: ;
    cpy_r_echk = cpy_r_r20;
    cpy_r_r21 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 941, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 941, CPyStatic_builder___globals);
        goto CPyL36;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_checkexpr___ExpressionChecker___check_method_call_by_name(cpy_r_echk, cpy_r_r21, cpy_r_iterable, cpy_r_r22, cpy_r_r23, cpy_r_expr, cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 941, CPyStatic_builder___globals);
        goto CPyL35;
    }
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25.f0);
    CPy_DECREF(cpy_r_r25.f1);
    cpy_r_iterator = cpy_r_r26;
    cpy_r_r27 = CPyStatics[9186]; /* ('join_types',) */
    cpy_r_r28 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r29 = CPyStatic_builder___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 943, CPyStatic_builder___globals);
        goto CPyL37;
    }
    CPyModule_mypy___join = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_iterable)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (cpy_r_r34) {
        goto CPyL38;
    } else
        goto CPyL39;
CPyL19: ;
    cpy_r_r35 = 2;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPyDef_types___UninhabitedType(cpy_r_r35, cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 946, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_joined = cpy_r_r38;
    if (likely(Py_TYPE(cpy_r_iterable) == CPyType_types___TupleType))
        cpy_r_r39 = cpy_r_iterable;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 947, CPyStatic_builder___globals, "mypy.types.TupleType", cpy_r_iterable);
        goto CPyL40;
    }
    cpy_r_r40 = ((mypy___types___TupleTypeObject *)cpy_r_r39)->_items;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_iterable);
    cpy_r_r41 = 0;
CPyL22: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r40)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL41;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r40, cpy_r_r41);
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_types___Type)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 947, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r46);
        goto CPyL42;
    }
    cpy_r_item = cpy_r_r47;
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyDef_join___join_types(cpy_r_joined, cpy_r_item, cpy_r_r48);
    CPy_DECREF(cpy_r_joined);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 948, CPyStatic_builder___globals);
        goto CPyL43;
    }
    cpy_r_joined = cpy_r_r49;
    cpy_r_r50 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r50;
    goto CPyL22;
CPyL27: ;
    return cpy_r_joined;
CPyL28: ;
    cpy_r_r51 = CPyStatics[824]; /* '__next__' */
    cpy_r_r52 = PyList_New(0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 952, CPyStatic_builder___globals);
        goto CPyL44;
    }
    cpy_r_r53 = PyList_New(0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 952, CPyStatic_builder___globals);
        goto CPyL45;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_checkexpr___ExpressionChecker___check_method_call_by_name(cpy_r_echk, cpy_r_r51, cpy_r_iterator, cpy_r_r52, cpy_r_r53, cpy_r_expr, cpy_r_r54);
    CPy_DECREF(cpy_r_iterator);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_echk);
    if (unlikely(cpy_r_r55.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 952, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_r56 = cpy_r_r55.f0;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r55.f0);
    CPy_DECREF(cpy_r_r55.f1);
    return cpy_r_r56;
CPyL32: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL33: ;
    CPy_DecRef(cpy_r_iterable);
    CPy_DecRef(cpy_r_r15);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_iterable);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_iterable);
    CPy_DecRef(cpy_r_echk);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_iterable);
    CPy_DecRef(cpy_r_echk);
    CPy_DecRef(cpy_r_r22);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_iterable);
    CPy_DecRef(cpy_r_echk);
    CPy_DecRef(cpy_r_iterator);
    goto CPyL32;
CPyL38: ;
    CPy_DECREF(cpy_r_echk);
    CPy_DECREF(cpy_r_iterator);
    goto CPyL19;
CPyL39: ;
    CPy_DECREF(cpy_r_iterable);
    goto CPyL28;
CPyL40: ;
    CPy_DecRef(cpy_r_iterable);
    CPy_DecRef(cpy_r_joined);
    goto CPyL32;
CPyL41: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL27;
CPyL42: ;
    CPy_DecRef(cpy_r_joined);
    CPy_DecRef(cpy_r_r40);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL32;
CPyL44: ;
    CPy_DecRef(cpy_r_echk);
    CPy_DecRef(cpy_r_iterator);
    goto CPyL32;
CPyL45: ;
    CPy_DecRef(cpy_r_echk);
    CPy_DecRef(cpy_r_iterator);
    CPy_DecRef(cpy_r_r52);
    goto CPyL32;
}

PyObject *CPyPy_builder___IRBuilder____analyze_iterable_item_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:_analyze_iterable_item_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder____analyze_iterable_item_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "_analyze_iterable_item_type", 932, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_native_module(PyObject *cpy_r_self, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    cpy_r_r1 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r0)->_group_map;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_module);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_module", 956, CPyStatic_builder___globals);
        goto CPyL2;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_builder___IRBuilder___is_native_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:is_native_module", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_native_module(arg_self, arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_module", 954, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_native_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r3 = CPyStatics[224]; /* '.' */
    cpy_r_r4 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 961, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r4);
        goto CPyL13;
    }
    cpy_r_r6 = CPY_GET_ATTR_TRAIT(cpy_r_r5, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 961, CPyStatic_builder___globals);
        goto CPyL13;
    }
CPyL4: ;
    cpy_r_r7 = PySequence_Contains(cpy_r_r6, cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 961, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r10);
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 962, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r10);
        goto CPyL13;
    }
    cpy_r_r12 = CPY_GET_ATTR_TRAIT(cpy_r_r11, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 962, CPyStatic_builder___globals);
        goto CPyL13;
    }
CPyL8: ;
    cpy_r_r13 = CPyStatics[224]; /* '.' */
    cpy_r_r14 = CPyStatics[5576]; /* 'rpartition' */
    PyObject *cpy_r_r15[2] = {cpy_r_r12, cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 962, CPyStatic_builder___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r12);
    PyObject *__tmp9955;
    if (unlikely(!(PyTuple_Check(cpy_r_r17) && PyTuple_GET_SIZE(cpy_r_r17) == 3))) {
        __tmp9955 = NULL;
        goto __LL9956;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 0))))
        __tmp9955 = PyTuple_GET_ITEM(cpy_r_r17, 0);
    else {
        __tmp9955 = NULL;
    }
    if (__tmp9955 == NULL) goto __LL9956;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 1))))
        __tmp9955 = PyTuple_GET_ITEM(cpy_r_r17, 1);
    else {
        __tmp9955 = NULL;
    }
    if (__tmp9955 == NULL) goto __LL9956;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 2))))
        __tmp9955 = PyTuple_GET_ITEM(cpy_r_r17, 2);
    else {
        __tmp9955 = NULL;
    }
    if (__tmp9955 == NULL) goto __LL9956;
    __tmp9955 = cpy_r_r17;
__LL9956: ;
    if (unlikely(__tmp9955 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r17); cpy_r_r18 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp9957 = PyTuple_GET_ITEM(cpy_r_r17, 0);
        CPy_INCREF(__tmp9957);
        PyObject *__tmp9958;
        if (likely(PyUnicode_Check(__tmp9957)))
            __tmp9958 = __tmp9957;
        else {
            CPy_TypeError("str", __tmp9957); 
            __tmp9958 = NULL;
        }
        cpy_r_r18.f0 = __tmp9958;
        PyObject *__tmp9959 = PyTuple_GET_ITEM(cpy_r_r17, 1);
        CPy_INCREF(__tmp9959);
        PyObject *__tmp9960;
        if (likely(PyUnicode_Check(__tmp9959)))
            __tmp9960 = __tmp9959;
        else {
            CPy_TypeError("str", __tmp9959); 
            __tmp9960 = NULL;
        }
        cpy_r_r18.f1 = __tmp9960;
        PyObject *__tmp9961 = PyTuple_GET_ITEM(cpy_r_r17, 2);
        CPy_INCREF(__tmp9961);
        PyObject *__tmp9962;
        if (likely(PyUnicode_Check(__tmp9961)))
            __tmp9962 = __tmp9961;
        else {
            CPy_TypeError("str", __tmp9961); 
            __tmp9962 = NULL;
        }
        cpy_r_r18.f2 = __tmp9962;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 962, CPyStatic_builder___globals);
        goto CPyL13;
    }
    cpy_r_r19 = cpy_r_r18.f0;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18.f0);
    CPy_DECREF(cpy_r_r18.f1);
    CPy_DECREF(cpy_r_r18.f2);
    cpy_r_r20 = CPyDef_builder___IRBuilder___is_native_module(cpy_r_self, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 962, CPyStatic_builder___globals);
        goto CPyL13;
    }
    return cpy_r_r20;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL14: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
}

PyObject *CPyPy_builder___IRBuilder___is_native_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_native_ref_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_native_ref_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_ref_expr", 958, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_native_module_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_builder___IRBuilder___is_native_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_module_ref_expr", 966, CPyStatic_builder___globals);
        goto CPyL7;
    }
    if (cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL6;
CPyL3: ;
    cpy_r_r2 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_kind;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[9016]; /* 1 */
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_module_ref_expr", 966, CPyStatic_builder___globals);
        goto CPyL7;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_module_ref_expr", 966, CPyStatic_builder___globals);
        goto CPyL7;
    }
    cpy_r_r1 = cpy_r_r5;
CPyL6: ;
    return cpy_r_r1;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_builder___IRBuilder___is_native_module_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_native_module_ref_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_native_module_ref_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_module_ref_expr", 965, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_synthetic_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_is_named_tuple;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "is_synthetic_type", "TypeInfo", "is_named_tuple", 970, CPyStatic_builder___globals);
        goto CPyL10;
    }
CPyL1: ;
    if (!cpy_r_r0) goto CPyL3;
CPyL2: ;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL9;
CPyL3: ;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_is_newtype;
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "is_synthetic_type", "TypeInfo", "is_newtype", 970, CPyStatic_builder___globals);
        goto CPyL10;
    }
CPyL4: ;
    if (!cpy_r_r2) goto CPyL6;
CPyL5: ;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL8;
CPyL6: ;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_typeddict_type;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "is_synthetic_type", "TypeInfo", "typeddict_type", 970, CPyStatic_builder___globals);
        goto CPyL10;
    }
CPyL7: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    cpy_r_r3 = cpy_r_r6;
CPyL8: ;
    cpy_r_r1 = cpy_r_r3;
CPyL9: ;
    return cpy_r_r1;
CPyL10: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_builder___IRBuilder___is_synthetic_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_synthetic_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_typ) == CPyType_nodes___TypeInfo)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_synthetic_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_synthetic_type", 968, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___get_final_ref(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fullname;
    char cpy_r_r1;
    char cpy_r_native;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_final_var;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
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
    PyObject *cpy_r_r19;
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
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_sym;
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
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_expr_fullname;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_is_final;
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
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    tuple_T3OOC cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    cpy_r_r0 = NULL;
    cpy_r_fullname = cpy_r_r0;
    cpy_r_r1 = 2;
    cpy_r_native = cpy_r_r1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_final_var = cpy_r_r2;
    cpy_r_r3 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    cpy_r_r4 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL2;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL3;
CPyL2: ;
    cpy_r_r9 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r8 = cpy_r_r12;
CPyL3: ;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r13 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    cpy_r_r13 = cpy_r_r17;
CPyL6: ;
    if (!cpy_r_r13) goto CPyL46;
    cpy_r_r18 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely((Py_TYPE(cpy_r_r18) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r18) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r18) == CPyType_nodes___RefExpr)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 982, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r18);
        goto CPyL67;
    }
    cpy_r_r20 = ((mypy___nodes___RefExprObject *)cpy_r_r19)->_node;
    cpy_r_r21 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL10;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL11;
CPyL10: ;
    cpy_r_r26 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    cpy_r_r25 = cpy_r_r29;
CPyL11: ;
    if (!cpy_r_r25) goto CPyL46;
    cpy_r_r30 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely((Py_TYPE(cpy_r_r30) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r30) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r30) == CPyType_nodes___RefExpr)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 984, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r30);
        goto CPyL67;
    }
    cpy_r_r32 = ((mypy___nodes___RefExprObject *)cpy_r_r31)->_node;
    CPy_INCREF(cpy_r_r32);
    if (likely((Py_TYPE(cpy_r_r32) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r32) == CPyType_nodes___TypeInfo)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 984, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r32);
        goto CPyL67;
    }
    cpy_r_r34 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_nodes___TypeInfo___get(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 984, CPyStatic_builder___globals);
        goto CPyL67;
    }
    cpy_r_sym = cpy_r_r35;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_sym != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL68;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r38 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 985, CPyStatic_builder___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL69;
    }
    cpy_r_r39 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r38)->_node;
    cpy_r_r40 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_r39)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL68;
    cpy_r_r44 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely((Py_TYPE(cpy_r_r44) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r44) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r44) == CPyType_nodes___RefExpr)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 987, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r44);
        goto CPyL69;
    }
    cpy_r_r46 = ((mypy___nodes___RefExprObject *)cpy_r_r45)->_node;
    if (likely((Py_TYPE(cpy_r_r46) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r46) == CPyType_nodes___TypeInfo)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 987, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r46);
        goto CPyL69;
    }
    cpy_r_r48 = ((mypy___nodes___TypeInfoObject *)cpy_r_r47)->_bases;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_final_ref", "TypeInfo", "bases", 987, CPyStatic_builder___globals);
        goto CPyL69;
    }
CPyL21: ;
    cpy_r_r49 = CPyList_GetItemShortBorrow(cpy_r_r48, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 987, CPyStatic_builder___globals);
        goto CPyL69;
    }
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_types___Instance))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 987, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_r49);
        goto CPyL69;
    }
    cpy_r_r51 = ((mypy___types___InstanceObject *)cpy_r_r50)->_type;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_r51, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 987, CPyStatic_builder___globals);
        goto CPyL69;
    }
CPyL24: ;
    cpy_r_expr_fullname = cpy_r_r52;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r53 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 988, CPyStatic_builder___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL70;
    }
    cpy_r_r54 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r53)->_node;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___Var))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 988, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r54);
        goto CPyL70;
    }
    cpy_r_r56 = ((mypy___nodes___VarObject *)cpy_r_r55)->_is_final;
    if (cpy_r_r56) {
        goto CPyL71;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL32;
CPyL28: ;
    cpy_r_r58 = CPyStatics[4609]; /* 'enum.Enum' */
    cpy_r_r59 = PyUnicode_Compare(cpy_r_expr_fullname, cpy_r_r58);
    CPy_DECREF(cpy_r_expr_fullname);
    cpy_r_r60 = cpy_r_r59 == -1;
    if (!cpy_r_r60) goto CPyL31;
    cpy_r_r61 = PyErr_Occurred();
    cpy_r_r62 = cpy_r_r61 != NULL;
    if (!cpy_r_r62) goto CPyL31;
    cpy_r_r63 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 988, CPyStatic_builder___globals);
        goto CPyL69;
    }
CPyL31: ;
    cpy_r_r64 = cpy_r_r59 == 0;
    cpy_r_r57 = cpy_r_r64;
CPyL32: ;
    cpy_r_is_final = cpy_r_r57;
    if (cpy_r_is_final) {
        goto CPyL72;
    } else
        goto CPyL68;
CPyL33: ;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r65 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 990, CPyStatic_builder___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL73;
    }
    cpy_r_r66 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r65)->_node;
    CPy_INCREF(cpy_r_r66);
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_nodes___Var))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 990, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r66);
        goto CPyL73;
    }
    cpy_r_final_var = cpy_r_r67;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r68 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 991, CPyStatic_builder___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL74;
    }
    cpy_r_r69 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r68)->_node;
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_nodes___Var))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 991, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r69);
        goto CPyL74;
    }
    cpy_r_r71 = ((mypy___nodes___VarObject *)cpy_r_r70)->_info;
    CPy_INCREF(cpy_r_r71);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r72 = CPY_GET_ATTR(cpy_r_r71, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 991, CPyStatic_builder___globals);
        goto CPyL75;
    }
CPyL38: ;
    cpy_r_r73 = CPyStatics[224]; /* '.' */
    CPy_INCREF(cpy_r_final_var);
    if (likely(cpy_r_final_var != Py_None))
        cpy_r_r74 = cpy_r_final_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 991, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_final_var);
        goto CPyL76;
    }
    cpy_r_r75 = CPY_GET_ATTR(cpy_r_r74, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 991, CPyStatic_builder___globals);
        goto CPyL76;
    }
CPyL40: ;
    cpy_r_r76 = CPyStr_Build(3, cpy_r_r72, cpy_r_r73, cpy_r_r75);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 991, CPyStatic_builder___globals);
        goto CPyL75;
    }
    cpy_r_fullname = cpy_r_r76;
    cpy_r_r77 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely((Py_TYPE(cpy_r_r77) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r77) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r77) == CPyType_nodes___RefExpr)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 992, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r77);
        goto CPyL77;
    }
    cpy_r_r79 = ((mypy___nodes___RefExprObject *)cpy_r_r78)->_node;
    if (likely((Py_TYPE(cpy_r_r79) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r79) == CPyType_nodes___TypeInfo)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 992, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r79);
        goto CPyL77;
    }
    cpy_r_r81 = ((mypy___nodes___TypeInfoObject *)cpy_r_r80)->_module_name;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_final_ref", "TypeInfo", "module_name", 992, CPyStatic_builder___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r81);
CPyL44: ;
    cpy_r_r82 = CPyDef_builder___IRBuilder___is_native_module(cpy_r_self, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 992, CPyStatic_builder___globals);
        goto CPyL77;
    }
    cpy_r_native = cpy_r_r82;
    goto CPyL56;
CPyL46: ;
    cpy_r_r83 = CPyDef_builder___IRBuilder___is_module_member_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 993, CPyStatic_builder___globals);
        goto CPyL67;
    }
    if (!cpy_r_r83) goto CPyL56;
    cpy_r_r84 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    cpy_r_r85 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r86 = (CPyPtr)&((PyObject *)cpy_r_r84)->ob_type;
    cpy_r_r87 = *(PyObject * *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 == cpy_r_r85;
    if (!cpy_r_r88) goto CPyL56;
    cpy_r_r89 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    if (likely(Py_TYPE(cpy_r_r89) == CPyType_nodes___Var))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 995, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r89);
        goto CPyL67;
    }
    cpy_r_r91 = ((mypy___nodes___VarObject *)cpy_r_r90)->_is_final;
    if (cpy_r_r91) {
        goto CPyL78;
    } else
        goto CPyL56;
CPyL51: ;
    cpy_r_r92 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r92);
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_nodes___Var))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 996, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r92);
        goto CPyL66;
    }
    cpy_r_final_var = cpy_r_r93;
    cpy_r_r94 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r94);
    if (likely(Py_TYPE(cpy_r_r94) == CPyType_nodes___Var))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 997, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_r94);
        goto CPyL75;
    }
    cpy_r_r96 = CPY_GET_ATTR(cpy_r_r95, CPyType_nodes___Var, 7, mypy___nodes___VarObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 997, CPyStatic_builder___globals);
        goto CPyL75;
    }
CPyL54: ;
    cpy_r_fullname = cpy_r_r96;
    cpy_r_r97 = CPyDef_builder___IRBuilder___is_native_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 998, CPyStatic_builder___globals);
        goto CPyL77;
    }
    cpy_r_native = cpy_r_r97;
CPyL56: ;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_final_var != cpy_r_r98;
    if (!cpy_r_r99) goto CPyL79;
    if (likely(cpy_r_final_var != Py_None))
        cpy_r_r100 = cpy_r_final_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_final_ref", 1000, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_final_var);
        goto CPyL80;
    }
    if (cpy_r_fullname == NULL) {
        goto CPyL81;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"fullname\" referenced before assignment");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 1000, CPyStatic_builder___globals);
        goto CPyL66;
    }
    CPy_Unreachable();
CPyL61: ;
    if (cpy_r_native == 2) {
        goto CPyL82;
    } else
        goto CPyL64;
CPyL62: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"native\" referenced before assignment");
    cpy_r_r102 = 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 1000, CPyStatic_builder___globals);
        goto CPyL66;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r103.f0 = cpy_r_fullname;
    cpy_r_r103.f1 = cpy_r_r100;
    cpy_r_r103.f2 = cpy_r_native;
    CPy_INCREF(cpy_r_r103.f0);
    CPy_INCREF(cpy_r_r103.f1);
    CPy_XDECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r104 = PyTuple_New(3);
    if (unlikely(cpy_r_r104 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9963 = cpy_r_r103.f0;
    PyTuple_SET_ITEM(cpy_r_r104, 0, __tmp9963);
    PyObject *__tmp9964 = cpy_r_r103.f1;
    PyTuple_SET_ITEM(cpy_r_r104, 1, __tmp9964);
    PyObject *__tmp9965 = cpy_r_r103.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp9965);
    PyTuple_SET_ITEM(cpy_r_r104, 2, __tmp9965);
    return cpy_r_r104;
CPyL65: ;
    cpy_r_r105 = Py_None;
    CPy_INCREF(cpy_r_r105);
    return cpy_r_r105;
CPyL66: ;
    cpy_r_r106 = NULL;
    return cpy_r_r106;
CPyL67: ;
    CPy_XDecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_final_var);
    goto CPyL66;
CPyL68: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL56;
CPyL69: ;
    CPy_XDecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_final_var);
    CPy_DecRef(cpy_r_sym);
    goto CPyL66;
CPyL70: ;
    CPy_XDecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_final_var);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_expr_fullname);
    goto CPyL66;
CPyL71: ;
    CPy_DECREF(cpy_r_expr_fullname);
    goto CPyL27;
CPyL72: ;
    CPy_XDECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_final_var);
    goto CPyL33;
CPyL73: ;
    CPy_DecRef(cpy_r_sym);
    goto CPyL66;
CPyL74: ;
    CPy_DecRef(cpy_r_final_var);
    CPy_DecRef(cpy_r_sym);
    goto CPyL66;
CPyL75: ;
    CPy_DecRef(cpy_r_final_var);
    goto CPyL66;
CPyL76: ;
    CPy_DecRef(cpy_r_final_var);
    CPy_DecRef(cpy_r_r72);
    goto CPyL66;
CPyL77: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_final_var);
    goto CPyL66;
CPyL78: ;
    CPy_XDECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_final_var);
    goto CPyL51;
CPyL79: ;
    CPy_XDECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_final_var);
    goto CPyL65;
CPyL80: ;
    CPy_XDecRef(cpy_r_fullname);
    goto CPyL66;
CPyL81: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL59;
CPyL82: ;
    CPy_XDECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r100);
    goto CPyL62;
}

PyObject *CPyPy_builder___IRBuilder___get_final_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_final_ref", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___get_final_ref(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_final_ref", 972, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___emit_load_final(PyObject *cpy_r_self, PyObject *cpy_r_final_var, PyObject *cpy_r_fullname, PyObject *cpy_r_name, char cpy_r_native, PyObject *cpy_r_typ, CPyTagged cpy_r_line) {
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
    cpy_r_r0 = ((mypy___nodes___VarObject *)cpy_r_final_var)->_final_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypy___nodes___VarObject *)cpy_r_final_var)->_final_value;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_builder___IRBuilder___load_literal_value(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "emit_load_final", 1017, CPyStatic_builder___globals);
        goto CPyL8;
    }
    return cpy_r_r4;
CPyL3: ;
    if (!cpy_r_native) goto CPyL7;
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_r5, cpy_r_typ);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "emit_load_final", 1019, CPyStatic_builder___globals);
        goto CPyL8;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___load_final_static(cpy_r_self, cpy_r_fullname, cpy_r_r6, cpy_r_line, cpy_r_name);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "emit_load_final", 1019, CPyStatic_builder___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_builder___IRBuilder___emit_load_final(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"final_var", "fullname", "name", "native", "typ", "line", 0};
    static CPyArg_Parser parser = {"OOOOOO:emit_load_final", kwlist, 0};
    PyObject *obj_final_var;
    PyObject *obj_fullname;
    PyObject *obj_name;
    PyObject *obj_native;
    PyObject *obj_typ;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_final_var, &obj_fullname, &obj_name, &obj_native, &obj_typ, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_final_var;
    if (likely(Py_TYPE(obj_final_var) == CPyType_nodes___Var))
        arg_final_var = obj_final_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_final_var); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_native;
    if (unlikely(!PyBool_Check(obj_native))) {
        CPy_TypeError("bool", obj_native); goto fail;
    } else
        arg_native = obj_native == Py_True;
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___emit_load_final(arg_self, arg_final_var, arg_fullname, arg_name, arg_native, arg_typ, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "emit_load_final", 1003, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_module_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
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
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
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
    if (cpy_r_r10) goto CPyL8;
    cpy_r_r15 = cpy_r_r10;
    goto CPyL10;
CPyL8: ;
    cpy_r_r16 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely((Py_TYPE(cpy_r_r16) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r16) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r16) == CPyType_nodes___RefExpr)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_module_member_expr", 1024, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_r16);
        goto CPyL11;
    }
    cpy_r_r18 = ((mypy___nodes___RefExprObject *)cpy_r_r17)->_node;
    cpy_r_r19 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r18)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r15 = cpy_r_r22;
CPyL10: ;
    return cpy_r_r15;
CPyL11: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
}

PyObject *CPyPy_builder___IRBuilder___is_module_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_module_member_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_module_member_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_module_member_expr", 1023, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___call_refexpr_with_args(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_callee, PyObject *cpy_r_arg_values) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_call_c_ops_candidates;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_callee_node;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_function;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_callee, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1030, CPyStatic_builder___globals);
        goto CPyL64;
    }
CPyL1: ;
    cpy_r_r1 = CPyStr_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL21;
    cpy_r_r2 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL65;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1030, CPyStatic_builder___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1030, CPyStatic_builder___globals);
        goto CPyL66;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r7 = cpy_r_r3;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_arg_values)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = CPySequence_Multiply(cpy_r_r5, cpy_r_r10);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1030, CPyStatic_builder___globals);
        goto CPyL66;
    }
    cpy_r_r12 = PyObject_RichCompare(cpy_r_r2, cpy_r_r11, 2);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1030, CPyStatic_builder___globals);
        goto CPyL64;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1030, CPyStatic_builder___globals);
        goto CPyL64;
    }
    if (!cpy_r_r13) goto CPyL21;
    cpy_r_r14 = CPyDef_builder___get_call_target_fullname(cpy_r_callee);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1031, CPyStatic_builder___globals);
        goto CPyL64;
    }
    cpy_r_fullname = cpy_r_r14;
    cpy_r_r15 = CPyStatic_builder___globals;
    cpy_r_r16 = CPyStatics[8077]; /* 'function_ops' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1032, CPyStatic_builder___globals);
        goto CPyL67;
    }
    if (likely(PyDict_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1032, CPyStatic_builder___globals, "dict", cpy_r_r17);
        goto CPyL67;
    }
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1032, CPyStatic_builder___globals);
        goto CPyL68;
    }
    cpy_r_r20 = CPyDict_Get(cpy_r_r18, cpy_r_fullname, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1032, CPyStatic_builder___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1032, CPyStatic_builder___globals, "list", cpy_r_r20);
        goto CPyL64;
    }
    cpy_r_call_c_ops_candidates = cpy_r_r21;
    cpy_r_r22 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1034, CPyStatic_builder___globals);
        goto CPyL69;
    }
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_ll_builder___LowLevelIRBuilder___matching_call_c(cpy_r_r22, cpy_r_call_c_ops_candidates, cpy_r_arg_values, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_call_c_ops_candidates);
    CPyTagged_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1033, CPyStatic_builder___globals);
        goto CPyL64;
    }
    cpy_r_target = cpy_r_r26;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_target != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL70;
    if (likely(cpy_r_target != Py_None))
        cpy_r_r29 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1037, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_target);
        goto CPyL64;
    }
    return cpy_r_r29;
CPyL21: ;
    cpy_r_r30 = ((mypy___nodes___RefExprObject *)cpy_r_callee)->_node;
    CPy_INCREF(cpy_r_r30);
    cpy_r_callee_node = cpy_r_r30;
    cpy_r_r31 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_callee_node)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_callee_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r35 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1043, CPyStatic_builder___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_callee_node);
        goto CPyL71;
    }
    cpy_r_r36 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r35)->_impl;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_callee_node);
    cpy_r_callee_node = cpy_r_r36;
CPyL24: ;
    cpy_r_r37 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_callee_node)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_callee_node) == CPyType_nodes___Decorator))
        cpy_r_r41 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1050, CPyStatic_builder___globals, "mypy.nodes.Decorator", cpy_r_callee_node);
        goto CPyL71;
    }
    cpy_r_r42 = ((mypy___nodes___DecoratorObject *)cpy_r_r41)->_func;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fdefs_to_decorators;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = PyDict_Contains(cpy_r_r43, cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1050, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r46 = cpy_r_r44;
    cpy_r_r47 = cpy_r_r46 ^ 1;
    if (!cpy_r_r47) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_callee_node) == CPyType_nodes___Decorator))
        cpy_r_r48 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1051, CPyStatic_builder___globals, "mypy.nodes.Decorator", cpy_r_callee_node);
        goto CPyL71;
    }
    cpy_r_r49 = ((mypy___nodes___DecoratorObject *)cpy_r_r48)->_func;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_singledispatch_impls;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = PyDict_Contains(cpy_r_r50, cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1051, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r53 = cpy_r_r51;
    if (!cpy_r_r53) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_callee_node) == CPyType_nodes___Decorator))
        cpy_r_r54 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1053, CPyStatic_builder___globals, "mypy.nodes.Decorator", cpy_r_callee_node);
        goto CPyL71;
    }
    cpy_r_r55 = ((mypy___nodes___DecoratorObject *)cpy_r_r54)->_func;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_callee_node);
    cpy_r_callee_node = cpy_r_r55;
CPyL33: ;
    cpy_r_r56 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r57 = cpy_r_callee_node != cpy_r_r56;
    if (!cpy_r_r57) goto CPyL72;
    cpy_r_r58 = CPY_GET_ATTR(cpy_r_callee, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1056, CPyStatic_builder___globals);
        goto CPyL71;
    }
CPyL35: ;
    cpy_r_r59 = CPyStr_IsTrue(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (!cpy_r_r59) goto CPyL72;
    CPy_INCREF(cpy_r_callee_node);
    if (likely(cpy_r_callee_node != Py_None))
        cpy_r_r60 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1057, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_callee_node);
        goto CPyL71;
    }
    cpy_r_r61 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    cpy_r_r62 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r61)->_func_to_decl;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = PyDict_Contains(cpy_r_r62, cpy_r_r60);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1057, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r65 = cpy_r_r63;
    if (!cpy_r_r65) goto CPyL72;
    cpy_r_r66 = 1;
    cpy_r_r67 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = 0;
CPyL40: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL73;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_r67, cpy_r_r68);
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_nodes___ArgKind))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1058, CPyStatic_builder___globals, "mypy.nodes.ArgKind", cpy_r_r73);
        goto CPyL74;
    }
    cpy_r_kind = cpy_r_r74;
    cpy_r_r75 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r75 == NULL)) {
        goto CPyL75;
    } else
        goto CPyL45;
CPyL43: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1058, CPyStatic_builder___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r77 = cpy_r_kind == cpy_r_r75;
    if (cpy_r_r77) {
        goto CPyL76;
    } else
        goto CPyL47;
CPyL46: ;
    cpy_r_r78 = cpy_r_r77;
    goto CPyL51;
CPyL47: ;
    cpy_r_r79 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r79 == NULL)) {
        goto CPyL77;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r80 = 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1058, CPyStatic_builder___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r81 = cpy_r_kind == cpy_r_r79;
    CPy_DECREF(cpy_r_kind);
    cpy_r_r78 = cpy_r_r81;
CPyL51: ;
    cpy_r_r82 = cpy_r_r78 ^ 1;
    if (cpy_r_r82) {
        goto CPyL78;
    } else
        goto CPyL53;
CPyL52: ;
    cpy_r_r66 = 0;
    goto CPyL54;
CPyL53: ;
    cpy_r_r83 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r83;
    goto CPyL40;
CPyL54: ;
    if (!cpy_r_r66) goto CPyL72;
    cpy_r_r84 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    cpy_r_r85 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r84)->_func_to_decl;
    CPy_INCREF(cpy_r_r85);
    if (likely(cpy_r_callee_node != Py_None))
        cpy_r_r86 = cpy_r_callee_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1060, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_callee_node);
        goto CPyL79;
    }
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1060, CPyStatic_builder___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_func_ir___FuncDecl))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1060, CPyStatic_builder___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r87);
        goto CPyL64;
    }
    cpy_r_decl = cpy_r_r88;
    cpy_r_r89 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r92);
    cpy_r_r93 = NULL;
    cpy_r_r94 = CPyDef_ll_builder___LowLevelIRBuilder___call(cpy_r_r89, cpy_r_decl, cpy_r_arg_values, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_decl);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    CPyTagged_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1061, CPyStatic_builder___globals);
        goto CPyL64;
    }
    return cpy_r_r94;
CPyL60: ;
    cpy_r_r95 = 2;
    cpy_r_r96 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_callee, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1064, CPyStatic_builder___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_r96 != Py_None))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1064, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r96);
        goto CPyL64;
    }
    cpy_r_function = cpy_r_r97;
    cpy_r_r98 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r98);
    cpy_r_r99 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_kinds;
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = ((mypy___nodes___CallExprObject *)cpy_r_expr)->_arg_names;
    CPy_INCREF(cpy_r_r100);
    cpy_r_r101 = CPyDef_builder___IRBuilder___py_call(cpy_r_self, cpy_r_function, cpy_r_arg_values, cpy_r_r98, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_function);
    CPyTagged_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1065, CPyStatic_builder___globals);
        goto CPyL64;
    }
    return cpy_r_r101;
CPyL64: ;
    cpy_r_r102 = NULL;
    return cpy_r_r102;
CPyL65: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
CPyL66: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r18);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_call_c_ops_candidates);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r23);
    goto CPyL64;
CPyL70: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL21;
CPyL71: ;
    CPy_DecRef(cpy_r_callee_node);
    goto CPyL64;
CPyL72: ;
    CPy_DECREF(cpy_r_callee_node);
    goto CPyL60;
CPyL73: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL54;
CPyL74: ;
    CPy_DecRef(cpy_r_callee_node);
    CPy_DecRef(cpy_r_r67);
    goto CPyL64;
CPyL75: ;
    CPy_DecRef(cpy_r_callee_node);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_kind);
    goto CPyL43;
CPyL76: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL46;
CPyL77: ;
    CPy_DecRef(cpy_r_callee_node);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_kind);
    goto CPyL48;
CPyL78: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL52;
CPyL79: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL64;
}

PyObject *CPyPy_builder___IRBuilder___call_refexpr_with_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "callee", "arg_values", 0};
    static CPyArg_Parser parser = {"OOO:call_refexpr_with_args", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_callee;
    PyObject *obj_arg_values;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_callee, &obj_arg_values)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___CallExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_callee) == CPyType_nodes___RefExpr)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_callee); 
        goto fail;
    }
    PyObject *arg_arg_values;
    if (likely(PyList_Check(obj_arg_values)))
        arg_arg_values = obj_arg_values;
    else {
        CPy_TypeError("list", obj_arg_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___call_refexpr_with_args(arg_self, arg_expr, arg_callee, arg_arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "call_refexpr_with_args", 1026, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "__get__", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "<lambda>", "__mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj", "__mypyc_env__", 1073, CPyStatic_builder___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "<lambda>", "shortcircuit_expr_IRBuilder_env", "self", 1073, CPyStatic_builder___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'expr' of 'shortcircuit_expr_IRBuilder_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<lambda>", 1073, CPyStatic_builder___globals);
        goto CPyL8;
    }
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___OpExprObject *)cpy_r_r2)->_left;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___accept(cpy_r_r1, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<lambda>", 1073, CPyStatic_builder___globals);
        goto CPyL6;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "<lambda>", 1073, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r5);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "<lambda>", 1073, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "__get__", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "<lambda>", "__mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj", "__mypyc_env__", 1074, CPyStatic_builder___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "<lambda>", "shortcircuit_expr_IRBuilder_env", "self", 1074, CPyStatic_builder___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'expr' of 'shortcircuit_expr_IRBuilder_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<lambda>", 1074, CPyStatic_builder___globals);
        goto CPyL8;
    }
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___OpExprObject *)cpy_r_r2)->_right;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___accept(cpy_r_r1, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<lambda>", 1074, CPyStatic_builder___globals);
        goto CPyL6;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "<lambda>", 1074, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r5);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "<lambda>", 1074, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___shortcircuit_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyDef_builder___shortcircuit_expr_IRBuilder_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1069, CPyStatic_builder___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self);
    }
    ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1069, CPyStatic_builder___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_expr);
    if (((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr);
    }
    ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr = cpy_r_expr;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1069, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_r3 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "shortcircuit_expr", "shortcircuit_expr_IRBuilder_env", "self", 1070, CPyStatic_builder___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r3)->_builder;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "shortcircuit_expr", "shortcircuit_expr_IRBuilder_env", "expr", 1071, CPyStatic_builder___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((mypy___nodes___OpExprObject *)cpy_r_r5)->_op;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "shortcircuit_expr", "shortcircuit_expr_IRBuilder_env", "self", 1072, CPyStatic_builder___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "shortcircuit_expr", "shortcircuit_expr_IRBuilder_env", "expr", 1072, CPyStatic_builder___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyDef_builder___IRBuilder___node_type(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1072, CPyStatic_builder___globals);
        goto CPyL18;
    }
    cpy_r_r10 = CPyDef_builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_obj();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1073, CPyStatic_builder___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *)cpy_r_r10)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *)cpy_r_r10)->___mypyc_env__);
    }
    ((mypyc___irbuild___builder_____mypyc_lambda__0_shortcircuit_expr_IRBuilder_objObject *)cpy_r_r10)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1073, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_r12 = CPyDef_builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_obj();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1074, CPyStatic_builder___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *)cpy_r_r12)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *)cpy_r_r12)->___mypyc_env__);
    }
    ((mypyc___irbuild___builder_____mypyc_lambda__1_shortcircuit_expr_IRBuilder_objObject *)cpy_r_r12)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1074, CPyStatic_builder___globals);
        goto CPyL22;
    }
    cpy_r_r14 = ((mypyc___irbuild___builder___shortcircuit_expr_IRBuilder_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'expr' of 'shortcircuit_expr_IRBuilder_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1075, CPyStatic_builder___globals);
        goto CPyL23;
    }
CPyL13: ;
    cpy_r_r15 = ((mypy___nodes___OpExprObject *)cpy_r_r14)->_line;
    CPyTagged_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = CPyDef_ll_builder___LowLevelIRBuilder___shortcircuit_helper(cpy_r_r4, cpy_r_r6, cpy_r_r9, cpy_r_r10, cpy_r_r12, cpy_r_r15);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1070, CPyStatic_builder___globals);
        goto CPyL15;
    }
    return cpy_r_r16;
CPyL15: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
}

PyObject *CPyPy_builder___IRBuilder___shortcircuit_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:shortcircuit_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___OpExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___shortcircuit_expr(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "shortcircuit_expr", 1069, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___flatten_classes(PyObject *cpy_r_self, PyObject *cpy_r_arg) {
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
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_item;
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
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_item_part;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL24;
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r14 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1086, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL48;
    }
    cpy_r_r15 = ((mypy___nodes___RefExprObject *)cpy_r_r14)->_node;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL10;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL11;
CPyL10: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    cpy_r_r20 = cpy_r_r24;
CPyL11: ;
    if (!cpy_r_r20) goto CPyL23;
    CPy_INCREF(cpy_r_arg);
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r25 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1086, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL48;
    }
    cpy_r_r26 = CPyDef_builder___IRBuilder___is_native_module_ref_expr(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1086, CPyStatic_builder___globals);
        goto CPyL48;
    }
    if (!cpy_r_r26) goto CPyL23;
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    cpy_r_r28 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r27)->_type_to_ir;
    CPy_INCREF(cpy_r_r28);
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r29 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1087, CPyStatic_builder___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL49;
    }
    cpy_r_r30 = ((mypy___nodes___RefExprObject *)cpy_r_r29)->_node;
    CPy_INCREF(cpy_r_r30);
    if (likely((Py_TYPE(cpy_r_r30) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r30) == CPyType_nodes___TypeInfo)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1087, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r30);
        goto CPyL49;
    }
    cpy_r_r32 = CPyDict_GetWithNone(cpy_r_r28, cpy_r_r31);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1087, CPyStatic_builder___globals);
        goto CPyL48;
    }
    if (Py_TYPE(cpy_r_r32) == CPyType_class_ir___ClassIR)
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL9966;
    if (cpy_r_r32 == Py_None)
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL9966;
    CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1087, CPyStatic_builder___globals, "mypyc.ir.class_ir.ClassIR or None", cpy_r_r32);
    goto CPyL48;
__LL9966: ;
    cpy_r_ir = cpy_r_r33;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_ir != cpy_r_r34;
    if (!cpy_r_r35) goto CPyL50;
    if (likely(cpy_r_ir != Py_None))
        cpy_r_r36 = cpy_r_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1089, CPyStatic_builder___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_ir);
        goto CPyL48;
    }
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1089, CPyStatic_builder___globals);
        goto CPyL51;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    *(PyObject * *)cpy_r_r39 = cpy_r_r36;
    return cpy_r_r37;
CPyL23: ;
    cpy_r_r40 = Py_None;
    CPy_INCREF(cpy_r_r40);
    return cpy_r_r40;
CPyL24: ;
    cpy_r_r41 = PyList_New(0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1092, CPyStatic_builder___globals);
        goto CPyL48;
    }
    cpy_r_res = cpy_r_r41;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___TupleExpr))
        cpy_r_r42 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1093, CPyStatic_builder___globals, "mypy.nodes.TupleExpr", cpy_r_arg);
        goto CPyL52;
    }
    cpy_r_r43 = ((mypy___nodes___TupleExprObject *)cpy_r_r42)->_items;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = 0;
CPyL27: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL53;
    cpy_r_r49 = CPyList_GetItemUnsafe(cpy_r_r43, cpy_r_r44);
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_nodes___Expression)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1093, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r49);
        goto CPyL54;
    }
    cpy_r_item = cpy_r_r50;
    cpy_r_r51 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL31;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL32;
CPyL31: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL32: ;
    if (!cpy_r_r55) goto CPyL34;
    cpy_r_r60 = cpy_r_r55;
    goto CPyL35;
CPyL34: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r60 = cpy_r_r64;
CPyL35: ;
    if (!cpy_r_r60) goto CPyL37;
    cpy_r_r65 = cpy_r_r60;
    goto CPyL38;
CPyL37: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    cpy_r_r65 = cpy_r_r69;
CPyL38: ;
    if (!cpy_r_r65) goto CPyL55;
    if ((Py_TYPE(cpy_r_item) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_item) == CPyType_nodes___RefExpr))
        cpy_r_r70 = cpy_r_item;
    else {
        cpy_r_r70 = NULL;
    }
    if (cpy_r_r70 != NULL) goto __LL9967;
    if (Py_TYPE(cpy_r_item) == CPyType_nodes___TupleExpr)
        cpy_r_r70 = cpy_r_item;
    else {
        cpy_r_r70 = NULL;
    }
    if (cpy_r_r70 != NULL) goto __LL9967;
    CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1095, CPyStatic_builder___globals, "union[mypy.nodes.RefExpr, mypy.nodes.TupleExpr]", cpy_r_item);
    goto CPyL54;
__LL9967: ;
    cpy_r_r71 = CPyDef_builder___IRBuilder___flatten_classes(cpy_r_self, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1095, CPyStatic_builder___globals);
        goto CPyL54;
    }
    cpy_r_item_part = cpy_r_r71;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r73 = cpy_r_item_part == cpy_r_r72;
    if (cpy_r_r73) {
        goto CPyL56;
    } else
        goto CPyL43;
CPyL42: ;
    cpy_r_r74 = Py_None;
    CPy_INCREF(cpy_r_r74);
    return cpy_r_r74;
CPyL43: ;
    if (likely(cpy_r_item_part != Py_None))
        cpy_r_r75 = cpy_r_item_part;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1098, CPyStatic_builder___globals, "list", cpy_r_item_part);
        goto CPyL54;
    }
    cpy_r_r76 = CPyList_Extend(cpy_r_res, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1098, CPyStatic_builder___globals);
        goto CPyL54;
    } else
        goto CPyL57;
CPyL45: ;
    cpy_r_r77 = Py_None;
    CPy_INCREF(cpy_r_r77);
    return cpy_r_r77;
CPyL46: ;
    cpy_r_r78 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r78;
    goto CPyL27;
CPyL47: ;
    return cpy_r_res;
CPyL48: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL49: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL48;
CPyL50: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL23;
CPyL51: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL48;
CPyL52: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL48;
CPyL53: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL47;
CPyL54: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r43);
    goto CPyL48;
CPyL55: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_item);
    goto CPyL45;
CPyL56: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_item_part);
    goto CPyL42;
CPyL57: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL46;
}

PyObject *CPyPy_builder___IRBuilder___flatten_classes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:flatten_classes", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_arg;
    if ((Py_TYPE(obj_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_arg) == CPyType_nodes___RefExpr))
        arg_arg = obj_arg;
    else {
        arg_arg = NULL;
    }
    if (arg_arg != NULL) goto __LL9968;
    if (Py_TYPE(obj_arg) == CPyType_nodes___TupleExpr)
        arg_arg = obj_arg;
    else {
        arg_arg = NULL;
    }
    if (arg_arg != NULL) goto __LL9968;
    CPy_TypeError("union[mypy.nodes.RefExpr, mypy.nodes.TupleExpr]", obj_arg); 
    goto fail;
__LL9968: ;
    PyObject *retval = CPyDef_builder___IRBuilder___flatten_classes(arg_self, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "flatten_classes", 1080, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___enter(PyObject *cpy_r_self, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    if (cpy_r_fn_info != NULL) goto CPyL33;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_fn_info = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&PyUnicode_Type;
    cpy_r_r2 = PyObject_IsInstance(cpy_r_fn_info, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1104, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL7;
    if (likely(PyUnicode_Check(cpy_r_fn_info)))
        cpy_r_r5 = cpy_r_fn_info;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "enter", 1105, CPyStatic_builder___globals, "str", cpy_r_fn_info);
        goto CPyL32;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = 2;
    cpy_r_r10 = 2;
    cpy_r_r11 = 2;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_context___FuncInfo(cpy_r_r6, cpy_r_r5, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1105, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_fn_info = cpy_r_r13;
CPyL7: ;
    cpy_r_r14 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_current_module;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_errors;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_ll_builder___LowLevelIRBuilder(cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1106, CPyStatic_builder___globals);
        goto CPyL34;
    }
    CPy_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder = cpy_r_r18;
    cpy_r_r20 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter", "IRBuilder", "module_name", 1109, CPyStatic_builder___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r21);
CPyL9: ;
    cpy_r_r22 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter", "IRBuilder", "module_path", 1109, CPyStatic_builder___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r22);
CPyL10: ;
    cpy_r_r23 = CPyDef_ll_builder___LowLevelIRBuilder___set_module(cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1109, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r24 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builders;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PyList_Append(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1110, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r28 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = PyDict_New();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1111, CPyStatic_builder___globals);
        goto CPyL37;
    }
    cpy_r_r30 = PyList_Append(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1111, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r32 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_runtime_args;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1112, CPyStatic_builder___globals);
        goto CPyL38;
    }
    cpy_r_r34 = PyList_Append(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1112, CPyStatic_builder___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_fn_info);
    if (likely(Py_TYPE(cpy_r_fn_info) == CPyType_context___FuncInfo))
        cpy_r_r36 = cpy_r_fn_info;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "enter", 1113, CPyStatic_builder___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_fn_info);
        goto CPyL34;
    }
    CPy_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info = cpy_r_r36;
    cpy_r_r38 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_infos;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PyList_Append(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1114, CPyStatic_builder___globals);
        goto CPyL34;
    }
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_ret_types;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r43 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1115, CPyStatic_builder___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r45 = PyList_Append(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1115, CPyStatic_builder___globals);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_fn_info) == CPyType_context___FuncInfo))
        cpy_r_r47 = cpy_r_fn_info;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "enter", 1116, CPyStatic_builder___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_fn_info);
        goto CPyL32;
    }
    cpy_r_r48 = CPY_GET_ATTR(cpy_r_r47, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1116, CPyStatic_builder___globals);
        goto CPyL32;
    }
CPyL24: ;
    if (!cpy_r_r48) goto CPyL27;
CPyL25: ;
    cpy_r_r49 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = CPyDef_nonlocalcontrol___GeneratorNonlocalControl();
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1117, CPyStatic_builder___globals);
        goto CPyL40;
    }
    cpy_r_r51 = PyList_Append(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1117, CPyStatic_builder___globals);
        goto CPyL32;
    } else
        goto CPyL29;
CPyL27: ;
    cpy_r_r53 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyDef_nonlocalcontrol___BaseNonlocalControl();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1119, CPyStatic_builder___globals);
        goto CPyL41;
    }
    cpy_r_r55 = PyList_Append(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1119, CPyStatic_builder___globals);
        goto CPyL32;
    }
CPyL29: ;
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = CPyDef_ops___BasicBlock(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1120, CPyStatic_builder___globals);
        goto CPyL32;
    }
    cpy_r_r59 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1120, CPyStatic_builder___globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r60 = 2;
    return cpy_r_r60;
CPyL33: ;
    CPy_INCREF(cpy_r_fn_info);
    goto CPyL2;
CPyL34: ;
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_r20);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_r28);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_r32);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_r42);
    goto CPyL19;
CPyL40: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL32;
CPyL41: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL32;
}

PyObject *CPyPy_builder___IRBuilder___enter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fn_info", 0};
    static CPyArg_Parser parser = {"|O:enter", kwlist, 0};
    PyObject *obj_fn_info = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (obj_fn_info == NULL) {
        arg_fn_info = NULL;
        goto __LL9969;
    }
    if (Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo)
        arg_fn_info = obj_fn_info;
    else {
        arg_fn_info = NULL;
    }
    if (arg_fn_info != NULL) goto __LL9969;
    if (PyUnicode_Check(obj_fn_info))
        arg_fn_info = obj_fn_info;
    else {
        arg_fn_info = NULL;
    }
    if (arg_fn_info != NULL) goto __LL9969;
    CPy_TypeError("union[mypyc.irbuild.context.FuncInfo, str]", obj_fn_info); 
    goto fail;
__LL9969: ;
    char retval = CPyDef_builder___IRBuilder___enter(arg_self, arg_fn_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "enter", 1103, CPyStatic_builder___globals);
    return NULL;
}

tuple_T5OOOOO CPyDef_builder___IRBuilder___leave(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_builder;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_runtime_args;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_fn_info;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    tuple_T5OOOOO cpy_r_r28;
    tuple_T5OOOOO cpy_r_r29;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builders;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyList_PopLast(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1123, CPyStatic_builder___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_ll_builder___LowLevelIRBuilder))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "leave", 1123, CPyStatic_builder___globals, "mypyc.irbuild.ll_builder.LowLevelIRBuilder", cpy_r_r1);
        goto CPyL17;
    }
    cpy_r_builder = cpy_r_r2;
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyList_PopLast(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1124, CPyStatic_builder___globals);
        goto CPyL18;
    }
    if (likely(PyDict_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeError("dict", cpy_r_r4); 
        cpy_r_r5 = NULL;
    }
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1124, CPyStatic_builder___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL4: ;
    cpy_r_r6 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_runtime_args;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyList_PopLast(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1125, CPyStatic_builder___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "leave", 1125, CPyStatic_builder___globals, "list", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_runtime_args = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_ret_types;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyList_PopLast(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1126, CPyStatic_builder___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_rtypes___RType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "leave", 1126, CPyStatic_builder___globals, "mypyc.ir.rtypes.RType", cpy_r_r10);
        goto CPyL20;
    }
    cpy_r_ret_type = cpy_r_r11;
    cpy_r_r12 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_infos;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyList_PopLast(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1127, CPyStatic_builder___globals);
        goto CPyL21;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_context___FuncInfo))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "leave", 1127, CPyStatic_builder___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r13);
        goto CPyL21;
    }
    cpy_r_fn_info = cpy_r_r14;
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_nonlocal_control;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyList_PopLast(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1128, CPyStatic_builder___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r16); 
        cpy_r_r17 = NULL;
    }
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1128, CPyStatic_builder___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL12: ;
    cpy_r_r18 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builders;
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_r18, -2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1129, CPyStatic_builder___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_ll_builder___LowLevelIRBuilder))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "leave", 1129, CPyStatic_builder___globals, "mypyc.irbuild.ll_builder.LowLevelIRBuilder", cpy_r_r19);
        goto CPyL22;
    }
    CPy_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder = cpy_r_r20;
    cpy_r_r22 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_infos;
    cpy_r_r23 = CPyList_GetItemShort(cpy_r_r22, -2);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1130, CPyStatic_builder___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_context___FuncInfo))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "leave", 1130, CPyStatic_builder___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r23);
        goto CPyL22;
    }
    CPy_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info = cpy_r_r24;
    cpy_r_r26 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_builder)->_args;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_builder)->_blocks;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_builder);
    cpy_r_r28.f0 = cpy_r_r26;
    cpy_r_r28.f1 = cpy_r_runtime_args;
    cpy_r_r28.f2 = cpy_r_r27;
    cpy_r_r28.f3 = cpy_r_ret_type;
    cpy_r_r28.f4 = cpy_r_fn_info;
    CPy_INCREF(cpy_r_r28.f0);
    CPy_INCREF(cpy_r_r28.f1);
    CPy_INCREF(cpy_r_r28.f2);
    CPy_INCREF(cpy_r_r28.f3);
    CPy_INCREF(cpy_r_r28.f4);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_runtime_args);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_ret_type);
    CPy_DECREF(cpy_r_fn_info);
    return cpy_r_r28;
CPyL17: ;
    tuple_T5OOOOO __tmp9970 = { NULL, NULL, NULL, NULL, NULL };
    cpy_r_r29 = __tmp9970;
    return cpy_r_r29;
CPyL18: ;
    CPy_DecRef(cpy_r_builder);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL4;
CPyL20: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_runtime_args);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL12;
}

PyObject *CPyPy_builder___IRBuilder___leave(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":leave", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    tuple_T5OOOOO retval = CPyDef_builder___IRBuilder___leave(arg_self);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(5);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9971 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9971);
    PyObject *__tmp9972 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9972);
    PyObject *__tmp9973 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp9973);
    PyObject *__tmp9974 = retval.f3;
    PyTuple_SET_ITEM(retbox, 3, __tmp9974);
    PyObject *__tmp9975 = retval.f4;
    PyTuple_SET_ITEM(retbox, 4, __tmp9975);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "leave", 1122, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
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
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T5OOOOO cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    int64_t cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    int64_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    cpy_r_r0 = ((mypyc___irbuild___builder___enter_method_IRBuilder_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_gen", "__mypyc_env__", 1134, CPyStatic_builder___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "__mypyc_next_label__", 1134, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL87;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL99;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1155, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_fn_info;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "fn_info", 1155, CPyStatic_builder___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = CPyDef_builder___IRBuilder___enter(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1155, CPyStatic_builder___globals);
        goto CPyL98;
    }
    cpy_r_r7 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1156, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r7)->_function_name_stack;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "name", 1156, CPyStatic_builder___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = PyList_Append(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1156, CPyStatic_builder___globals);
        goto CPyL98;
    }
    cpy_r_r12 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1157, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r12);
CPyL12: ;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r12)->_class_ir_stack;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "class_ir", 1157, CPyStatic_builder___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r14);
CPyL13: ;
    cpy_r_r15 = PyList_Append(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1157, CPyStatic_builder___globals);
        goto CPyL98;
    }
    cpy_r_r17 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ret_type;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "ret_type", 1158, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r17);
CPyL15: ;
    cpy_r_r18 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1158, CPyStatic_builder___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r18);
CPyL16: ;
    cpy_r_r19 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r18)->_ret_types;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = CPyList_SetItem(cpy_r_r19, -2, cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1158, CPyStatic_builder___globals);
        goto CPyL98;
    }
    cpy_r_r21 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self_type;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self_type", 1159, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 == cpy_r_r22;
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r23) goto CPyL22;
    cpy_r_r24 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "class_ir", 1160, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r24);
CPyL20: ;
    cpy_r_r25 = CPyDef_rtypes___RInstance(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1160, CPyStatic_builder___globals);
        goto CPyL98;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self_type);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self_type = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1160, CPyStatic_builder___globals);
        goto CPyL98;
    }
CPyL22: ;
    cpy_r_r27 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1161, CPyStatic_builder___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r27);
CPyL23: ;
    cpy_r_r28 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r29 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self_type;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self_type", 1161, CPyStatic_builder___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r29);
CPyL24: ;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "enter_method", 1161, CPyStatic_builder___globals, "mypyc.ir.rtypes.RType", cpy_r_r29);
        goto CPyL104;
    }
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_builder___IRBuilder___add_argument(cpy_r_r27, cpy_r_r28, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1161, CPyStatic_builder___globals);
        goto CPyL98;
    } else
        goto CPyL105;
CPyL26: ;
    cpy_r_r33 = Py_None;
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1163, CPyStatic_builder___globals);
        goto CPyL32;
    } else
        goto CPyL106;
CPyL27: ;
    CPy_INCREF(cpy_r_r33);
    return cpy_r_r33;
CPyL28: ;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_type != cpy_r_r35;
    if (!cpy_r_r36) goto CPyL31;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1163, CPyStatic_builder___globals);
        goto CPyL32;
    } else
        goto CPyL107;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    tuple_T3OOO __tmp9976 = { NULL, NULL, NULL };
    cpy_r_r37 = __tmp9976;
    cpy_r_r38 = cpy_r_r37;
    goto CPyL33;
CPyL32: ;
    cpy_r_r39 = CPy_CatchError();
    cpy_r_r38 = cpy_r_r39;
CPyL33: ;
    cpy_r_r40 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1165, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r40);
CPyL34: ;
    cpy_r_r41 = CPyDef_builder___IRBuilder___leave(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1165, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r42 = cpy_r_r41.f0;
    CPy_INCREF(cpy_r_r42);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_arg_regs != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_arg_regs);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_arg_regs = cpy_r_r42;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1165, CPyStatic_builder___globals);
        goto CPyL109;
    }
    cpy_r_r44 = cpy_r_r41.f1;
    CPy_INCREF(cpy_r_r44);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_args != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_args);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_args = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1165, CPyStatic_builder___globals);
        goto CPyL109;
    }
    cpy_r_r46 = cpy_r_r41.f2;
    CPy_INCREF(cpy_r_r46);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_blocks != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_blocks);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_blocks = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1165, CPyStatic_builder___globals);
        goto CPyL109;
    }
    cpy_r_r48 = cpy_r_r41.f3;
    CPy_INCREF(cpy_r_r48);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ret_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ret_type);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ret_type = cpy_r_r48;
    cpy_r_r49 = 1;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1165, CPyStatic_builder___globals);
        goto CPyL109;
    }
    cpy_r_r50 = cpy_r_r41.f4;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r41.f0);
    CPy_DECREF(cpy_r_r41.f1);
    CPy_DECREF(cpy_r_r41.f2);
    CPy_DECREF(cpy_r_r41.f3);
    CPy_DECREF(cpy_r_r41.f4);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_fn_info != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_fn_info);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_fn_info = cpy_r_r50;
    cpy_r_r51 = 1;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1165, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r52 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_args;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "args", 1166, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r52);
CPyL41: ;
    cpy_r_r53 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ret_type;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "ret_type", 1166, CPyStatic_builder___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r53);
CPyL42: ;
    cpy_r_r54 = CPyDef_func_ir___FuncSignature(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1166, CPyStatic_builder___globals);
        goto CPyL108;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_sig != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_sig);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_sig = cpy_r_r54;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1166, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r56 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1167, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r56);
CPyL45: ;
    cpy_r_r57 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r56)->_function_name_stack;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = CPyList_PopLast(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1167, CPyStatic_builder___globals);
        goto CPyL108;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "enter_method", 1167, CPyStatic_builder___globals, "str", cpy_r_r58);
        goto CPyL108;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1167, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r61 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1168, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r61);
CPyL49: ;
    cpy_r_r62 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r61)->_class_ir_stack;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = CPyList_PopLast(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1168, CPyStatic_builder___globals);
        goto CPyL108;
    }
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_class_ir___ClassIR))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "enter_method", 1168, CPyStatic_builder___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r63);
        goto CPyL108;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir = cpy_r_r64;
    cpy_r_r65 = 1;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1168, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r66 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "name", 1169, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r66);
CPyL53: ;
    cpy_r_r67 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "class_ir", 1169, CPyStatic_builder___globals);
        goto CPyL111;
    }
    CPy_INCREF(cpy_r_r67);
CPyL54: ;
    cpy_r_r68 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r67)->_name;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1169, CPyStatic_builder___globals);
        goto CPyL112;
    }
    CPy_INCREF(cpy_r_r69);
CPyL55: ;
    cpy_r_r70 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r69)->_module_name;
    if (unlikely(cpy_r_r70 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'module_name' of 'IRBuilder' undefined");
    } else {
        CPy_INCREF(cpy_r_r70);
    }
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1169, CPyStatic_builder___globals);
        goto CPyL112;
    }
CPyL56: ;
    cpy_r_r71 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_sig;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "sig", 1169, CPyStatic_builder___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_r71);
CPyL57: ;
    cpy_r_r72 = CPY_INT_TAG;
    cpy_r_r73 = 2;
    cpy_r_r74 = 2;
    cpy_r_r75 = 2;
    cpy_r_r76 = CPyDef_func_ir___FuncDecl(cpy_r_r66, cpy_r_r68, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1169, CPyStatic_builder___globals);
        goto CPyL108;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_decl != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_decl);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_decl = cpy_r_r76;
    cpy_r_r77 = 1;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1169, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r78 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_decl;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "decl", 1170, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r78);
CPyL60: ;
    cpy_r_r79 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_arg_regs;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "arg_regs", 1170, CPyStatic_builder___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_r79);
CPyL61: ;
    cpy_r_r80 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_blocks;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "blocks", 1170, CPyStatic_builder___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r80);
CPyL62: ;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_func_ir___FuncIR(cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1170, CPyStatic_builder___globals);
        goto CPyL108;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ir != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ir);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ir = cpy_r_r83;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1170, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r85 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ir;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "ir", 1171, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r85);
CPyL65: ;
    cpy_r_r86 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "class_ir", 1171, CPyStatic_builder___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r86);
CPyL66: ;
    cpy_r_r87 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r86)->_methods;
    if (unlikely(cpy_r_r87 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'methods' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r87);
    }
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1171, CPyStatic_builder___globals);
        goto CPyL116;
    }
CPyL67: ;
    cpy_r_r88 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "name", 1171, CPyStatic_builder___globals);
        goto CPyL117;
    }
    CPy_INCREF(cpy_r_r88);
CPyL68: ;
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r85);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1171, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r91 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ir;
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "ir", 1172, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r91);
CPyL70: ;
    cpy_r_r92 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r91)->_decl;
    CPy_INCREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_class_ir;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "class_ir", 1172, CPyStatic_builder___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r93);
CPyL71: ;
    cpy_r_r94 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r93)->_method_decls;
    if (unlikely(cpy_r_r94 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'method_decls' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r94);
    }
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1172, CPyStatic_builder___globals);
        goto CPyL118;
    }
CPyL72: ;
    cpy_r_r95 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_name;
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "name", 1172, CPyStatic_builder___globals);
        goto CPyL119;
    }
    CPy_INCREF(cpy_r_r95);
CPyL73: ;
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r94, cpy_r_r95, cpy_r_r92);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1172, CPyStatic_builder___globals);
        goto CPyL108;
    }
    cpy_r_r98 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "self", 1173, CPyStatic_builder___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r98);
CPyL75: ;
    cpy_r_r99 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r98)->_functions;
    CPy_INCREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r100 = ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->_ir;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "enter_method", "enter_method_IRBuilder_env", "ir", 1173, CPyStatic_builder___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r100);
CPyL76: ;
    cpy_r_r101 = PyList_Append(cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1173, CPyStatic_builder___globals);
        goto CPyL108;
    }
    if (cpy_r_r38.f0 == NULL) {
        goto CPyL84;
    } else
        goto CPyL121;
CPyL78: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL80;
    } else
        goto CPyL122;
CPyL79: ;
    CPy_Unreachable();
CPyL80: ;
    if (cpy_r_r38.f0 == NULL) goto CPyL82;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_XDECREF(cpy_r_r38.f0);
    CPy_XDECREF(cpy_r_r38.f1);
    CPy_XDECREF(cpy_r_r38.f2);
CPyL82: ;
    cpy_r_r103 = CPy_KeepPropagating();
    if (!cpy_r_r103) goto CPyL97;
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r104 = Py_None;
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r105 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL97;
    }
    CPyGen_SetStopIterationValue(cpy_r_r104);
    if (!0) goto CPyL97;
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r106 = cpy_r_r1 & 1;
    cpy_r_r107 = cpy_r_r106 == 0;
    if (!cpy_r_r107) goto CPyL89;
    cpy_r_r108 = cpy_r_r1 == 0;
    cpy_r_r109 = cpy_r_r108;
    goto CPyL90;
CPyL89: ;
    cpy_r_r110 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r109 = cpy_r_r110;
CPyL90: ;
    if (cpy_r_r109) goto CPyL123;
    cpy_r_r111 = cpy_r_r1 & 1;
    cpy_r_r112 = cpy_r_r111 == 0;
    if (!cpy_r_r112) goto CPyL93;
    cpy_r_r113 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r114 = cpy_r_r113;
    goto CPyL94;
CPyL93: ;
    cpy_r_r115 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r114 = cpy_r_r115;
CPyL94: ;
    if (cpy_r_r114) {
        goto CPyL28;
    } else
        goto CPyL124;
CPyL95: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r117 = NULL;
    return cpy_r_r117;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL97;
CPyL99: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL97;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL97;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r13);
    goto CPyL97;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    goto CPyL97;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    goto CPyL97;
CPyL105: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL26;
CPyL106: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL27;
CPyL107: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL30;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL80;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    CPy_DecRef(cpy_r_r41.f3);
    CPy_DecRef(cpy_r_r41.f4);
    goto CPyL80;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r52);
    goto CPyL80;
CPyL111: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r66);
    goto CPyL80;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r68);
    goto CPyL80;
CPyL113: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r70);
    goto CPyL80;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r78);
    goto CPyL80;
CPyL115: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    goto CPyL80;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r85);
    goto CPyL80;
CPyL117: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r87);
    goto CPyL80;
CPyL118: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r92);
    goto CPyL80;
CPyL119: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    goto CPyL80;
CPyL120: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r99);
    goto CPyL80;
CPyL121: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL78;
CPyL122: ;
    CPy_XDECREF(cpy_r_r38.f0);
    CPy_XDECREF(cpy_r_r38.f1);
    CPy_XDECREF(cpy_r_r38.f2);
    goto CPyL79;
CPyL123: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL124: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL95;
}

PyObject *CPyPy_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___enter_method_IRBuilder_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_builder___enter_method_IRBuilder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.builder.enter_method_IRBuilder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___enter_method_IRBuilder_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "__next__", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___enter_method_IRBuilder_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_builder___enter_method_IRBuilder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.builder.enter_method_IRBuilder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_builder___enter_method_IRBuilder_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "send", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_builder___enter_method_IRBuilder_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_builder___enter_method_IRBuilder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.builder.enter_method_IRBuilder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___enter_method_IRBuilder_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "__iter__", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_builder___enter_method_IRBuilder_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_builder___enter_method_IRBuilder_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_builder___enter_method_IRBuilder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.builder.enter_method_IRBuilder_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_builder___enter_method_IRBuilder_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "throw", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___enter_method_IRBuilder_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_builder___enter_method_IRBuilder_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp9977 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp9977);
    PyObject *__tmp9978 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp9978);
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

PyObject *CPyPy_builder___enter_method_IRBuilder_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_builder___enter_method_IRBuilder_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.builder.enter_method_IRBuilder_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___enter_method_IRBuilder_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "close", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___enter_method(PyObject *cpy_r_self, PyObject *cpy_r_class_ir, PyObject *cpy_r_name, PyObject *cpy_r_ret_type, PyObject *cpy_r_fn_info, PyObject *cpy_r_self_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    if (cpy_r_fn_info != NULL) goto CPyL16;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_fn_info = cpy_r_r0;
CPyL2: ;
    if (cpy_r_self_type != NULL) goto CPyL17;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_self_type = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_builder___enter_method_IRBuilder_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_self != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_self);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_self = cpy_r_self;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_class_ir);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_class_ir != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_class_ir);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_class_ir = cpy_r_class_ir;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_name);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_name != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_name);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_name = cpy_r_name;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_ret_type);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_ret_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_ret_type);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_ret_type = cpy_r_ret_type;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL19;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_fn_info != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_fn_info);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_fn_info = cpy_r_fn_info;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL20;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_self_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_self_type);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->_self_type = cpy_r_self_type;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_r9 = CPyDef_builder___enter_method_IRBuilder_gen();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r2);
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_genObject *)cpy_r_r9)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_genObject *)cpy_r_r9)->___mypyc_env__);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_genObject *)cpy_r_r9)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL22;
    }
    if (((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___builder___enter_method_IRBuilder_envObject *)cpy_r_r2)->___mypyc_next_label__ = 0;
    cpy_r_r11 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
        goto CPyL23;
    }
    return cpy_r_r9;
CPyL15: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL16: ;
    CPy_INCREF(cpy_r_fn_info);
    goto CPyL2;
CPyL17: ;
    CPy_INCREF(cpy_r_self_type);
    goto CPyL4;
CPyL18: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_self_type);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
}

PyObject *CPyPy_builder___IRBuilder___enter_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"class_ir", "name", "ret_type", "fn_info", "self_type", 0};
    static CPyArg_Parser parser = {"OOO|OO:enter_method", kwlist, 0};
    PyObject *obj_class_ir;
    PyObject *obj_name;
    PyObject *obj_ret_type;
    PyObject *obj_fn_info = NULL;
    PyObject *obj_self_type = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_class_ir, &obj_name, &obj_ret_type, &obj_fn_info, &obj_self_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_class_ir;
    if (likely(Py_TYPE(obj_class_ir) == CPyType_class_ir___ClassIR))
        arg_class_ir = obj_class_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_class_ir); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_ret_type;
    if (likely(PyObject_TypeCheck(obj_ret_type, CPyType_rtypes___RType)))
        arg_ret_type = obj_ret_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_ret_type); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (obj_fn_info == NULL) {
        arg_fn_info = NULL;
        goto __LL9979;
    }
    if (Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo)
        arg_fn_info = obj_fn_info;
    else {
        arg_fn_info = NULL;
    }
    if (arg_fn_info != NULL) goto __LL9979;
    if (PyUnicode_Check(obj_fn_info))
        arg_fn_info = obj_fn_info;
    else {
        arg_fn_info = NULL;
    }
    if (arg_fn_info != NULL) goto __LL9979;
    CPy_TypeError("union[mypyc.irbuild.context.FuncInfo, str]", obj_fn_info); 
    goto fail;
__LL9979: ;
    PyObject *arg_self_type;
    if (obj_self_type == NULL) {
        arg_self_type = NULL;
        goto __LL9980;
    }
    if (PyObject_TypeCheck(obj_self_type, CPyType_rtypes___RType))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL9980;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL9980;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_self_type); 
    goto fail;
__LL9980: ;
    PyObject *retval = CPyDef_builder___IRBuilder___enter_method(arg_self, arg_class_ir, arg_name, arg_ret_type, arg_fn_info, arg_self_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "enter_method", 1134, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add_argument(PyObject *cpy_r_self, PyObject *cpy_r_var, PyObject *cpy_r_typ, PyObject *cpy_r_kind) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    if (cpy_r_kind != NULL) goto CPyL20;
    cpy_r_r0 = CPyStatic_nodes___ARG_POS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1175, CPyStatic_builder___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_kind = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = (PyObject *)&PyUnicode_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_var, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1180, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL22;
    CPy_INCREF(cpy_r_var);
    if (likely(PyUnicode_Check(cpy_r_var)))
        cpy_r_r6 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_argument", 1181, CPyStatic_builder___globals, "str", cpy_r_var);
        goto CPyL21;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_nodes___Var(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1181, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_var = cpy_r_r8;
CPyL10: ;
    CPy_INCREF(cpy_r_var);
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r9 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_argument", 1182, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL23;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___add_local(cpy_r_self, cpy_r_r9, cpy_r_typ, 1);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1182, CPyStatic_builder___globals);
        goto CPyL23;
    }
    cpy_r_reg = cpy_r_r10;
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_runtime_args;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, -2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1183, CPyStatic_builder___globals);
        goto CPyL24;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_argument", 1183, CPyStatic_builder___globals, "list", cpy_r_r12);
        goto CPyL24;
    }
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r14 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_argument", 1183, CPyStatic_builder___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL25;
    }
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_r14, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1183, CPyStatic_builder___globals);
        goto CPyL25;
    }
CPyL16: ;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_func_ir___RuntimeArg(cpy_r_r15, cpy_r_typ, cpy_r_kind, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1183, CPyStatic_builder___globals);
        goto CPyL26;
    }
    cpy_r_r18 = PyList_Append(cpy_r_r13, cpy_r_r17);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1183, CPyStatic_builder___globals);
        goto CPyL27;
    }
    return cpy_r_reg;
CPyL19: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL20: ;
    CPy_INCREF(cpy_r_kind);
    goto CPyL5;
CPyL21: ;
    CPy_DecRef(cpy_r_kind);
    goto CPyL19;
CPyL22: ;
    CPy_INCREF(cpy_r_var);
    goto CPyL10;
CPyL23: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_kind);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_reg);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
CPyL27: ;
    CPy_DecRef(cpy_r_reg);
    goto CPyL19;
}

PyObject *CPyPy_builder___IRBuilder___add_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"var", "typ", "kind", 0};
    static CPyArg_Parser parser = {"OO|O:add_argument", kwlist, 0};
    PyObject *obj_var;
    PyObject *obj_typ;
    PyObject *obj_kind = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_var, &obj_typ, &obj_kind)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_var;
    if (PyUnicode_Check(obj_var))
        arg_var = obj_var;
    else {
        arg_var = NULL;
    }
    if (arg_var != NULL) goto __LL9981;
    if (Py_TYPE(obj_var) == CPyType_nodes___Var)
        arg_var = obj_var;
    else {
        arg_var = NULL;
    }
    if (arg_var != NULL) goto __LL9981;
    CPy_TypeError("union[str, mypy.nodes.Var]", obj_var); 
    goto fail;
__LL9981: ;
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_kind;
    if (obj_kind == NULL) {
        arg_kind = NULL;
    } else if (likely(Py_TYPE(obj_kind) == CPyType_nodes___ArgKind))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", obj_kind); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___add_argument(arg_self, arg_var, arg_typ, arg_kind);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_argument", 1175, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___lookup(PyObject *cpy_r_self, PyObject *cpy_r_symbol) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "lookup", 1187, CPyStatic_builder___globals);
        goto CPyL5;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "lookup", 1187, CPyStatic_builder___globals, "dict", cpy_r_r1);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r2, cpy_r_symbol);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "lookup", 1187, CPyStatic_builder___globals);
        goto CPyL5;
    }
    if (Py_TYPE(cpy_r_r3) == CPyType_targets___AssignmentTargetRegister)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL9982;
    if (Py_TYPE(cpy_r_r3) == CPyType_targets___AssignmentTargetAttr)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL9982;
    CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "lookup", 1187, CPyStatic_builder___globals, "union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", cpy_r_r3);
    goto CPyL5;
__LL9982: ;
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_builder___IRBuilder___lookup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symbol", 0};
    static CPyArg_Parser parser = {"O:lookup", kwlist, 0};
    PyObject *obj_symbol;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_symbol)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___lookup(arg_self, arg_symbol);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "lookup", 1186, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add_local(PyObject *cpy_r_self, PyObject *cpy_r_symbol, PyObject *cpy_r_typ, char cpy_r_is_arg) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    if (cpy_r_is_arg != 2) goto CPyL2;
    cpy_r_is_arg = 0;
CPyL2: ;
    cpy_r_r0 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r1 = CPy_TypeCheck(cpy_r_symbol, cpy_r_r0);
    if (cpy_r_r1) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1195, CPyStatic_builder___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r3 = CPY_GET_ATTR_TRAIT(cpy_r_symbol, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1197, CPyStatic_builder___globals);
        goto CPyL16;
    }
CPyL6: ;
    cpy_r_r4 = CPyDef_builder___remangle_redefinition_name(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1197, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_r5 = ((mypy___nodes___ContextObject *)cpy_r_symbol)->_line;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "add_local", "SymbolNode", "line", 1197, CPyStatic_builder___globals);
        goto CPyL17;
    }
    CPyTagged_INCREF(cpy_r_r5);
CPyL8: ;
    cpy_r_r6 = CPyDef_ops___Register(cpy_r_typ, cpy_r_r4, cpy_r_is_arg, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1196, CPyStatic_builder___globals);
        goto CPyL16;
    }
    cpy_r_reg = cpy_r_r6;
    cpy_r_r7 = CPyDef_targets___AssignmentTargetRegister(cpy_r_reg);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1199, CPyStatic_builder___globals);
        goto CPyL18;
    }
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1199, CPyStatic_builder___globals);
        goto CPyL19;
    }
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_local", 1199, CPyStatic_builder___globals, "dict", cpy_r_r9);
        goto CPyL19;
    }
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r10, cpy_r_symbol, cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1199, CPyStatic_builder___globals);
        goto CPyL18;
    }
    if (!cpy_r_is_arg) goto CPyL15;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    cpy_r_r14 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_r13)->_args;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyList_Append(cpy_r_r14, cpy_r_reg);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1201, CPyStatic_builder___globals);
        goto CPyL18;
    }
CPyL15: ;
    return cpy_r_reg;
CPyL16: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_reg);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_r7);
    goto CPyL16;
}

PyObject *CPyPy_builder___IRBuilder___add_local(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symbol", "typ", "is_arg", 0};
    static CPyArg_Parser parser = {"OO|O:add_local", kwlist, 0};
    PyObject *obj_symbol;
    PyObject *obj_typ;
    PyObject *obj_is_arg = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_symbol, &obj_typ, &obj_is_arg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    char arg_is_arg;
    if (obj_is_arg == NULL) {
        arg_is_arg = 2;
    } else if (unlikely(!PyBool_Check(obj_is_arg))) {
        CPy_TypeError("bool", obj_is_arg); goto fail;
    } else
        arg_is_arg = obj_is_arg == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___add_local(arg_self, arg_symbol, arg_typ, arg_is_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local", 1189, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add_local_reg(PyObject *cpy_r_self, PyObject *cpy_r_symbol, PyObject *cpy_r_typ, char cpy_r_is_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    if (cpy_r_is_arg != 2) goto CPyL2;
    cpy_r_is_arg = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_builder___IRBuilder___add_local(cpy_r_self, cpy_r_symbol, cpy_r_typ, cpy_r_is_arg);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1208, CPyStatic_builder___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL3: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1209, CPyStatic_builder___globals);
        goto CPyL12;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1209, CPyStatic_builder___globals, "dict", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r3, cpy_r_symbol);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1209, CPyStatic_builder___globals);
        goto CPyL12;
    }
    if (Py_TYPE(cpy_r_r4) == CPyType_targets___AssignmentTargetRegister)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL9983;
    if (Py_TYPE(cpy_r_r4) == CPyType_targets___AssignmentTargetAttr)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL9983;
    CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1209, CPyStatic_builder___globals, "union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", cpy_r_r4);
    goto CPyL12;
__LL9983: ;
    cpy_r_target = cpy_r_r5;
    cpy_r_r6 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (cpy_r_r9) {
        goto CPyL10;
    } else
        goto CPyL14;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1210, CPyStatic_builder___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r11 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1211, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL12;
    }
    return cpy_r_r11;
CPyL12: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL14: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL8;
}

PyObject *CPyPy_builder___IRBuilder___add_local_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symbol", "typ", "is_arg", 0};
    static CPyArg_Parser parser = {"OO|O:add_local_reg", kwlist, 0};
    PyObject *obj_symbol;
    PyObject *obj_typ;
    PyObject *obj_is_arg = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_symbol, &obj_typ, &obj_is_arg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    char arg_is_arg;
    if (obj_is_arg == NULL) {
        arg_is_arg = 2;
    } else if (unlikely(!PyBool_Check(obj_is_arg))) {
        CPy_TypeError("bool", obj_is_arg); goto fail;
    } else
        arg_is_arg = obj_is_arg == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___add_local_reg(arg_self, arg_symbol, arg_typ, arg_is_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_local_reg", 1204, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add_self_to_env(PyObject *cpy_r_self, PyObject *cpy_r_cls) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_nodes___Var(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_self_to_env", 1218, CPyStatic_builder___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyDef_rtypes___RInstance(cpy_r_cls);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_self_to_env", 1218, CPyStatic_builder___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_self, cpy_r_r2, cpy_r_r3, 1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_self_to_env", 1218, CPyStatic_builder___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_builder___IRBuilder___add_self_to_env(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cls", 0};
    static CPyArg_Parser parser = {"O:add_self_to_env", kwlist, 0};
    PyObject *obj_cls;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___add_self_to_env(arg_self, arg_cls);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_self_to_env", 1213, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add_target(PyObject *cpy_r_self, PyObject *cpy_r_symbol, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_symtables;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_target", 1221, CPyStatic_builder___globals);
        goto CPyL4;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_target", 1221, CPyStatic_builder___globals, "dict", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = CPyDict_SetItem(cpy_r_r2, cpy_r_symbol, cpy_r_target);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_target", 1221, CPyStatic_builder___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_target);
    return cpy_r_target;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_builder___IRBuilder___add_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"symbol", "target", 0};
    static CPyArg_Parser parser = {"OO:add_target", kwlist, 0};
    PyObject *obj_symbol;
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_symbol, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    PyObject *arg_target;
    if (Py_TYPE(obj_target) == CPyType_targets___AssignmentTargetRegister)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL9984;
    if (Py_TYPE(obj_target) == CPyType_targets___AssignmentTargetAttr)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL9984;
    CPy_TypeError("union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", obj_target); 
    goto fail;
__LL9984: ;
    PyObject *retval = CPyDef_builder___IRBuilder___add_target(arg_self, arg_symbol, arg_target);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_target", 1220, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___type_to_rtype(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_mapper;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_r0, cpy_r_typ);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "type_to_rtype", 1225, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_builder___IRBuilder___type_to_rtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:type_to_rtype", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (PyObject_TypeCheck(obj_typ, CPyType_types___Type))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL9985;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL9985;
    CPy_TypeError("mypy.types.Type or None", obj_typ); 
    goto fail;
__LL9985: ;
    PyObject *retval = CPyDef_builder___IRBuilder___type_to_rtype(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "type_to_rtype", 1224, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___node_type(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_mypy_type;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r4 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "node_type", 1230, CPyStatic_builder___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r6 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyDict_Contains(cpy_r_r6, cpy_r_node);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "node_type", 1231, CPyStatic_builder___globals);
        goto CPyL15;
    }
    cpy_r_r9 = cpy_r_r7;
    cpy_r_r10 = cpy_r_r9 ^ 1;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r11 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "node_type", 1232, CPyStatic_builder___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL10: ;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL11: ;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_types;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r13, cpy_r_node);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "node_type", 1233, CPyStatic_builder___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "node_type", 1233, CPyStatic_builder___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL15;
    }
    cpy_r_mypy_type = cpy_r_r15;
    cpy_r_r16 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_self, cpy_r_mypy_type);
    CPy_DECREF(cpy_r_mypy_type);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "node_type", 1234, CPyStatic_builder___globals);
        goto CPyL15;
    }
    return cpy_r_r16;
CPyL15: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
}

PyObject *CPyPy_builder___IRBuilder___node_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:node_type", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___node_type(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "node_type", 1227, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___add_var_to_env_class(PyObject *cpy_r_self, PyObject *cpy_r_var, PyObject *cpy_r_rtype, PyObject *cpy_r_base, char cpy_r_reassign) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
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
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_attr_target;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    if (cpy_r_reassign != 2) goto CPyL2;
    cpy_r_reassign = 0;
CPyL2: ;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 6, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1241, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL3: ;
    cpy_r_r2 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r1)->_attributes;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1241, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL4: ;
    cpy_r_r3 = CPY_GET_ATTR_TRAIT(cpy_r_var, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1241, CPyStatic_builder___globals);
        goto CPyL31;
    }
CPyL5: ;
    cpy_r_r4 = CPyDict_SetItem(cpy_r_r2, cpy_r_r3, cpy_r_rtype);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1241, CPyStatic_builder___globals);
        goto CPyL30;
    }
    cpy_r_r6 = (PyObject *)CPyType_context___FuncInfo;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL10;
    CPy_INCREF(cpy_r_base);
    if (likely(Py_TYPE(cpy_r_base) == CPyType_context___FuncInfo))
        cpy_r_r10 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1242, CPyStatic_builder___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_base);
        goto CPyL30;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_context___FuncInfo, 10, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* curr_env_reg */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1242, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL9: ;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL13;
CPyL10: ;
    CPy_INCREF(cpy_r_base);
    if (likely((Py_TYPE(cpy_r_base) == CPyType_context___GeneratorClass) || (Py_TYPE(cpy_r_base) == CPyType_context___ImplicitClass)))
        cpy_r_r13 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1242, CPyStatic_builder___globals, "mypyc.irbuild.context.ImplicitClass", cpy_r_base);
        goto CPyL30;
    }
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_r13, CPyType_context___ImplicitClass, 3, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* curr_env_reg */
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1242, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL12: ;
    cpy_r_r12 = cpy_r_r14;
CPyL13: ;
    cpy_r_r15 = CPY_GET_ATTR_TRAIT(cpy_r_var, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1242, CPyStatic_builder___globals);
        goto CPyL32;
    }
CPyL14: ;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_targets___AssignmentTargetAttr(cpy_r_r12, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1242, CPyStatic_builder___globals);
        goto CPyL30;
    }
    cpy_r_attr_target = cpy_r_r17;
    if (!cpy_r_reassign) goto CPyL28;
    cpy_r_r18 = CPyDef_builder___IRBuilder___lookup(cpy_r_self, cpy_r_var);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1247, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_r19 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    cpy_r_r20 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r19)->_fitem;
    cpy_r_r21 = ((mypy___nodes___FuncItemObject *)cpy_r_r20)->_line;
    CPyTagged_INCREF(cpy_r_r21);
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___read(cpy_r_self, cpy_r_r18, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1247, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_reg = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_context___FuncInfo;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL22;
    CPy_INCREF(cpy_r_base);
    if (likely(Py_TYPE(cpy_r_base) == CPyType_context___FuncInfo))
        cpy_r_r28 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_base);
        goto CPyL34;
    }
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_r28, CPyType_context___FuncInfo, 10, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* curr_env_reg */
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals);
        goto CPyL34;
    }
CPyL21: ;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL25;
CPyL22: ;
    CPy_INCREF(cpy_r_base);
    if (likely((Py_TYPE(cpy_r_base) == CPyType_context___GeneratorClass) || (Py_TYPE(cpy_r_base) == CPyType_context___ImplicitClass)))
        cpy_r_r31 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals, "mypyc.irbuild.context.ImplicitClass", cpy_r_base);
        goto CPyL34;
    }
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_context___ImplicitClass, 3, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* curr_env_reg */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals);
        goto CPyL34;
    }
CPyL24: ;
    cpy_r_r30 = cpy_r_r32;
CPyL25: ;
    cpy_r_r33 = CPY_GET_ATTR_TRAIT(cpy_r_var, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals);
        goto CPyL35;
    }
CPyL26: ;
    cpy_r_r34 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_fn_info;
    cpy_r_r35 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r34)->_fitem;
    cpy_r_r36 = ((mypy___nodes___FuncItemObject *)cpy_r_r35)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_ops___SetAttr(cpy_r_r30, cpy_r_r33, cpy_r_reg, cpy_r_r36);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_reg);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals);
        goto CPyL33;
    }
    cpy_r_r38 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1248, CPyStatic_builder___globals);
        goto CPyL33;
    } else
        goto CPyL36;
CPyL28: ;
    cpy_r_r39 = CPyDef_builder___IRBuilder___add_target(cpy_r_self, cpy_r_var, cpy_r_attr_target);
    CPy_DECREF(cpy_r_attr_target);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1252, CPyStatic_builder___globals);
        goto CPyL30;
    }
    return cpy_r_r39;
CPyL30: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL31: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_attr_target);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_attr_target);
    CPy_DecRef(cpy_r_reg);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_attr_target);
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_r30);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL28;
}

PyObject *CPyPy_builder___IRBuilder___add_var_to_env_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"var", "rtype", "base", "reassign", 0};
    static CPyArg_Parser parser = {"OOO|O:add_var_to_env_class", kwlist, 0};
    PyObject *obj_var;
    PyObject *obj_rtype;
    PyObject *obj_base;
    PyObject *obj_reassign = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_var, &obj_rtype, &obj_base, &obj_reassign)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_var;
    if (likely(PyObject_TypeCheck(obj_var, CPyType_nodes___SymbolNode)))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_var); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_base;
    if (Py_TYPE(obj_base) == CPyType_context___FuncInfo)
        arg_base = obj_base;
    else {
        arg_base = NULL;
    }
    if (arg_base != NULL) goto __LL9986;
    if ((Py_TYPE(obj_base) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_base) == CPyType_context___ImplicitClass))
        arg_base = obj_base;
    else {
        arg_base = NULL;
    }
    if (arg_base != NULL) goto __LL9986;
    CPy_TypeError("union[mypyc.irbuild.context.FuncInfo, mypyc.irbuild.context.ImplicitClass]", obj_base); 
    goto fail;
__LL9986: ;
    char arg_reassign;
    if (obj_reassign == NULL) {
        arg_reassign = 2;
    } else if (unlikely(!PyBool_Check(obj_reassign))) {
        CPy_TypeError("bool", obj_reassign); goto fail;
    } else
        arg_reassign = obj_reassign == Py_True;
    PyObject *retval = CPyDef_builder___IRBuilder___add_var_to_env_class(arg_self, arg_var, arg_rtype, arg_base, arg_reassign);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "add_var_to_env_class", 1236, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_builtin_ref_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
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
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL22;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1255, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r0);
        goto CPyL21;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1255, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_AssertionError, "RefExpr not resolved");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1255, CPyStatic_builder___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_r11 = CPY_GET_ATTR_TRAIT(cpy_r_r10, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals);
        goto CPyL21;
    }
CPyL8: ;
    cpy_r_r12 = PySequence_Contains(cpy_r_r11, cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_r14 = cpy_r_r12;
    if (cpy_r_r14) goto CPyL11;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL20;
CPyL11: ;
    cpy_r_r16 = ((mypy___nodes___RefExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r16);
        goto CPyL21;
    }
    cpy_r_r18 = CPY_GET_ATTR_TRAIT(cpy_r_r17, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals);
        goto CPyL21;
    }
CPyL13: ;
    cpy_r_r19 = CPyStatics[224]; /* '.' */
    cpy_r_r20 = PyUnicode_Split(cpy_r_r18, cpy_r_r19, -1);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals);
        goto CPyL21;
    }
    cpy_r_r21 = CPyList_GetItemShort(cpy_r_r20, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals, "str", cpy_r_r21);
        goto CPyL21;
    }
    cpy_r_r23 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r24 = PyUnicode_Compare(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 == -1;
    if (!cpy_r_r25) goto CPyL19;
    cpy_r_r26 = PyErr_Occurred();
    cpy_r_r27 = cpy_r_r26 != NULL;
    if (!cpy_r_r27) goto CPyL19;
    cpy_r_r28 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1256, CPyStatic_builder___globals);
        goto CPyL21;
    }
CPyL19: ;
    cpy_r_r29 = cpy_r_r24 == 0;
    cpy_r_r15 = cpy_r_r29;
CPyL20: ;
    return cpy_r_r15;
CPyL21: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL22: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_builder___IRBuilder___is_builtin_ref_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_builtin_ref_expr", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely((Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_expr) == CPyType_nodes___RefExpr)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_builtin_ref_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_builtin_ref_expr", 1254, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_global(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = CPyDef_builder___IRBuilder___is_builtin_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1265, CPyStatic_builder___globals);
        goto CPyL30;
    }
    if (!cpy_r_r0) goto CPyL12;
    cpy_r_r1 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL31;
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r4 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "load_global", 1266, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r1);
        goto CPyL30;
    }
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1266, CPyStatic_builder___globals);
        goto CPyL30;
    }
    cpy_r_r7 = cpy_r_r5;
    if (cpy_r_r7) goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_AssertionError, "RefExpr not resolved");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1266, CPyStatic_builder___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "load_global", 1267, CPyStatic_builder___globals, "mypy.nodes.SymbolNode", cpy_r_r9);
        goto CPyL30;
    }
    cpy_r_r11 = CPY_GET_ATTR_TRAIT(cpy_r_r10, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1267, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL10: ;
    cpy_r_r12 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_self, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1267, CPyStatic_builder___globals);
        goto CPyL30;
    }
    return cpy_r_r13;
CPyL12: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___is_native_module_ref_expr(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1269, CPyStatic_builder___globals);
        goto CPyL30;
    }
    if (!cpy_r_r14) goto CPyL28;
    cpy_r_r15 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL17;
CPyL16: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    cpy_r_r20 = cpy_r_r24;
CPyL17: ;
    if (!cpy_r_r20) goto CPyL28;
    cpy_r_r25 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_node;
    CPy_INCREF(cpy_r_r25);
    if (likely((Py_TYPE(cpy_r_r25) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r25) == CPyType_nodes___TypeInfo)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "load_global", 1271, CPyStatic_builder___globals, "mypy.nodes.TypeInfo", cpy_r_r25);
        goto CPyL30;
    }
    cpy_r_r27 = CPyDef_builder___IRBuilder___is_synthetic_type(cpy_r_self, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1271, CPyStatic_builder___globals);
        goto CPyL30;
    }
    if (cpy_r_r27) goto CPyL28;
    cpy_r_r28 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1273, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL22: ;
    cpy_r_r29 = CPyStr_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (cpy_r_r29) goto CPyL25;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1273, CPyStatic_builder___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_expr, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1274, CPyStatic_builder___globals);
        goto CPyL30;
    }
CPyL26: ;
    cpy_r_r32 = CPyDef_builder___IRBuilder___load_native_type_object(cpy_r_self, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1274, CPyStatic_builder___globals);
        goto CPyL30;
    }
    return cpy_r_r32;
CPyL28: ;
    cpy_r_r33 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = ((mypy___nodes___NameExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_self, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1275, CPyStatic_builder___globals);
        goto CPyL30;
    }
    return cpy_r_r35;
CPyL30: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL31: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_builder___IRBuilder___load_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:load_global", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___NameExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_global(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global", 1258, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_global_str(PyObject *cpy_r_self, PyObject *cpy_r_name, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r__globals;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global_str", 1278, CPyStatic_builder___globals);
        goto CPyL7;
    }
    cpy_r__globals = cpy_r_r0;
    cpy_r_r1 = CPyDef_builder___IRBuilder___load_str(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global_str", 1279, CPyStatic_builder___globals);
        goto CPyL8;
    }
    cpy_r_reg = cpy_r_r1;
    cpy_r_r2 = CPyStatic_builder___globals;
    cpy_r_r3 = CPyStatics[8059]; /* 'dict_get_item_op' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global_str", 1280, CPyStatic_builder___globals);
        goto CPyL9;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "load_global_str", 1280, CPyStatic_builder___globals, "tuple", cpy_r_r4);
        goto CPyL9;
    }
    cpy_r_r6 = PyList_New(2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global_str", 1280, CPyStatic_builder___globals);
        goto CPyL10;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r__globals;
    cpy_r_r9 = cpy_r_r8 + 8;
    *(PyObject * *)cpy_r_r9 = cpy_r_reg;
    cpy_r_r10 = CPyDef_builder___IRBuilder___call_c(cpy_r_self, cpy_r_r5, cpy_r_r6, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global_str", 1280, CPyStatic_builder___globals);
        goto CPyL7;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r__globals);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r__globals);
    CPy_DecRef(cpy_r_reg);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r__globals);
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_builder___IRBuilder___load_global_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "line", 0};
    static CPyArg_Parser parser = {"OO:load_global_str", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_global_str(arg_self, arg_name, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_global_str", 1277, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_globals_dict(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_globals_dict", 1283, CPyStatic_builder___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyStatics[1109]; /* 'globals' */
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "load_globals_dict", "IRBuilder", "module_name", 1283, CPyStatic_builder___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_ops___LoadStatic(cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_globals_dict", 1283, CPyStatic_builder___globals);
        goto CPyL7;
    }
    cpy_r_r8 = CPyDef_builder___IRBuilder___add(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_globals_dict", 1283, CPyStatic_builder___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_builder___IRBuilder___load_globals_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":load_globals_dict", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_globals_dict(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_globals_dict", 1282, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___load_module_attr_by_fullname(PyObject *cpy_r_self, PyObject *cpy_r_fullname, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3OOO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r7;
    PyObject *cpy_r__;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[224]; /* '.' */
    cpy_r_r1 = CPyStatics[5576]; /* 'rpartition' */
    PyObject *cpy_r_r2[2] = {cpy_r_fullname, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module_attr_by_fullname", 1286, CPyStatic_builder___globals);
        goto CPyL5;
    }
    PyObject *__tmp9987;
    if (unlikely(!(PyTuple_Check(cpy_r_r4) && PyTuple_GET_SIZE(cpy_r_r4) == 3))) {
        __tmp9987 = NULL;
        goto __LL9988;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 0))))
        __tmp9987 = PyTuple_GET_ITEM(cpy_r_r4, 0);
    else {
        __tmp9987 = NULL;
    }
    if (__tmp9987 == NULL) goto __LL9988;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 1))))
        __tmp9987 = PyTuple_GET_ITEM(cpy_r_r4, 1);
    else {
        __tmp9987 = NULL;
    }
    if (__tmp9987 == NULL) goto __LL9988;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 2))))
        __tmp9987 = PyTuple_GET_ITEM(cpy_r_r4, 2);
    else {
        __tmp9987 = NULL;
    }
    if (__tmp9987 == NULL) goto __LL9988;
    __tmp9987 = cpy_r_r4;
__LL9988: ;
    if (unlikely(__tmp9987 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r4); cpy_r_r5 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp9989 = PyTuple_GET_ITEM(cpy_r_r4, 0);
        CPy_INCREF(__tmp9989);
        PyObject *__tmp9990;
        if (likely(PyUnicode_Check(__tmp9989)))
            __tmp9990 = __tmp9989;
        else {
            CPy_TypeError("str", __tmp9989); 
            __tmp9990 = NULL;
        }
        cpy_r_r5.f0 = __tmp9990;
        PyObject *__tmp9991 = PyTuple_GET_ITEM(cpy_r_r4, 1);
        CPy_INCREF(__tmp9991);
        PyObject *__tmp9992;
        if (likely(PyUnicode_Check(__tmp9991)))
            __tmp9992 = __tmp9991;
        else {
            CPy_TypeError("str", __tmp9991); 
            __tmp9992 = NULL;
        }
        cpy_r_r5.f1 = __tmp9992;
        PyObject *__tmp9993 = PyTuple_GET_ITEM(cpy_r_r4, 2);
        CPy_INCREF(__tmp9993);
        PyObject *__tmp9994;
        if (likely(PyUnicode_Check(__tmp9993)))
            __tmp9994 = __tmp9993;
        else {
            CPy_TypeError("str", __tmp9993); 
            __tmp9994 = NULL;
        }
        cpy_r_r5.f2 = __tmp9994;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module_attr_by_fullname", 1286, CPyStatic_builder___globals);
        goto CPyL5;
    }
    cpy_r_r6 = cpy_r_r5.f0;
    CPy_INCREF(cpy_r_r6);
    cpy_r_module = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f1;
    CPy_INCREF(cpy_r_r7);
    cpy_r__ = cpy_r_r7;
    CPy_DECREF(cpy_r__);
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f0);
    CPy_DECREF(cpy_r_r5.f1);
    CPy_DECREF(cpy_r_r5.f2);
    cpy_r_name = cpy_r_r8;
    cpy_r_r9 = CPyDef_builder___IRBuilder___load_module(cpy_r_self, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module_attr_by_fullname", 1287, CPyStatic_builder___globals);
        goto CPyL6;
    }
    cpy_r_left = cpy_r_r9;
    cpy_r_r10 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_self, cpy_r_left, cpy_r_name, cpy_r_line);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module_attr_by_fullname", 1288, CPyStatic_builder___globals);
        goto CPyL5;
    }
    return cpy_r_r10;
CPyL5: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL6: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL5;
}

PyObject *CPyPy_builder___IRBuilder___load_module_attr_by_fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", "line", 0};
    static CPyArg_Parser parser = {"OO:load_module_attr_by_fullname", kwlist, 0};
    PyObject *obj_fullname;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fullname, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(arg_self, arg_fullname, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "load_module_attr_by_fullname", 1285, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___is_native_attr_ref(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_obj_rtype;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1292, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_obj_rtype = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_obj_rtype)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL3;
    } else
        goto CPyL18;
CPyL2: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL16;
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_obj_rtype) == CPyType_rtypes___RInstance))
        cpy_r_r7 = cpy_r_obj_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1295, CPyStatic_builder___globals, "mypyc.ir.rtypes.RInstance", cpy_r_obj_rtype);
        goto CPyL19;
    }
    cpy_r_r8 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r7)->_class_ir;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r8)->_is_ext_class;
    if (cpy_r_r9) {
        goto CPyL6;
    } else
        goto CPyL20;
CPyL5: ;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL15;
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_obj_rtype) == CPyType_rtypes___RInstance))
        cpy_r_r11 = cpy_r_obj_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1296, CPyStatic_builder___globals, "mypyc.ir.rtypes.RInstance", cpy_r_obj_rtype);
        goto CPyL19;
    }
    cpy_r_r12 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r11)->_class_ir;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_class_ir___ClassIR___has_attr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1296, CPyStatic_builder___globals);
        goto CPyL19;
    }
    if (cpy_r_r14) {
        goto CPyL10;
    } else
        goto CPyL21;
CPyL9: ;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL14;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_obj_rtype) == CPyType_rtypes___RInstance))
        cpy_r_r16 = cpy_r_obj_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1297, CPyStatic_builder___globals, "mypyc.ir.rtypes.RInstance", cpy_r_obj_rtype);
        goto CPyL19;
    }
    cpy_r_r17 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r16)->_class_ir;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_obj_rtype);
    cpy_r_r18 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_class_ir___ClassIR___get_method(cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1297, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r21 = PyObject_Not(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1297, CPyStatic_builder___globals);
        goto CPyL17;
    }
    cpy_r_r23 = cpy_r_r21;
    cpy_r_r15 = cpy_r_r23;
CPyL14: ;
    cpy_r_r10 = cpy_r_r15;
CPyL15: ;
    cpy_r_r6 = cpy_r_r10;
CPyL16: ;
    return cpy_r_r6;
CPyL17: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL18: ;
    CPy_DECREF(cpy_r_obj_rtype);
    goto CPyL2;
CPyL19: ;
    CPy_DecRef(cpy_r_obj_rtype);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_obj_rtype);
    goto CPyL5;
CPyL21: ;
    CPy_DECREF(cpy_r_obj_rtype);
    goto CPyL9;
}

PyObject *CPyPy_builder___IRBuilder___is_native_attr_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_native_attr_ref", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_builder___IRBuilder___is_native_attr_ref(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "is_native_attr_ref", 1290, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___IRBuilder___catch_errors(PyObject *cpy_r_self, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "catch_errors", "IRBuilder", "module_path", 1302, CPyStatic_builder___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic_builder___globals;
    cpy_r_r2 = CPyStatics[7743]; /* 'catch_errors' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "catch_errors", 1302, CPyStatic_builder___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_line);
    PyObject *cpy_r_r5[2] = {cpy_r_r0, cpy_r_r4};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "catch_errors", 1302, CPyStatic_builder___globals);
        goto CPyL6;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL4;
}

PyObject *CPyPy_builder___IRBuilder___catch_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", 0};
    static CPyArg_Parser parser = {"O:catch_errors", kwlist, 0};
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_builder___IRBuilder___catch_errors(arg_self, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "catch_errors", 1301, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___warning(PyObject *cpy_r_self, PyObject *cpy_r_msg, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "warning", "IRBuilder", "module_path", 1305, CPyStatic_builder___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyDef_mypyc___errors___Errors___warning(cpy_r_r0, cpy_r_msg, cpy_r_r1, cpy_r_line);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "warning", 1305, CPyStatic_builder___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_builder___IRBuilder___warning(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "line", 0};
    static CPyArg_Parser parser = {"OO:warning", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
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
    char retval = CPyDef_builder___IRBuilder___warning(arg_self, arg_msg, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "warning", 1304, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___error(PyObject *cpy_r_self, PyObject *cpy_r_msg, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "error", "IRBuilder", "module_path", 1308, CPyStatic_builder___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyDef_mypyc___errors___Errors___error(cpy_r_r0, cpy_r_msg, cpy_r_r1, cpy_r_line);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "error", 1308, CPyStatic_builder___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_builder___IRBuilder___error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "line", 0};
    static CPyArg_Parser parser = {"OO:error", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
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
    char retval = CPyDef_builder___IRBuilder___error(arg_self, arg_msg, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "error", 1307, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___IRBuilder___note(PyObject *cpy_r_self, PyObject *cpy_r_msg, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_module_path;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "note", "IRBuilder", "module_path", 1311, CPyStatic_builder___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyDef_mypyc___errors___Errors___note(cpy_r_r0, cpy_r_msg, cpy_r_r1, cpy_r_line);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "note", 1311, CPyStatic_builder___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_builder___IRBuilder___note(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "line", 0};
    static CPyArg_Parser parser = {"OO:note", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
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
    char retval = CPyDef_builder___IRBuilder___note(arg_self, arg_msg, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "note", 1310, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___get_default_gen_arg_defaults_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_builder___get_default_gen_arg_defaults_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_builder___get_default_gen_arg_defaults_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "__get__", -1, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___get_default_gen_arg_defaults_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_get_default;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    cpy_r_r0 = ((mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "get_default_gen_arg_defaults_obj", "__mypyc_env__", 1326, CPyStatic_builder___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_get_default;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "get_default", -1, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_get_default = cpy_r_r1;
    CPy_DECREF(cpy_r_get_default);
    cpy_r_r2 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "arg", 1327, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___ArgumentObject *)cpy_r_r2)->_initializer;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r5) {
        goto CPyL6;
    } else
        goto CPyL66;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1327, CPyStatic_builder___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r7 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "arg", 1330, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r7);
CPyL7: ;
    cpy_r_r8 = ((mypy___nodes___ArgumentObject *)cpy_r_r7)->_initializer;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1330, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL65;
    }
    cpy_r_r10 = CPyDef_irbuild___util___is_constant(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1330, CPyStatic_builder___globals);
        goto CPyL65;
    }
    if (!cpy_r_r10) goto CPyL16;
    cpy_r_r11 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1331, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r12 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'arg' of 'gen_arg_defaults_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1331, CPyStatic_builder___globals);
        goto CPyL67;
    }
CPyL12: ;
    cpy_r_r13 = ((mypy___nodes___ArgumentObject *)cpy_r_r12)->_initializer;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1331, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL67;
    }
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_builder___IRBuilder___accept(cpy_r_r11, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1331, CPyStatic_builder___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1331, CPyStatic_builder___globals, "mypyc.ir.ops.Value", cpy_r_r16);
        goto CPyL64;
    }
    return cpy_r_r17;
CPyL16: ;
    cpy_r_r18 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1335, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r18);
CPyL17: ;
    cpy_r_r19 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r18)->_fn_info;
    cpy_r_r20 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r19)->_is_nested;
    CPy_DECREF(cpy_r_r18);
    if (cpy_r_r20) goto CPyL44;
CPyL18: ;
    cpy_r_r21 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_fitem;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "fitem", 1336, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r21);
CPyL19: ;
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_r21, CPyType_nodes___FuncItem, 7, mypy___nodes___FuncItemObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1336, CPyStatic_builder___globals);
        goto CPyL65;
    }
CPyL20: ;
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = PyUnicode_Concat(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1336, CPyStatic_builder___globals);
        goto CPyL65;
    }
    cpy_r_r25 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "arg", 1336, CPyStatic_builder___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r25);
CPyL22: ;
    cpy_r_r26 = ((mypy___nodes___ArgumentObject *)cpy_r_r25)->_variable;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = CPY_GET_ATTR(cpy_r_r26, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1336, CPyStatic_builder___globals);
        goto CPyL68;
    }
CPyL23: ;
    cpy_r_r28 = PyUnicode_Concat(cpy_r_r24, cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1336, CPyStatic_builder___globals);
        goto CPyL65;
    }
    cpy_r_name = cpy_r_r28;
    cpy_r_r29 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1337, CPyStatic_builder___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r29);
CPyL25: ;
    cpy_r_r30 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r29)->_final_names;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "target", 1337, CPyStatic_builder___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r31);
CPyL26: ;
    cpy_r_r32 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_r31)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r36 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1337, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r31);
        goto CPyL70;
    }
    cpy_r_r37 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r36)->_type;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37;
    goto CPyL31;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r39 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1337, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_r31);
        goto CPyL70;
    }
    cpy_r_r40 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r39)->_type;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r38 = cpy_r_r40;
CPyL31: ;
    cpy_r_r41.f0 = cpy_r_name;
    cpy_r_r41.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9995 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp9995);
    PyObject *__tmp9996 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp9996);
    cpy_r_r43 = PyList_Append(cpy_r_r30, cpy_r_r42);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1337, CPyStatic_builder___globals);
        goto CPyL69;
    }
    cpy_r_r45 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1338, CPyStatic_builder___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r45);
CPyL33: ;
    cpy_r_r46 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "target", 1338, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r46);
CPyL34: ;
    cpy_r_r47 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_r46)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r51 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1338, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r46);
        goto CPyL71;
    }
    cpy_r_r52 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r51)->_type;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52;
    goto CPyL39;
CPyL37: ;
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r54 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1338, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_r46);
        goto CPyL71;
    }
    cpy_r_r55 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r54)->_type;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r53 = cpy_r_r55;
CPyL39: ;
    cpy_r_r56 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r56 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'gen_arg_defaults_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r56);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1338, CPyStatic_builder___globals);
        goto CPyL72;
    }
CPyL40: ;
    cpy_r_r57 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r56)->_module_name;
    if (unlikely(cpy_r_r57 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'module_name' of 'IRBuilder' undefined");
    } else {
        CPy_INCREF(cpy_r_r57);
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1338, CPyStatic_builder___globals);
        goto CPyL72;
    }
CPyL41: ;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_ops___LoadStatic(cpy_r_r53, cpy_r_name, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1338, CPyStatic_builder___globals);
        goto CPyL73;
    }
    cpy_r_r62 = CPyDef_builder___IRBuilder___add(cpy_r_r45, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1338, CPyStatic_builder___globals);
        goto CPyL64;
    }
    return cpy_r_r62;
CPyL44: ;
    cpy_r_r63 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "arg", 1340, CPyStatic_builder___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r63);
CPyL45: ;
    cpy_r_r64 = ((mypy___nodes___ArgumentObject *)cpy_r_r63)->_variable;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = CPY_GET_ATTR(cpy_r_r64, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1340, CPyStatic_builder___globals);
        goto CPyL65;
    }
CPyL46: ;
    cpy_r_name = cpy_r_r65;
    cpy_r_r66 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "target", 1341, CPyStatic_builder___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r66);
CPyL47: ;
    cpy_r_r67 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_r66)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (!cpy_r_r70) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r71 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1341, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r66);
        goto CPyL69;
    }
    cpy_r_r72 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r71)->_type;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72;
    goto CPyL52;
CPyL50: ;
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r74 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_default", 1341, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_r66);
        goto CPyL69;
    }
    cpy_r_r75 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r74)->_type;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r73 = cpy_r_r75;
CPyL52: ;
    cpy_r_r76 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1341, CPyStatic_builder___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r76);
CPyL53: ;
    cpy_r_r77 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r76)->_fn_info;
    CPy_INCREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = CPY_GET_ATTR(cpy_r_r77, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1341, CPyStatic_builder___globals);
        goto CPyL74;
    }
CPyL54: ;
    cpy_r_r79 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r78)->_ir;
    cpy_r_r80 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r79)->_attributes;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "ClassIR", "attributes", 1341, CPyStatic_builder___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r80);
CPyL55: ;
    CPy_DECREF(cpy_r_r78);
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r80, cpy_r_name, cpy_r_r73);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1341, CPyStatic_builder___globals);
        goto CPyL69;
    }
    cpy_r_r83 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1342, CPyStatic_builder___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r83);
CPyL57: ;
    cpy_r_r84 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "get_default", "gen_arg_defaults_env", "builder", 1343, CPyStatic_builder___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r84);
CPyL58: ;
    cpy_r_r85 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r84)->_fn_info;
    CPy_INCREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = CPY_GET_ATTR(cpy_r_r85, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1343, CPyStatic_builder___globals);
        goto CPyL76;
    }
CPyL59: ;
    cpy_r_r87 = CPY_GET_ATTR(cpy_r_r86, CPyType_context___ImplicitClass, 1, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* self_reg */
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1343, CPyStatic_builder___globals);
        goto CPyL76;
    }
CPyL60: ;
    cpy_r_r88 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r88 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'arg' of 'gen_arg_defaults_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r88);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1343, CPyStatic_builder___globals);
        goto CPyL77;
    }
CPyL61: ;
    cpy_r_r89 = ((mypy___nodes___ArgumentObject *)cpy_r_r88)->_line;
    CPyTagged_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = 2;
    cpy_r_r91 = CPyDef_ops___GetAttr(cpy_r_r87, cpy_r_name, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1343, CPyStatic_builder___globals);
        goto CPyL78;
    }
    cpy_r_r92 = CPyDef_builder___IRBuilder___add(cpy_r_r83, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1342, CPyStatic_builder___globals);
        goto CPyL64;
    }
    return cpy_r_r92;
CPyL64: ;
    cpy_r_r93 = NULL;
    return cpy_r_r93;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL64;
CPyL66: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL67: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    goto CPyL64;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r30);
    goto CPyL64;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r45);
    goto CPyL64;
CPyL72: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r53);
    goto CPyL64;
CPyL73: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL64;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r73);
    goto CPyL64;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r78);
    goto CPyL64;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r83);
    goto CPyL64;
CPyL77: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r87);
    goto CPyL64;
CPyL78: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL64;
}

PyObject *CPyPy_builder___get_default_gen_arg_defaults_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_builder___get_default_gen_arg_defaults_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_default", 1326, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder___gen_arg_defaults(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_nb;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = CPyDef_builder___gen_arg_defaults_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1314, CPyStatic_builder___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1314, CPyStatic_builder___globals);
        goto CPyL46;
    }
    cpy_r_r2 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "builder", 1320, CPyStatic_builder___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r2)->_fn_info;
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r3)->_fitem;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_fitem != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_fitem);
    }
    ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_fitem = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1320, CPyStatic_builder___globals);
        goto CPyL46;
    }
    cpy_r_nb = 0;
    cpy_r_r6 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_fitem;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "fitem", 1322, CPyStatic_builder___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = ((mypy___nodes___FuncItemObject *)cpy_r_r6)->_arguments;
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'arguments' of 'FuncItem' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1322, CPyStatic_builder___globals);
        goto CPyL47;
    }
CPyL6: ;
    cpy_r_r8 = 0;
CPyL7: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL48;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_nodes___Argument))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1322, CPyStatic_builder___globals, "mypy.nodes.Argument", cpy_r_r13);
        goto CPyL49;
    }
    if (((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg);
    }
    ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1322, CPyStatic_builder___globals);
        goto CPyL49;
    }
    cpy_r_r16 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "arg", 1323, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = ((mypy___nodes___ArgumentObject *)cpy_r_r16)->_initializer;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    CPy_DECREF(cpy_r_r17);
    if (!cpy_r_r19) goto CPyL43;
    cpy_r_r20 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "builder", 1324, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r20);
CPyL13: ;
    cpy_r_r21 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "arg", 1324, CPyStatic_builder___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r21);
CPyL14: ;
    cpy_r_r22 = ((mypy___nodes___ArgumentObject *)cpy_r_r21)->_variable;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = CPyDef_builder___IRBuilder___lookup(cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1324, CPyStatic_builder___globals);
        goto CPyL49;
    }
    if (((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target);
    }
    ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1324, CPyStatic_builder___globals);
        goto CPyL49;
    }
    cpy_r_r25 = CPyDef_builder___get_default_gen_arg_defaults_obj();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1326, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *)cpy_r_r25)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *)cpy_r_r25)->___mypyc_env__);
    }
    ((mypyc___irbuild___builder___get_default_gen_arg_defaults_objObject *)cpy_r_r25)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1326, CPyStatic_builder___globals);
        goto CPyL51;
    }
    if (((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_get_default != NULL) {
        CPy_DECREF(((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_get_default);
    }
    ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_get_default = cpy_r_r25;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1326, CPyStatic_builder___globals);
        goto CPyL49;
    }
    cpy_r_r28 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "target", 1346, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r28);
CPyL20: ;
    cpy_r_r29 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    CPy_DECREF(cpy_r_r28);
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (cpy_r_r32) {
        goto CPyL23;
    } else
        goto CPyL52;
CPyL21: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1346, CPyStatic_builder___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r34 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "target", 1347, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r34);
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1347, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r34);
        goto CPyL53;
    }
    cpy_r_r36 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r35)->_register;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    cpy_r_reg = cpy_r_r36;
    cpy_r_r37 = ((mypyc___ir___ops___RegisterObject *)cpy_r_reg)->_type;
    cpy_r_r38 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r37)->_error_overlap;
    CPy_DECREF(cpy_r_reg);
    if (cpy_r_r38) goto CPyL34;
CPyL26: ;
    cpy_r_r39 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "builder", 1349, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r39);
CPyL27: ;
    cpy_r_r40 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "target", 1349, CPyStatic_builder___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r40);
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1349, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r40);
        goto CPyL55;
    }
    cpy_r_r42 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r41)->_register;
    CPy_INCREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_get_default;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "get_default", 1349, CPyStatic_builder___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r43);
CPyL30: ;
    cpy_r_r44 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "arg", 1349, CPyStatic_builder___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r44);
CPyL31: ;
    cpy_r_r45 = ((mypy___nodes___ArgumentObject *)cpy_r_r44)->_initializer;
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1349, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r45);
        goto CPyL58;
    }
    cpy_r_r47 = ((mypy___nodes___ContextObject *)cpy_r_r46)->_line;
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "Expression", "line", 1349, CPyStatic_builder___globals);
        goto CPyL58;
    }
    CPyTagged_INCREF(cpy_r_r47);
CPyL33: ;
    CPy_DECREF(cpy_r_r44);
    cpy_r_r48 = CPyDef_builder___IRBuilder___assign_if_null(cpy_r_r39, cpy_r_r42, cpy_r_r43, cpy_r_r47);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1349, CPyStatic_builder___globals);
        goto CPyL49;
    } else
        goto CPyL43;
CPyL34: ;
    cpy_r_r49 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "builder", 1351, CPyStatic_builder___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r49);
CPyL35: ;
    cpy_r_r50 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "target", 1352, CPyStatic_builder___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r50);
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1352, CPyStatic_builder___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r50);
        goto CPyL60;
    }
    cpy_r_r52 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r51)->_register;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r53 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_get_default;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "get_default", 1352, CPyStatic_builder___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r53);
CPyL38: ;
    cpy_r_r54 = ((mypyc___irbuild___builder___gen_arg_defaults_envObject *)cpy_r_r0)->_arg;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "gen_arg_defaults_env", "arg", 1352, CPyStatic_builder___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r54);
CPyL39: ;
    cpy_r_r55 = ((mypy___nodes___ArgumentObject *)cpy_r_r54)->_initializer;
    if (likely(cpy_r_r55 != Py_None))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1352, CPyStatic_builder___globals, "mypy.nodes.Expression", cpy_r_r55);
        goto CPyL63;
    }
    cpy_r_r57 = ((mypy___nodes___ContextObject *)cpy_r_r56)->_line;
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/builder.py", "gen_arg_defaults", "Expression", "line", 1352, CPyStatic_builder___globals);
        goto CPyL63;
    }
    CPyTagged_INCREF(cpy_r_r57);
CPyL41: ;
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = CPyDef_builder___IRBuilder___assign_if_bitmap_unset(cpy_r_r49, cpy_r_r52, cpy_r_r53, cpy_r_nb, cpy_r_r57);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1351, CPyStatic_builder___globals);
        goto CPyL49;
    }
    cpy_r_r59 = CPyTagged_Add(cpy_r_nb, 2);
    CPyTagged_DECREF(cpy_r_nb);
    cpy_r_nb = cpy_r_r59;
CPyL43: ;
    cpy_r_r60 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r60;
    goto CPyL7;
CPyL44: ;
    return 1;
CPyL45: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    goto CPyL45;
CPyL48: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_nb);
    CPy_DECREF(cpy_r_r7);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r20);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r25);
    goto CPyL45;
CPyL52: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_nb);
    CPy_DECREF(cpy_r_r7);
    goto CPyL21;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r34);
    goto CPyL45;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r39);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    goto CPyL45;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL45;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    goto CPyL45;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL45;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r49);
    goto CPyL45;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    goto CPyL45;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    goto CPyL45;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    goto CPyL45;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL45;
}

PyObject *CPyPy_builder___gen_arg_defaults(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:gen_arg_defaults", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_builder___gen_arg_defaults(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "gen_arg_defaults", 1314, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___remangle_redefinition_name(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[385]; /* "'" */
    cpy_r_r1 = CPyStatics[8078]; /* '__redef__' */
    cpy_r_r2 = PyUnicode_Replace(cpy_r_name, cpy_r_r0, cpy_r_r1, -1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "remangle_redefinition_name", 1365, CPyStatic_builder___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_builder___remangle_redefinition_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:remangle_redefinition_name", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___remangle_redefinition_name(arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "remangle_redefinition_name", 1357, CPyStatic_builder___globals);
    return NULL;
}

PyObject *CPyDef_builder___get_call_target_fullname(PyObject *cpy_r_ref) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___RefExprObject *)cpy_r_ref)->_node;
    cpy_r_r1 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___nodes___RefExprObject *)cpy_r_ref)->_node;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___TypeAlias))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1371, CPyStatic_builder___globals, "mypy.nodes.TypeAlias", cpy_r_r5);
        goto CPyL10;
    }
    cpy_r_r7 = ((mypy___nodes___TypeAliasObject *)cpy_r_r6)->_target;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_types___get_proper_type(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1371, CPyStatic_builder___globals);
        goto CPyL10;
    }
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1371, CPyStatic_builder___globals, "mypy.types.ProperType", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_target = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_types___Instance;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_types___Instance))
        cpy_r_r14 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1373, CPyStatic_builder___globals, "mypy.types.Instance", cpy_r_target);
        goto CPyL12;
    }
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_r14)->_type;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_target);
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1373, CPyStatic_builder___globals);
        goto CPyL10;
    }
CPyL7: ;
    return cpy_r_r16;
CPyL8: ;
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_ref, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1374, CPyStatic_builder___globals);
        goto CPyL10;
    }
CPyL9: ;
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL11: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL10;
}

PyObject *CPyPy_builder___get_call_target_fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ref", 0};
    static CPyArg_Parser parser = {"O:get_call_target_fullname", kwlist, 0};
    PyObject *obj_ref;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ref)) {
        return NULL;
    }
    PyObject *arg_ref;
    if (likely((Py_TYPE(obj_ref) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_ref) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_ref) == CPyType_nodes___RefExpr)))
        arg_ref = obj_ref;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_ref); 
        goto fail;
    }
    PyObject *retval = CPyDef_builder___get_call_target_fullname(arg_ref);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/builder.py", "get_call_target_fullname", 1368, CPyStatic_builder___globals);
    return NULL;
}

char CPyDef_builder_____top_level__(void) {
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
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
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
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
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
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    int32_t cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    tuple_T2OO cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    int32_t cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    int32_t cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject **cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    int32_t cpy_r_r263;
    char cpy_r_r264;
    char cpy_r_r265;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", -1, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_builder___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 13, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_builder___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 15, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10035]; /* ('Any', 'Callable', 'Final', 'Iterator', 'Sequence',
                                      'Union') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_builder___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 16, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9447]; /* ('overload',) */
    cpy_r_r18 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r19 = CPyStatic_builder___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 17, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_typing_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10036]; /* ('Graph',) */
    cpy_r_r22 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r23 = CPyStatic_builder___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 19, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypy___build = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r26 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r27 = CPyStatic_builder___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 20, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypy___maptype = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10037]; /* ('ARG_NAMED', 'ARG_POS', 'GDEF', 'LDEF', 'ArgKind',
                                      'CallExpr', 'Decorator', 'Expression', 'FuncDef',
                                      'IndexExpr', 'IntExpr', 'Lvalue', 'MemberExpr',
                                      'MypyFile', 'NameExpr', 'OpExpr', 'OverloadedFuncDef',
                                      'RefExpr', 'StarExpr', 'Statement', 'SymbolNode',
                                      'TupleExpr', 'TypeAlias', 'TypeInfo', 'UnaryExpr',
                                      'Var') */
    cpy_r_r30 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r31 = CPyStatic_builder___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 21, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypy___nodes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10038]; /* ('AnyType', 'DeletedType', 'Instance', 'ProperType',
                                      'TupleType', 'Type', 'TypedDictType', 'TypeOfAny',
                                      'UninhabitedType', 'UnionType', 'get_proper_type') */
    cpy_r_r34 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r35 = CPyStatic_builder___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 49, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypy___types = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9840]; /* ('split_target',) */
    cpy_r_r38 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r39 = CPyStatic_builder___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 62, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypy___util = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10039]; /* ('ExpressionVisitor', 'StatementVisitor') */
    cpy_r_r42 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r43 = CPyStatic_builder___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 63, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypy___visitor = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10040]; /* ('BITMAP_BITS', 'SELF_NAME', 'TEMP_ATTR_NAME') */
    cpy_r_r46 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r47 = CPyStatic_builder___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 64, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___common = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10041]; /* ('catch_errors',) */
    cpy_r_r50 = CPyStatics[8079]; /* 'mypyc.crash' */
    cpy_r_r51 = CPyStatic_builder___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 65, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___crash = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___crash);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r54 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r55 = CPyStatic_builder___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 66, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___errors = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___errors);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[10042]; /* ('ClassIR', 'NonExtClassInfo') */
    cpy_r_r58 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r59 = CPyStatic_builder___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 67, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r60;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[10043]; /* ('INVALID_FUNC_DEF', 'FuncDecl', 'FuncIR',
                                      'FuncSignature', 'RuntimeArg') */
    cpy_r_r62 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r63 = CPyStatic_builder___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 68, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r64;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[10044]; /* ('NAMESPACE_MODULE', 'Assign', 'BasicBlock', 'Branch',
                                      'ComparisonOp', 'GetAttr', 'InitStatic', 'Integer',
                                      'IntOp', 'LoadStatic', 'Op', 'RaiseStandardError',
                                      'Register', 'SetAttr', 'TupleGet', 'Unreachable',
                                      'Value') */
    cpy_r_r66 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r67 = CPyStatic_builder___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 69, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r68;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[10045]; /* ('RInstance', 'RTuple', 'RType', 'RUnion',
                                      'bitmap_rprimitive', 'c_pyssize_t_rprimitive',
                                      'dict_rprimitive', 'int_rprimitive',
                                      'is_float_rprimitive', 'is_list_rprimitive',
                                      'is_none_rprimitive', 'is_object_rprimitive',
                                      'is_tagged', 'is_tuple_rprimitive', 'none_rprimitive',
                                      'object_rprimitive', 'str_rprimitive') */
    cpy_r_r70 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r71 = CPyStatic_builder___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 88, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r72;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[10046]; /* ('FuncInfo', 'ImplicitClass') */
    cpy_r_r74 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r75 = CPyStatic_builder___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 107, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___context = cpy_r_r76;
    CPy_INCREF(CPyModule_mypyc___irbuild___context);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[10047]; /* ('LowLevelIRBuilder',) */
    cpy_r_r78 = CPyStatics[8084]; /* 'mypyc.irbuild.ll_builder' */
    cpy_r_r79 = CPyStatic_builder___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 108, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___ll_builder = cpy_r_r80;
    CPy_INCREF(CPyModule_mypyc___irbuild___ll_builder);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyStatics[9984]; /* ('Mapper',) */
    cpy_r_r82 = CPyStatics[7560]; /* 'mypyc.irbuild.mapper' */
    cpy_r_r83 = CPyStatic_builder___globals;
    cpy_r_r84 = CPyImport_ImportFromMany(cpy_r_r82, cpy_r_r81, cpy_r_r81, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 109, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___mapper = cpy_r_r84;
    CPy_INCREF(CPyModule_mypyc___irbuild___mapper);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[10048]; /* ('BaseNonlocalControl', 'GeneratorNonlocalControl',
                                      'LoopNonlocalControl', 'NonlocalControl') */
    cpy_r_r86 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r87 = CPyStatic_builder___globals;
    cpy_r_r88 = CPyImport_ImportFromMany(cpy_r_r86, cpy_r_r85, cpy_r_r85, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 110, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___nonlocalcontrol = cpy_r_r88;
    CPy_INCREF(CPyModule_mypyc___irbuild___nonlocalcontrol);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r89 = CPyStatics[10049]; /* ('PreBuildVisitor',) */
    cpy_r_r90 = CPyStatics[8091]; /* 'mypyc.irbuild.prebuildvisitor' */
    cpy_r_r91 = CPyStatic_builder___globals;
    cpy_r_r92 = CPyImport_ImportFromMany(cpy_r_r90, cpy_r_r89, cpy_r_r89, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 116, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___prebuildvisitor = cpy_r_r92;
    CPy_INCREF(CPyModule_mypyc___irbuild___prebuildvisitor);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r93 = CPyStatics[10050]; /* ('RegisterImplInfo',) */
    cpy_r_r94 = CPyStatics[7562]; /* 'mypyc.irbuild.prepare' */
    cpy_r_r95 = CPyStatic_builder___globals;
    cpy_r_r96 = CPyImport_ImportFromMany(cpy_r_r94, cpy_r_r93, cpy_r_r93, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 117, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___prepare = cpy_r_r96;
    CPy_INCREF(CPyModule_mypyc___irbuild___prepare);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r97 = CPyStatics[10051]; /* ('AssignmentTarget', 'AssignmentTargetAttr',
                                      'AssignmentTargetIndex', 'AssignmentTargetRegister',
                                      'AssignmentTargetTuple') */
    cpy_r_r98 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r99 = CPyStatic_builder___globals;
    cpy_r_r100 = CPyImport_ImportFromMany(cpy_r_r98, cpy_r_r97, cpy_r_r97, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 118, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r100;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r101 = CPyStatics[10052]; /* ('bytes_from_str', 'is_constant') */
    cpy_r_r102 = CPyStatics[8101]; /* 'mypyc.irbuild.util' */
    cpy_r_r103 = CPyStatic_builder___globals;
    cpy_r_r104 = CPyImport_ImportFromMany(cpy_r_r102, cpy_r_r101, cpy_r_r101, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 125, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___irbuild___util = cpy_r_r104;
    CPy_INCREF(CPyModule_mypyc___irbuild___util);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r105 = CPyStatics[9929]; /* ('CompilerOptions',) */
    cpy_r_r106 = CPyStatics[6847]; /* 'mypyc.options' */
    cpy_r_r107 = CPyStatic_builder___globals;
    cpy_r_r108 = CPyImport_ImportFromMany(cpy_r_r106, cpy_r_r105, cpy_r_r105, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 126, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___options = cpy_r_r108;
    CPy_INCREF(CPyModule_mypyc___options);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r109 = CPyStatics[10053]; /* ('dict_get_item_op', 'dict_set_item_op') */
    cpy_r_r110 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r111 = CPyStatic_builder___globals;
    cpy_r_r112 = CPyImport_ImportFromMany(cpy_r_r110, cpy_r_r109, cpy_r_r109, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 127, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r112;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r113 = CPyStatics[10054]; /* ('iter_op', 'next_op', 'py_setattr_op') */
    cpy_r_r114 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r115 = CPyStatic_builder___globals;
    cpy_r_r116 = CPyImport_ImportFromMany(cpy_r_r114, cpy_r_r113, cpy_r_r113, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 128, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r116;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r117 = CPyStatics[10055]; /* ('list_get_item_unsafe_op', 'list_pop_last', 'to_list') */
    cpy_r_r118 = CPyStatics[8104]; /* 'mypyc.primitives.list_ops' */
    cpy_r_r119 = CPyStatic_builder___globals;
    cpy_r_r120 = CPyImport_ImportFromMany(cpy_r_r118, cpy_r_r117, cpy_r_r117, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 129, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___primitives___list_ops = cpy_r_r120;
    CPy_INCREF(CPyModule_mypyc___primitives___list_ops);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r121 = CPyStatics[10056]; /* ('check_unpack_count_op', 'get_module_dict_op',
                                       'import_op') */
    cpy_r_r122 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r123 = CPyStatic_builder___globals;
    cpy_r_r124 = CPyImport_ImportFromMany(cpy_r_r122, cpy_r_r121, cpy_r_r121, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 130, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r124;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r124);
    cpy_r_r125 = CPyStatics[10057]; /* ('CFunctionDescription', 'function_ops') */
    cpy_r_r126 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r127 = CPyStatic_builder___globals;
    cpy_r_r128 = CPyImport_ImportFromMany(cpy_r_r126, cpy_r_r125, cpy_r_r125, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 131, CPyStatic_builder___globals);
        goto CPyL71;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r128;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r129 = CPyStatics[886]; /* '+' */
    cpy_r_r130 = CPyStatics[1198]; /* '-' */
    cpy_r_r131 = CPyStatics[860]; /* '==' */
    cpy_r_r132 = CPyStatics[863]; /* '!=' */
    cpy_r_r133 = CPyStatics[2465]; /* '<' */
    cpy_r_r134 = CPyStatics[2470]; /* '<=' */
    cpy_r_r135 = CPyStatics[840]; /* '>' */
    cpy_r_r136 = CPyStatics[2468]; /* '>=' */
    cpy_r_r137 = PySet_New(NULL);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r138 = PySet_Add(cpy_r_r137, cpy_r_r129);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r140 = PySet_Add(cpy_r_r137, cpy_r_r130);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r142 = PySet_Add(cpy_r_r137, cpy_r_r131);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r144 = PySet_Add(cpy_r_r137, cpy_r_r132);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r146 = PySet_Add(cpy_r_r137, cpy_r_r133);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r148 = PySet_Add(cpy_r_r137, cpy_r_r134);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r150 = PySet_Add(cpy_r_r137, cpy_r_r135);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    cpy_r_r152 = PySet_Add(cpy_r_r137, cpy_r_r136);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL72;
    }
    CPyStatic_builder___int_borrow_friendly_op = cpy_r_r137;
    CPy_INCREF(CPyStatic_builder___int_borrow_friendly_op);
    cpy_r_r154 = CPyStatic_builder___globals;
    cpy_r_r155 = CPyStatics[8108]; /* 'int_borrow_friendly_op' */
    cpy_r_r156 = CPyDict_SetItem(cpy_r_r154, cpy_r_r155, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 135, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r158 = (PyObject *)CPyType_mypy___visitor___ExpressionVisitor;
    cpy_r_r159 = (PyObject *)CPyType_ops___Value;
    cpy_r_r160 = PyObject_GetItem(cpy_r_r158, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r161 = (PyObject *)CPyType_mypy___visitor___StatementVisitor;
    cpy_r_r162 = Py_None;
    cpy_r_r163 = PyObject_GetItem(cpy_r_r161, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL73;
    }
    cpy_r_r164 = PyTuple_Pack(2, cpy_r_r160, cpy_r_r163);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r165 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r166 = (PyObject *)CPyType_builder___IRVisitor_template;
    cpy_r_r167 = CPyType_FromTemplate(cpy_r_r166, cpy_r_r164, cpy_r_r165);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r168 = CPyDef_builder___IRVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r168 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", -1, CPyStatic_builder___globals);
        goto CPyL74;
    }
    cpy_r_r169 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r170 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r171 = PyTuple_Pack(1, cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL74;
    }
    cpy_r_r172 = PyObject_SetAttr(cpy_r_r167, cpy_r_r169, cpy_r_r171);
    CPy_DECREF(cpy_r_r171);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL74;
    }
    CPyType_builder___IRVisitor = (PyTypeObject *)cpy_r_r167;
    CPy_INCREF(CPyType_builder___IRVisitor);
    cpy_r_r174 = CPyStatic_builder___globals;
    cpy_r_r175 = CPyStatics[8109]; /* 'IRVisitor' */
    cpy_r_r176 = CPyDict_SetItem(cpy_r_r174, cpy_r_r175, cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r177 = cpy_r_r176 >= 0;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 138, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r178 = CPyModule_builtins;
    cpy_r_r179 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r180 = CPyObject_GetAttr(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 142, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r181 = PyTuple_Pack(1, cpy_r_r180);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 142, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r182 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r183 = (PyObject *)CPyType_builder___UnsupportedException_template;
    cpy_r_r184 = CPyType_FromTemplate(cpy_r_r183, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 142, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r185 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r186 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r187 = PyTuple_Pack(1, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 142, CPyStatic_builder___globals);
        goto CPyL75;
    }
    cpy_r_r188 = PyObject_SetAttr(cpy_r_r184, cpy_r_r185, cpy_r_r187);
    CPy_DECREF(cpy_r_r187);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 142, CPyStatic_builder___globals);
        goto CPyL75;
    }
    CPyType_builder___UnsupportedException = (PyTypeObject *)cpy_r_r184;
    CPy_INCREF(CPyType_builder___UnsupportedException);
    cpy_r_r190 = CPyStatic_builder___globals;
    cpy_r_r191 = CPyStatics[8110]; /* 'UnsupportedException' */
    cpy_r_r192 = CPyDict_SetItem(cpy_r_r190, cpy_r_r191, cpy_r_r184);
    CPy_DECREF(cpy_r_r184);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 142, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r194 = CPyStatic_builder___globals;
    cpy_r_r195 = CPyStatics[84]; /* 'Union' */
    cpy_r_r196 = CPyDict_GetItem(cpy_r_r194, cpy_r_r195);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 146, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r197 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r198 = (PyObject *)CPyType_targets___AssignmentTargetAttr;
    cpy_r_r199.f0 = cpy_r_r197;
    cpy_r_r199.f1 = cpy_r_r198;
    CPy_INCREF(cpy_r_r199.f0);
    CPy_INCREF(cpy_r_r199.f1);
    cpy_r_r200 = PyTuple_New(2);
    if (unlikely(cpy_r_r200 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9997 = cpy_r_r199.f0;
    PyTuple_SET_ITEM(cpy_r_r200, 0, __tmp9997);
    PyObject *__tmp9998 = cpy_r_r199.f1;
    PyTuple_SET_ITEM(cpy_r_r200, 1, __tmp9998);
    cpy_r_r201 = PyObject_GetItem(cpy_r_r196, cpy_r_r200);
    CPy_DECREF(cpy_r_r196);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 146, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r202 = CPyStatic_builder___globals;
    cpy_r_r203 = CPyStatics[8111]; /* 'SymbolTarget' */
    cpy_r_r204 = CPyDict_SetItem(cpy_r_r202, cpy_r_r203, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 146, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r206 = NULL;
    cpy_r_r207 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r208 = (PyObject *)CPyType_builder___IRBuilder_template;
    cpy_r_r209 = CPyType_FromTemplate(cpy_r_r208, cpy_r_r206, cpy_r_r207);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 149, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r210 = CPyDef_builder___IRBuilder_trait_vtable_setup();
    if (unlikely(cpy_r_r210 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", -1, CPyStatic_builder___globals);
        goto CPyL76;
    }
    cpy_r_r211 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r212 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r213 = CPyStatics[8113]; /* 'builders' */
    cpy_r_r214 = CPyStatics[8114]; /* 'symtables' */
    cpy_r_r215 = CPyStatics[8115]; /* 'runtime_args' */
    cpy_r_r216 = CPyStatics[8116]; /* 'function_name_stack' */
    cpy_r_r217 = CPyStatics[8117]; /* 'class_ir_stack' */
    cpy_r_r218 = CPyStatics[8118]; /* 'current_module' */
    cpy_r_r219 = CPyStatics[8119]; /* 'mapper' */
    cpy_r_r220 = CPyStatics[114]; /* 'types' */
    cpy_r_r221 = CPyStatics[607]; /* 'graph' */
    cpy_r_r222 = CPyStatics[8120]; /* 'ret_types' */
    cpy_r_r223 = CPyStatics[4820]; /* 'functions' */
    cpy_r_r224 = CPyStatics[4733]; /* 'classes' */
    cpy_r_r225 = CPyStatics[7802]; /* 'final_names' */
    cpy_r_r226 = CPyStatics[8121]; /* 'callable_class_names' */
    cpy_r_r227 = CPyStatics[159]; /* 'options' */
    cpy_r_r228 = CPyStatics[8122]; /* 'lambda_counter' */
    cpy_r_r229 = CPyStatics[7052]; /* 'temp_counter' */
    cpy_r_r230 = CPyStatics[8123]; /* 'free_variables' */
    cpy_r_r231 = CPyStatics[8124]; /* 'prop_setters' */
    cpy_r_r232 = CPyStatics[8125]; /* 'encapsulating_funcs' */
    cpy_r_r233 = CPyStatics[8126]; /* 'nested_fitems' */
    cpy_r_r234 = CPyStatics[8127]; /* 'fdefs_to_decorators' */
    cpy_r_r235 = CPyStatics[8128]; /* 'module_import_groups' */
    cpy_r_r236 = CPyStatics[8129]; /* 'singledispatch_impls' */
    cpy_r_r237 = CPyStatics[8130]; /* 'visitor' */
    cpy_r_r238 = CPyStatics[8131]; /* 'fn_info' */
    cpy_r_r239 = CPyStatics[8132]; /* 'fn_infos' */
    cpy_r_r240 = CPyStatics[8133]; /* 'nonlocal_control' */
    cpy_r_r241 = CPyStatics[610]; /* 'errors' */
    cpy_r_r242 = CPyStatics[2525]; /* 'imports' */
    cpy_r_r243 = CPyStatics[8134]; /* 'can_borrow' */
    cpy_r_r244 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r245 = CPyStatics[8135]; /* 'module_path' */
    cpy_r_r246 = PyTuple_Pack(34, cpy_r_r212, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221, cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226, cpy_r_r227, cpy_r_r228, cpy_r_r229, cpy_r_r230, cpy_r_r231, cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 149, CPyStatic_builder___globals);
        goto CPyL76;
    }
    cpy_r_r247 = PyObject_SetAttr(cpy_r_r209, cpy_r_r211, cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 149, CPyStatic_builder___globals);
        goto CPyL76;
    }
    CPyType_builder___IRBuilder = (PyTypeObject *)cpy_r_r209;
    CPy_INCREF(CPyType_builder___IRBuilder);
    cpy_r_r249 = CPyStatic_builder___globals;
    cpy_r_r250 = CPyStatics[8053]; /* 'IRBuilder' */
    cpy_r_r251 = CPyDict_SetItem(cpy_r_r249, cpy_r_r250, cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r252 = cpy_r_r251 >= 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 149, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r253 = (PyObject *)CPyType_builder___IRBuilder;
    cpy_r_r254 = CPyStatics[5309]; /* 'enter_method' */
    cpy_r_r255 = CPyObject_GetAttr(cpy_r_r253, cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 1134, CPyStatic_builder___globals);
        goto CPyL71;
    }
    cpy_r_r256 = CPyStatic_builder___globals;
    cpy_r_r257 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r258 = CPyDict_GetItem(cpy_r_r256, cpy_r_r257);
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 1133, CPyStatic_builder___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r259[1] = {cpy_r_r255};
    cpy_r_r260 = (PyObject **)&cpy_r_r259;
    cpy_r_r261 = _PyObject_Vectorcall(cpy_r_r258, cpy_r_r260, 1, 0);
    CPy_DECREF(cpy_r_r258);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 1134, CPyStatic_builder___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r255);
    cpy_r_r262 = CPyStatics[5309]; /* 'enter_method' */
    cpy_r_r263 = PyObject_SetAttr(cpy_r_r253, cpy_r_r262, cpy_r_r261);
    CPy_DECREF(cpy_r_r261);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypyc/irbuild/builder.py", "<module>", 1134, CPyStatic_builder___globals);
        goto CPyL71;
    }
    return 1;
CPyL71: ;
    cpy_r_r265 = 2;
    return cpy_r_r265;
CPyL72: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL71;
CPyL73: ;
    CPy_DecRef(cpy_r_r160);
    goto CPyL71;
CPyL74: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL71;
CPyL75: ;
    CPy_DecRef(cpy_r_r184);
    goto CPyL71;
CPyL76: ;
    CPy_DecRef(cpy_r_r209);
    goto CPyL71;
CPyL77: ;
    CPy_DecRef(cpy_r_r255);
    goto CPyL71;
}
